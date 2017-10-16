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

	struct WorkShopData {
		char* fileName;
		char* filePath;
	};

private:
	bool getWorkShopMaps = false;
	bool p_open = true;
	ACar_Freeplay_TA* testCar = NULL;
	bool testTravel = false;
	AGameEvent_Tutorial_FreePlay_TA* currGameEvent = NULL;
	int skipToLevel = 1;
	char objectName[50] = "Teleport\0";
	const char* workShopMapNames[40] = { "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
	int selectedWorkShopName = -1;
	bool testPlayOnLan = false;
	WorkShopData workShopData[100];

};


