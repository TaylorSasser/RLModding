#pragma once
#include <vector>
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"

class BallMods : public ModBase {
public:
	BallMods(std::string name, int key, Category category, GameState gamestate);
	BallMods(std::string, int key);

	void DrawMenu();
	void onMenuOpen();
	void onMenuClose();
	void onPlayerTick(Event* e);
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

private:

	float balls[100];
	float currentScales[100];
	int ballSelectedIndex = -1;
	int numGameBalls = 1;
	bool p_open = true;
};

