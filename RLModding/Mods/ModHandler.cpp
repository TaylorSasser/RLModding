#include "ModHandler.h"
#include "Modules/TestClass.h"
#include "../Utils/Utils.h"
#include <iostream>
ModHandler::ModHandler() {
	addMod(std::make_unique<TestClass>("Test Class", VK_NUMPAD0));
	//Example for using keybindMap from Utils
	//settings.json is from the GUI
	//std::unordered_map<std::string, int> map = Utils::getKeybinds("settings.json");
	//addMod(new TestClass("Test Class", map["Menu_Hotkey"]));
	//addMod(new TestClass("Test Class", map["Game_Hotkey"]));
	//addMod(new TestClass("Test Class", map["MapLoader_Hotkey"]));
	//addMod(new TestClass("Test Class", map["Join_Hotkey"]));
	//addMod(new TestClass("Test Class", map["Host_Hotkey"]));
}

size_t ModHandler::GetModListSize() {
	return mods.size();
}

void ModHandler::addMod(std::unique_ptr<ModBase> mod) {
	mods[mod->getName()] = std::move(mod);
}

ModBase* ModHandler::getModInstance(const std::string& name) {
	auto it = mods.find(name);
	if (it == std::end(mods))
	{
		return nullptr;
	}
	return it->second.get();
}