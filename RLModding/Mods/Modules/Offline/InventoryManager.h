#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"

class InventoryManager : public ModBase {
public:
	InventoryManager(std::string name, int key, Category category, GameState gamestate);
	InventoryManager(std::string, int key);

	void DrawMenu();
	void onEnable();
	void onDisable();
	void onMainMenuTick(Event* e);

private:
	bool p_open = true;
};

