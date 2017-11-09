#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <time.h>

class CarPhysics : public ModBase {
public:
	CarPhysics(std::string name, int key, Category category, GameState gamestate);
	CarPhysics(std::string, int key);

	void onMenuClose();

	void DrawMenu();
	void onPlayerTick(Event* e);
	void CarPhysics::onCarSpawned(Event* e);
	void CarPhysics::onGameEventRemovePlayer(Event* e);
	void CarPhysics::onGameEventAddPlayer(Event* e);
	void CarPhysics::onCarTick(Event* event);
	void CarPhysics::onActorJump(Event*e);
	void OnRoundStart(Event*e);

	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);


private:
	void CarPhysics::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent);

	bool carCollisionOff = false;
	bool cloneMe = false;

	bool setCarScale = false;

	float carScale = 1.0;
	float currCarScale = 1.0;
	int numClones = 1;
	bool respawnOnScale = true;

	bool freezeInPlace = false;
	bool podiumMode = false;
	bool demolishOnGoalZone = false;
	bool demolishOnOpposingSide = false;
	bool unlimitedBoost = false;

	bool noBoostBlue = false;
	bool noBoostOrange = false;
	bool checkTime = true;
	float interval = 0.2;
	time_t start, end;

	bool refreshCars = true;

	// Player selection menu
	const char* players[11] = { "All", "", "", "", "", "", "", "", "", "", "" };
	int playerSelectedIndex = 0;
	int oldPlayerSelectedIndex = 0;



	void reset();
	float groundSticky = 0.5;
	float wallSticky = 1.5;
	float jumpTimeout = 1.5;
	float maxCarSpeed = 2300.0;
	float torqueRate = 5.5;
	float maxCarAccel = 288000.0;
	bool bUnlimitedJumps = false;
	bool apply = false;
	bool reset_values = false;
	bool respawn = false;
	bool isHidden = false;
	int health = 1000;

	float mass = 180.0f;
	float gravityScale = 1.0f;

	float maxJumpHeight = 0;
	float jumpForce = 0;

	bool disableJumps = false;

	std::string statusText = "";

	int currPlayerCount = 0;

	bool p_open = true;
};
	

