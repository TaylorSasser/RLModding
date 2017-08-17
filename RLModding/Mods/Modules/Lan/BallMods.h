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

};

