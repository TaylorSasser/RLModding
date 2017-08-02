#include "ModHandler.h"
#include "Modules/TestClass.h"
#include "../Utils/Utils.h"
#include <iostream>
ModHandler::ModHandler() {
	CreateMod<TestClass>("Test Class", VK_NUMPAD0);
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