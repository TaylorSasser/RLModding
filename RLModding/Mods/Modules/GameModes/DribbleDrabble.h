#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class DribbleDrabble : public ModBase
{
public:
	DribbleDrabble(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~DribbleDrabble();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e) override;
	void eventBallHitGround(Event* e) override;
	void onBallCarTouch(Event* e) override;
	void onBallTick(Event* e) override;
	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

private:
	bool bStarted = false;
	bool checkTime = true;
	time_t start, end;
	bool p_open = true;
	int currentTeamHasPossesion = -1;
	ACar_TA* lastHitCar = NULL;
	bool respawnOnlyOnGround = false;
	bool airDribbleOnly = false;

	bool isBreakoutType = false;

};


