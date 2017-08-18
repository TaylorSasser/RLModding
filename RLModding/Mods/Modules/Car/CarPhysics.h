#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"

class CarPhysics : public ModBase {
public:
	CarPhysics(std::string name, int key, Category category, GameState gamestate);
	CarPhysics(std::string, int key);

	void DrawMenu();
	void onEnable();
	void onDisable();
	void onPlayerTick(Event* e);

private:
	bool bStartGameMode = false;
	float col2[4] = { 0.4f,0.7f,0.0f,0.5f };
	bool carCollisionOff = false;
	bool cloneMe = false;
	int numClones = 1;
	//const char* players[] = { "", "", "", "", "", "", "", "", "", "", "" };
	float carScale = 1.0;
	float carMaxSpinRate = 5.5;
	bool carCollisionChanged = false;
	float currCarScale = 1.0;
	float carMaxLinearSpeed = 2300;
};

