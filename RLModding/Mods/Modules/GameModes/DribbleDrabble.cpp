#include "DribbleDrabble.h"
#include <comdef.h>
#include <iostream>
#include <chrono>

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

void DribbleDrabble::unloadMod() {
}

void DribbleDrabble::loadMod() {
	if (InstanceStorage::GameEvent() && InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_Breakout_TA::StaticClass())) {
		isBreakoutType = true;
	}
	else {
		isBreakoutType = false;
	}
	
	for (int i = 0; i < 10; i++) {
		blueCarsToRespawn.cars[i] = NULL;
		orangeCarsToRespawn.cars[i] = NULL;
	}


	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (localGameEvent) {
		//localGameEvent->SpawnBall({ 0,0,0 }, true, false, FString(L"Archetypes.Ball.Ball_Default"));
		localGameEvent->SetRestartingMatch(true);
	}
}




void DribbleDrabble::DrawMenu() {
	ImGui::Begin("DribbleDrabble Settings", &p_open, ImVec2(514, 260), 0.75f);
	if (!isBreakoutType) {
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "For additional settings like ball color use the DropsShot gametype.");
	}

	ImGui::TextWrapped("Don't let the ball touch the ground when you enter the opponents half or you will be respawned.");

	ImGui::RadioButton("Basic", &settingsOption, 0);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("If checked, basic game mode will be used.");
	ImGui::SameLine();
	ImGui::RadioButton("Advanced", &settingsOption, 1);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("If checked, advanced game mode will be used.");

	isBasic = settingsOption == 0;

	ImGui::Checkbox("Don't respawn players till they touch the ground.", &respawnOnlyOnGround);
	ImGui::Checkbox("Air dribbles only.", &airDribbleOnly);

	if (isBasic) {
		
	}
	else {
		ImGui::InputInt("# of seconds before ball respawn", &ballRespawnTime);
			if (ImGui::IsItemHovered())
				ImGui::SetTooltip("This is the number of seconds a team can keep the ball on their side before it respawns.");
	}

	

	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled DribbleDrabble");
				loadMod();


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
		FVector hitLoc = (SDK::FVector)(e->getParams<SDK::ABall_TA_EventHitGround_Params>()->HitLoc);


		if (isBasic) {
			if (localGameEvent && currentTeamHasPossesion != -1) {
				//ABall_TA* hitBall = reinterpret_cast<SDK::ABall_TA*>(e->getCallingObject());
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

				}
				else if (currentTeamHasPossesion == 1 && hitLoc.X < 0 && lastHitCar) {
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
		else if (!isBasic) { // Advanced mode

			// Handle ball hit timer.  15 seconds of not crossing sides will cause the ball to respawn.


			// if hitLoc.X > 0 ball hit on orange side
			// respawn all cars in respawn list
			if (hitLoc.X > 0) {
				for (int i = 0; i < 10; i++) {
					if (blueCarsToRespawn.cars[i]) {
						ACar_TA* currCar = blueCarsToRespawn.cars[i];
						if (currCar && respawnOnlyOnGround) {
							currCar->SetDemolishOnOpposingGround(true, NULL);
						}
						else if (currCar) {
							currCar->RespawnInPlace();
						}
						blueCarsToRespawn.cars[i] = NULL;
					}
				}
				blueCarsToRespawn.carCount = 0;
				if (currentTeamHasPossesion == 0 || currentTeamHasPossesion == -1) // if other team had ball previously, start the timer for ball respawn
					lastBallUpdateTime = std::chrono::high_resolution_clock::now();
				currentTeamHasPossesion = 1;

			}
			else if (hitLoc.X < 0) {
				for (int i = 0; i < 10; i++) {
					if (orangeCarsToRespawn.cars[i]) {
						ACar_TA* currCar = orangeCarsToRespawn.cars[i];
						if (currCar && respawnOnlyOnGround) {
							currCar->SetDemolishOnOpposingGround(true, NULL);
						}
						else if (currCar) {
							currCar->RespawnInPlace();
						}
						orangeCarsToRespawn.cars[i] = NULL;
					}
				}
				if (currentTeamHasPossesion == 1 || currentTeamHasPossesion == -1) // if other team had ball previously, start the timer for ball respawn
					lastBallUpdateTime = std::chrono::high_resolution_clock::now();
				orangeCarsToRespawn.carCount = 0;
				currentTeamHasPossesion = 0;

			}
		}

	}
}

void DribbleDrabble::onBallCarTouch(Event* e) {
	if (bStarted) {

		lastHitCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<SDK::ABall_TA_OnCarTouch_Params>()->HitCar);

		if (isBasic) {

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
		else if (!isBasic) { // Advanced mode

		}
	}
}

void DribbleDrabble::onPlayerTick(Event* event) {
	if (bStarted) {
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
		if (isBasic) {

			if (localGameEvent && airDribbleOnly) {
				ACar_TA* currCar = NULL;
				for (int i = 0; i < localGameEvent->Players.Num(); i++) {
					AController* tempController = localGameEvent->Players.GetByIndex(i);
					if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
						currCar = ((AAIController_TA*)tempController)->Car;
						if (currCar)
							currCar->SetDemolishOnOpposingGround(true, NULL);

					}
					else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
						currCar = ((APlayerController_TA*)tempController)->Car;
						if (currCar)
							currCar->SetDemolishOnOpposingGround(true, NULL);
					}
				}
			}
		}
		else if (!isBasic) { // Advanced mode

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
		if (isBasic) {

			if (airDribbleOnly) {
				ACar_TA* currCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<SDK::AGameEvent_TA_OnCarSpawned_Params>()->NewCar);
				if (currCar)
					currCar->SetDemolishOnOpposingGround(true, NULL);

			}
		}
		else if (!isBasic) { // Advanced mode
			
		}
	}
}

void DribbleDrabble::onCarDemolished(Event* e) {
}

void DribbleDrabble::onBallTick(Event* e) {
	ABall_Breakout_TA* currBall = (SDK::ABall_Breakout_TA*)e->getCallingObject();

	if (bStarted && isBreakoutType) {
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

	if (bStarted && !isBasic) {
		

		//float newTime = (float)(e->getParams<SDK::ABall_TA_Tick_Params>()->DeltaTime);


		// If ball is now on blue side and was previously on orange, reset timer
		// orange team is now in "control" of the ball
		if (ballOnHalf == 1 && currBall->Location.Y < 0) {
			ballOnHalf = 0;
			currentTeamHasPossesion = 1;
			std::cout << "Ball changed from orange to blue!" << std::endl;
		}
		else if(currBall->Location.Y < 0) {
			ballOnHalf = 0;
		}

		// If ball is now on orange side and was previously on blue, reset timer
		// blue team is now in "control" of the ball
		if (ballOnHalf == 0 && currBall->Location.Y > 0) { // orange
			ballOnHalf = 1;
			currentTeamHasPossesion = 0;
			std::cout << "Ball changed from blue to orange!" << std::endl;

		}
		else if (currBall->Location.Y > 0) {
			ballOnHalf = 1;
		}
		
		//if (currBall->Location.Y == 0) ballOnHalf = -1;
		std::chrono::high_resolution_clock::time_point currTime = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(currTime - lastBallUpdateTime);

		// If 15 seconds since ball has moved sides, respawn
		if (time_span.count() > ballRespawnTime && ((currBall->Location.Y < 0 && currentTeamHasPossesion == 0) || (currBall->Location.Y > 0 && currentTeamHasPossesion == 1))) {
			lastBallUpdateTime = currTime;
			currentTeamHasPossesion = -1;
			ballOnHalf = -1;
			currBall->Reset();
			//std::cout << "Team has had possession for 15 seconds, respawning!" << std::endl;

		}
		//std::cout << "Updated ball tick: " << time_span.count() << std::endl;
	}
}

// On each car tick update demolish list based on side they are on
void DribbleDrabble::onCarTick(Event* e) {
	if (bStarted) {

		if (isBasic) {

		}
		else if (!isBasic) { // Advanced mode
			// If car is on opponents side add to respawn lists
			ACar_TA* currCar = (SDK::ACar_TA*)e->getCallingObject();

			// Orange side
			if (currCar->Location.Y > 0) {
				//std::cout << "Car is on orange side?" << std::endl;
				// If car is on orange team and is on orange side, remove from respawn
				if (currCar->GetTeamNum() == 1) {
					int carIndex = carIsOnList(currCar, orangeCarsToRespawn);
					if (carIndex != -1) {
						orangeCarsToRespawn.cars[carIndex] = NULL;
						std::cout << "Orange car removed" << std::endl;
					}
				}
				// If car is on blue team and on orange side, add car to respawn list (if not already there)
				if (currCar->GetTeamNum() == 0) {
					int carIndex = carIsOnList(currCar, blueCarsToRespawn);
					if (carIndex == -1) {
						for (carIndex = 0; carIndex < 10; carIndex++) {
							if (!blueCarsToRespawn.cars[carIndex]) {
								blueCarsToRespawn.cars[carIndex] = currCar;
								std::cout << "blue car added" << std::endl;
								break;
							}
						}
					}
				}
			}
			else if (currCar->Location.Y < 0) {
				//std::cout << "Car is on blue side?" << std::endl;
				// If car is on blue team and is on blue side, remove from respawn
				if (currCar->GetTeamNum() == 0) {
					int carIndex = carIsOnList(currCar, blueCarsToRespawn);
					if (carIndex != -1) {
						blueCarsToRespawn.cars[carIndex] = NULL;
						std::cout << "blue car removed" << std::endl;

					}
				}
				// If car is on orange team and on blue side, add car to respawn list (if not already there)
				if (currCar->GetTeamNum() == 1) {
					int carIndex = carIsOnList(currCar, orangeCarsToRespawn);
					if (carIndex == -1) {
						for (carIndex = 0; carIndex < 10; carIndex++) {
							if (!orangeCarsToRespawn.cars[carIndex]) {
								orangeCarsToRespawn.cars[carIndex] = currCar;
								std::cout << "orange car added" << std::endl;
								break;
							}
						}
					}
				}
			}
		}
	}
}

int DribbleDrabble::carIsOnList(ACar_TA * c, CarsToRespawn ctr)
{
	for (int i = 0; i < 10; i++) {
		if (ctr.cars[i] && c == ctr.cars[i]) {
			return i;
		}
	}
	return -1;
}

void DribbleDrabble::onEventGoalScored(Event* e) {
	if (isBasic) {

	}
	else if (!isBasic) {
		// Reset values
		currentTeamHasPossesion = -1;
		ballOnHalf = -1;
		for (int i = 0; i < 10; i++) {
			blueCarsToRespawn.cars[i] = NULL;
			orangeCarsToRespawn.cars[i] = NULL;
		}
	}
}
