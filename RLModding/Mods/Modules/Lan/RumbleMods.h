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
	void RumbleMods::setCrazyRumbleValues();

	// General Rumble Settings
	float itemGiveRate = 10.0;
	float currItemGiveRate = 10.0;
	bool punchingGloveRelativeForce = true;
	bool punchingGloveFollowAfterHit = false;

	// Magnet Options
	float magnetRange;
	float magnetBallGravity = 1.0;
	bool magnetDeactivateOnTouch = false;


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
	float tornadoBallMultiplier = 3;
	float tornadoRotForce = 7;
	float tornadoTorque = 5;
	float tornadoHeight = 800;

	/*
	Grappling Hook Length: 3500
	Grappling Hook AfterAttachDuration: 3
	Grappling Hook Range: 2800
	*/
	float grapplingHookMaxRopeLength = 3500.0;
	float grapplingHookAfterAttachDuration = 3.0;
	float grapplingHookRange = 2800.0;
	bool grapplingHookCanTargetCars = false;
	bool grapplingHookCanTargetBall = true;
	bool grapplingHookCanTargetEnemyCars = false;
	bool grapplingHookDeactivateOnTouch = true;

	// Punching Glove Settings
	float punchingGloveForce = 180000;
	float punchingGloveVerticalForce = 400000.0;
	bool punchingGloveCanTargetBall = true;
	bool punchingGloveCanTargetCars = true;

	/*
	Car hit force: 30
	Ball hit force: 1.5
	*/
	float powerHitterBallHitForce = 30;
	float powerHitterCarHitForce = 1.5;
	bool powerHitterDemolishCars = true;

	float spikesAfterHitDuration = 6.0;

	/*
	Plunger Hook Length: 3000
	Plunger AfterAttachDuration: 1.3
	*/
	float plungerMaxSpringLength = 3000.0;
	float plungerAfterSpringDuration = 1.3;

	int forceItemIndex = -1;
	bool giveItem = false;

	// Player selection menu
	const char* players[11] = { "All", "", "", "", "", "", "", "", "", "", "" };
	int playerSelectedIndex = -1;
	int oldPlayerSelectedIndex = 0;
	int currPlayerCount = 0;

	bool setCrazyRumble = false;

	bool p_open = true;
};

