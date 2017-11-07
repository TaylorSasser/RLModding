#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class Infected : public ModBase
{
public:
	Infected(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~Infected();

	struct InfectedCars {
		ACar_TA* cars[10];
		int carCount = 0;
	};

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e);
	void OnRoundStart(Event* e) override;
	void onGameTimeUpdated(Event* e) override;
	void onMatchEnded(Event* e) override;
	int carIsOnList(ACar_TA* c, ACar_TA* cars[]);

	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

private:
	bool bStarted = false;
	bool p_open = true;
	bool bSetInfected = false;
	InfectedCars _Infected;
};


