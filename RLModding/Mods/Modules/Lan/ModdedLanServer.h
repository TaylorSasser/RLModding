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
	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;
	void onMainMenuTick(Event*) override;
	void onGameEventTick(Event*) override;

private:
	void travel();
	void create_mutator_string();
	UOnlineGameDedicatedServer_X* LAN_Server = nullptr;
	//Map Selection
	bool bTravel;
	std::string mapName;
	std::string str_mutators = "";
	std::string str_gameMode = "Game=TAGame.GameInfo_Soccar_TA";

};

