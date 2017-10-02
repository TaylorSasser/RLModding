#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class FiftyFifty : public ModBase
{
public:
	FiftyFifty(std::string name, int key, Category cat, GameState gamestate);
	~FiftyFifty();

	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;

private:
	bool bStarted = false;
	bool checkTime = true;
	bool demoPlayer = true;
	bool reset_balls = false;
	float interval = 20.0;
	time_t start, end;
	bool p_open = true;
};

