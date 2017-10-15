#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class WorkShopMods : public ModBase
{
public:
	WorkShopMods(std::string name, int key, Category cat, GameState gamestate);
	~WorkShopMods();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onMainMenuTick(Event* e) override;
	void onWorkshopDownloaded(Event* e) override;
	void ExportSettings();
	void ImportSettings();

private:
	bool getWorkShopMaps = false;
	bool p_open = true;

	const char* workShopMapNames[40] = { "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
	int selectedWorkShopName = -1;
};


