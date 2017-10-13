#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <ctime>

class InfiniteCelebration : public ModBase {
public:
	InfiniteCelebration(std::string name, int key, Category category, GameState gamestate, std::string toolTip);
	InfiniteCelebration(std::string, int key);

	void DrawMenu() override;
	void onMenuOpen() override;
	void onMenuClose() override;
	void onPlayerTick(Event* e) override;
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

private:
	bool bStarted = false;
	bool p_open = true;
	int teamIndex = 0;
};

