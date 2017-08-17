#include "ModdedLanServer.h"

ModdedLanServer::ModdedLanServer(std::string name, int key, Category cat, GameState gamestate) : ModBase(name,key,cat,gamestate) {}

ModdedLanServer::~ModdedLanServer(){}

void ModdedLanServer::onEnable() {
	
}

void ModdedLanServer::onWebRequestCreated(Event* event) {
	std::cout << ((UPsyNet_X*)event->getCallingObject())->Keys.Environment.ToString() << std::endl;
	std::cout << ((UPsyNet_X*)event->getCallingObject())->Keys.GetKeys.ToString() << std::endl;
	std::cout << ((UPsyNet_X*)event->getCallingObject())->Keys.PsyNetAuth.ToString() << std::endl;
	std::cout << ((UPsyNet_X*)event->getCallingObject())->Keys.SteamPublisher.ToString() << std::endl;
}