#include "ModHandler.h"
#include "Modules/TestClass.h"
#include "../Utils/Utils.h"
#include "Modules/Lan/RumbleMods.h"
#include "Modules/Lan/ZombieGameMode.h"
#include "Modules/Lan/JoinServer.h"
#include "Modules/Offline/CustomBlog.h"
#include "Modules/Offline/InventoryManager.h"
#include "Modules/Classic Mods/ClassicMods.h"
#include "Modules/Lan/ModdedLanServer.h"
#include "Modules/Lan/FiftyFifty.h"
#include "Modules/Lan/BallMods.h"
#include "Modules/Lan/GameEventMods.h"
#include "Modules/Car/CarPhysics.h"

ModHandler::ModHandler() {
	CreateMod<RumbleMods>("Rumble Mods", VK_NUMPAD5, Category::GameModes, GameState::ANY ^ GameState::ONLINE);
	CreateMod<ZombieGameMode>("Zombie Game Mode",VK_NUMPAD1, Category::GameModes, GameState::EXHIBITION | GameState::LAN);
	CreateMod<FiftyFifty>("50/50", VK_F1, Category::GameModes, GameState::ANY ^ GameState::ONLINE);

	CreateMod<ModdedLanServer>("Host Server", VK_NUMPAD8, Category::Lan, GameState::ANY ^ GameState::ONLINE);
	CreateMod<JoinServer>("Join Server",VK_NUMPAD2, Category::Lan, GameState::ANY);
	CreateMod<GameEventMods>("Game Event Mods", VK_F2, Category::Lan, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);

	CreateMod<CustomBlog>("Custom Blog", VK_NUMPAD4, Category::Menu, GameState::MENU);	
	
	CreateMod<BallMods>("Ball Mods", VK_NUMPAD9, Category::Ball, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	
	CreateMod<CarPhysics>("Car Physics", VK_F3, Category::Car, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);

	//CreateMod<TestClass>("Test Class", VK_NUMPAD0, Category::Other, GameState::ANY);
	CreateMod<InventoryManager>("Manage Inventory", VK_NUMPAD6, Category::Other, GameState::MENU);
	CreateMod<ClassicMods>("Classic Mods", VK_NUMPAD7, Category::Other, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);

	//CreateMod<ZombieGameMode>("Zombie Game Mode",FileManager.GetKeyBindFromModName("Zombie Game Mode"); <- Should be something like this
}

size_t ModHandler::GetModListSize() {
	return mods.size();
}

void ModHandler::addMod(std::unique_ptr<ModBase> mod) {
	mods[mod->getName()] = std::move(mod);
}

ModBase* ModHandler::getModInstance(const std::string& name) {
	auto it = mods.find(name);
	if (it == std::end(mods)) {
		return nullptr;
	}
	return it->second.get();
}