#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class TrainingMods : public ModBase
{
public:
	TrainingMods(std::string name, int key, Category cat, GameState gamestate);
	~TrainingMods();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e);

	void ExportSettings();
	void ImportSettings();

private:
	std::string statusText = "";
	int roundIndex = 2;

	bool randomizeShotOrder = false;
	bool goToNextRound = false;

	bool blockerBot = false;

	bool setFreePlayColors = false;

	bool hideBoostMeter = false;

	time_t start, end;
	bool p_open = true;
};


