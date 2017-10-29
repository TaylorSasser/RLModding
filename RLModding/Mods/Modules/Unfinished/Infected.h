#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class Infected : public ModBase
{
public:
	Infected(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~Infected();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e);
	void OnRoundStart(Event* e) override;

	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

private:
	bool bStarted = false;
	bool p_open = true;
	bool bSetInfected = false;
	ACar_TA* _Infected;
};


