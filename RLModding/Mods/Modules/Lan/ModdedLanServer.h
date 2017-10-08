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
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

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
	char replaySaveName[36] = "\0";
};

