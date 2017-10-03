#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class MutatorMods : public ModBase
{
public:
	MutatorMods(std::string name, int key, Category cat, GameState gamestate);
	~MutatorMods();

	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e);

	void ExportSettings();
	void ImportSettings();

private:
	bool bStarted = false;
	bool checkTime = true;
	float interval = .06;
	time_t start, end;
	bool p_open = true;
};


