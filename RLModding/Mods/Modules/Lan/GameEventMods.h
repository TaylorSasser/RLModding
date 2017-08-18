#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <ctime>

class GameEventMods : public ModBase {
public:
	GameEventMods(std::string name, int key, Category category, GameState gamestate);
	GameEventMods(std::string, int key);

	void DrawMenu();
	void onEnable();
	void onDisable();
	void onPlayerTick(Event* e);

private:
	bool bStartGameMode = false;
	bool pauseServer = false;
	bool pausedGame = false;
	bool randomSpawnPoints = false;
	bool startOverTime = false;
	bool randomExplosion = false;
	bool spawnBot = false;

	// Clock 
	std::clock_t start;
};

