#include "CarPhysics.h"
#include "../Utils/Utils.h"

CarPhysics::CarPhysics(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CarPhysics::CarPhysics(std::string name, int key) : ModBase(name, key) {}

void CarPhysics::DrawMenu() {
	if (CarPhysics::isEnabled()) {
		ImGui::Begin("Car Physics Mods", 0, ImVec2(400, 300), 0.75f);

		if (ImGui::Button("Toggle Car Collision")) {
			carCollisionOff = !carCollisionOff;
		}
		if (carCollisionOff) {
			ImGui::SameLine();
			ImGui::Text("Car Collision Off");
		} else {
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
		ImGui::End();
	}
}

void CarPhysics::onPlayerTick(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

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
		//InstanceStorage::PlayerController()->Car->RespawnInPlace();
		InstanceStorage::PlayerController()->Car->SetCarScale(carScale);
		InstanceStorage::PlayerController()->Car->Teleport(InstanceStorage::PlayerController()->Car->Location, InstanceStorage::PlayerController()->Car->Rotation, false, false, false);

		setCarScale = false;
	}
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