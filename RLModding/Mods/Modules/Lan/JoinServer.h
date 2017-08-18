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

private:
	void travel();
	char ip[128] = "127.0.0.1";
	bool bTravel = false;
	UOnlineGameLanServer_X* LAN_Server = nullptr;
};

