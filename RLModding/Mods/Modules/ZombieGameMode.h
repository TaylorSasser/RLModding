#pragma once
#include "../ModBase.h"
#define MAXZOMBIES 16

class ZombieGameMode : public ModBase {
public:
	ZombieGameMode(std::string, int key);
	void onEnable();
	void onDisable();
	void onPlayerTick(Event* e);

private:
	int NumZombies;
	SDK::AAIController_TA* Zombies[MAXZOMBIES];
	bool AllowAllyZombies = true;
};
