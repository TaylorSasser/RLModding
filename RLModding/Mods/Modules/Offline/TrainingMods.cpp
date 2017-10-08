#include "TrainingMods.h"
#include <comdef.h>
#include <iostream>

TrainingMods::TrainingMods(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

TrainingMods::~TrainingMods() {}

void TrainingMods::onMenuOpen() {
}

void TrainingMods::onMenuClose() {
}

void TrainingMods::ExportSettings() {}
void TrainingMods::ImportSettings() {}

void TrainingMods::DrawMenu() {
	ImGui::Begin("Custom Training Settings", &p_open, ImVec2(400, 300), 0.75f);

	if (InstanceStorage::GameEvent()) {
		if (InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_Tutorial_TA::StaticClass())) {
			ImGui::Text("Freeplay and tutorial mode settings.");
			ImGui::Text("To see custom training settings open this menu in Custom Training.");
		}
		else if (InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_TrainingEditor_TA::StaticClass())) {
			ImGui::Text("Custom Training settings.");

			ImGui::InputInt("Round #", &roundIndex);

			if(ImGui::Button("Go to round.")) {
				goToNextRound = true;
			}

			if (ImGui::Button("Randomize Shot order")) {
				randomizeShotOrder = true;
			}
		}
		else {
			ImGui::Text("Settings only show in one of the training modes.");

		}
	}
	else {

	}

	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void TrainingMods::onPlayerTick(Event* event) {
	if (InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_Tutorial_TA::StaticClass())) {
		AGameEvent_Tutorial_TA* localGameEvent = (SDK::AGameEvent_Tutorial_TA*)InstanceStorage::GameEvent();
		


	}
	else if (InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_TrainingEditor_TA::StaticClass())) {
		AGameEvent_TrainingEditor_TA* localGameEvent = (SDK::AGameEvent_TrainingEditor_TA*)InstanceStorage::GameEvent();

		if (localGameEvent) {
			if (goToNextRound) {
				//localGameEvent->NextRound();
				//localGameEvent->IncrementRound(true);
				
				if (roundIndex - 1 >= 0 && roundIndex <= localGameEvent->GetTotalRounds()) {

					//localGameEvent->ResetRound();
					if (InstanceStorage::PlayerController() && InstanceStorage::PlayerController()->Car) {
						//localGameEvent->SetRestartingMatch(true);
						localGameEvent->RestartPlayTest();
						//localGameEvent->ResetRound();
						//localGameEvent->RestartPlayer(InstanceStorage::PlayerController());
						localGameEvent->SwitchToRoundNumber(roundIndex - 1, false);
						InstanceStorage::PlayerController()->Car->RespawnInPlace();
						localGameEvent->HideCarSpawnPoints(true);
					}
					else {
						statusText = "Couldn't find player or car?";
					}
				}
				else {
					statusText = "Not a valid round for this training.";
				}
				goToNextRound = false;
			}

			if (randomizeShotOrder) {
				//localGameEvent->ReorderRound(0, localGameEvent->GetTotalRounds() - 1);
				randomizeShotOrder = false;
			}
		}
	}
}

void TrainingMods::onCarSpawned(Event* e) {

}

void TrainingMods::onCarDemolished(Event* e) {
}