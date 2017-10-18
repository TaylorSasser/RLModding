#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class FreezeTag : public ModBase
{
public:
	FreezeTag(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~FreezeTag();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e);

	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

private:
	bool bStarted = false;
	bool checkTime = true;
	float interval = .06;
	time_t start, end;
	bool p_open = true;
	bool respawnWhenTagged = true;
};


