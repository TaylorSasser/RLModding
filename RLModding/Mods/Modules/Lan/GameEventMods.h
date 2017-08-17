#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"

class GameEventMods : public ModBase {
public:
	GameEventMods(std::string name, int key, Category category, GameState gamestate);
	GameEventMods(std::string, int key);

	void DrawMenu();
	void onEnable();
	void onDisable();
	void onPlayerTick(Event* e);

private:
	bool bStartGameMode = false;

};

