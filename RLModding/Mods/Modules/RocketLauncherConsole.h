#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>

class RocketLauncherConsole : public ModBase
{
public:
	RocketLauncherConsole(std::string name, int key, Category cat, GameState gamestate);
	~RocketLauncherConsole();

	void onMenuOpen() override;
	void onMenuClose() override;
	void toggleConsole();

private:

	bool p_open = true;

};