#pragma once
#include "../../ModBase.h"

class ClassicMods : public ModBase {
public:
	ClassicMods(std::string name, int key, Category category, GameState gamestate);
	~ClassicMods();

	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarTick(Event*) override;
	void onActorJump(Event*) override;

private:
	void reset();
	float groundSticky = 1.0;
	float wallSticky = 1.0;
	float jumpTimeout = 1.5;
	float maxCarSpeed = 2300.0;
	float torqueRate = 5.5;
	bool bUnlimitedJumps = false;
};