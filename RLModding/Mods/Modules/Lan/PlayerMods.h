#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <time.h>

class PlayerMods : public ModBase {
public:
	PlayerMods(std::string name, int key, Category category, GameState gamestate);
	PlayerMods(std::string, int key);

	void onDisable();

	void DrawMenu();
	void onPlayerTick(Event* e);
	void PlayerMods::onCarSpawned(Event* e);
	void PlayerMods::onGameEventRemovePlayer(Event* e);
	void PlayerMods::onGameEventAddPlayer(Event* e);
	void ExportSettings();
	void ImportSettings();


private:
	void PlayerMods::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent);

	bool refreshPlayers = false;
	bool updatePlayer = false;

	int currPlayerCount = 0;

	bool isBotSelected = false;

	bool isAdmin = false;
	bool demolishPlayer = false;
	bool isDeveloper = false;

	bool doNothing = false;
	bool triggerGoalExplosion = false;

	std::string statusText = "";

	// Player selection menu
	const char* players[11] = { "All", "", "", "", "", "", "", "", "", "", "" };
	int playerSelectedIndex = 0;
	int oldPlayerSelectedIndex = 0;

	bool p_open = true;
};

