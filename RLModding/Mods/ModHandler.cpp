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
#include "Modules/GameModes/KeepAway.h"
#include "Modules/Lan/MutatorMods.h"
#include "Modules/Offline/TrainingMods.h"
#include "Modules/Unfinished/TextureMods.h"
#include "Modules/GameModes/InfiniteCelebration.h"
#include "Modules/GameModes/CrazyItems.h"
#include "Modules/GameModes/DribbleDrabble.h"
#include "Modules/Offline/WorkshopMods.h"
#include "Modules/Unfinished/FreezeTag.h"
#include "Modules/Unfinished/Infected.h"
#include "Modules/Unfinished/HUDMods.h"
#include "Modules/GameModes/DemolitionDerby.h"
#include "Modules/Unfinished/MultiTeam.h"
#include "Modules/Lan/ServerBrowser.h"
#include "Modules/Lan/PublicServerList.h"

ModHandler::ModHandler() {
	CreateMod<Zombies>("Classic Zombies", VK_NUMPAD1, Category::GameModes, GameState::EXHIBITION | GameState::LAN, "The bots have a new target...you!");
	CreateMod<FiftyFifty>("50/50", VK_F1, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "Every X seconds a random player gets destroyed.");
	CreateMod<Drainage>("Drainage", VK_F6, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "If you reach 0 boost at any time you'll be demolished.");
	CreateMod<DribbleDrabble>("Dribble Drabble", VK_F13, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "A gamemode for improving your dribble skills.");
	//CreateMod<FreezeTag>("Freeze Tag", VK_F14, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "Tag! Your it.");
	//CreateMod<Infected>("Infected", VK_F14, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "Try to be the last man standing...");
	CreateMod<DemolitionDerby>("Demoliton Derby", VK_F16, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "Earn points by demolishing your opponents");

	CreateMod<KeepAway>("Keep Away", VK_F10, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "Keep your opponent from touching the ball to get points.");
	CreateMod<InfiniteCelebration>("Infinite Celebration", VK_F11, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "Need to practice sweet celebrations? Now you can for as long as you need!");
	CreateMod<CrazyItems>("Crazy Items", VK_F12, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "Normal rumble not intense enough? Give this mode a try.");
	//CreateMod<MultiTeam>("Multi-Team", VK_F16, Category::GameModes, GameState::ANY ^ GameState::ONLINE, "Why limit yourself to 2 teams?");


	CreateMod<ModdedLanServer>("Host Server", VK_NUMPAD8, Category::Lan, GameState::ANY ^ GameState::ONLINE);
	CreateMod<JoinServer>("Join Server", VK_NUMPAD2, Category::Lan, GameState::ANY);
	CreateMod<PublicServerList>("Add Server to Public List", VK_NUMPAD0, Category::Lan, GameState::ANY, "Publicize your LAN server so anyone can join.");
	CreateMod<ServerBrowser>("Get Global Server List", VK_F17, Category::Lan, GameState::MENU, "Get the list of public servers in the LAN list.");

	CreateMod<CustomBlog>("Custom Blog", VK_NUMPAD4, Category::Menu, GameState::MENU);

	CreateMod<BallMods>("Ball Mods", VK_NUMPAD9, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	CreateMod<CarPhysics>("Car Mods", VK_F3, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	CreateMod<PlayerMods>("Player Mods", VK_F5, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	CreateMod<TrainingMods>("Training Mods", VK_F9, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	CreateMod<MutatorMods>("Mutator Mods", VK_F7, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	CreateMod<RumbleMods>("Rumble Mods", VK_NUMPAD5, Category::InGame, GameState::EXHIBITION | GameState::LAN);

	CreateMod<HUDMods>("HUD Mods", VK_F15, Category::Other, GameState::ANY, "HUD Modifications.");

	CreateMod<GameEventMods>("Game Event Mods", VK_F2, Category::InGame, GameState::EXHIBITION | GameState::LAN | GameState::TRAINING);
	CreateMod<WorkshopMods>("Workshop Mods", VK_F14, Category::Other, GameState::ANY);


	CreateMod<TestClass>("Test Class", VK_NUMPAD0, Category::Other, GameState::ANY);
	//CreateMod<TextureMods>("Texture Mods", VK_NUMPAD7, Category::Other, GameState::MENU);

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