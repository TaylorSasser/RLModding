#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"

#define MAXZOMBIES 16

class ZombieGameMode : public ModBase {
public:
	ZombieGameMode(std::string name, int key, Category category, GameState gamestate);
	ZombieGameMode(std::string, int key);
	void onEnable();
	void onDisable();
	void onPlayerTick(Event* e);
	void ExportSettings();
	void ImportSettings();

private:
	int NumZombies;
	SDK::AAIController_TA* Zombies[MAXZOMBIES];
	bool AllowAllyZombies = true;
	bool isInit = false;
};

