#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class KeepAway : public ModBase
{
public:
	KeepAway(std::string name, int key, Category cat, GameState gamestate);
	~KeepAway();

	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e);
	void onBallHit(Event* e);
	void KeepAway::onBallCarTouch(Event* e);
	void KeepAway::onGameTimeUpdated(Event* e);

	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

private:
	bool bStarted = false;
	bool checkTime = true;
	float interval = .06;
	time_t start, end;
	bool p_open = true;

	int currentTeamHasPossesion = -1;

	int pointsToWin = 30;
};


