#include "FiftyFifty.h"
#include <comdef.h>
#include <iostream>

FiftyFifty::FiftyFifty(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

FiftyFifty::~FiftyFifty() {}

void FiftyFifty::onEnable() {
}

void FiftyFifty::onDisable() {
}

void FiftyFifty::ExportSettings() {}
void FiftyFifty::ImportSettings() {}

void FiftyFifty::DrawMenu() {
	ImGui::Begin("50/50 Settings", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::SliderFloat("Interval", &interval, 0.1f, 60.0f, "%.1f");
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Someone will be demo'd every X seconds");

	ImGui::Checkbox("Demo Player", &demoPlayer);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("If unchecked a mine will go off under a random player every X seconds.");

	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				reset_balls = false;
				printf("Enabled 50/50");
			}
				
			else {
				printf("Invalid state for 50/50\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled 50/50");
			bStarted = false;
			reset_balls = true;
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}
	
	ImGui::End();
}

void FiftyFifty::onPlayerTick(Event* event) {
	if (bStarted) {
		srand(time(NULL));
		APlayerController_TA* controller = reinterpret_cast<APlayerController_TA*>(event->getCallingObject());
		if (controller) {
			AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(controller->GetGameEvent());

			// Add check for game event
			if (localGameEvent) {

				// Spawn a second ball to trigger the explosion, if you use the default game ball it dissappears.  If it doesn't exist, spawn it
				if (localGameEvent->GameBalls.Num() < 2 && !demoPlayer) {
					localGameEvent->SetTotalGameBalls(2);
					localGameEvent->ResetBalls();
				}
				else if (localGameEvent->GameBalls.Num() > 1 && demoPlayer) {
					localGameEvent->SetTotalGameBalls(1);
					localGameEvent->ResetBalls();
				}


				if (localGameEvent) {
					if (checkTime) {
						start = time(NULL);
						checkTime = false;
					}
					end = time(NULL);

					double elapsed = difftime(end, start);
					if (elapsed >= interval && localGameEvent->Players.Num() > 1) {
						TArray< class ATeam_TA* > gameTeams = localGameEvent->Teams;
						srand(time(NULL));
						if (localGameEvent->Teams.IsValidIndex(0)) {
							int team_idx = rand() % gameTeams.Num();
							srand(time(NULL));
							if (gameTeams.IsValidIndex(team_idx)) {
								int player_idx = rand() % gameTeams[team_idx]->Members.Num();
								TArray<class APRI_TA*> players = gameTeams[team_idx]->Members;
								if (gameTeams.IsValidIndex(team_idx) && players.IsValidIndex(player_idx)) {
									if (demoPlayer)
										gameTeams[team_idx]->Members[player_idx]->Car->Demolish(controller->Car);
									else
										localGameEvent->GameBalls.GetByIndex(1)->Explode(localGameEvent->Pylon->Goals.GetByIndex(0), gameTeams[team_idx]->Members[player_idx]->Car->Location, gameTeams[team_idx]->Members[player_idx]);
								}

								checkTime = true;
							}
						}
					}
					// Account for a single user being alone in a game
					else if (elapsed >= interval && localGameEvent->Players.Num() == 1) {
						if (demoPlayer)
							controller->Car->Demolish(controller->Car);
						else
							localGameEvent->GameBalls.GetByIndex(1)->Explode(localGameEvent->Pylon->Goals.GetByIndex(0), controller->Car->Location, controller->PRI);

						checkTime = true;

					}
				}
			}
		}
	}
	else if (reset_balls){
		APlayerController_TA* controller = reinterpret_cast<APlayerController_TA*>(event->getCallingObject());
		if (controller) {
			AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(controller->GetGameEvent());
			if (localGameEvent) {
				localGameEvent->SetTotalGameBalls(1);
				localGameEvent->ResetBalls();
			}
		}
		reset_balls = false;
	}
}
