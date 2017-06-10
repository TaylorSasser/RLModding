#include "ModHandler.h"
#include "Modules/BallMod.h"
#include "Modules/CarMod.h"
#include "Modules/BallMod.h"
#include "Modules/MainMenuMod.h"
#include "Modules/MapLoader.h"
#include "Modules/TestClass.h"

ModHandler::ModHandler()  {
	addMod(new TestClass());
	addMod(new BallMod());
	addMod(new CarMod());
	addMod(new MainMenuMod());
	addMod(new MapLoader());
}


ModHandler::~ModHandler() {
	for (auto& mod : Mods) {
		delete mod;
	}
}

std::list<ModBase*> ModHandler::GetMods() {
	return Mods;
}

size_t ModHandler::GetModListSize() {
	return Mods.size();
}

void ModHandler::addMod(ModBase* mod) {
	Mods.push_back(mod);
}
