#include "FreezeTag.h"
#include <comdef.h>
#include <iostream>

FreezeTag::FreezeTag(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}

FreezeTag::~FreezeTag() {}

void FreezeTag::onMenuOpen() {

}

void FreezeTag::onMenuClose() {

}

void FreezeTag::ExportSettings(pt::ptree & root) {
	//root.put("Drain_Interval", interval);
}
void FreezeTag::ImportSettings(pt::ptree & root) {
	//interval = root.get<float>("Drain_Interval", 0.6);
}

void FreezeTag::DrawMenu() {
	ImGui::Begin("Freeze Tag Settings", &p_open, ImVec2(400, 300), 0.75f);
	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled FreezeTag");
				srand(time(NULL));
			}

			else {
				bStarted = false;
				printf("Invalid state for FreezeTag\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled FreezeTag");
			bStarted = false;
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void FreezeTag::OnRoundStart(Event* e) {
	if (bStarted && !bSetWhosIt) {
		AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(InstanceStorage::GameEvent());
		if (localGameEvent) {
			int player_idx = rand() % localGameEvent->Players.Num();
			if (localGameEvent->Players.IsValidIndex(player_idx)) {
				AController* tempController = localGameEvent->Players.GetByIndex(player_idx);
				if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					AAIController_TA* currController = (AAIController_TA*)tempController;
					_IT = currController->Car;
				}
				else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					APlayerController_TA* currController = (APlayerController_TA*)tempController;
					_IT = currController->Car;	
				}
				std::cout << "Set _IT\n";
				_IT_Name = _IT->PlayerReplicationInfo->PlayerName.ToString();
				_IT->SetMaxLinearSpeed(_IT->MaxLinearSpeed * 2); // Can go twice as fast
				Utils::BroadcastMessage(localGameEvent, _IT_Name + " is IT!");
				bSetWhosIt = true;
				
			}
		}
	}
}

void FreezeTag::onPlayerTick(Event* event) {
	if (bStarted) {
	}
}

void FreezeTag::onCarSpawned(Event* e) {

}

void FreezeTag::onCarDemolished(Event* e) {
	if (bStarted) {

	}
}

void FreezeTag::OnCarBumped(Event* e) {
	if (bStarted) {
		ACar_TA *Car = reinterpret_cast<SDK::ACar_TA*>(e->getParams<ACar_TA_EventBumpedCar_Params>()->Car);
		ACar_TA *HitCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<ACar_TA_EventBumpedCar_Params>()->HitCar);
		// cant compare cars, _IT == HitCar doesnt work
		if (Car != nullptr && HitCar != nullptr && _IT == HitCar) {
			std::cout << "Hit!\n";
			Car->bPodiumMode = true;
			if (Car->bPodiumMode) numTagged++;
		}
		AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(InstanceStorage::GameEvent());
		if (localGameEvent) {
			int total = localGameEvent->Players.Num();
			
			if (numTagged >= total - 1) {
				//Win!
				Utils::BroadcastMessage(localGameEvent, _IT_Name + " Wins!");
				localGameEvent->StartNewRound();
				bSetWhosIt = false;
				numTagged = 0;

			}
		}
		
		
	}
}