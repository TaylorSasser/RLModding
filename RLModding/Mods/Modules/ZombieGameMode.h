#pragma once
#include "../ModBase.h"

class ZombieGameMode : public ModBase {
public:
	ZombieGameMode(std::string, int key);
	void onEnable();
	void onDisable();
	void onPlayerTick(Event* e);

private:
	SDK::TArray<SDK::AAIController_TA*> Zombies;
	int NumZombies = 8;
	bool AllowAllyZombies = true;
};

