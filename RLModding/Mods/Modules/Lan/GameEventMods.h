#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <ctime>

class GameEventMods : public ModBase {
public:
	GameEventMods(std::string name, int key, Category category, GameState gamestate);
	GameEventMods(std::string, int key);

	void DrawMenu() override;
	void onEnable() override;
	void onDisable() override;
	void onPlayerTick(Event* e) override;
	void ExportSettings();
	void ImportSettings();

private:
	bool pauseServer = false;
	bool pausedGame = false;
	bool randomSpawnPoints = false;
	bool startOverTime = false;
	bool randomExplosion = false;
	bool spawnBot = false;
	bool allowMorePlayers = false;
	bool freezeBots = false;
	bool setWarmupTime = false;
	bool restartMatch = false;
	bool resetPlayers = false;
	bool resetBalls = false;
	bool setScoreAndTime = false;
	bool hideReplays = false;

	bool disableGoalDelay = false;
	bool unlimitedTime = false;

	bool unlimCelebration = false;

	char goalScoredMessage[32] = "{Player} scored!";
	bool updatePlayerMessages = false;

	int botsToSpawn = 1;

	int blueScore = 0;
	int orangeScore = 0;
	int respawnTime = 0;

	bool p_open = true;
	// Clock 
	std::clock_t start;
};

