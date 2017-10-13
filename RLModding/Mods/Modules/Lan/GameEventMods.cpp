#include "GameEventMods.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion
#include <ctime>
#include "../Interfaces/Interfaces.h"

GameEventMods::GameEventMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
GameEventMods::GameEventMods(std::string name, int key) : ModBase(name, key) {}

void GameEventMods::ExportSettings(pt::ptree) {}
void GameEventMods::ImportSettings(pt::ptree) {}

void GameEventMods::DrawMenu() {
	if (GameEventMods::isEnabled()) {

		// Game Event Controls
		ImGui::Begin("Game Event Mods", &p_open, ImVec2(400, 300), 0.75f);
		if (ImGui::CollapsingHeader("Game Controls", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			if (ImGui::Button("Force Overtime")) {
				startOverTime ^= 1;
			}
			ImGui::SameLine();
			if (ImGui::Button("Pause Server")) {
				pauseServer = true;
			}
			if (ImGui::Button("Restart Match")) {
				restartMatch = true;
			}
			ImGui::SameLine();
			if (ImGui::Button("Reset Players")) {
				resetPlayers = true;
			}

			if (ImGui::Button("Reset Balls")) {
				resetBalls = true;
			}
			
		}


		if (ImGui::CollapsingHeader("Match Settings", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			ImGui::InputInt("Respawn Time", &respawnTime);

			ImGui::PushItemWidth(100);
			ImGui::InputInt("Blue Score", &blueScore); ImGui::SameLine();
			ImGui::NextColumn();
			ImGui::PushItemWidth(100);
			ImGui::NextColumn(); 

			ImGui::InputInt("Orange Score", &orangeScore); ImGui::SameLine();

			if (ImGui::Button("Set Score")) {
				setScoreAndTime = true;
			}

			ImGui::Checkbox("Disable Goal Delay", &disableGoalDelay);
			ImGui::Checkbox("Unlimited Time", &unlimitedTime);


		}

		if (ImGui::CollapsingHeader("Message Settings", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			ImGui::TextColored(ImVec4(0.9f,0.0f,0.0f,1.0f),"WARNING.  Changing these values will cause your game to crash when leaving.");
			ImGui::Text("The Server should work fine until then.");

			ImGui::PushItemWidth(200);
			ImGui::InputText("Goal Scored Message", goalScoredMessage, IM_ARRAYSIZE(goalScoredMessage));

			if (ImGui::Button("Update Player Messages")) {
				updatePlayerMessages = true;
			}
		
		}
		

		if (ImGui::CollapsingHeader("Bots",ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			
			ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "NOTE: removing bots only works for bots you spawned manually.");
			ImGui::InputInt("# Bots", &botsToSpawn); ImGui::SameLine();
			if (ImGui::Button("Spawn Bot(s)")) {
				spawnBot = true;
			}
			if (ImGui::Button("Freeze Bots")) {
				freezeBots = true;
			}
			ImGui::SameLine();
			if (ImGui::Button("Remove All Bots")) {
				removeBots = true;
			}
		}
		
		if (ImGui::CollapsingHeader("Two's test stuff."))
		{
			ImGui::Text("NOTE: None of this for sure works.  Use at your own risk.");
			
			if (ImGui::Button("Allow more than 8 players.")) {
				allowMorePlayers = true;
			}
			if (ImGui::Button("Randomize Spawn Points")) {
				randomSpawnPoints = true;
			}
			if (ImGui::Button("Random Explosion Test")) {
				randomExplosion = true;
				start = std::clock();

			}
			if (ImGui::Button("Set Warmup Time")) {
				setWarmupTime = true;

			}
			ImGui::SameLine();

			if (ImGui::Button("Hide Replays")) {
				hideReplays = true;
			}
			ImGui::SameLine();

			if (ImGui::Button("Test Server Say")) {
				testServerSay = true;
			}

			if (ImGui::Button("Test Training Spawns")) {
				testTrainingSpawn = true;
			}
		}
		
		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}

		ImGui::End();
	}
}

void GameEventMods::onMenuOpen() {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
		respawnTime = localGameEvent->RespawnTime;
		disableGoalDelay = localGameEvent->bDisableGoalDelay;
	}

}
void GameEventMods::onMenuClose() {



	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {

	}
	else {
		std::cout << "No game event found...no cleanup done..." << std::endl;
	}
}

void GameEventMods::onPlayerTick(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {

		if (spawnBot) {
			for(int i = 0; i < botsToSpawn; i++) {
				localGameEvent->AIManager->AddBot(localGameEvent->SpawnBot());
			}
			spawnBot = false;
		}

		if (restartMatch) {
			localGameEvent->StartNewGame();
			restartMatch = false;
		}

		if (resetPlayers) {
			localGameEvent->ResetPlayers();
			resetPlayers = false;
		}

		if (resetBalls) {
			localGameEvent->ResetBalls();
			resetBalls = false;
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
			std::cout << "New Max Players: " << localGameEvent->MaxPlayers << std::endl;

			allowMorePlayers = false;

		}

		if (setWarmupTime) {
			localGameEvent->WarmupTime = 0;
			setWarmupTime = false;
		}
	
		if (setScoreAndTime) {
			if (localGameEvent->Teams.IsValidIndex(0)) {
				localGameEvent->Teams.GetByIndex(0)->SetScore(blueScore);
			}
			if (localGameEvent->Teams.IsValidIndex(1)) {
				localGameEvent->Teams.GetByIndex(1)->SetScore(orangeScore);
			}
			//localGameEvent->SetScoreAndTime(localGameEvent->GetLocalPrimaryPlayer(), blueScore, orangeScore, localGameEvent->GameTimeRemaining, localGameEvent->bOverTime, false);
			setScoreAndTime = false;
		}

		if (respawnTime != localGameEvent->RespawnTime) {
			localGameEvent->RespawnTime = respawnTime;
		}
		if (disableGoalDelay != localGameEvent->bDisableGoalDelay) {
			localGameEvent->bDisableGoalDelay = disableGoalDelay;
		}
		
		if (unlimitedTime != localGameEvent->bUnlimitedTime) {
			localGameEvent->bUnlimitedTime = unlimitedTime;
		}

		

		if (updatePlayerMessages) {
			//std::cout << localGameEvent->GoalScoredMessage->LocalizedMessage.ToString() << std::endl;
			localGameEvent->GoalScoredMessage->LocalizedMessage = Utils::to_fstring(goalScoredMessage);
			updatePlayerMessages = false;
		}


		for (int k = 0; k < localGameEvent->Players.Num(); k++)
		{
			//SDK::AController* playerControllers = localGameEvent->Players.GetByIndex(k);
			//_bstr_t b(playerControllers->GetHumanReadableName().c_str());
		}
		if (hideReplays) {
			localGameEvent->bPlayReplays = false;
			hideReplays = false;
		}

		if (ballSpawnTest) {
			//ABall_TA* demoBall = localGameEvent->SpawnBall(localGameEvent->playercontr->Car->Location, true, false, localGameEvent->BallArchetype->GetHumanReadableName());
			ballSpawnTest = false;
		}

		if (testServerSay) {
			((APlayerController_TA*)InstanceStorage::PlayerController())->ServerSayInternal_TA(FString(L"Test"),EChatChannel::EChatChannel_Match, false);
			testServerSay = false;
		}

		if (testTrainingSpawn) {

			AGameEvent_TrainingEditor_TA* trainingEditor = (SDK::AGameEvent_TrainingEditor_TA*)InstanceStorage::GameEvent();
			FVector ballLoc = { 0,0,0 };
			FVector playerLoc = { 2000,2000,2000 };
			FRotator ballRot = { 0,0,0 };
			FRotator playerRot = { 0,0,0 };
			//trainingEditor->SpawnBallAndStartPointAt(ballLoc, ballRot, playerLoc, playerRot);
			TArray<class ADynamicSpawnPointMesh_TA*> spawnPoints = trainingEditor->CarSpawnPoints;
			for (int k = 0; k < spawnPoints.Num(); k++)
			{
				spawnPoints.GetByIndex(k)->SetLocation(playerLoc);
			}
			testTrainingSpawn = false;
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
	if (freezeBots) {

		if (localGameEvent) {
			TArray<class AAIController_TA*> bots = localGameEvent->AIManager->Bots;
			for (int i = 0; i < bots.Num(); i++) {
				bots.GetByIndex(i)->DoNothing();
			}
		}
		freezeBots = false;

	}
	if (removeBots) {
		if (localGameEvent) {
			TArray<class AAIController_TA*> bots = localGameEvent->AIManager->Bots;
			int botsToDelete = bots.Num();
			std::cout << "Total Bots: " << botsToDelete << std::endl;
			for (int i = 0; i < botsToDelete; i++) {
				localGameEvent->RemovePlayer(bots[i]);
				std::cout << "Total Bots: " << bots.Num() << std::endl;
				//spawnedBotsCount--;
			}
		}
		removeBots = false;
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

