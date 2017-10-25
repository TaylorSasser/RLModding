#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
#include <chrono>

class DribbleDrabble : public ModBase
{
public:
	DribbleDrabble(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~DribbleDrabble();

	struct CarsToRespawn {
		ACar_TA* cars[10];
		int carCount = 0;
	};

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e) override;
	void eventBallHitGround(Event* e) override;
	void onBallCarTouch(Event* e) override;
	void onBallTick(Event* e) override;
	void onCarTick(Event* e) override;
	void onEventGoalScored(Event* e) override;
	void eventGameEnded(Event* e) override;
	void loadMod() override;
	void unloadMod() override;
	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);
	int carIsOnList(ACar_TA* c, CarsToRespawn ctr);
	int ballRespawnTime = 30;



private:
	bool bStarted = false;
	bool checkTime = true;
	time_t start, end;
	bool p_open = true;
	int currentTeamHasPossesion = -1; // 0 for blue, 1 for orange
	ACar_TA* lastHitCar = NULL;
	bool respawnOnlyOnGround = false;
	bool airDribbleOnly = false;
	int ballOnHalf = -1; // 0 for blue side, 1 for orange side
	int lastTeamTouchedBall = -1;
	std::chrono::high_resolution_clock::time_point lastBallUpdateTime = std::chrono::high_resolution_clock::now();

	CarsToRespawn blueCarsToRespawn;
	CarsToRespawn orangeCarsToRespawn;

	bool respawnBallOnTimer = true;

	bool isBasic = true;
	bool isBreakoutType = false;
	int settingsOption = false;
};


