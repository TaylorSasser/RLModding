#pragma once
#include "../Mods/ModBase.h"
#include <string>
#include <PicoSHA256/picosha2.h>

class PublicServerList : public ModBase
{
public:
	PublicServerList(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~PublicServerList();

	void onMenuOpen();
	void onMenuClose();
	void OnLANMatchCreate(Event* e) override;
	void OnLANMatchDestroy(Event* e) override;
	void onGameEventTeamPlayerAdded(Event* e) override;
	void onGameEventTeamPlayerRemoved(Event* e) override;
	void ExportSettings(pt::ptree&root) override;
	void ImportSettings(pt::ptree&root) override;

private:
	void UpdatePlayerCount();
	const std::string IP = "192.185.67.238";
	const std::string host = "hack.fyi";
	const std::string urlJoinPath = "/rlmods/api/serveractive/";
	const std::string urlLeavePath = "/rlmods/api/serverinactive/";
	const std::string urlUpdatePath = "/rlmods/api/servertick/";

	const std::string butter = "windows";

	bool serverActive = false;

};

