#include "ModHandler.h"
#include "TestClass.h"
#include "TestClass2.h"

ModHandler::ModHandler()  {
	AddMod(new TestClass());
	AddMod(new TestClass2());

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