#include "CarPhysics.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion


CarPhysics::CarPhysics(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CarPhysics::CarPhysics(std::string name, int key) : ModBase(name, key) {}

void CarPhysics::DrawMenu() {
	if (CarPhysics::isEnabled()) {
		ImGui::Begin("Car Physics Mods", &p_open, ImVec2(400, 300), 0.75f);

		if (ImGui::Button("Clone Car")) cloneMe = true;
		ImGui::SameLine();
		ImGui::InputInt("# Clones", &numClones);

		ImGui::Separator();


		ImGui::Combo("Player Car", &playerSelectedIndex, players, IM_ARRAYSIZE(players));
		ImGui::SameLine();
		if (ImGui::Button("Refresh")) {
			refreshCars = true;
		}
		ImGui::Separator();

		if (ImGui::Button("Toggle Car Collision")) {
			carCollisionOff = !carCollisionOff;
		}
		if (carCollisionOff) {
			ImGui::SameLine();
			ImGui::Text("Car Collision Off");
		}
		else {
			ImGui::SameLine();
			ImGui::Text("Car Collision On");
		}


		ImGui::SliderFloat("Car Scale", &carScale, 0.1f, 10.0f, "%.1f");
		ImGui::SameLine();
		if (ImGui::Button("Apply")) {
			setCarScale = true;
		}
		ImGui::Checkbox("Respawn before scale", &respawnOnScale);
		ImGui::Checkbox("Freeze car in place", &freezeInPlace);

		ImGui::Separator();

		ImGui::Text(statusText.c_str());

		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}
		ImGui::End();
	}
}

void CarPhysics::onPlayerTick(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (localGameEvent) {
		TArray< class AController* > gameEventPlayers = localGameEvent->Players;

		if (refreshCars || currPlayerCount != gameEventPlayers.Num()) {
			populatePlayerList(localGameEvent);
			refreshCars = false;
		}

		// Clone car
		if (cloneMe && InstanceStorage::PlayerController() != NULL) {
			for (int i = 0; i < numClones; i++) {
				localGameEvent->SpawnCar(InstanceStorage::PlayerController(), InstanceStorage::PlayerController()->Car->Location, InstanceStorage::PlayerController()->Car->Rotation);
			}

		}

		for (int i = 0; i < gameEventPlayers.Num(); i++) {

			if (playerSelectedIndex == 0 || i == playerSelectedIndex - 1) {

				AController* tempController = gameEventPlayers.GetByIndex(i);
				ACar_TA* currCar = NULL;

				// Check if bot or person
				if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					currCar = ((AAIController_TA*)gameEventPlayers.GetByIndex(i))->Car;
				}
				else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					currCar = ((APlayerController_TA*)gameEventPlayers.GetByIndex(i))->Car;

				}

				if (currCar) {
					if (carCollisionOff && InstanceStorage::PlayerController()->Car != NULL) {
						currCar->SetCollisionType(SDK::ECollisionType::COLLIDE_TouchAllButWeapons);
					}
					else if (InstanceStorage::PlayerController()->Car != NULL) {
						currCar->SetCollisionType(SDK::ECollisionType::COLLIDE_BlockAll);
					}

					// Added check to make sure car is not null
					if (setCarScale) {
						FVector carOldLoc = currCar->Location;
						FRotator carOldRot = currCar->Rotation;

						if (respawnOnScale) {
							currCar->RespawnInPlace();

							// Check if bot or person
							if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
								currCar = ((AAIController_TA*)gameEventPlayers.GetByIndex(i))->Car;
							}
							else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
								currCar = ((APlayerController_TA*)gameEventPlayers.GetByIndex(i))->Car;

							}

						}
						//InstanceStorage::PlayerController()->Car->Teleport(carOldLoc, carOldRot, false, false, false);
						currCar->SetCarScale(carScale);
					}

					if (freezeInPlace) {
						currCar->bPodiumMode = freezeInPlace;

					}

				}
			}

		}

		// Reset options markers
		if (cloneMe) cloneMe = false;
		if (setCarScale) setCarScale = false;
		if (freezeInPlace) freezeInPlace = false;

		// Populate checkboxes based on selected user
		if (playerSelectedIndex != 0 && oldPlayerSelectedIndex != playerSelectedIndex) {
			statusText = "";

			oldPlayerSelectedIndex = playerSelectedIndex;
			// Check if bot or person
			if (playerSelectedIndex < gameEventPlayers.Num() + 1) {

				AController* tempController = gameEventPlayers.GetByIndex(playerSelectedIndex - 1);
				if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					AAIController_TA* currController = (AAIController_TA*)tempController;
					freezeInPlace = currController->Car->bPodiumMode;
					
				}
				else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					APlayerController_TA* currController = (APlayerController_TA*)tempController;
					freezeInPlace = currController->Car->bPodiumMode;

				}
			}
		}
		else if (playerSelectedIndex == 0 && oldPlayerSelectedIndex != playerSelectedIndex) {
			statusText = "";

			oldPlayerSelectedIndex = playerSelectedIndex;



		}

	}

}

void CarPhysics::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent) {
	// Populate player list
	std::fill_n(players, 11, "\0");
	players[0] = "All\0";

	if (localGameEvent) {
		TArray< class AController* > eventPlayers = localGameEvent->Players;
		for (int i = 0; i < eventPlayers.Num(); i++) {

			AController* tempController = eventPlayers.GetByIndex(i);
			std::string playerName = eventPlayers.GetByIndex(i)->PlayerReplicationInfo->PlayerName.ToString();

			// Check if bot or person
			if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
				playerName += " [BOT]";
			}

			char *cptr = new char[playerName.length() + 1]; // +1 to account for \0 byte
			std::strncpy(cptr, playerName.c_str(), playerName.size());
			cptr[playerName.length()] = '\0';
			std::cout << "Player: " << playerName << std::endl;
			//_bstr_t b(eventPlayers.GetByIndex(i)->PlayerReplicationInfo->PlayerName.ToString().data());
			players[i + 1] = cptr;
		}
		currPlayerCount = eventPlayers.Num();

	}
}

void CarPhysics::onCarSpawned(Event* e) {
	//std::cout << "Spawned a car!" << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
}

void CarPhysics::onGameEventRemovePlayer(Event* e) {
	//std::cout << "Removed Player: " << ((APRI_TA*)e->getCallingObject())->PlayerName.ToString() << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
}

void CarPhysics::onGameEventAddPlayer(Event* e) {
	//std::cout << "Removed Player: " << ((APRI_TA*)e->getCallingObject())->PlayerName.ToString() << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
}

/*

gameTeams.Data[j]->SetCustomTeamName(FString(L"DUMB NAME"));
ServerSay(to_string(gameTeams.Data[j]->GetTeamName().Data));
gameTeams.Data[j]->SetScore(6);

if (inGamePlayerController->Car != NULL && inGamePlayerController->Car->IsA(SDK::ACar_Freeplay_TA::StaticClass())) {
SDK::ACar_Freeplay_TA* freePlayCar = (SDK::ACar_Freeplay_TA*)inGamePlayerController->Car;
SDK::TArray<struct SDK::FLinearColor> freePlayCarColors = freePlayCar->CarColors;
if (setFreePlayColors) {
setFreePlayColors = false;
printf("Found the freeplay car...");
for (int i = 0; i < freePlayCarColors.Num(); i++) {
freePlayCarColors.GetByIndex(i).R = 0;
freePlayCarColors.GetByIndex(i).G = 0;
freePlayCarColors.GetByIndex(i).B = 0;
}
}
SDK::ACar_TA* myCar = inGamePlayerController->Car;

SDK::FLinearColor tempCustomColor = myCar->CarMesh->GetTeamColor();
tempCustomColor.R = 0;
tempCustomColor.G = 0;
tempCustomColor.B = 0;
myCar->CarMesh->SetTeamColorOverride(tempCustomColor);
myCar->CarMesh->SetCustomColorOverride(tempCustomColor);

SDK::ACar_TA* myCar = inGamePlayerController->Car;
SDK::FLinearColor tempCustomColor = myCar->CarMesh->GetCustomColor();
SDK::FLinearColor tempTeamColor = myCar->CarMesh->GetTeamColor();

tempTeamColor.R = 0;
tempTeamColor.G = 0;
tempTeamColor.B = 0;
std:cout << tempTeamColor.A
myCar->CarMesh->SetTeamColorOverride(tempTeamColor);


if (InstanceStorage::PlayerController()->Car != NULL && !Utils::FloatCompare(carMaxSpinRate, InstanceStorage::PlayerController()->Car->MaxAngularSpeed)) {
InstanceStorage::PlayerController()->Car->SetMaxAngularSpeed(carMaxSpinRate);
}
*/