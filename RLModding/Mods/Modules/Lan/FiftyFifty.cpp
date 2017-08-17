#include "FiftyFifty.h"
#include <comdef.h>
#include <iostream>

FiftyFifty::FiftyFifty(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

FiftyFifty::~FiftyFifty() {}

void FiftyFifty::onEnable() {
}

void FiftyFifty::onDisable() {
}

void FiftyFifty::DrawMenu() {
	ImGui::Begin("50/50 Settings", 0, ImVec2(400, 300), 0.75f);
	ImGui::SliderFloat("Interval", &interval, 5.0f, 60.0f, "%.1f");
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Someone will be demo'd every X seconds");
	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION))
				bStarted = true;
			else {
				printf("Invalid state for 50/50\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			bStarted = false;
		}
	}
	ImGui::SameLine();
	if (ImGui::Button("Close")) {
		Interfaces::GUI().isGUIOpen = false;
		this->setState(false);
	}
	
	ImGui::End();
}

void FiftyFifty::onPlayerTick(Event* event) {
	if (bStarted) {
		srand(time(NULL));
		APlayerController_TA* controller = reinterpret_cast<APlayerController_TA*>(event->getCallingObject());
		if (controller) {
			AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(controller->GetGameEvent());
			if (localGameEvent) {
				if (checkTime) {
					start = time(NULL);
					checkTime = false;
				}
				end = time(NULL);
				double elapsed = difftime(end, start);
				if (elapsed >= interval) {
					TArray< class ATeam_TA* > gameTeams = localGameEvent->Teams;
					int team_idx = rand() % gameTeams.Num();
					int player_idx = rand() % gameTeams[team_idx]->Members.Num();
					TArray<class APRI_TA*> players = gameTeams[team_idx]->Members;
					if (gameTeams.IsValidIndex(team_idx) && players.IsValidIndex(player_idx))
							gameTeams[team_idx]->Members[player_idx]->Car->Demolish(controller->Car);
					checkTime = true;
				}		
			}
		}
	}
}