#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"

#define MAXZOMBIES 16

class Zombies : public ModBase {
public:
	Zombies(std::string name, int key, Category category, GameState gamestate);
	Zombies(std::string, int key);
	void onEnable();
	void onDisable();
	void onPlayerTick(Event* e);

private:
	int NumZombies;
	SDK::AAIController_TA* zombies[MAXZOMBIES];
	bool AllowAllyZombies = true;
	bool isInit = false;
};

