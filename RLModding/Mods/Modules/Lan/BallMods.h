#pragma once
#include <vector>
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <map>

#define MAXBALLS 100

class BallMods : public ModBase {
public:
	BallMods(std::string name, int key, Category category, GameState gamestate);
	BallMods(std::string, int key);

	struct BallSetting {
		float Scale = 1.0;
		bool isHidden = false;
		bool predictOnGround = true;
		int touchCount = 0;
	};

	void DrawMenu();
	void onMenuOpen();
	void onMenuClose();
	void onPlayerTick(Event* e) override;
	void onBallTick(Event* e) override;
	void onEventGoalScored(Event* e) override;
	void onBallSpawned(Event* e) override;
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);
	void resetBalls();

private:
	std::map<ABall_TA*, BallSetting*> ballSettingMap;

	BallSetting gameBallSettings[MAXBALLS];
	BallSetting prevGameBallSettings[MAXBALLS];

	int ballSelectedIndex = -1;
	int numGameBalls = 1;
	bool p_open = true;
};

