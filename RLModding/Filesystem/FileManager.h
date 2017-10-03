#pragma once
#include <string>
#include <fstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "../Mods/ModHandler.h"


namespace pt = boost::property_tree;


class FileManager {
public:
	FileManager();
	~FileManager();
	void Save();
	void Load();
	int GetKeyBindFromModName(std::string);
	int GetGUIKeyBind(std::string);
	void ExportModSettings();
	void ImportModSettings();
private:
	pt::ptree keybinds_jsontree;
	pt::ptree settings;
	bool exists();
	void update();

};

