#include "Infected.h"
#include <comdef.h>
#include <iostream>


Infected::Infected(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}

Infected::~Infected() {}

void Infected::onMenuOpen() {

}

void Infected::onMenuClose() {

}

void Infected::ExportSettings(pt::ptree & root) {
	//root.put("Drain_Interval", interval);
}
void Infected::ImportSettings(pt::ptree & root) {
	//interval = root.get<float>("Drain_Interval", 0.6);
}

void Infected::DrawMenu() {
	ImGui::Begin("Freeze Tag Settings", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::TextWrapped("By default blue team is attacking.");


	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled Infected\n");
			}

			else {
				printf("Invalid state for Infected\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled Infected\n");
			bStarted = false;
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void Infected::onPlayerTick(Event* event) {
	if (bStarted) {

	}
}

void Infected::onCarSpawned(Event* e) {

}

void Infected::onCarDemolished(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	FDemolishData demoData = e->getParams<SDK::ACar_TA_OnDemolished_Params>()->Data;
	if (demoData.Victim->IsA(ACar_TA::StaticClass())) {
		ACar_TA* victim = reinterpret_cast<ACar_TA*>(demoData.Victim);
		APlayerController_TA* currController = (APlayerController_TA*)victim->Controller;
		currController->PRI->ServerChangeTeam(1);
		currController->Car->DemolishTarget = TEnumAsByte<EDemolishTarget>(EDemolishTarget::DemolishTarget_OtherTeam);
	}
}

void Infected::OnRoundStart(Event* e) {
	//Pick an infected
	if (bStarted && !bSetInfected) {
		AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(InstanceStorage::GameEvent());
		if (localGameEvent) {
			int player_idx = rand() % localGameEvent->Players.Num();
			if (localGameEvent->Players.IsValidIndex(player_idx)) {
				AController* tempController = localGameEvent->Players.GetByIndex(player_idx);
				while (!tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					player_idx = rand() % localGameEvent->Players.Num();
					tempController = localGameEvent->Players.GetByIndex(player_idx);
				}
				APlayerController_TA* currController = (APlayerController_TA*)tempController;
				_Infected = currController->Car;
				_Infected->PRI->ServerChangeTeam(1);
				_Infected->SetMaxLinearSpeed(_Infected->MaxLinearSpeed * 2); // Can go twice as fast
				_Infected->DemolishTarget = TEnumAsByte<EDemolishTarget>(EDemolishTarget::DemolishTarget_OtherTeam);
				std::cout << "Set Infected\n";
				//Change the teams up
				for (int i = 0; i < localGameEvent->Players.Num(); i++) {
					APlayerController_TA* tempController = reinterpret_cast<APlayerController_TA*>(localGameEvent->Players.GetByIndex(i));
					printf("Value: %d", tempController->Car->DemolishTarget.GetValue());
					printf("Value 2: %d", _Infected->DemolishTarget.GetValue());
					if (tempController->Car->DemolishTarget.GetValue() != _Infected->DemolishTarget.GetValue()) {
						tempController->PRI->ServerChangeTeam(0);
						tempController->Car->DemolishTarget = TEnumAsByte<EDemolishTarget>(EDemolishTarget::DemolishTarget_None);
						std::cout << "NOT Infected car compare!\n";
					}
					else {
						std::cout << "Infected car compare!\n";
					}
					
				}
				std::cout << "Setting game balls!\n";
				localGameEvent->SetTotalGameBalls(0);
				bSetInfected = true;

			}
			
		}
		
	}
}