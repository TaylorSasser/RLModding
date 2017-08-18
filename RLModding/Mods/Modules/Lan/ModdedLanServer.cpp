#include "ModdedLanServer.h"

ModdedLanServer::ModdedLanServer(std::string name, int key, Category cat, GameState gamestate) : ModBase(name,key,cat,gamestate) {}

ModdedLanServer::~ModdedLanServer(){}

void ModdedLanServer::onEnable() {
	std::cout << getCurrentGameState() << std::endl;
}

void ModdedLanServer::onDisable() {
}

void ModdedLanServer::DrawMenu() {
	ImGui::Begin("LAN Options", 0, ImVec2(500, 800), 0.75f);
	ImGui::Combo("Map", &selectedMap, friendlyMapNames, IM_ARRAYSIZE(friendlyMapNames));
	ImGui::Combo("Game Mode", &defaultGameMode, gameModesCombo, IM_ARRAYSIZE(gameModesCombo));
	ImGui::Combo("Bot Diffculty", &defaultBotDifficulty, botDifficultyCombo, IM_ARRAYSIZE(botDifficultyCombo));
	if (defaultBotDifficulty != 0) {
		ImGui::Combo("Team Size", &defaultTeamSize, teamSizeCombo, IM_ARRAYSIZE(teamSizeCombo));
	}
	else { defaultTeamSize = 0; }
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
	if (ImGui::Button("Launch")) {
		mapName = maps[selectedMap].filename;
		create_mutator_string();
		Interfaces::GUI().isGUIOpen = false;
		bTravel = true;
	}
	ImGui::SameLine();
	if (ImGui::Button("Close")) {
		this->enabled = false;
	}
	ImGui::End();
}

void ModdedLanServer::onMainMenuTick(Event* event) {
	if (bTravel) {
		travel();
		bTravel = false;
	}
}

void ModdedLanServer::onGameEventTick(Event* event) {
	if (bTravel) {
		travel();
		bTravel = false;
	}
}

void ModdedLanServer::travel() {
	if (!Interfaces::GUI().isGUIOpen) {
		LAN_Server = reinterpret_cast<SDK::UOnlineGameDedicatedServer_X*>(Utils::GetInstanceOf(UOnlineGameDedicatedServer_X::StaticClass()));
		if (LAN_Server) {
			std::string command = mapName + "?playtest?listen?Lan?" + str_gameMode + str_mutators;
			printf("Command: %s\n", command);
			LAN_Server->TravelToMap(Utils::to_fstring(command));
			std::cout << "State: " << getCurrentGameState() << std::endl;
		}
	}
}

void ModdedLanServer::create_mutator_string() {
	str_gameMode = mutators[gameModesCombo[defaultGameMode]];

	if (gameModesCombo[defaultGameMode] == "Freeplay") {
		str_mutators = "";
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