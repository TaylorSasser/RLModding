#include "ModHandler.h"
#include "TestClass.h"

ModHandler::ModHandler()  {
	AddMod(new TestClass());
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

void ModHandler::AddMod(ModBase* mod) {
	Mods.push_back(mod);
}