#pragma once
#include "../../ModBase.h"
#include "../Interfaces/Interfaces.h"

class HUDMods : public ModBase {
public:
	HUDMods(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~HUDMods();

	void onMenuOpen();
	void onMenuClose();
	void DrawMenu();
	void onMainMenuTick(Event* e);

private:
	bool p_open = true;

};