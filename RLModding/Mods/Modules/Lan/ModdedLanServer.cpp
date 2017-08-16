#include "ModdedLanServer.h"

ModdedLanServer::ModdedLanServer(std::string name, int key, Category cat, GameState gamestate) : ModBase(name,key,cat,gamestate) {}

ModdedLanServer::~ModdedLanServer(){}

void ModdedLanServer::onEnable() {
	if (InstanceStorage::GameEvent() != nullptr && InstanceStorage::GameEvent()->STATIC_GetOnlineGameLanServer() != nullptr) {
		InstanceStorage::GameEvent()->STATIC_GetOnlineGameLanServer()->TravelToMap(L"Park_P?");
	}
}
