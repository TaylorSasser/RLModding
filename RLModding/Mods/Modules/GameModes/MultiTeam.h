#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class MultiTeam : public ModBase
{
public:
	MultiTeam(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~MultiTeam();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;

	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void eventGameEnded(Event* e) override;
	void onCarDemolished(Event * e) override;
	void onBallHit(Event* e) override;
	void onBallCarTouch(Event* e) override;
	void onGameTimeUpdated(Event* e) override;
	void onEventGoalScored(Event* e) override;
	void statOnGoalScored(Event* e) override;
	void eventPlayerScored(Event* e) override;
	void eventReplicatedGoalScored(Event* e) override;
	void onTeamScoreUpdate(Event* e) override;
	void priEventScorePoint(Event* e) override;
	void priEventScoredGoal(Event* e) override;

	void loadMod() override;
	void unloadMod() override;

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

	bool placeOnTeam = false;

	int pointsToWin = 100;
};