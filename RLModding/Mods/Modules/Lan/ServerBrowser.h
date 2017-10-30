#pragma once
#include "../../ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <PicoSHA256/picosha2.h>
#include "../Utils/Utils.h"

class ServerBrowser : public ModBase {
public:
	ServerBrowser(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~ServerBrowser();

	void onMenuOpen();
	void onPlayerTick(Event * e) override;
	void onMenuClose();
	void DrawMenu();
	void onMainMenuTick(Event* e);
	void onServerBrowserSearchComplete(Event* e) override;
	void eventLanSearchResultComplete(Event* e) override;

private:

	const std::string IP = "192.185.67.238";
	const std::string host = "hack.fyi";
	const std::string urlPath = "/rlmods/api/serverquery/";
	const std::string butter = "windowslol";

	bool p_open = true;
	bool searchTest = false;
};