#include "ModHandler.h"
#include "Modules/TestClass.h"

ModHandler::ModHandler()  {
	addMod(new TestClass(NULL,NULL));
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
