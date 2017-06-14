#include "ModHandler.h"
#include "Modules/TestClass.h"

ModHandler::ModHandler()  {
	addMod(new TestClass("Test Class",VK_NUMPAD0));
}


ModHandler::~ModHandler() {
	for (auto& mod : Mods) {
		delete mod;
	}
}

std::list<ModBase*> ModHandler::getMods() {
	return Mods;
}

size_t ModHandler::GetModListSize() {
	return Mods.size();
}

void ModHandler::addMod(ModBase* mod) {
	Mods.push_back(mod);
}

ModBase* ModHandler::getModInstance(std::string name) {
	for (auto& mod : Mods) {
		if (mod->getName() == name) {
			printf("Found the instance of the mod class %s\n",name);
			return mod;
		} else {
			printf("Could not find instance of the mod class %s\n", name);
			return nullptr;
		}
	}
}
