#pragma once
#include "../Mods/ModBase.h"
#include "../Utils/Utils.h"
#include "../Interfaces/GlobalVariables.h"
#include "../Interfaces/Interfaces.h"
#include "GameOptions.hpp"
#include <iostream>
#include <string>

class ModdedLanServer : public ModBase {
public:
	ModdedLanServer(std::string name,int key,Category cat,GameState gamestate);
	~ModdedLanServer();
	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onMainMenuTick(Event*) override;
	void onGameEventTick(Event*) override;
	void eventReplayHeadersLoaded(Event* e) override;
	void eventAllTrainingFilesLoaded(Event* e) override;

	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

	struct ReplayData {
		char* fileName;
		char* mapName;
	};

private:
	void travel();
	void create_mutator_string();
	bool p_open = true;
	UOnlineGameLanServer_X* LAN_Server = nullptr;
	//Map Selection
	bool bTravel;
	std::string mapName;
	std::string str_mutators = "";
	std::string str_gameMode = "Game=TAGame.GameInfo_Soccar_TA";
	const char* replaySaveName[100] = { "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "","", "", "", "", "", "", "", "", "", "","", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "","", "", "", "", "", "", "", "", "", "" };
	ReplayData replayData[100];
	int replayCount = 0;
	char manualReplaySaveName[36] = "\0";

	int selectedReplayIndex = -1;
	const char* trainingName[100] = { "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "","", "", "", "", "", "", "", "", "", "","", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "","", "", "", "", "", "", "", "", "", "" };
	int selectedTrainingIndex = -1;
	bool previewLaunchCommand = false;
};

