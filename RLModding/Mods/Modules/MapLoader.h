#pragma once
#include "../ModBase.h"

/*
	MapLoader.h / .cpp is for the custom map loader
*/

class MapLoader : public ModBase {
	public:
		MapLoader();
		~MapLoader();
		void FreeplayTick(SDK::UObject**, SDK::UFunction*, void*);
		void GameEventTick(SDK::UObject**, SDK::UFunction*, void*);
		void MainMenuTick(SDK::UObject**, SDK::UFunction*, void*);
	private:
		void readSettingsFile();
		std::string loadMapCommand;
};