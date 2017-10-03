#include <Windows.h>
#include <iostream>
#include "../Interfaces/Interfaces.h"
#include "FileManager.h"

FileManager::FileManager() {}
FileManager::~FileManager() {}

//Save keybinds to file
void FileManager::Save() {
	pt::ptree root;
	for (auto& mod : Interfaces::Mods())
	{
		int bind = mod.second.get()->getBind();
		std::string name = mod.first;
		root.put(name, bind);
	}

	root.put("gui_toggle", VK_HOME);
	root.put("eject", VK_END);

	pt::write_json("bindings.json", root);
}

//Load keybinds
void FileManager::Load() {
	if (!exists())
		Save();	
	pt::read_json("bindings.json", keybinds_jsontree);
}

//Returns the keybind for the specified mod
int FileManager::GetKeyBindFromModName(std::string mod_name) {
	int bind = keybinds_jsontree.get<int>(mod_name, 0);
	/*if (bind == 0)
	{
		update();
		return keybinds_jsontree.get<int>(mod_name, 0);
	}*/
	return bind;
}

//For GUI Key and eject key
int FileManager::GetGUIKeyBind(std::string gui_key) {
	int bind = keybinds_jsontree.get<int>(gui_key, 0);
	return bind;
}

//Check if bindings.json exists
bool FileManager::exists() {
	std::ifstream f("bindings.json");
	bool exists = f.good();
	f.close();
	return exists;
}


void FileManager::update() {
	Save();
	Load();
}

void FileManager::ExportModSettings() {

}

void FileManager::ImportModSettings() {

}

