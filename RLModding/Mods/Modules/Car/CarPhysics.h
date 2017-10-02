#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <time.h>

class CarPhysics : public ModBase {
public:
	CarPhysics(std::string name, int key, Category category, GameState gamestate);
	CarPhysics(std::string, int key);

	void DrawMenu();
	void onPlayerTick(Event* e);
	void CarPhysics::onCarSpawned(Event* e);
	void CarPhysics::onGameEventRemovePlayer(Event* e);
	void CarPhysics::onGameEventAddPlayer(Event* e);


private:
	void CarPhysics::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent);

	bool carCollisionOff = false;
	bool cloneMe = false;

	bool setCarScale = false;

	float carScale = 1.0;
	float currCarScale = 1.0;
	int numClones = 1;

	bool checkTime = true;
	float interval = 0.2;
	time_t start, end;

	bool refreshCars = true;
	bool respawnOnScale = false;

	bool freezeInPlace = false;

	// Player selection menu
	const char* players[11] = { "All", "", "", "", "", "", "", "", "", "", "" };
	int playerSelectedIndex = 0;
	int oldPlayerSelectedIndex = 0;

	std::string statusText = "";

	int currPlayerCount = 0;

	bool p_open = true;
};
	

