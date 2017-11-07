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
			bSetInfected = false;
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void Infected::onGameTimeUpdated(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(InstanceStorage::GameEvent());
	if (localGameEvent && bSetInfected && bStarted) {
		// Add one to score of player for each second they survive
		for (int i = 0; i < localGameEvent->Teams[0]->Members.Num(); i++) {
			//localGameEvent->Teams[0]->Members[i]->MatchGoals++;
			localGameEvent->Teams[0]->Members[i]->MatchScore += 5;
			localGameEvent->Teams[0]->Members[i]->ServerUpdateRemoteUserData(localGameEvent->Teams[0]->Members[i]->RemoteUserData);
			localGameEvent->Teams[0]->Members[i]->UpdateRemoteUserData(localGameEvent->Teams[0]->Members[i]->RemoteUserData);

			//localGameEvent->Teams[0]->Members[i]->SetPlayerName(FString(L"NEW NAME SON"));

		}
	}
}

void Infected::onMatchEnded(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(InstanceStorage::GameEvent());
	if (localGameEvent && bSetInfected && bStarted) {
		if (localGameEvent->Teams[0]->Members.Num() > 0) {
			// Blue wins
			localGameEvent->Teams[0]->SetScore(1);
		}
		else {
			localGameEvent->Teams[1]->SetScore(1);

		}
	}
}

void Infected::onPlayerTick(Event* event) {
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
				currController->PRI->ServerChangeTeam(1);

				/*
				//localGameEvent->ChooseTeam(1, currController);
				if (_Infected.cars[0]->GetTeamIndex() == 0) {
					localGameEvent->Teams[0]->RemoveFromTeam(currController);
					localGameEvent->Teams[1]->AddToTeam(currController);
				}
				*/
				//_Infected.cars[0]->SetMaxLinearSpeed(_Infected.cars[0]->MaxLinearSpeed * 1.5); // Can go twice as fast
				currController->Car->DemolishTarget = TEnumAsByte<EDemolishTarget>(EDemolishTarget::DemolishTarget_OtherTeam);
				currController->Car->DemolishSpeed = EDemolishSpeed::DemolishSpeed_None;
				std::cout << "Set Infected to " << currController->PRI->PlayerName.ToString() << std::endl;
				//Change the teams up
				for (int i = 0; i < localGameEvent->Players.Num(); i++) {
					if (localGameEvent->Players[i]->IsA(SDK::APlayerController_TA::StaticClass()) && i != player_idx) {
						APlayerController_TA* tempController = reinterpret_cast<APlayerController_TA*>(localGameEvent->Players[i]);
						//printf("Value: %d", tempController->Car->DemolishTarget.GetValue());
						//printf("Value 2: %d", _Infected[0]->DemolishTarget.GetValue());
						if (tempController->Car) {
							//localGameEvent->ChooseTeam(0, currController);
							tempController->PRI->ServerChangeTeam(0);
							tempController->Car->DemolishTarget = TEnumAsByte<EDemolishTarget>(EDemolishTarget::DemolishTarget_None);
							std::cout << "NOT Infected car compare!" << std::endl;
						}
					}
					else if (localGameEvent->Players[i]->IsA(SDK::AAIController_TA::StaticClass())) {
						AAIController_TA* tempController = (AAIController_TA*)tempController;
						//tempController->Car->PRI->ServerChangeTeam(1);
						//tempController->SetTeam(0);
						//tempController->Car->DemolishTarget = TEnumAsByte<EDemolishTarget>(EDemolishTarget::DemolishTarget_None);
						// Ignore Bots
						std::cout << "Bot was tagged, ignore" << std::endl;

					}
					else {
						std::cout << "Infected car compare!" << std::endl;
					}
				}
				
				_Infected.carCount = 1;
				std::cout << "Setting game balls!" << std::endl;
				localGameEvent->SetTotalGameBalls(0);
				localGameEvent->ResetBalls();
				bSetInfected = true;

			}

		}

	}
}

void Infected::onCarSpawned(Event* e) {

}

void Infected::onCarDemolished(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	FDemolishData demoData = e->getParams<SDK::ACar_TA_OnDemolished_Params>()->Data;
	if (localGameEvent && bStarted && bSetInfected) {
		if (demoData.Victim->IsA(ACar_TA::StaticClass())) {
			ACar_TA* victim = reinterpret_cast<ACar_TA*>(demoData.Victim);
			ACar_TA* attacker = reinterpret_cast<ACar_TA*>(demoData.Attacker);

			if (victim->Controller->IsA(SDK::APlayerController_TA::StaticClass())) {
				APlayerController_TA* victimController = reinterpret_cast<APlayerController_TA*>(victim->Controller);
				APlayerController_TA* attackerController = reinterpret_cast<APlayerController_TA*>(attacker->Controller);

				//printf("Value: %d", tempController->Car->DemolishTarget.GetValue());
				//printf("Value 2: %d", _Infected[0]->DemolishTarget.GetValue());
				if (victimController->Car && demoData.Attacker) {
					//localGameEvent->ChooseTeam(0, currController);
					attackerController->PRI->MatchScore += victimController->PRI->MatchScore + 250;

					victimController->PRI->ServerChangeTeam(1);
					victimController->Car->DemolishTarget = TEnumAsByte<EDemolishTarget>(EDemolishTarget::DemolishTarget_OtherTeam);
					victimController->Car->DemolishSpeed = EDemolishSpeed::DemolishSpeed_None;
					//tempController->PRI->MatchScore = currScore;
					_Infected.cars[_Infected.carCount] = victimController->Car;
					_Infected.carCount++;
				}
			}
			else if (victim->Controller->IsA(SDK::AAIController_TA::StaticClass())) {
				AAIController_TA* tempController = (AAIController_TA*)victim->Controller;

				if (tempController->Car) {
					// Ignore Bots
					std::cout << "Bot was tagged, ignore" << std::endl;
				}
			}


		}
		// End game when no more blue players exits.
		if (localGameEvent->Teams[0]->Members.Num() == 0) {
			localGameEvent->EndGame();
		}

	}
}

void Infected::OnRoundStart(Event* e) {

}

int carIsOnList(ACar_TA* c, ACar_TA* cars[]) {
	for (int i = 0; i < 10; i++) {
		if (cars[i] && c == cars[i]) {
			return i;
		}
	}
	return -1;
}