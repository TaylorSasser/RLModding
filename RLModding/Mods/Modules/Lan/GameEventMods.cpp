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

void GameEventMods::loadMod() {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
		respawnTime = localGameEvent->RespawnTime;
		disableGoalDelay = localGameEvent->bDisableGoalDelay;
		enableUnfairTeams = localGameEvent->bUnfairTeams;
		fillWithAI = localGameEvent->bFillWithAI;
		botSkill = localGameEvent->BotSkill;
		showReplays = localGameEvent->bPlayReplays;
		maxTeamSize = localGameEvent->MaxTeamSize;
		alwaysAutoTeam = localGameEvent->bAlwaysAutoSelectTeam;
		maxScore = localGameEvent->MaxScore;

		if(localGameEvent->BallSpawnPoint)
			ballSpawnPoint = localGameEvent->BallSpawnPoint;

		if (localGameEvent->Teams[0] && localGameEvent->Teams[0]->CustomTeamName.IsValid()) {
			//maxBlueTeamSize = localGameEvent->Teams[0]->Size;
			strcpy(blueTeamName,Utils::stringToCharArray(localGameEvent->Teams[0]->CustomTeamName.ToString()));
		}
		else if (localGameEvent->Teams[0]) {
			//strcpy(blueTeamName,Utils::stringToCharArray(localGameEvent->Teams[0]->SanitizedTeamName.ToString()));
			strcpy(blueTeamName, "Blue");
		}
		if (localGameEvent->Teams[1] && localGameEvent->Teams[1]->CustomTeamName.IsValid()) {
			//maxOrangeTeamSize = localGameEvent->Teams[1]->Size;
			strcpy(orangeTeamName,Utils::stringToCharArray(localGameEvent->Teams[1]->CustomTeamName.ToString()));
		}
		else if (localGameEvent->Teams[1]) {
			//strcpy(orangeTeamName,Utils::stringToCharArray(localGameEvent->Teams[1]->SanitizedTeamName.ToString()));
			strcpy(orangeTeamName, "Orange");
		}
		
	}

}

void GameEventMods::unloadMod() {
}


void GameEventMods::DrawMenu() {
	if (GameEventMods::isEnabled()) {

		// Game Event Controls
		ImGui::Begin("Game Event Mods", &p_open, ImVec2(552, 645), 0.75f);
		ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.172f, 0.572f, 0.929f, 1.0f));

		ImGui::PushStyleVar(ImGuiStyleVar_ChildWindowRounding, 5.0f);


		if (ImGui::CollapsingHeader("Game Controls", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			ImGui::PushStyleColor(ImGuiCol_ChildWindowBg, ImVec4(0.933f, 0.925f, 0.925f, 0.2f));
			ImGui::BeginChild("gameControls", ImVec2(0, ImGui::GetItemsLineHeightWithSpacing() * 3), true);

			if (ImGui::Button("Pause Server")) {
				pauseServer = true;
			} ImGui::SameLine();
			if (ImGui::Button("Restart Match")) {
				restartMatch = true;
			} ImGui::SameLine();

			if (ImGui::Button("End Match")) {
				endMatch = true;
			} ImGui::SameLine();

			if (ImGui::Button("Force Overtime")) {
				startOverTime ^= 1;
			}
			
			if (ImGui::Button("Reset Players")) {
				resetPlayers = true;
			} ImGui::SameLine();

			if (ImGui::Button("Reset Balls")) {
				resetBalls = true;
			}

			ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "Warmup time must be set before the first player has spawned.");

			ImGui::InputInt("Warmup", &warmupTime); ImGui::SameLine();

			if (ImGui::Button("Set Warmup Time")) {
				setWarmupTime = true;

			}

			ImGui::EndChild();
			ImGui::PopStyleColor();
		}

		if (ImGui::CollapsingHeader("Match Settings", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			ImGui::PushStyleColor(ImGuiCol_ChildWindowBg, ImVec4(0.682f, 0.803f, 0.937f, 0.2f));
			ImGui::BeginChild("matchControls", ImVec2(0, ImGui::GetItemsLineHeightWithSpacing() * 6), true);

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

			ImGui::PushItemWidth(100);
			ImGui::InputInt("Max Score", &maxScore);
			if (ImGui::IsItemHovered())
				ImGui::SetTooltip("A team needs to score this many goals to win. 0 if unlimited.");
			ImGui::Checkbox("Disable Goal Delay", &disableGoalDelay);
			ImGui::Checkbox("Unlimited Time", &unlimitedTime);
			ImGui::InputInt("Time", &gameTimeLength); ImGui::SameLine();
			if (ImGui::Button("Set Game Time")) {
				setGameTime = true;
			}
			//ImGui::Checkbox("Show Replays", &showReplays);

			ImGui::Checkbox("Leave Penelty", &hasLeaveMatchPenalty); 
			if (ImGui::IsItemHovered())
				ImGui::SetTooltip("Doesn't actually add penalty.");
			ImGui::SameLine();
			ImGui::Checkbox("Vote to Forfeit Enabled", &canVoteToForfeit);
			ImGui::PushItemWidth(150);
			ImGui::InputFloat("Post Goal Time", &postGoalTime, 0.5f, 1.0f, 1);
			if (ImGui::IsItemHovered())
				ImGui::SetTooltip("Amount of time to let players drive around after a goal.");

			ImGui::EndChild();
			ImGui::PopStyleColor();
		}

		if (ImGui::CollapsingHeader("Team Settings", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			ImGui::PushStyleColor(ImGuiCol_ChildWindowBg, ImVec4(0.933f, 0.925f, 0.925f, 0.2f));
			ImGui::BeginChild("teamControls", ImVec2(0, ImGui::GetItemsLineHeightWithSpacing()*6), true);

			ImGui::PushItemWidth(150);
			ImGui::InputText("Blue Team Name", blueTeamName, IM_ARRAYSIZE(blueTeamName));	ImGui::SameLine();
			ImGui::PushItemWidth(150);
			ImGui::InputText("Orange Team Name", orangeTeamName, IM_ARRAYSIZE(orangeTeamName)); ImGui::SameLine();
			if (ImGui::Button("Apply Names")) {
				applyNewTeamNames = true;
			}
			if (ImGui::IsItemHovered())
				ImGui::SetTooltip("In order for players to see the change they will have to rejoin. Or set before they join.");
			//ImGui::InputInt("# of Teams", &teamsNum);
			//ImGui::InputInt("Blue Team Max Players", &maxBlueTeamSize); ImGui::SameLine();
			//ImGui::InputInt("Orange Team Max Players", &maxOrangeTeamSize);
			ImGui::InputInt("Max Players per Team", &maxTeamSize);
			if (ImGui::IsItemHovered())
				ImGui::SetTooltip("Currently doesn't allow more bots per team if unfair teams or fill with AI enabled.");
			ImGui::Checkbox("Unfair Teams", &enableUnfairTeams); ImGui::SameLine();
			ImGui::Checkbox("Fill with AI", &fillWithAI);
			ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "When changing \"fill with AI\" setting you will need to spawn a single bot.");
			ImGui::Checkbox("Always Auto Select Team", &alwaysAutoTeam);
			if (ImGui::IsItemHovered())
				ImGui::SetTooltip("Not sure what this does exactly...");

			ImGui::InputFloat("Auto start time if ball not hit.", &ballHasBeenHitStartDelay, 0.5f, 1.0f, 1);
			if (ImGui::IsItemHovered())
				ImGui::SetTooltip("Amount of seconds to wait before starting the game timer if the ball hasn't been hit after kickoff.");

			ImGui::EndChild();
			ImGui::PopStyleColor();
		}

		if (ImGui::CollapsingHeader("Message Settings", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			ImGui::PushStyleColor(ImGuiCol_ChildWindowBg, ImVec4(0.682f, 0.803f, 0.937f, 0.2f));
			ImGui::BeginChild("messageControls", ImVec2(0, ImGui::GetItemsLineHeightWithSpacing() * 4), true);
			ImGui::TextColored(ImVec4(0.9f,0.0f,0.0f,1.0f),"WARNING.  Changing these values will cause your game to crash when leaving.");
			ImGui::Text("The Server should work fine until then.");

			ImGui::PushItemWidth(200);
			ImGui::InputText("Goal Scored Message", goalScoredMessage, IM_ARRAYSIZE(goalScoredMessage));

			if (ImGui::Button("Update Player Messages")) {
				updatePlayerMessages = true;
			}
			ImGui::EndChild();
			ImGui::PopStyleColor();
		}
		

		if (ImGui::CollapsingHeader("Bots",ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			ImGui::PushStyleColor(ImGuiCol_ChildWindowBg, ImVec4(0.933f, 0.925f, 0.925f, 0.2f));
			ImGui::BeginChild("botsControls", ImVec2(0, ImGui::GetItemsLineHeightWithSpacing() * 5), true);

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
			ImGui::InputFloat("Bot Skill", &botSkill, 0.5f, 1.0f, 1);
			ImGui::EndChild();
			ImGui::PopStyleColor();
			
		}
		if (ImGui::CollapsingHeader("Ridiculous Settings", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen))
		{
			ImGui::PushStyleColor(ImGuiCol_ChildWindowBg, ImVec4(0.682f, 0.803f, 0.937f, 0.2f));
			ImGui::BeginChild("ridicControls", ImVec2(0, ImGui::GetItemsLineHeightWithSpacing() * 3), true);

			ImGui::Checkbox("Disable Goals", &disableGoals);
			ImGui::InputInt("Goal Points (Orange)", &goalPointsOrange);
			ImGui::SameLine();
			ImGui::InputInt("Goal Points (Blue)", &goalPointsBlue);
			//ImGui::Checkbox("Disable Own Goals", &disableOwnGoal);
			ImGui::InputInt("# Bounces", &bouncesRemaining); 
			ImGui::SameLine();
			ImGui::Checkbox("Use Bounce based time.", &bounceBasedTime);

			ImGui::EndChild();
			ImGui::PopStyleColor();
		}
		if (ImGui::CollapsingHeader("Two's test stuff."))
		{
			ImGui::PushStyleColor(ImGuiCol_ChildWindowBg, ImVec4(0.933f, 0.925f, 0.925f, 0.2f));
			ImGui::BeginChild("twosControls", ImVec2(0, ImGui::GetItemsLineHeightWithSpacing() * 10), true);

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
			} ImGui::SameLine();
			if (ImGui::Button("Test Ball Spawn Point")) {
				testBallSpawnPoint = true;
			}
			if (ImGui::Button("Test Player Weld")) {
				testWeldPlayers = true;
			}
			
			ImGui::InputInt("Damage Amount", &ballDamagePerHit); ImGui::SameLine();
			ImGui::Checkbox("Test Damage Mode.", &damageMode);

			/*
			if (ImGui::Button("Test Change Name")) {
				testChangeName = true;
			}
			*/
			if (ImGui::Button("Test Spectator actions")) {
				spectatorEditMode = true;
			}
			
			if (ImGui::Button("Test Ban")) {
				testBan = true;
			} ImGui::SameLine();
			if (ImGui::Button("Test Add Chat")) {
				testAddChat = true;
			}

			if (ImGui::Button("Test askfhjsdfhgfjk")) {

				ballSpawnTest = true;
			}

			if (ImGui::Button("Hide Game Ball")) {
				hideGameBall = true;
			}
			ImGui::ColorEdit4("Arena Color Test", (float*)&arenaCol);

			if (ImGui::Button("Change Arena Color")) {
				testArenaColor = true;
			}
			ImGui::EndChild();
			ImGui::PopStyleColor();

		}
		
		ImGui::PopStyleVar();
		ImGui::PopStyleColor();


		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}

		ImGui::End();
	}
}

void GameEventMods::onMenuOpen() {
	loadMod();
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

		if (endMatch) {
			localGameEvent->EndGame();
			endMatch = false;
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

		// Match Settings
		if (goalPointsBlue > 1 || goalPointsOrange > 1) {
			APylon_Soccar_TA* pylon = localGameEvent->Pylon;
			TArray<class UGoal_TA*> goals = pylon->Goals;
			if (goals.IsValidIndex(0)) {
				goals.GetByIndex(0)->PointsToAward = goalPointsBlue;
			}
			if (goals.IsValidIndex(1)) {
				goals.GetByIndex(1)->PointsToAward = goalPointsOrange;
			}
			defaultGoals = false;
		}
		else if (!defaultGoals) {
			if (goalPointsBlue <= 1) {
				APylon_Soccar_TA* pylon = localGameEvent->Pylon;
				TArray<class UGoal_TA*> goals = pylon->Goals;
				if (goals.IsValidIndex(0)) {
					goals.GetByIndex(0)->PointsToAward = 1;
				}
			}
			if (goalPointsOrange <= 1) {
				APylon_Soccar_TA* pylon = localGameEvent->Pylon;
				TArray<class UGoal_TA*> goals = pylon->Goals;
				if (goals.IsValidIndex(1)) {
					goals.GetByIndex(1)->PointsToAward = 1;
				}
			}
			defaultGoals = true;
		}

		if (maxScore != localGameEvent->MaxScore) {
			localGameEvent->MaxScore = maxScore;
		}

		if (applyNewTeamNames) {
			if (localGameEvent->Teams[0]) {//&& localGameEvent->Teams[0]->Size != maxBlueTeamSize) {
				localGameEvent->Teams[0]->SetCustomTeamName(Utils::to_fstring(blueTeamName));


			}
			if (localGameEvent->Teams[1]) {// && localGameEvent->Teams[1]->Size != maxOrangeTeamSize) {
				localGameEvent->Teams[1]->SetCustomTeamName(Utils::to_fstring(orangeTeamName));

			}
			applyNewTeamNames = false;
		}

		// Team settings
		if (localGameEvent->bUnfairTeams != enableUnfairTeams) {
			localGameEvent->SetUnfairTeams(enableUnfairTeams);
		}
		
		localGameEvent->bFillWithAI = fillWithAI;
		localGameEvent->bAlwaysAutoSelectTeam = alwaysAutoTeam;

		// Set team size
		if (localGameEvent->MaxTeamSize != maxTeamSize) {
			localGameEvent->SetMaxTeamSize(maxTeamSize);
			localGameEvent->SetMaxPlayers(maxTeamSize*2);
			//localGameEvent->NumBots = 20;
			localGameEvent->UpdateMaxTeamSize();
			if (localGameEvent->Teams[0] ) {//&& localGameEvent->Teams[0]->Size != maxBlueTeamSize) {
				localGameEvent->Teams[0]->Size = maxTeamSize;


			}
			if (localGameEvent->Teams[1]) {// && localGameEvent->Teams[1]->Size != maxOrangeTeamSize) {
				localGameEvent->Teams[1]->Size = maxTeamSize;

			}
		}
		

		

		//localGameEvent->bPlayReplays = showReplays;

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
			localGameEvent->WarmupTime = warmupTime;
			//localGameEvent->GotoGameState(FName("Warmup"));
			//InstanceStorage::PlayerController()->Car->SetFrozen(false);
			setWarmupTime = false;
		}
		if (!Utils::FloatCompare(postGoalTime, localGameEvent->PostGoalTime)) {
			//std::cout << localGameEvent->PostGoalTime << std::endl;
			localGameEvent->PostGoalTime = postGoalTime;
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

		if (testBallSpawnPoint) {
			if (localGameEvent->Pylon) {
				//FVector prevLoc = ballSpawnPoint->Location;
				FVector prevLoc = localGameEvent->Pylon->FieldCenter;
				localGameEvent->Pylon->FieldCenter.Z += 1000.0f;

				//ballSpawnPoint->SetLocation(prevLoc);
			}
			testBallSpawnPoint = false;
		}


		if (ballSpawnTest) {
			//ABall_TA* demoBall = localGameEvent->SpawnBall(localGameEvent->playercontr->Car->Location, true, false, localGameEvent->BallArchetype->GetHumanReadableName());
			UForceFeedbackWaveform* wf = reinterpret_cast<SDK::UForceFeedbackWaveform*>(Utils::GetInstanceOf(UForceFeedbackWaveform::StaticClass()));
			UAnimNotify_Rumble* r = reinterpret_cast<SDK::UAnimNotify_Rumble*>(Utils::GetInstanceOf(UAnimNotify_Rumble::StaticClass()));
			InstanceStorage::PlayerController()->PlayRumble(r);

			InstanceStorage::PlayerController()->ClientPlayForceFeedbackWaveform(wf, InstanceStorage::PlayerController()->Car);
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

	if (setGameTime) {
		localGameEvent->GameTime = gameTimeLength;
		localGameEvent->GameTimeRemaining = gameTimeLength;
		setGameTime = false;
	}

	// Bot Mods

	if (!Utils::FloatCompare(localGameEvent->BotSkill, botSkill)) {
		localGameEvent->SetBotSkill(botSkill);
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
			if (localGameEvent->Pylon) {
				//FVector prevLoc = ballSpawnPoint->Location;
				for (int i = 0; i < localGameEvent->Pylon->SpawnPoints.Num(); i++) {
					if (localGameEvent->Pylon->SpawnPoints[i]) {
						FVector oldSpawnLoc = localGameEvent->Pylon->SpawnPoints[i]->Location;
						oldSpawnLoc.Z += 1000;
						localGameEvent->Pylon->SpawnPoints[i]->SetLocation(oldSpawnLoc);
					}
				}
			}
			/*
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
			*/
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
	if (!Utils::FloatCompare(localGameEvent->BallHasBeenHitStartDelay, ballHasBeenHitStartDelay)) {
		localGameEvent->BallHasBeenHitStartDelay = ballHasBeenHitStartDelay;
	}
	
	
	if (testWeldPlayers) {
		if (InstanceStorage::PlayerController() && InstanceStorage::PlayerController()->Car) {
			InstanceStorage::PlayerController()->Car->Gasp();
			std::cout << "Health: " << InstanceStorage::PlayerController()->Car->Health << std::endl;
			//InstanceStorage::PlayerController()->Car->Dam
			ABall_TA* newBall = NULL;
			for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
				
				SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
				if (CheckObject && CheckObject->IsA(ABall_TA::StaticClass())) {
					if (!strstr(CheckObject->GetFullName().c_str(), "Default")) {
						if (strstr(CheckObject->GetFullName().c_str(), "Ball_Puck")) {
							//actor->SetHidden(!actor->bHidden);
							newBall = reinterpret_cast<SDK::ABall_TA*>(CheckObject);

							std::cout << " instance: " << CheckObject->GetFullName() << std::endl;

						}
					}
				}

				/*
				SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
				if (CheckObject && CheckObject->IsA(AActor::StaticClass())) {
					if (!strstr(CheckObject->GetFullName().c_str(), "Default")) {
						AActor* actor = reinterpret_cast<SDK::AActor*>(CheckObject);
						if (actor) {
							actor->SetHidden(!actor->bHidden);
							std::cout << " instance: " << CheckObject->GetFullName() << std::endl;

						}
					}
				}
				*/
			}
			FVector spawnLoc = InstanceStorage::PlayerController()->Car->Location;
			spawnLoc.Z += 100;
			if (newBall) {
				std::cout << "Attempt to ball." << std::endl;
				localGameEvent->SpawnBall(spawnLoc, true, false, newBall->GetHumanReadableName());
			}
			/*
			if (localGameEvent && localGameEvent->AIManager) {
				TArray<class AAIController_TA*> bots = localGameEvent->AIManager->Bots;
				int botsToDelete = bots.Num();
				for (int i = 0; i < botsToDelete; i++) {
					FVector weldLoc = { 0.0f, 0.0f, 0.0f };
					//weldLoc.Y += (float)i/10.0;
					weldLoc.Z += 10;
					//InstanceStorage::PlayerController()->Car->StartDriving();
					//bots[i]->Car->WeldRBActor(, weldLoc, bots[i]->Rotation);
					break;
					//spawnedBotsCount--;
				}
			}
			*/
		}
		testWeldPlayers = false;
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

	// Test leave penalty
	localGameEvent->SetHasLeaveMatchPenalty(hasLeaveMatchPenalty);
	localGameEvent->SetCanVoteToForfeit(canVoteToForfeit);

	if (spectatorEditMode) {
		
		
		//InstanceStorage::PlayerController()->ToggleEditorRound();
		//InstanceStorage::PlayerController()->SwitchToEditPawn();

		//InstanceStorage::PlayerController()->ToggleBetweenCarAndEditPawn();
		
		AGFxHUD_Spectator_TA* spectatorHUD = reinterpret_cast<SDK::AGFxHUD_Spectator_TA*>(Utils::GetInstanceOf(AGFxHUD_Spectator_TA::StaticClass()));

		if (spectatorHUD) {
			ACar_TA* focusCar = spectatorHUD->GetFocusCar();
			focusCar->Demolish(focusCar);
			std::cout << "Demolished viewed car." << std::endl;
		}
		
		spectatorEditMode = false;
	}

	if (testBan) {
		TArray< class AController* > gameEventPlayers = localGameEvent->Players;
		for (int i = 0; i < gameEventPlayers.Num(); i++) {
			APRI_TA* currPRI = NULL;
			bool isBot = false;

			AController* tempController = gameEventPlayers[i];

			if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
				AAIController_TA* currController = (AAIController_TA*)tempController;
				if (currController->Car) {
					currPRI = currController->Car->PRI;
				}
				isBot = true;
			}

			else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
				APlayerController_TA* currController = (APlayerController_TA*)tempController;
				currPRI = currController->PRI;
			}

			if (currPRI) {
				//std::cout << "Owner id: " << localGameEvent->GameOwner->UniqueId.SteamID << std::endl;
				if (currPRI->UniqueId.SteamID != 76561198046347971) {
					if (!isBot) {
						localGameEvent->BanPlayerID(currPRI->UniqueId);
						std::cout << "Banning " << currPRI->PlayerName.ToString() << " | " << currPRI->UniqueId.SteamID << std::endl;
						localGameEvent->FindPCForUniqueID(currPRI->UniqueId)->BannedKick();
					}
					//InstanceStorage::PlayerController()->SetFollowTarget(currPRI);
					//InstanceStorage::PlayerController()->FollowPlayer(currPRI);

					//localGameEvent->FindPCForUniqueID(currPRI->UniqueId)->KickPlayerForReason(FString(L"Test Title"), FString(L"Test Reason"));
				}
					//currPRI->BannedKick();
					//currPRI->SetUniqueId(currPRI->UniqueId);
			}
				
		}

		std::cout << "+++++++ Ban list +++++++ " << std::endl;
		for (int i = 0; i < localGameEvent->BannedPlayers.Num(); i++) {
			std::cout << "Banned " << std::to_string(localGameEvent->BannedPlayers[i].SteamID) << std::endl;

		}

		testBan = false;
	}

	if (testAddChat) {
		SDK::UOnlineSubsystemSteamworks* steam = reinterpret_cast<SDK::UOnlineSubsystemSteamworks*>(Utils::GetInstanceOf(SDK::UOnlineSubsystemSteamworks::StaticClass()));
		if (steam) {
			std::cout << "Found steam data" << std::endl;
			FUniqueNetId newId = steam->LoggedInPlayerId;
			localGameEvent->AddPlayerChatMessage(newId, EChatChannel::EChatChannel_Match, localGameEvent->Teams[0], FString(L"Test message"));
			std::cout << "Chat history size: " << localGameEvent->ChatHistory.Num() << std::endl;
			localGameEvent->BanPlayerID(newId);
		}
		testAddChat = false;
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

void GameEventMods::onBallCarTouch(Event* e) {
	if (damageMode) {
		ACar_TA* lastHitCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<SDK::ABall_TA_OnCarTouch_Params>()->HitCar);
		lastHitCar->Health = lastHitCar->Health - ballDamagePerHit;
		std::cout << "Car health: " << lastHitCar->Health << std::endl;
		if (lastHitCar->Health <= 0) {
			lastHitCar->Demolish(lastHitCar);
		}
	}
}