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
	void onCarDemolished(Event * e) override;
	void OnCarBumped(Event* e) override;
	void OnRoundStart(Event* e) override;

	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

private:
	bool bStarted = false;
	bool p_open = true;
	bool respawnWhenTagged = true;

	bool bSetWhosIt = false;
	ACar_TA* _IT = NULL;
	int numTagged = 0;
	std::string _IT_Name;
};


