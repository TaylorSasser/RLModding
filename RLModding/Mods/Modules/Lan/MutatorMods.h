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

	int mutatorCount = 0;

	int GameSpeed = 0;

	bool itemsMutatorsPresent = false;
	bool respawnTimeMutatorsPresent = false;
	bool matchMutatorsPresent = false;
	bool handicapMutatorsPresent = false;
	bool gravityMutatorsPresent = false;
	bool gameSpeedMutatorsPresent = false;
	bool ballMutatorsPresent = false;
	bool demolishMutatorsPresent = false;
	bool carMutatorsPresent = false;
	bool boostMutatorsPresent = false;
	bool presetMutatorsPresent = false;

	bool applyChanges = false;

	float interval = .06;
	time_t start, end;
	bool p_open = true;
};


