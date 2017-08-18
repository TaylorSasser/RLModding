#include "GameEventMods.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion
#include <ctime>

GameEventMods::GameEventMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
GameEventMods::GameEventMods(std::string name, int key) : ModBase(name, key) {}




void GameEventMods::DrawMenu() {
	if (GameEventMods::isEnabled()) {

		// Game Event Controls
		ImGui::Begin("Game Event Mods", 0, ImVec2(400, 300), 0.75f);

		if (ImGui::Button("Force Overtime")) {
			startOverTime ^= 1;
		}
		ImGui::SameLine();

		if (ImGui::Button("Pause Server")) {
			pauseServer = true;
		}

		if (ImGui::Button("Freeze Bots")) {
			pauseServer = true;
		}
		if (ImGui::Button("Random Explosion Test")) {
			randomExplosion = true;
			start = std::clock();

		}
		if (ImGui::Button("Randomize Spawn Points")) {
			randomSpawnPoints = true;

		}
		if (ImGui::Button("Spawn Bot")) {
			spawnBot = true;
		}
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

void GameEventMods::onEnable() {


}
void GameEventMods::onDisable() {

}

void GameEventMods::onPlayerTick(Event* e) {
	if (bStartGameMode) {
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

		if (spawnBot) {
			if (localGameEvent) {
				localGameEvent->SpawnBot();
			}
			spawnBot = false;
		}

		if (pauseServer) {
			localGameEvent->SetPaused(InstanceStorage::PlayerController(), !pausedGame);
			pausedGame = !pausedGame;
			pauseServer = false;
		}


		if (startOverTime) {
			localGameEvent->StartOvertime();
			startOverTime = false;
		}

		if (localGameEvent) {
			for (int k = 0; k < localGameEvent->Players.Num(); k++)
			{
				SDK::AController* playerControllers = localGameEvent->Players.GetByIndex(k);
				_bstr_t b(playerControllers->GetHumanReadableName().c_str());
				//players[k] = b;
			}


		}
		else {
			printf("Can't find game event.");
		}

		if (randomExplosion) {
			if (localGameEvent) {
				APylon_Soccar_TA* pylon = localGameEvent->Pylon;
				int duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
				//localGameEvent->RandomizeSpawnPoints();
				if (duration > 3) {
					//localGameEvent->GameBalls.GetByIndex(0)->Explode(pylon->Goals.GetByIndex(0), InstanceStorage::PlayerController()->Car->Location, InstanceStorage::PlayerController()->PRI);
					//localGameEvent->GameBalls.GetByIndex(0)->InitExplosionFX(localGameEvent->GameBalls.GetByIndex(0)->Explosion, pylon->Goals.GetByIndex(0), localGameEvent->GameBalls.GetByIndex(0)->Explosion->FXActor);
					start = std::clock();

				}
				/*
				for (int k = 0; k < pylon->SpawnPoints.Num(); k++)
				{
				SDK::AActor* spawn = pylon->SpawnPoints.GetByIndex(k);
				SDK::FVector newSpawn = spawn->Location;
				newSpawn.X = 0;
				newSpawn.Y = 0;
				spawn->SetLocation(newSpawn);
				}
				}
				*/
			}

		}

		if (randomSpawnPoints) {

			if (localGameEvent) {
				//APylon_Soccar_TA* pylon = localGameEvent->Pylon;
				//int duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
				//localGameEvent->RandomizeSpawnPoints();
				USpawnPointCluster_TA* spawnCluster = localGameEvent->SpawnPointsLobby;
				TArray<class USpawnPointGroup_TA*> spawnGroups = spawnCluster->SpawnTeams;
				for (int i = 0; i < spawnGroups.Num(); i++) {
					for (int k = 0; k < spawnGroups.GetByIndex(i)->SpawnPoints.Num(); k++)
					{
						SDK::AActor* spawn = spawnGroups.GetByIndex(i)->SpawnPoints.GetByIndex(k);
						SDK::FVector newSpawn = spawn->Location;
						newSpawn.X = 0;
						newSpawn.Y = 0;
						spawn->SetLocation(newSpawn);
					}
				}
				/*
				for (int k = 0; k < pylon->SpawnPoints.Num(); k++)
				{
					SDK::AActor* spawn = pylon->SpawnPoints.GetByIndex(k);
					SDK::FVector newSpawn = spawn->Location;
					newSpawn.X = 0;
					newSpawn.Y = 0;
					spawn->SetLocation(newSpawn);
				}
			}
			*/
			}
			randomSpawnPoints = false;

		}

	}
}

