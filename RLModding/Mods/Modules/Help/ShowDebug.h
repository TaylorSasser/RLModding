#pragma once
#include "../../ModBase.h"

class ShowDebug : public ModBase {
public:
	ShowDebug(std::string name, int key, Category category, GameState gamestate, std::string toolTip);
	~ShowDebug();

	void onMenuOpen();
	void onPlayerTick(Event* e) override;
	void onMenuClose();
	void DrawMenu();
	void onMainMenuTick(Event* e);

private:
	bool p_open = true;
	bool toggleCommand = false;
};