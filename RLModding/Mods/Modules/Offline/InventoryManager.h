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
	void replace_items(); // For Nitro
	bool shrinkItem = false;
	bool aprilFools = false;
	bool testInventory = false;
	bool p_open = true;
};

