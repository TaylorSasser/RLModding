#include "CarPhysics.h"
#include "../Utils/Utils.h"

//
// Need to fix removing balls via the plus and minsus (crashes atm) 
//

CarPhysics::CarPhysics(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CarPhysics::CarPhysics(std::string name, int key) : ModBase(name, key) {}

void CarPhysics::DrawMenu() {
	if (CarPhysics::isEnabled()) {

		// Game Event Controls
		ImGui::Begin("Car Physics Mods", 0, ImVec2(400, 300), 0.75f);

		ImGui::ColorEdit4("Car Color", col2);

		if (ImGui::Button("Toggle Car Collision")) {
			printf("Collision Toggled\n");
			carCollisionOff ^= 1;
			carCollisionChanged ^= 1;
		}
		if (carCollisionOff)
		{
			ImGui::SameLine();
			ImGui::Text("Car Collision Off");
		}
		else {
			ImGui::SameLine();
			ImGui::Text("Car Collision On");

		}

		ImGui::InputFloat("Car Max Spin Rate", &carMaxSpinRate, 0.5f, 1.0f);



		if (ImGui::Button("Clone Car")) {
			printf("Cloned\n");
			cloneMe = true;
		}
		ImGui::SameLine();
		ImGui::InputInt("# Clones", &numClones);

		if (ImGui::Button("Demolish")) {
			//demolishPlayerIndex = playerSelectedIndex;
		}
		ImGui::SameLine();

		if (ImGui::Button("Attach Ball")) {
			//attachBallIndex = playerSelectedIndex;
		}

		ImGui::SliderFloat("Car Scale", &carScale, 0.1f, 10.0f, "%.1f");

		//Example Settings
		//For things that have settings to configure anywhere do something like this
		//Essentially have a boolean to detect the start and stop of the gamemode while the menu
		//just brings up the settings anywhere
		if (bStartGameMode) {
			if (ImGui::Button("Disable")) {
				bStartGameMode = false;
			}
		}
		else {
			if (ImGui::Button("Enable")) {
				if (!(getCurrentGameState() & (GameState::MENU | GameState::TRAINING)))
					bStartGameMode = true;
				else {
					printf("Invalid state for rumble settings\n");
				}
			}
		}
		//End Example Settings

		ImGui::End();
	}
}

void CarPhysics::onEnable() {
	

}
void CarPhysics::onDisable() {

}

void CarPhysics::onPlayerTick(Event* e) {
	if (bStartGameMode) {
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();


		if (carCollisionChanged && carCollisionOff && InstanceStorage::PlayerController()->Car != NULL) {

			InstanceStorage::PlayerController()->Car->SetCollisionType(SDK::ECollisionType::COLLIDE_TouchAllButWeapons);
			carCollisionChanged = false;
		}
		else if (carCollisionChanged &&  InstanceStorage::PlayerController()->Car != NULL) {
			InstanceStorage::PlayerController()->Car->SetCollisionType(SDK::ECollisionType::COLLIDE_CustomDefault);
			carCollisionChanged = false;
		}

		if (cloneMe) {
			for (int i = 0; i < numClones; i++) {
				localGameEvent->SpawnCar(InstanceStorage::PlayerController(), localGameEvent->Cars.GetByIndex(0)->Location, localGameEvent->Cars.GetByIndex(0)->Rotation);
			}

			cloneMe = false;
		}

		if (InstanceStorage::PlayerController()->Car != NULL && !Utils::FloatCompare(carMaxSpinRate, InstanceStorage::PlayerController()->Car->MaxAngularSpeed)) {
			InstanceStorage::PlayerController()->Car->SetMaxAngularSpeed(carMaxSpinRate);

		}
		if (!Utils::FloatCompare(carScale, currCarScale)) {
			currCarScale = carScale;
			//SDK::FVector currCarLocation = inGamePlayerController->Car->Location;
			//currCarLocation.Z += 20.0;
			//inGamePlayerController->Car->Location = currCarLocation;
			InstanceStorage::PlayerController()->Car->SetCarScale(carScale);
		}

		SDK::TArray< class SDK::ATeam_TA* > gameTeams = ((SDK::AGameEvent_Soccar_TA*)localGameEvent)->Teams;

		for (int j = 0; j < gameTeams.Num(); j++)
		{
			//gameTeams.Data[j]->SetCustomTeamName(FString(L"DUMB NAME"));
			//ServerSay(to_string(gameTeams.Data[j]->GetTeamName().Data));

			//gameTeams.Data[j]->SetScore(6);
			SDK::TArray< struct SDK::FLinearColor > colors = gameTeams.GetByIndex(j)->CarColorSet->Colors;
			for (int k = 0; k < colors.Num(); k++)
			{
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).R = col2[0];
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).G = col2[1];
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).B = col2[2];
			}
			gameTeams.GetByIndex(j)->SetColorList(colors, true);
			gameTeams.GetByIndex(j)->TeamColor.R = col2[0];
			gameTeams.GetByIndex(j)->TeamColor.G = col2[1];
			gameTeams.GetByIndex(j)->TeamColor.B = col2[2];
		}


		/*
		// Check if car is freeplay car?
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

		}
		*/

		/*
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


		// std:cout << tempTeamColor.A
		myCar->CarMesh->SetTeamColorOverride(tempTeamColor);
		*/
	}
}

