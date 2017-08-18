#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"

class BallMods : public ModBase {
public:
	BallMods(std::string name, int key, Category category, GameState gamestate);
	BallMods(std::string, int key);

	void DrawMenu();
	void onEnable();
	void onDisable();
	void onPlayerTick(Event* e);

private:
	bool bStartGameMode = false;
	float currBallScale[100];
	bool freezeBall[100];
	bool explodeBall[100];

	int ballSelectedIndex = -1;
	float ballScale[100];
	int numGameBalls = 1;
	bool testBallExplosion = false;
	int attachBallIndex = -1;
};

