#include "ModHandler.h"
#include "Modules/TestClass.h"
#include "../Utils/Utils.h"
#include <iostream>
ModHandler::ModHandler() {
	addMod(new TestClass("Test Class", VK_NUMPAD0));
	//Example for using keybindMap from Utils
	//settings.json is from the GUI
	//std::unordered_map<std::string, int> map = Utils::getKeybinds("settings.json");
	//addMod(new TestClass("Test Class", map["Menu_Hotkey"]));
	//addMod(new TestClass("Test Class", map["Game_Hotkey"]));
	//addMod(new TestClass("Test Class", map["MapLoader_Hotkey"]));
	//addMod(new TestClass("Test Class", map["Join_Hotkey"]));
	//addMod(new TestClass("Test Class", map["Host_Hotkey"]));
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
ModBase* ModHandler::getModInstance(const std::string& name) {
	for (auto& mod : Mods) {
		if (mod->getName() == name) {
			return mod;
		}
	}
	return nullptr;
}