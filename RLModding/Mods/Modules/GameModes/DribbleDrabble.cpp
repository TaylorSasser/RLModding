#include "DribbleDrabble.h"
#include <comdef.h>
#include <iostream>

DribbleDrabble::DribbleDrabble(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}

DribbleDrabble::~DribbleDrabble() {}

void DribbleDrabble::onMenuOpen() {

}

void DribbleDrabble::onMenuClose() {

}

void DribbleDrabble::ExportSettings(pt::ptree & root) {
	root.put("Dribble_RespawnOnly", respawnOnlyOnGround);
	root.put("Dribble_AirOnly", airDribbleOnly);
}
void DribbleDrabble::ImportSettings(pt::ptree & root) {
	respawnOnlyOnGround = root.get<bool>("Dribble_RespawnOnly", true);
	airDribbleOnly = root.get<bool>("Dribble_AirOnly", false);

}

void DribbleDrabble::DrawMenu() {
	ImGui::Begin("DribbleDrabble Settings", &p_open, ImVec2(400, 300), 0.75f);
	if (!isBreakoutType) {
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "For additional settings like ball color use the DropsShot gametype.");
	}

	ImGui::TextWrapped("Don't let the ball touch the ground when you enter the opponents half or you will be respawned.");


	ImGui::Checkbox("Don't respawn players till they touch the ground.", &respawnOnlyOnGround);
	ImGui::Checkbox("Air dribbles only.", &airDribbleOnly);

	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled DribbleDrabble");
				if (InstanceStorage::GameEvent() && InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_Breakout_TA::StaticClass())) {
					isBreakoutType = true;
				}
				else {
					isBreakoutType = false;
				}


				AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

				if (localGameEvent) {
					//localGameEvent->SpawnBall({ 0,0,0 }, true, false, FString(L"Archetypes.Ball.Ball_Default"));
					localGameEvent->SetRestartingMatch(true);
				}

			}

			else {
				printf("Invalid state for DribbleDrabble\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled DribbleDrabble");
			bStarted = false;
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void DribbleDrabble::eventBallHitGround(Event* e) {
	//std::cout << "Ball hit ground!" << std::endl;
	// Check to see if ball is not on half of last person touching when it hits
	if (bStarted) {

		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
		
		if (localGameEvent && currentTeamHasPossesion != -1) {
			//ABall_TA* hitBall = reinterpret_cast<SDK::ABall_TA*>(e->getCallingObject());
			FVector hitLoc = (SDK::FVector)(e->getParams<SDK::ABall_TA_EventHitGround_Params>()->HitLoc);
			// if hitLoc.X > 0 it is orange side
			if (currentTeamHasPossesion == 0 && hitLoc.X > 0 && lastHitCar) {
				std::cout << "Blue Player should respawn." << std::endl;
				if (!respawnOnlyOnGround) {
					lastHitCar->RespawnInPlace();
				}
				else {
					lastHitCar->SetDemolishOnOpposingGround(true, NULL);
				}
				currentTeamHasPossesion = -1;

			} else if (currentTeamHasPossesion == 1 && hitLoc.X < 0 && lastHitCar) {
				std::cout << "Orange Player should respawn." << std::endl;
				if (!respawnOnlyOnGround) {
					lastHitCar->RespawnInPlace();
				}
				else {
					lastHitCar->SetDemolishOnOpposingGround(true, NULL);
				}
				currentTeamHasPossesion = -1;

			}
			// if hitLoc.X < 0 it blue side
			//std::cout << "Hit X: " << hitLoc.X << "Hit X: " << hitLoc.Y << std::endl;
			//bool shouldRespawn = localGameEvent->OnMyHalf(hitLoc, currentTeamHasPossesion);
			//if (shouldRespawn) {
			//	std::cout << "Is onb same sude as kast hit" << std::endl;
			//}
		}
	}
}

void DribbleDrabble::onBallCarTouch(Event* e) {
	if (bStarted) {

		lastHitCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<SDK::ABall_TA_OnCarTouch_Params>()->HitCar);
		if (lastHitCar) {
			if (lastHitCar->GetTeamIndex() == 0) {
				//std::cout << "BLUE TOUCHED LAST" << std::endl;
				currentTeamHasPossesion = 0;

			}
			if (lastHitCar->GetTeamIndex() == 1) {
				//std::cout << "ORANGE TOUCHED LAST" << std::endl;
				currentTeamHasPossesion = 1;

			}
		}
	}
}

void DribbleDrabble::onPlayerTick(Event* event) {
	if (bStarted) {
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

		if (localGameEvent && airDribbleOnly) {
			ACar_TA* currCar = NULL;
			for (int i = 0; i < localGameEvent->Players.Num(); i++) {
				AController* tempController = localGameEvent->Players.GetByIndex(i);
				if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					currCar = ((AAIController_TA*)tempController)->Car;
					if(currCar)
						currCar->SetDemolishOnOpposingGround(true, NULL);

				}
				else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					currCar = ((APlayerController_TA*)tempController)->Car;
					if(currCar)
						currCar->SetDemolishOnOpposingGround(true, NULL);
				}
			}
		}
	}
	else {
		if (InstanceStorage::GameEvent() && InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_Breakout_TA::StaticClass())) {
			isBreakoutType = true;
		}
		else {
			isBreakoutType = false;
		}
	}
}

void DribbleDrabble::onCarSpawned(Event* e) {
	if (bStarted) {
		if (airDribbleOnly) {
			ACar_TA* currCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<SDK::AGameEvent_TA_OnCarSpawned_Params>()->NewCar);
			if(currCar)
				currCar->SetDemolishOnOpposingGround(true, NULL);

		}
	}
}

void DribbleDrabble::onCarDemolished(Event* e) {
}

void DribbleDrabble::onBallTick(Event* e) {
	if (bStarted && isBreakoutType) {
		ABall_Breakout_TA* currBall = (SDK::ABall_Breakout_TA*)e->getCallingObject();
		if (currBall) {
			if (currBall->Location.Y < 0) { // blue.  WTF why is this Y axis...
				currBall->SetLastTeamTouch((unsigned char)0);
			}
			else if (currBall->Location.Y > 0) { // orange
				currBall->SetLastTeamTouch((unsigned char)1);
			}
			currBall->SetDamageIndex(1);
			//std::cout << "Damage index: " << currBall->LastTeamTouch << " | Y LOC: " << currBall->Location.Y << std::endl;
		}
	}
}