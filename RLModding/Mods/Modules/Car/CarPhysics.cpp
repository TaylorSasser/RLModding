#include "CarPhysics.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion


CarPhysics::CarPhysics(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CarPhysics::CarPhysics(std::string name, int key) : ModBase(name, key) {}

void CarPhysics::DrawMenu() {
	if (CarPhysics::isEnabled()) {
		ImGui::Begin("Car Physics Mods", 0, ImVec2(400, 300), 0.75f);

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
		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}
		ImGui::End();
		ImGui::End();
	}
}

void CarPhysics::onPlayerTick(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (refreshCars) {
		populatePlayerList(localGameEvent);
		refreshCars = false;
	}

	if (localGameEvent) {

		// Clone car
		if (cloneMe && InstanceStorage::PlayerController() != NULL) {
			for (int i = 0; i < numClones; i++) {
				localGameEvent->SpawnCar(InstanceStorage::PlayerController(), InstanceStorage::PlayerController()->Car->Location, InstanceStorage::PlayerController()->Car->Rotation);
			}

		}

		TArray< class AController* > players = localGameEvent->Players;
		for (int i = 0; i < players.Num(); i++) {

			if (playerSelectedIndex == 0 || i == playerSelectedIndex - 1) {

				AController* tempController = players.GetByIndex(i);
				ACar_TA* currCar = NULL;

				// Check if bot or person
				if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					currCar = ((AAIController_TA*)players.GetByIndex(i))->Car;
				}
				else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					currCar = ((APlayerController_TA*)players.GetByIndex(i))->Car;

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

						if (respawnOnScale)
							currCar->RespawnInPlace();
						//InstanceStorage::PlayerController()->Car->Teleport(carOldLoc, carOldRot, false, false, false);
						currCar->SetCarScale(carScale);
					}

				}
			}

		}

		// Reset options markers
		if (cloneMe) cloneMe = false;
		if (setCarScale) setCarScale = false;

	}

}

void CarPhysics::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent) {
	// Populate player list
	if (localGameEvent) {
		TArray< class AController* > eventPlayers = localGameEvent->Players;
		for (int i = 0; i < eventPlayers.Num(); i++) {

			_bstr_t b(eventPlayers.GetByIndex(i)->PlayerReplicationInfo->PlayerName.ToString().data());
			players[i + 1] = b;
		}

	}
}

void CarPhysics::onCarSpawned(Event* e) {
	//std::cout << "Spawned a car!" << std::endl;
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