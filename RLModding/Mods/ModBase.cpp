#include "ModBase.h"
#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/json_parser.hpp"
#include "boost/lexical_cast/bad_lexical_cast.hpp"
#include "boost/lexical_cast.hpp"
#include <iostream>

void ModBase::InitHotkeys() {
	std::ifstream settings("settings.json");
	boost::property_tree::ptree pt;
	boost::property_tree::read_json(settings, pt);
	settings.close();

	std::string temp;
	//Menu Hotkey
	temp = pt.get<std::string>("Menu_Hotkey", "0");
	try {
		menuHotkey = boost::lexical_cast<int>(temp);
		std::cout << "Read menu hotkey: " << menuHotkey << std::endl;
	}
	catch (boost::bad_lexical_cast &)
	{
		std::cout << "Not a valid int: " << temp << ", defualting to 112\n";
		menuHotkey = 112;
	}

	//Game Hotkey
	temp = pt.get<std::string>("Game_Hotkey", "0");
	try {
		gameHotkey = boost::lexical_cast<int>(temp);
		std::cout << "Read game hotkey: " << gameHotkey << std::endl;
	}
	catch (boost::bad_lexical_cast &)
	{
		std::cout << "Not a valid int: " << temp << ", defualting to 113\n";
		gameHotkey = 113;
	}

	//Map Loader Hotkey
	temp = pt.get<std::string>("MapLoader_Hotkey", "0");
	try {
		mapLoaderHotkey = boost::lexical_cast<int>(temp);
		std::cout << "Read map loader hotkey: " << mapLoaderHotkey << std::endl;
	}
	catch (boost::bad_lexical_cast &)
	{
		std::cout << "Not a valid int: " << temp << ", defualting to 114\n";
		mapLoaderHotkey = 114;
	}

	//Join Hotkey
	temp = pt.get<std::string>("Join_Hotkey", "0");
	try {
		joinHotkey = boost::lexical_cast<int>(temp);
		std::cout << "Read join hotkey: " << joinHotkey << std::endl;
	}
	catch (boost::bad_lexical_cast &)
	{
		std::cout << "Not a valid int: " << temp << ", defualting to 115\n";
		joinHotkey = 115;
	}

	//Host Hotkey
	temp = pt.get<std::string>("Host_Hotkey", "0");
	try {
		hostHotkey = boost::lexical_cast<int>(temp);
		std::cout << "Read host hotkey: " << hostHotkey << std::endl;
	}
	catch (boost::bad_lexical_cast &)
	{
		std::cout << "Not a valid int: " << temp << ", defualting to 116\n";
		hostHotkey = 116;
	}

	std::cout << "Done reading hotkeys.\n";
}