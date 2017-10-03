#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"

class RumbleMods : public ModBase {
public:
	RumbleMods(std::string name, int key, Category category, GameState gamestate);
	RumbleMods(std::string, int key);

	void DrawMenu() override;
	void onEnable() override;
	void onDisable() override;
	void onPlayerTick(Event* e) override;
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

private:
	// General Rumble Settings
	float itemGiveRate = 10.0;
	float currItemGiveRate = 10.0;
	bool punchingGloveRelativeForce = true;
	bool punchingGloveFollowAfterHit = false;;

	// Magnet Options
	float magnetRange;
	float magnetBallGravity = 1.0;
	bool magnetDeactivateOnTouch = false;

	// Punching Glove Settings
	float punchingGloveForce = 1.0;
	float punchingGloveVerticalForce = 400000.0;
	bool bStartGameMode = false;
	bool enableCrazyItems = false;
	bool p_open = true;
};

