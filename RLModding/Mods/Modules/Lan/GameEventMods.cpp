#include "GameEventMods.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion
#include <ctime>
#include <chrono>
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
		if (ImGui::CollapsingHeader("Ridiculous Settings", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{

			ImGui::Checkbox("Disable Own Goals", &disableOwnGoal);
			ImGui::InputInt("# Bounces", &bouncesRemaining); ImGui::SameLine();
			ImGui::Checkbox("Use Bounce based time.", &bounceBasedTime);

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
			ImGui::SameLine();

			if (ImGui::Button("Test Training Spawns")) {
				testTrainingSpawn = true;
			}
			if (ImGui::Button("Test Goal disabled")) {
				testGoalDisable = true;
			}
			/*
			if (ImGui::Button("Test Change Name")) {
				testChangeName = true;
			}
			*/
			if (ImGui::Button("Hide Game Ball")) {
				hideGameBall = true;
			}
			ImGui::ColorEdit4("Arena Color Test", (float*)&arenaCol);

			if (ImGui::Button("Change Arena Color")) {
				testArenaColor = true;
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

		if (bounceBasedTime) {
			//localGameEvent->bUnlimitedTime = true;
			//lastBallUpdateTime = std::chrono::high_resolution_clock::now();
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

		if (localGameEvent && localGameEvent->AIManager) {
			TArray<class AAIController_TA*> bots = localGameEvent->AIManager->Bots;
			for (int i = 0; i < bots.Num(); i++) {
				bots.GetByIndex(i)->DoNothing();
			}
		}
		freezeBots = false;

	}
	if (removeBots) {
		if (localGameEvent && localGameEvent->AIManager) {
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
	if (hideGameBall) {
		SDK::TArray< class SDK::ABall_TA* > gameBalls = localGameEvent->GameBalls;

		for (int i = 0; i < gameBalls.Num(); i++) {
			if (gameBalls.IsValidIndex(i) && gameBalls[i] && !gameBalls[i]->bDeleteMe) {
				gameBalls[i]->SetHidden(true);
			}
			
		}
	}

	if (disableGoals) {
		if (!goalDisabled) {
			for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
				SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
				if (CheckObject && CheckObject->IsA(AGoalVolume_TA::StaticClass())) {
					if (!strstr(CheckObject->GetFullName().c_str(), "Default")) {
						AGoalVolume_TA* goalVolume = reinterpret_cast<SDK::AGoalVolume_TA*>(CheckObject);
						if (goalVolume) {
							goalVolume->bPawnsOnly = true;
							goalDisabled = true;

						}
					}
				}
			}

		}
	}
	else {
		for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
			SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
			if (CheckObject && CheckObject->IsA(AGoalVolume_TA::StaticClass())) {
				if (!strstr(CheckObject->GetFullName().c_str(), "Default")) {
					AGoalVolume_TA* goalVolume = reinterpret_cast<SDK::AGoalVolume_TA*>(CheckObject);
					if (goalVolume) {
						goalVolume->bPawnsOnly = false;
					}
				}
			}
		}
		goalDisabled = false;

	}

	if (testGoalDisable) {
		APylon_Soccar_TA* pylon = localGameEvent->Pylon;
		TArray<class UGoal_TA*> goals = localGameEvent->Goals;
		FVector newLoc = pylon->Location;
		newLoc.Z *= -1000;
		newLoc.Y *= -1000;
		newLoc.X *= -1000;
		for (int i = 0; i < goals.Num(); i++) {
			//goals[i]->TeamNum = 10;
			
			//pylon->SetLocation(newLoc);
			//goals[i]->GoalDirection = pylon;
			//goals[i]->bOnlyGoalsFromDirection = true;
			//goals[i]->Location = { 0,0, -2000.0 };
			//goals[i] = NULL;
		}
		//localGameEvent->bNoContest = true;
		

		for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
			SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
			if (CheckObject && CheckObject->IsA(AGoalVolume_TA::StaticClass())) {
				if (!strstr(CheckObject->GetFullName().c_str(), "Default")) {
					AGoalVolume_TA* goalVolume = reinterpret_cast<SDK::AGoalVolume_TA*>(CheckObject);
					if (goalVolume) {
						goalVolume->bPawnsOnly = true;
					}
				}
			}
		}

		

		testGoalDisable = false;
	}

	if (testArenaColor) {
		ACar_TA* myCar = InstanceStorage::PlayerController()->Car;
		TArray< struct ATeam_TA* > gameTeams = localGameEvent->Teams;
		for (int j = 0; j < gameTeams.Num(); j++)
		{
			SDK::TArray< struct SDK::FLinearColor > colors = gameTeams.GetByIndex(j)->CarColorSet->Colors;
			for (int k = 0; k < colors.Num(); k++)
			{
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).R = arenaCol[0];
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).G = arenaCol[1];
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).B = arenaCol[2];
			}
			gameTeams.GetByIndex(j)->TeamColor.R = arenaCol[0];
			gameTeams.GetByIndex(j)->TeamColor.G = arenaCol[1];
			gameTeams.GetByIndex(j)->TeamColor.B = arenaCol[2];
			gameTeams.GetByIndex(j)->SetColorList(colors, true);

		}
		testArenaColor = false;
	}
	if (testChangeName) {
		std::cout << "I FOUDN HIM! " << InstanceStorage::PlayerController()->PRI->PlayerName.ToString() << std::endl;
		//InstanceStorage::PlayerController()->PRI->SetPlayerName(FString(L"THis is meNo dfdf"));
		//InstanceStorage::PlayerController()->PRI->SetPlayerNameSanitized(InstanceStorage::PlayerController()->PRI->PlayerName, FString(L"THis is meNo dfdf"));
		//InstanceStorage::PlayerController()->PRI->SetPawnType(EPawnType::PT_Editor); //WORKS
		//localPlayer->HandlePlayerNameChanged(InstanceStorage::PlayerController()->PRI);
		
		if (InstanceStorage::GameInfo()) {
			APlayerStart_TA* playerStart = (APlayerStart_TA*)InstanceStorage::GameInfo()->ChoosePlayerStart(InstanceStorage::PlayerController(), 0);
			if (playerStart) std::cout << "FOUND AGOALDSLKFJDKF" << std::endl;
			else std::cout << "no goal" << std::endl;
			//InstanceStorage::GameInfo()->ChangeName(InstanceStorage::PlayerController(), FString(L"Butter"), true);
			//TArray<struct FName> disabled = InstanceStorage::GameInfo()->GetGameMode()->DisallowedMutatorCategories;
			//for (int i = 0; i < disabled.Num(); i++) {
			//	std::cout << disabled[i].GetName() << std::endl;
			//}
			//InstanceStorage::GameInfo()->InitGame(FString(L"InverseGravity"), &error);
			//InstanceStorage::GameInfo()->ForceKickPlayer(InstanceStorage::PlayerController(), FString(L"I don't like you"));

		}
		
		//APlayerStart_TA* playerStart = reinterpret_cast<SDK::APlayerStart_TA*>(Utils::GetInstanceOf(APlayerStart_TA::StaticClass()));
		//if (playerStart) std::cout << "FOUND AGOALDSLKFJDKF" << std::endl;
		//else std::cout << "no goal" << std::endl;
		//AAIController_TA* newBot = localGameEvent->SpawnBot();
		//InstanceStorage::PlayerController()->PRI->SetCar(newBot->Car);

		testChangeName = false;
		
	}
}

void GameEventMods::onGameTimeUpdated(Event* e) {
	
}

void GameEventMods::eventBallHitGround(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (bounceBasedTime) {
		ABall_TA* hitBall = (SDK::ABall_TA*)e->getCallingObject();

		if (hitBall && abs(hitBall->Location.Z - lastBallPos.Z) > 3 && (abs(hitBall->Location.X - lastBallPos.X) > 3 || abs(hitBall->Location.Y - lastBallPos.Y) > 3)) {
			bouncesRemaining--;
			localGameEvent->GameTimeRemaining = bouncesRemaining;
			if (localGameEvent->GameTimeRemaining == 0 && localGameEvent->GetTotalScore() > 0 && localGameEvent->GetTotalScore() % 2 != 0) {
				localGameEvent->EndGame();
			}
		}
		else {
			// Not high enough to count as bounce
		}
		

	}
}
void GameEventMods::onBallTick(Event* e) {
	ABall_TA* currBall = (SDK::ABall_TA*)e->getCallingObject();
	if (bounceBasedTime) {
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
		if (localGameEvent && bounceBasedTime) {
			localGameEvent->GameTimeRemaining = bouncesRemaining;
		}
		//float newTime = (float)(e->getParams<SDK::ABall_TA_Tick_Params>()->DeltaTime);
		std::chrono::high_resolution_clock::time_point currTime = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(currTime - lastBallUpdateTime);

		if (time_span.count() > 0.1) {
			lastBallPos = currBall->Location;
			lastBallUpdateTime = currTime;
		}
		//std::cout << "Updated ball tick: " << time_span.count() << std::endl;
	}
}

void GameEventMods::gameInfoInitGame(Event* e) {


}