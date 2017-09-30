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
		if (ImGui::Button("Up Max Players")) {
			allowMorePlayers = true;
		}
		

		ImGui::End();
	}
}

void GameEventMods::onEnable() {


}
void GameEventMods::onDisable() {

}

void GameEventMods::onPlayerTick(Event* e) {
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

	if (allowMorePlayers) {
		std::cout << "Old Max Players: " << localGameEvent->MaxPlayers << std::endl;
		localGameEvent->SetMaxPlayers(20);
		localGameEvent->SetMaxTeamSize(20);
		localGameEvent->UpdateMaxTeamSize();
		localGameEvent->ChooseTeam(0, InstanceStorage::PlayerController());
		localGameEvent->bUnfairTeams = true;

		for (int i = 0; i < localGameEvent->Teams.Num(); i++) {
			localGameEvent->Teams.GetByIndex(i)->Size = 10;
		}

		//localGameEvent
		std::cout << "New Maxd Players: " << localGameEvent->MaxPlayers << std::endl;

		allowMorePlayers = false;

	}

	if (localGameEvent) {
		for (int k = 0; k < localGameEvent->Players.Num(); k++)
		{
			SDK::AController* playerControllers = localGameEvent->Players.GetByIndex(k);
			_bstr_t b(playerControllers->GetHumanReadableName().c_str());
		}
	}
	else {
		printf("Can't find game event.");
	}

	if (randomExplosion) {
		if (localGameEvent) {
			APylon_Soccar_TA* pylon = localGameEvent->Pylon;
			int duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
			if (duration > 3) {
				start = std::clock();

			}
		}
	}

	if (randomSpawnPoints) {

		if (localGameEvent) {
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
		}
		randomSpawnPoints = false;

	}
}

