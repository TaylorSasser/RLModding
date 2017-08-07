#pragma once
#include <string>
#include <fstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "../Mods/ModHandler.h"


namespace pt = boost::property_tree;
/*
Iterate through ModHandler and getKeybind() to save to file in JSON
"" and setKeybind() after reading JSON file
Add in a GUI key and a Uninject key
*/

class FileManager {
public:
	FileManager();
	~FileManager();
	void Save();
	void Load();
	int GetKeyBindFromModName(std::string);
	int GetGUIKeyBind(std::string);

private:
	pt::ptree keybinds_jsontree;
	bool exists();
	void update();

};

