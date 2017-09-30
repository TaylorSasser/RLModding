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

private:
	bool carCollisionOff = false;
	bool cloneMe = false;

	bool setCarScale = false;

	float carScale = 1.0;
	float currCarScale = 1.0;
	int numClones = 1;

	bool checkTime = true;
	float interval = 0.2;
	time_t start, end;

};
	

