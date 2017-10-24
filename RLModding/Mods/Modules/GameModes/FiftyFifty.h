#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class FiftyFifty : public ModBase
{
public:
	FiftyFifty(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~FiftyFifty();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void eventGameEnded(Event* e) override;
	void unloadMod() override;
	void loadMod() override;
	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

private:
	bool bStarted = false;
	bool checkTime = true;
	int demoPlayer = 1;
	int teamToDemo = -1;
	bool reset_balls = false;
	float interval = 20.0;
	time_t start, end;
	bool p_open = true;
};

