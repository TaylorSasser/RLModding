#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class KeepAway : public ModBase
{
public:
	KeepAway(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~KeepAway();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void eventGameEnded(Event* e) override;
	void loadMod() override;
	void unloadMod() override;
	void onCarDemolished(Event * e);
	void onBallHit(Event* e);
	void onBallCarTouch(Event* e);
	void onGameTimeUpdated(Event* e);
	void onEventGoalScored(Event* e);

	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

private:
	bool bStarted = false;
	bool checkTime = true;
	float interval = .06;
	time_t start, end;
	bool p_open = true;

	ACar_TA* carLastTouched = NULL;
	bool goalsAddScore = false;
	int currentTeamHasPossesion = -1;

	int pointsToWin = 100;
};


