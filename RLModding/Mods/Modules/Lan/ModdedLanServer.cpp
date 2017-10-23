#include "ModdedLanServer.h"

ModdedLanServer::ModdedLanServer(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

ModdedLanServer::~ModdedLanServer() {}

void ModdedLanServer::onMenuOpen() {
}

void ModdedLanServer::onMenuClose() {
}

void ModdedLanServer::ExportSettings(pt::ptree) {}
void ModdedLanServer::ImportSettings(pt::ptree) {}

void ModdedLanServer::DrawMenu() {
	ImGui::Begin("LAN Options", &p_open, ImVec2(504, 698), 0.75f);

	if (gameModesCombo[defaultGameMode] != "Replay" && gameModesCombo[defaultGameMode] != "FreePlay") {
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "Sadly Psyonix has disabled some of the custom mutator settings.");
	}
	if (gameModesCombo[defaultGameMode] == "Replay" && replayCount == 0) {
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "When manually entering a replay file the map needs to be selected as well.");
	}

	ImGui::Combo("Map", &selectedMap, friendlyMapNames, IM_ARRAYSIZE(friendlyMapNames));
	ImGui::Combo("Game Mode", &defaultGameMode, gameModesCombo, IM_ARRAYSIZE(gameModesCombo));

	// If replay display replay options
	if (defaultGameMode == 3) {
	}
	else if (gameModesCombo[defaultGameMode] == "Replay") {
		// if not populated yet, give directions to populate replays
		if (replayCount == 0) {
			ImGui::InputText("Replay Save Name (w/o .replay)", manualReplaySaveName, IM_ARRAYSIZE(manualReplaySaveName));
			ImGui::TextColored(ImVec4(0.317f, 0.901f, 0.941f, 1.0f), "To fetch a list of your replays, go to \"Extras\" -> \"Replays\" .");
		}
		else {
			ImGui::Combo("Replay Save Name", &selectedReplayIndex, replaySaveName, IM_ARRAYSIZE(replaySaveName));
			if (selectedReplayIndex != -1) {
				std::string replayMapName = (std::string)replayData[selectedReplayIndex].mapName;
				//std::cout << replayMapName << std::endl;
				for (std::vector<MapInfo>::size_type i = 0; i != maps.size(); i++) {
					if(strcmpi(maps[i].filename.c_str(),replayMapName.c_str()) == 0) {
						selectedMap = i;
						break;
					}
				}
				//;
			}
			UReplayManager_TA* replayManager = reinterpret_cast<SDK::UReplayManager_TA*>(Utils::GetInstanceOf(UReplayManager_TA::StaticClass()));
			if (replayManager) {
				//std::cout << "Replays! found " << replayManager->ReplaysPath.ToString() << std::endl;
				//replayManager->LoadHeaders(replayManager->__EventHeadersLoaded__Delegate);
				//TArray<struct FReplayHeaderLoadResult> Headers;
				//replayManager->EventHeadersLoaded(replayManager, Headers);
			}
			else {
				std::cout << "no replays found" << std::endl;

			}
		}
		
	
	} else if (gameModesCombo[defaultGameMode] == "Training Editor") {
		ImGui::Combo("Training Name", &selectedTrainingIndex, trainingName, IM_ARRAYSIZE(trainingName));
		UReplayManager_TA* replayManager = reinterpret_cast<SDK::UReplayManager_TA*>(Utils::GetInstanceOf(UReplayManager_TA::StaticClass()));
		if (replayManager) {
			std::cout << "Replays! found " << replayManager->ReplaysPath.ToString() << std::endl;
		}
		else {
			std::cout << "no found" << std::endl;

		}
	}
	else if (gameModesCombo[defaultGameMode] == "FreePlay") {

	}
	else {
		ImGui::Combo("Bot Diffculty", &defaultBotDifficulty, botDifficultyCombo, IM_ARRAYSIZE(botDifficultyCombo));
		if (defaultBotDifficulty != 0)
			ImGui::Combo("Team Size", &defaultTeamSize, teamSizeCombo, IM_ARRAYSIZE(teamSizeCombo));
		else
			defaultTeamSize = 0;
		ImGui::Combo("Match Length", &defaultTime, timeCombo, IM_ARRAYSIZE(timeCombo));
		ImGui::Combo("Max Score", &defaultScore, scoreCombo, IM_ARRAYSIZE(scoreCombo));
		ImGui::Combo("Game Speed", &defaultGameSpeed, gameSpeedCombo, IM_ARRAYSIZE(gameSpeedCombo));
		ImGui::Combo("Number of Balls", &defaultBallCount, ballCountCombo, IM_ARRAYSIZE(ballCountCombo));
		ImGui::Combo("Ball Max Speed", &defaultBallSpeed, ballSpeedCombo, IM_ARRAYSIZE(ballSpeedCombo));
		ImGui::Combo("Ball Type", &defaultBallType, ballTypeCombo, IM_ARRAYSIZE(ballTypeCombo));
		ImGui::Combo("Ball Weight", &defaultBallWeight, ballWeightCombo, IM_ARRAYSIZE(ballWeightCombo));
		ImGui::Combo("Ball Size", &defaultBallSize, ballSizeCombo, IM_ARRAYSIZE(ballSizeCombo));
		ImGui::Combo("Ball Bounciness", &defaultBallBounce, ballBouncinessCombo, IM_ARRAYSIZE(ballBouncinessCombo));
		ImGui::Combo("Boost Amount", &defaultBoostAmount, boostAmountCombo, IM_ARRAYSIZE(boostAmountCombo));
		ImGui::Combo("Rumble", &defaultRumble, rumbleCombo, IM_ARRAYSIZE(rumbleCombo));
		ImGui::Combo("Boost Strength", &defaultBoostStrength, boostStrengthCombo, IM_ARRAYSIZE(boostStrengthCombo));
		ImGui::Combo("Gravity", &defaultGravity, gravityCombo, IM_ARRAYSIZE(gravityCombo));
		ImGui::Combo("Demolish", &defaultDemoSettings, demoSettingsCombo, IM_ARRAYSIZE(demoSettingsCombo));
		ImGui::Combo("Respawn Time", &defaultRespawnTime, respawnTimeCombo, IM_ARRAYSIZE(respawnTimeCombo));
		ImGui::Combo("Testing", &defaultTesting, testingCombo, IM_ARRAYSIZE(testingCombo));
	}
	if (ImGui::Button("Launch")) {
		printf("Created LAN Server via GUI");
		mapName = maps[selectedMap].filename;
		create_mutator_string();
		Interfaces::GUI().isGUIOpen = false;
		bTravel = true;
	} ImGui::SameLine();

	ImGui::Checkbox("Preview Launch String", &previewLaunchCommand);
	if (previewLaunchCommand) {
		create_mutator_string();

		std::string command = maps[selectedMap].filename + "?game=" + str_gameMode + "playtest?listen?lan?" + str_mutators;
		ImGui::Text(command.c_str());
	}

	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}
	ImGui::End();
}

void ModdedLanServer::onMainMenuTick(Event* event) {
	if (bTravel) {
		travel();
		bTravel = false;
		p_open = false; // Hide window on travel

	}
}

void ModdedLanServer::onGameEventTick(Event* event) {
	if (bTravel) {
		travel();
		bTravel = false;
		p_open = false; // Hide window on travel

	}
}

void ModdedLanServer::travel() {
	if (!Interfaces::GUI().isGUIOpen) {
		LAN_Server = reinterpret_cast<SDK::UOnlineGameLanServer_X*>(Utils::GetInstanceOf(UOnlineGameLanServer_X::StaticClass()));
		if (LAN_Server) {
			if (gameModesCombo[defaultGameMode] == "Replay" && selectedReplayIndex != -1) {

			}
			std::string command = mapName + "?game=" + str_gameMode + "playtest?listen?lan?" + str_mutators;
			printf("Command: %s\n", command);
			LAN_Server->TravelToMap(Utils::to_fstring(command));
			std::cout << "State: " << getCurrentGameState() << std::endl;
		}
	}
}

void ModdedLanServer::create_mutator_string() {
	str_gameMode = mutators[gameModesCombo[defaultGameMode]];

	if (gameModesCombo[defaultGameMode] == "FreePlay") {
		str_mutators = "?FreePlay";
		return;
	}

	if (gameModesCombo[defaultGameMode] == "Replay") {
		if (replayCount == 0) {
			str_mutators = "Replay=" + (std::string)manualReplaySaveName;
		}
		else {
			str_mutators = "Replay=" + (std::string)replayData[selectedReplayIndex].fileName;

		}
		return;
	}
	if (gameModesCombo[defaultGameMode] == "Training Editor") {
		if (selectedTrainingIndex != -1) {
			str_mutators = "Training=" + (std::string)trainingName[selectedTrainingIndex];
		}
		else {
			str_mutators = "Training=";

		}
		return;
	}
	str_mutators = "GameTags=";
	if (botDifficultyCombo[defaultBotDifficulty] != "No Bots")
		str_mutators += mutators[botDifficultyCombo[defaultBotDifficulty]];
	if (defaultTeamSize != 0)
		str_mutators += mutators[teamSizeCombo[defaultTeamSize]];
	str_mutators += mutators[std::string(timeCombo[defaultTime]) + "Time"];
	str_mutators += mutators[std::string(scoreCombo[defaultScore]) + "Score"];
	str_mutators += mutators[gameSpeedCombo[defaultGameSpeed]];
	if (defaultBallSpeed == 0)
		str_mutators += mutators[ballSpeedCombo[defaultBallSpeed]];
	else
		str_mutators += mutators[std::string(ballSpeedCombo[defaultBallSpeed]) + "Ball"];
	str_mutators += mutators[ballTypeCombo[defaultBallType]];
	str_mutators += mutators[ballWeightCombo[defaultBallWeight]];
	str_mutators += mutators[ballSizeCombo[defaultBallSize]];
	if (ballBouncinessCombo[defaultBallBounce] != "Default")
		str_mutators += mutators[std::string(ballBouncinessCombo[defaultBallBounce]) + "Bounce"];
	else
		str_mutators += mutators[ballBouncinessCombo[defaultBallBounce]];
	if (boostAmountCombo[defaultBoostAmount] != "Default")
		str_mutators += mutators[std::string(boostAmountCombo[defaultBoostAmount]) + "Boost"];
	else
		str_mutators += mutators[boostAmountCombo[defaultBoostAmount]];

	str_mutators += mutators[rumbleCombo[defaultRumble]];
	str_mutators += mutators[boostStrengthCombo[defaultBoostStrength]];
	str_mutators += mutators[gravityCombo[defaultGravity]];
	str_mutators += mutators[demoSettingsCombo[defaultDemoSettings]];
	str_mutators += mutators[respawnTimeCombo[defaultRespawnTime]];
	str_mutators += testingCombo[defaultTesting];
}

void ModdedLanServer::eventReplayHeadersLoaded(Event* e) {
	//std::cout << "Load Headers!" << std::endl;
	std::fill_n(replaySaveName, 100, "\0");

	TArray<struct FReplayHeaderLoadResult> replayHeaders = e->getParams<SDK::UReplayManager_TA_EventHeadersLoaded_Params>()->Headers;
	replayCount = replayHeaders.Num();

	for (int i = 0; i < replayHeaders.Num() && i < 100; i++) {
		std::string replayFileName = replayHeaders.GetByIndex(i).Header->Filename.ToString();
		std::string replayMapName = replayHeaders.GetByIndex(i).Header->MapName.GetName();

		ReplayData newReplay;
		newReplay.fileName = Utils::stringToCharArray(replayFileName);
		newReplay.mapName = Utils::stringToCharArray(replayMapName);
		replayData[i] = newReplay; 

		if (replayHeaders.GetByIndex(i).Header->ReplayName.IsValid()) {
			std::cout << replayHeaders.GetByIndex(i).Header->ReplayName.ToString() << std::endl;
			std::string replayName = replayHeaders.GetByIndex(i).Header->ReplayName.ToString() + " | " + replayFileName;

			replaySaveName[i] = Utils::stringToCharArray(replayName);
		}
		else {
			std::cout << replayHeaders.GetByIndex(i).Header->Filename.ToString() << std::endl;
			replaySaveName[i] = replayData[i].fileName;
		}
	}
}

void ModdedLanServer::eventAllTrainingFilesLoaded(Event* e) {
	std::cout << "Browser loaded." << std::endl;
	UGFxData_TrainingModeBrowser_TA* trainingBrowser = reinterpret_cast<UGFxData_TrainingModeBrowser_TA*>(e->getCallingObject());
	
 }

