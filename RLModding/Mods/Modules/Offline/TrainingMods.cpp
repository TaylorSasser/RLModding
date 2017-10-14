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
			ImGui::TextWrapped("Freeplay and tutorial mode settings.");
			ImGui::TextWrapped("To see custom training settings open this menu in Custom Training.");

			ImGui::Checkbox("Hide Boost Meter", &hideBoostMeter);


		}
		else if (InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_TrainingEditor_TA::StaticClass())) {
			ImGui::Text("Custom Training settings.");

			ImGui::InputInt("Round #", &roundIndex);

			if(ImGui::Button("Go to round.")) {
				goToNextRound = true;
			}

			/*
			if (ImGui::Button("Spawn Blocker Bot")) {
				blockerBot = true;
			}

			if (ImGui::Button("Randomize Shot order")) {
				randomizeShotOrder = true;
			}
			*/
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

int tickCount = 0;

void TrainingMods::onPlayerTick(Event* event) {
	if (InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_Tutorial_TA::StaticClass())) {
		AGameEvent_Tutorial_TA* localGameEvent = (SDK::AGameEvent_Tutorial_TA*)InstanceStorage::GameEvent();
		//localGameEvent->bAllowSuperBoost = 1.0f;

		localGameEvent->SetShowBoostMeter(!hideBoostMeter);

		

		if (setFreePlayColors) {
			setFreePlayColors = false;

		}
		

	}
	else if (InstanceStorage::GameEvent()->IsA(SDK::AGameEvent_TrainingEditor_TA::StaticClass())) {
		AGameEvent_TrainingEditor_TA* localGameEvent = (SDK::AGameEvent_TrainingEditor_TA*)InstanceStorage::GameEvent();

		if (localGameEvent) {
			ACar_TA* oldCar = NULL;
			if (blockerBot) {
				FVector ballLoc = { 0,0,0 };
				FVector playerLoc = { 2000,2000,2000 };
				FRotator ballRot = { 0,0,0 };
				FRotator playerRot = { 0,0,0 };
			    //localGameEvent->SpawnBallAndStartPointAt(ballLoc, ballRot, playerLoc, playerRot);

				localGameEvent->SetMaxPlayers(20);
				localGameEvent->SetMaxTeamSize(20);
				localGameEvent->UpdateMaxTeamSize();
				//localGameEvent->ChooseTeam(0, InstanceStorage::PlayerController());

				for (int i = 0; i < localGameEvent->Teams.Num(); i++) {
					std::cout << "Players per team: " << localGameEvent->Teams.GetByIndex(i)->Size << std::endl;
					localGameEvent->Teams.GetByIndex(i)->Size = 10;
				}

				AAIController_TA* myBot = localGameEvent->SpawnBot();
				myBot->DoNothing();
				//localGameEvent->SpawnEditorPawn(myBot, playerLoc, playerRot);
				FVector spawnLoc = InstanceStorage::PlayerController()->Car->Location;
				//spawnLoc.X += 50;
				FRotator spawnRot = InstanceStorage::PlayerController()->Car->Rotation;
				oldCar = InstanceStorage::PlayerController()->Car;
				ACar_TA* blocker = localGameEvent->SpawnCar(InstanceStorage::PlayerController(), spawnLoc, spawnRot);
				spawnLoc = { 81.6708f, 5118.29f, 16.5428f };
				//spawnRot = { -120 , 0 ,-21948 };
				oldCar->Teleport(spawnLoc, blocker->Rotation, true, true, false);
				blockerBot = false;
			}

			tickCount++;
			//std::cout << "Pitch: " << InstanceStorage::PlayerController()->Car->Rotation.Pitch << "Roll: " << InstanceStorage::PlayerController()->Car->Rotation.Roll << "Yaw: " << InstanceStorage::PlayerController()->Car->Rotation.Yaw << std::endl;
			/*
			if (oldCar && oldCar->Input.bJumped && tickCount > 10) {
				
				FVehicleInputs inputs = oldCar->Input;
				inputs.bJumped = 0.0f;
				oldCar->SetVehicleInput(inputs);
				tickCount = 0;
			}
			else if (oldCar && !oldCar->Input.bJumped && tickCount > 10) {
				FVehicleInputs inputs = oldCar->Input;
				inputs.bJump = 1.0f;
				oldCar->SetVehicleInput(inputs);
				tickCount = 0;

			}

			*/
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