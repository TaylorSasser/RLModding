#include "InfiniteCelebration.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion
#include <ctime>
#include "../Interfaces/Interfaces.h"

InfiniteCelebration::InfiniteCelebration(std::string name, int key, Category category, GameState gamestate, std::string toolTip) : ModBase(name, key, category, gamestate, toolTip) {}
InfiniteCelebration::InfiniteCelebration(std::string name, int key) : ModBase(name, key) {}

void InfiniteCelebration::ExportSettings(pt::ptree) {}
void InfiniteCelebration::ImportSettings(pt::ptree) {}

void InfiniteCelebration::DrawMenu() {
	ImGui::Begin("Infinite Celebration Mode", &p_open, ImVec2(321, 129), 0.75f);

	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "Either 0 or 1.  0 for blue, 1 for orange.");

	ImGui::InputInt("Team Index", &teamIndex);

	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled Infinite Celebration");
			}

			else {
				printf("Invalid state for Infinite Celebration\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled Infinite Celebration");
			bStarted = false;
			AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
			if (localGameEvent) {
				localGameEvent->PodiumTime = 0;
				localGameEvent->EndGame();

			}
			else {
				std::cout << "No game event found...no cleanup done..." << std::endl;
			}
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();

}


void InfiniteCelebration::onMenuOpen() {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
	}

}
void InfiniteCelebration::onMenuClose() {

	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
	}
	else {
		std::cout << "No game event found...no cleanup done..." << std::endl;
	}
}

void InfiniteCelebration::onPlayerTick(Event* e) {
	if (bStarted) {
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

		// Only apply settings if in countdown or active game state
		if (localGameEvent && (localGameEvent->ReplicatedStateName.GetName().compare("CountDown") == 0 || localGameEvent->ReplicatedStateName.GetName().compare("Active") == 0)) {
			localGameEvent->PodiumTime = localGameEvent->PodiumTime * 20000;
			localGameEvent->Teams[teamIndex]->SetScore(1);
			localGameEvent->Teams[abs(teamIndex-1)]->SetScore(0);

			localGameEvent->EndGame();
		}
		
	}
	
}

