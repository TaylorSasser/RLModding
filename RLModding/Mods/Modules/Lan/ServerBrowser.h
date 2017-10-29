#pragma once
#include "../../ModBase.h"
#include "../Interfaces/Interfaces.h"

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
	bool p_open = true;
	bool searchTest = false;
};