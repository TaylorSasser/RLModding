#pragma once
#include "../../ModBase.h"
#include "../Interfaces/Interfaces.h"

class JoinServer : public ModBase {
public:
	JoinServer(std::string name, int key, Category category, GameState gamestate);
	~JoinServer();

	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;
	void onMainMenuTick(Event*) override;
	void onGameEventTick(Event*) override;
	void ExportSettings(pt::ptree);
	void ImportSettings(pt::ptree);

private:
	void travel();
	char ip[128] = "25.81.228.178";
	bool bTravel = false;
	UOnlineGameLanServer_X* LAN_Server = nullptr;
	bool p_open = true;
};

