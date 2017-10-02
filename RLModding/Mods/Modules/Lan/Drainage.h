#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class Drainage : public ModBase
{
public:
	Drainage(std::string name, int key, Category cat, GameState gamestate);
	~Drainage();

	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;

	void onCarDemolished(Event * e);

private:
	bool bStarted = false;
	bool checkTime = true;
	bool demoPlayer = true;
	float interval = .06;
	time_t start, end;
	bool p_open = true;
};


