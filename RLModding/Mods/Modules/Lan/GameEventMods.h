#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <ctime>
#include <chrono>


class GameEventMods : public ModBase {
public:
	GameEventMods(std::string name, int key, Category category, GameState gamestate);
	GameEventMods(std::string, int key);

	void DrawMenu() override;
	void onMenuOpen() override;
	void onMenuClose() override;
	void onPlayerTick(Event* e) override;
	void onGameTimeUpdated(Event* e) override;
	void eventBallHitGround(Event* e) override;
	void onBallTick(Event* e) override;
	void gameInfoInitGame(Event* e) override;

	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

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
	bool removeBots = false;

	bool disableGoalDelay = false;
	bool unlimitedTime = false;

	bool unlimCelebration = false;
	bool ballSpawnTest = false;

	char goalScoredMessage[36] = "{Player} scored!";
	bool updatePlayerMessages = false;
	bool testTrainingSpawn = false;
	bool testServerSay = false;

	int botsToSpawn = 1;

	int blueScore = 0;
	int orangeScore = 0;
	int respawnTime = 0;

	bool bounceBasedTime = false;
	int bouncesRemaining = 300;
	FVector lastBallPos = { 0,0,0 };
	std::chrono::high_resolution_clock::time_point lastBallUpdateTime = std::chrono::high_resolution_clock::now();

	AGameInfo_TA* testGameInfo = NULL;

	bool testChangeName = false;
	bool testArenaColor = false;
	float arenaCol[4] = { 0.0f,0.0f,0.0f,1.0f };

	bool p_open = true;
	// Clock 
	std::clock_t start;
};

