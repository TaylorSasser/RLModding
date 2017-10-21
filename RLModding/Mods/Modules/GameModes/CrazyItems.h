#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <ctime>

class CrazyItems : public ModBase {
public:
	CrazyItems(std::string name, int key, Category category, GameState gamestate, std::string toolTip);
	CrazyItems(std::string, int key);

	void DrawMenu() override;
	void onMenuOpen() override;
	void onMenuClose() override;
	void onPlayerTick(Event* e) override;
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

private:

	bool bStarted = false;
	bool p_open = true;

	float itemGiveRate = 0.0f;

	// Magnet Options
	float magnetRange = 1000.0;
	float magnetBallGravity = 55000;
	bool magnetDeactivateOnTouch = false;


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
	float punchingGloveForce = 80000.0;
	float punchingGloveVerticalForce = 0.0;
	bool punchingGloveCanTargetBall = true;
	bool punchingGloveCanTargetCars = false;
	bool punchingGloveRelativeForce = true;
	bool punchingGloveFollowAfterHit = false;

	// Boot settings
	/*
	boot Force 550000
	boot Vertical Force 400000
	*/
	float bootForce = 550000.0;
	float bootVerticalForce = 400000.0;
	bool bootCanTargetBall = false;
	bool bootCanTargetCars = true;
	bool bootRelativeForce = true;
	bool bootFollowAfterHit = false;

	/*
	Car hit force: 30
	Ball hit force: 1.5
	*/
	float powerHitterBallHitForce = 30;
	float powerHitterCarHitForce = 1.5;
	bool powerHitterDemolishCars = true;

	/*
	Plunger Hook Length: 3000
	Plunger AfterAttachDuration: 1.3
	*/
	float plungerMaxSpringLength = 3000.0;
	float plungerAfterSpringDuration = 1.3;

	float boosterRange = 4000.0;

	/*
	Swapper Range: 10000
	*/
	float swapperRange = 10000.0;
	bool swapperCanTargetTeamCars = false;

	float freezeActivationDuration = 4.0;

	float spikesAfterHitDuration = 4.5;

};

