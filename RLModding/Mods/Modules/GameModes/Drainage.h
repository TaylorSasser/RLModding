#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class Drainage : public ModBase
{
public:
	Drainage(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~Drainage();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e);
	void Drainage::initMod();

	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

private:
	bool bStarted = false;
	bool checkTime = true;
	float interval = .06;
	time_t start, end;
	bool p_open = true;
};


