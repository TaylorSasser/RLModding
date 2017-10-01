#include "CarPhysics.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion
#include "../Interfaces/Interfaces.h"

CarPhysics::CarPhysics(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CarPhysics::CarPhysics(std::string name, int key) : ModBase(name, key) {}

void CarPhysics::DrawMenu() {
	if (CarPhysics::isEnabled()) {
		ImGui::Begin("Car Physics Mods", &p_open, ImVec2(400, 300), 0.75f);

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

		if (ImGui::Button("Clone Car")) cloneMe = true;
		ImGui::SameLine();
		ImGui::InputInt("# Clones", &numClones);

		ImGui::SliderFloat("Car Scale", &carScale, 0.1f, 10.0f, "%.1f");
		ImGui::SameLine();
		if (ImGui::Button("Apply")) {
			setCarScale = true;
		}
		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}
		ImGui::End();
	}
}

void CarPhysics::onPlayerTick(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (refreshCars) {
		populatePlayerList(localGameEvent);
		refreshCars = false;
	}

	// If for all players
	if (localGameEvent) {
		int currPlayer = 0;
		TArray< class ATeam_TA* > gameTeams = localGameEvent->Teams;
		for (int i = 0; i < gameTeams.Num(); i++) {

			for (int j = 0; j < gameTeams.GetByIndex(i)->Members.Num(); j++)
			{
				if (playerSelectedIndex == 0 || currPlayer == playerSelectedIndex - 1) {
					ACar_TA* currCar = gameTeams.GetByIndex(i)->Members.GetByIndex(j)->Car;

					// Clone car
					if (cloneMe) {
						for (int i = 0; i < numClones; i++) {
							localGameEvent->SpawnCar(InstanceStorage::PlayerController(), localGameEvent->Cars.GetByIndex(0)->Location, localGameEvent->Cars.GetByIndex(0)->Rotation);
						}
						
					}

					//_bstr_t b(gameTeams.GetByIndex(i)->Members.GetByIndex(j)->PlayerName.ToString().data());
					//players[currPlayer + 1] = b;
				}

				currPlayer++;
			}
		}

		// Reset options markers
		if (cloneMe) cloneMe = false;

	}

	if (carCollisionOff && InstanceStorage::PlayerController()->Car != NULL) {
		InstanceStorage::PlayerController()->Car->SetCollisionType(SDK::ECollisionType::COLLIDE_TouchAllButWeapons);
	} else if (InstanceStorage::PlayerController()->Car != NULL) {
		InstanceStorage::PlayerController()->Car->SetCollisionType(SDK::ECollisionType::COLLIDE_CustomDefault);
	}


	if (cloneMe) {
		for (int i = 0; i < numClones; i++) {
			localGameEvent->SpawnCar(InstanceStorage::PlayerController(), localGameEvent->Cars.GetByIndex(0)->Location, localGameEvent->Cars.GetByIndex(0)->Rotation);
		}
		cloneMe = false;
	}



	// Added check to make sure car is not null
	if (setCarScale && InstanceStorage::PlayerController()->Car != NULL) {
		FVector carOldLoc = InstanceStorage::PlayerController()->Car->Location;
		FRotator carOldRot = InstanceStorage::PlayerController()->Car->Rotation;
		
		InstanceStorage::PlayerController()->Car->RespawnInPlace();
		InstanceStorage::PlayerController()->Car->Teleport(carOldLoc, carOldRot, false, false, false);
		InstanceStorage::PlayerController()->Car->SetCarScale(carScale);

		setCarScale = false;
	}
}

void CarPhysics::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent) {
	// Populate player list
	if (localGameEvent) {
		int currPlayer = 0;
		TArray< class ATeam_TA* > gameTeams = localGameEvent->Teams;
		for (int i = 0; i < gameTeams.Num(); i++) {

			for (int j = 0; j < gameTeams.GetByIndex(i)->Members.Num(); j++)
			{
				_bstr_t b(gameTeams.GetByIndex(i)->Members.GetByIndex(j)->PlayerName.ToString().data());
				players[currPlayer + 1] = b;
				currPlayer++;
			}
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