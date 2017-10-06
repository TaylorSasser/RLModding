#include "ModHandler.h"
#include "Modules/TestClass.h"
#include "../Utils/Utils.h"
#include "Modules/Lan/RumbleMods.h"
#include "Modules/GameModes/Zombies.h"
#include "Modules/Lan/JoinServer.h"
#include "Modules/Offline/CustomBlog.h"
#include "Modules/Offline/InventoryManager.h"
#include "Modules/Lan/ModdedLanServer.h"
#include "Modules/GameModes/FiftyFifty.h"
#include "Modules/Lan/BallMods.h"
#include "Modules/Lan/GameEventMods.h"
#include "Modules/Car/CarPhysics.h"
#include "Modules/Lan/PlayerMods.h"
#include "Modules/GameModes/Drainage.h"
#include "Modules/Lan/MutatorMods.h"


ModHandler::ModHandler() {
	CreateMod<RumbleMods>("Rumble Mods", VK_NUMPAD5, Category::GameModes, GameState::ANY ^ GameState::ONLINE);
	CreateMod<Zombies>("Zombie Game Mode",VK_NUMPAD1, Category::GameModes, GameState::EXHIBITION | GameState::LAN);
	CreateMod<FiftyFifty>("50/50", VK_F1, Category::GameModes, GameState::ANY ^ GameState::ONLINE);
	CreateMod<Drainage>("Drainage", VK_F6, Category::GameModes, GameState::ANY ^ GameState::ONLINE);

	CreateMod<ModdedLanServer>("Host Server", VK_NUMPAD8, Category::Lan, GameState::ANY ^ GameState::ONLINE);
	CreateMod<JoinServer>("Join Server",VK_NUMPAD2, Category::Lan, GameState::ANY);

	CreateMod<CustomBlog>("Custom Blog", VK_NUMPAD4, Category::Menu, GameState::MENU);	
	
	CreateMod<BallMods>("Ball Mods", VK_NUMPAD9, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	CreateMod<CarPhysics>("Car Mods", VK_F3, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	CreateMod<PlayerMods>("Player Mods", VK_F5, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	//CreateMod<MutatorMods>("Mutator Mods", VK_F7, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);

	CreateMod<GameEventMods>("Game Event Mods", VK_F2, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);

	CreateMod<TestClass>("Test Class", VK_NUMPAD0, Category::Other, GameState::ANY);
	CreateMod<InventoryManager>("Manage Inventory", VK_NUMPAD6, Category::Other, GameState::MENU);

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