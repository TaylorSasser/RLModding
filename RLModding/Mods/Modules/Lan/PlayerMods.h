#pragma once
#include "../../ModBase.h"
#include "../../../Interfaces/InstanceStorage.h"
#include <time.h>

class PlayerMods : public ModBase {
public:
	PlayerMods(std::string name, int key, Category category, GameState gamestate);
	PlayerMods(std::string, int key);

	void onMenuClose();

	void DrawMenu();
	void onPlayerTick(Event* e);
	void PlayerMods::onCarSpawned(Event* e);
	void PlayerMods::onGameEventRemovePlayer(Event* e);
	void PlayerMods::onGameEventAddPlayer(Event* e);
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);


private:
	void PlayerMods::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent);

	bool refreshPlayers = false;
	bool updatePlayer = false;


	bool isBotSelected = false;

	bool isAdmin = false;
	bool demolishPlayer = false;
	bool isDeveloper = false;

	bool godMode = false;

	bool doNothing = false;
	bool triggerGoalExplosion = false;

	int playerScore = 0;
	int playerGoals = 0;
	int playerAssists = 0;
	int playerSaves = 0;
	int playerShots = 0;
	int playerPing = 0;

	std::string statusText = "";

	// Player selection menu
	const char* players[11] = { "All", "", "", "", "", "", "", "", "", "", "" };
	int playerSelectedIndex = 0;
	int oldPlayerSelectedIndex = 0;
	int currPlayerCount = 0;

	bool kickPlayer = false;

	bool p_open = true;
};


