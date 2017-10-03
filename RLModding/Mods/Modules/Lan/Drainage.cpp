#include "Drainage.h"
#include <comdef.h>
#include <iostream>

Drainage::Drainage(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

Drainage::~Drainage() {}

void Drainage::onEnable() {
}

void Drainage::onDisable() {
}

void Drainage::ExportSettings() {}
void Drainage::ImportSettings() {}

void Drainage::DrawMenu() {
	ImGui::Begin("Drainage Settings", &p_open, ImVec2(400, 300), 0.75f);
	
	ImGui::InputFloat("Decay Rate", &interval, 0.01f);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("The rate at which the boost will decay");
	ImGui::Separator();
	ImGui::Text("Players will be demoed when they run out of boost...good luck!");

	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled Drainage");
			}

			else {
				printf("Invalid state for Drainage\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled Drainage");
			bStarted = false;
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void Drainage::onPlayerTick(Event* event) {
	if (bStarted) {
		srand(time(NULL));
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

		if (localGameEvent && localGameEvent->GameTime != localGameEvent->GameTimeRemaining &&  localGameEvent->GameTimeRemaining != 0) {
			TArray< class AController* > gameEventPlayers = localGameEvent->Players;

			for (int i = 0; i < gameEventPlayers.Num(); i++) {

				AController* tempController = gameEventPlayers.GetByIndex(i);


				// Check if bot or person
				if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					AAIController_TA* currController = (AAIController_TA*)tempController;
					if (currController->Car && currController->Car->BoostComponent) {
						currController->Car->BoostComponent->RechargeRate = -1 * interval;
						currController->Car->BoostComponent->bDemolishOnEmptyMyHalf = true;
						currController->Car->BoostComponent->bDemolishOnEmptyOpposingHalf = true;
					}


				}
				else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					APlayerController_TA* currController = (APlayerController_TA*)tempController;
					if (currController->Car && currController->Car->BoostComponent) {
						currController->Car->BoostComponent->RechargeRate = -1 * interval;
						currController->Car->BoostComponent->bDemolishOnEmptyMyHalf = true;
						currController->Car->BoostComponent->bDemolishOnEmptyOpposingHalf = true;
					}
				}

			}
		}

	}
}

void Drainage::onCarSpawned(Event* e) {

}

void Drainage::onCarDemolished(Event* e) {
	std::cout << "Car go byebye" << std::endl;
}