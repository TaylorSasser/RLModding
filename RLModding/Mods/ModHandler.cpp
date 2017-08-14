#include "ModHandler.h"
#include "Modules/TestClass.h"
#include "../Utils/Utils.h"
#include "Modules/Lan/ZombieGameMode.h"
#include "Modules/Exploits/JoinServer.h"
#include "Modules/Offline/PauseGame.h"


ModHandler::ModHandler() {
	CreateMod<TestClass>("Test Class", VK_NUMPAD0,Category::Ball,GameState::ANY);
	CreateMod<ZombieGameMode>("Zombie Game Mode",VK_NUMPAD1);
	CreateMod<JoinServer>("Join Server",VK_NUMPAD2);
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