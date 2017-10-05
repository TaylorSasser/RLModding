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
	void RumbleMods::onCarSpawned(Event* e);
	void RumbleMods::onGameEventRemovePlayer(Event* e);
	void RumbleMods::onGameEventAddPlayer(Event* e);
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

private:
	void RumbleMods::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent);


	// General Rumble Settings
	float itemGiveRate = 10.0;
	float currItemGiveRate = 10.0;
	bool punchingGloveRelativeForce = true;
	bool punchingGloveFollowAfterHit = false;

	// Magnet Options
	float magnetRange;
	float magnetBallGravity = 1.0;
	bool magnetDeactivateOnTouch = false;

	// Punching Glove Settings
	float punchingGloveForce = 1.0;
	float punchingGloveVerticalForce = 400000.0;
	bool bStartGameMode = false;
	bool enableCrazyItems = false;

	// Boot Options


	/*
	Tornado
	Ball Multiplyer: 3
	Radius: 400
	Rotational Force: 7
	Torgue: 5
	Height: 800
	*/
	float tornadoRadius = 400;
	float tornadoBallMultiplayer = 3;
	float tornadoRotForce = 7;
	float tornadoTorque = 5;
	float tornadoHeight = 800;

	int forceItemIndex = -1;
	bool giveItem = false;

	// Player selection menu
	const char* players[11] = { "All", "", "", "", "", "", "", "", "", "", "" };
	int playerSelectedIndex = -1;
	int oldPlayerSelectedIndex = 0;
	int currPlayerCount = 0;

	bool p_open = true;
};

