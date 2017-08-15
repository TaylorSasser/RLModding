#include "ModHandler.h"
#include "Modules/TestClass.h"
#include "../Utils/Utils.h"
#include "Modules/Lan/RumbleMods.h"
#include "Modules/Lan/ZombieGameMode.h"
#include "Modules/Exploits/JoinServer.h"
#include "Modules/Car/UnlimitedJumps.h"
#include "Modules/Offline/CustomBlog.h"
#include "Modules/Offline/InventoryManager.h"
#include "Modules/Classic Mods/ClassicMods.h"


ModHandler::ModHandler() {
	CreateMod<TestClass>("Test Class", VK_NUMPAD0,Category::Other,GameState::ANY);
	CreateMod<RumbleMods>("Rumble Mods", VK_NUMPAD5, Category::Lan, GameState::EXHIBITION | GameState::LAN | GameState::ANY);
	CreateMod<ZombieGameMode>("Zombie Game Mode",VK_NUMPAD1, Category::GameModes, GameState::EXHIBITION | GameState::LAN);
	CreateMod<JoinServer>("Join Server",VK_NUMPAD2, Category::Lan, GameState::ANY);
	CreateMod<UnlimitedJumps>("Unlimited Jumps", VK_NUMPAD3, Category::Car, GameState::EXHIBITION | GameState::TRAINING | GameState::LAN);
	CreateMod<CustomBlog>("Custom Blog", VK_NUMPAD4, Category::Menu, GameState::MENU);
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