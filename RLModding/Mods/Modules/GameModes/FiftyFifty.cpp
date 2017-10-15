#include "FiftyFifty.h"
#include <comdef.h>
#include <iostream>

FiftyFifty::FiftyFifty(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}

FiftyFifty::~FiftyFifty() {}

void FiftyFifty::onMenuOpen() {
}

void FiftyFifty::onMenuClose() {
}

void FiftyFifty::ExportSettings(pt::ptree & root) {
	root.put("FF_demoPlayer", demoPlayer);
	root.put("FF_Interval", interval);
}
void FiftyFifty::ImportSettings(pt::ptree & root) {
	demoPlayer = root.get<int>("FF_demoPlayer", 1);
	interval = root.get<float>("FF_Interval", interval);
}

void FiftyFifty::DrawMenu() {
	ImGui::Begin("50/50 Settings", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::SliderFloat("Interval", &interval, 0.1f, 60.0f, "%.1f");
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Interval for below settings (in seconds)");

	ImGui::RadioButton("Demolish Player", &demoPlayer, 1);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("If checked, a player will be demolished");
	ImGui::RadioButton("Ball Explosion", &demoPlayer, 0);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("If checked, a ball explosion will go off under the player");

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
									if (demoPlayer) {
										if (controller && controller->Car && gameTeams[team_idx]->Members[player_idx]->Car)
											gameTeams[team_idx]->Members[player_idx]->Car->Demolish(controller->Car);
									}
									else {
										if (localGameEvent->GameBalls.GetByIndex(1) && gameTeams[team_idx]->Members[player_idx]->Car) {
											localGameEvent->GameBalls.GetByIndex(1)->Explode(localGameEvent->Pylon->Goals.GetByIndex(0), gameTeams[team_idx]->Members[player_idx]->Car->Location, gameTeams[team_idx]->Members[player_idx]);
										}
									}
										
								}

								checkTime = true;
							}
						}
					}
					// Account for a single user being alone in a game
					else if (elapsed >= interval && localGameEvent->Players.Num() == 1) {
						if (demoPlayer) {
							if (controller->Car) {
								controller->Car->Demolish(controller->Car);
							}
						}
						else {
							if (localGameEvent->GameBalls.GetByIndex(1) && controller->Car) {
								localGameEvent->GameBalls.GetByIndex(1)->Explode(localGameEvent->Pylon->Goals.GetByIndex(0), controller->Car->Location, controller->PRI);
							}
						}
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
