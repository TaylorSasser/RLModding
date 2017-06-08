#include "MapLoader.h"
#include "../../Utils/Utils.h"
#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/json_parser.hpp"
#include <fstream>
#include <iostream>

void loadMap(std::string);

MapLoader::MapLoader() {
	std::cout << "Map Loader Instantiated\n";
}

MapLoader::~MapLoader() {

}

void MapLoader::FreeplayTick(SDK::UObject** object, SDK::UFunction* func, void* params) {
	if (GetAsyncKeyState(VK_F3)) {
		readSettingsFile();
		loadMap(loadMapCommand);
	}
}

void MapLoader::GameEventTick(SDK::UObject** object, SDK::UFunction* func, void* params) {
	if (GetAsyncKeyState(VK_F3)) {
		readSettingsFile();
		loadMap(loadMapCommand);
	}
}

void MapLoader::MainMenuTick(SDK::UObject** object, SDK::UFunction* func, void* params) {
	if (GetAsyncKeyState(VK_F3)) {
		readSettingsFile();
		loadMap(loadMapCommand);
	}
}

void loadMap(std::string map) {
	SDK::UOnlineGameDedicatedServer_TA* temp = (SDK::UOnlineGameDedicatedServer_TA*)Utils::GetInstanceOf(SDK::UOnlineGameDedicatedServer_TA::StaticClass());
	if (temp != NULL) {
		std::cout << "Traveling to " << map << std::endl;
		temp->TravelToMap(Utils::to_fstring(map));
	}
	else {
		std::cout << "Server is NULL. Can't travel to map\n";
	}
}

void MapLoader::readSettingsFile() {
	std::ifstream settings("settings.json");
	boost::property_tree::ptree pt;
	boost::property_tree::read_json(settings, pt);
	settings.close();

	std::cout << "\n--- Reading Map Loader Settings ---\n";
	//Ball Scale
	loadMapCommand = pt.get<std::string>("Map_Loader_Command", "");
	std::cout << "Read in map load command: " << loadMapCommand << std::endl;
}