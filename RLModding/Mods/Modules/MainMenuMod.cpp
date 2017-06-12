#include "MainMenuMod.h"
#include "../../Utils/Utils.h"
#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/json_parser.hpp"
#include <fstream>
#include <iostream>

//Constructor
MainMenuMod::MainMenuMod() {}

//Desctructor
MainMenuMod::~MainMenuMod() {

}

//This function is called everytime the Rocket League player controller menu tick is called
void MainMenuMod::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* params) {
	if (!bFoundController) {
		menuController = (SDK::APlayerController_Menu_TA*)Utils::GetInstanceOf(SDK::APlayerController_Menu_TA::StaticClass());
		if (menuController != nullptr) {
			std::cout << "Menu controller found!" << std::endl;
			bFoundController = true;
		}
	}

	if (GetAsyncKeyState(menuHotkey) || GetAsyncKeyState(VK_F1)) {
		readSettingsFile(); //for custom information & get if custom blog is enabled
		if (bCustomBlog) {
			community = (SDK::UGFxData_Community_TA*)Utils::GetInstanceOf(SDK::UGFxData_Community_TA::StaticClass());
			blog = (SDK::UOnlineGameBlog_X*)Utils::GetInstanceOf(SDK::UOnlineGameBlog_X::StaticClass());
			if (community != nullptr && blog != nullptr) {
				blog->BlogTitle = Utils::to_fstring(blogTitle);
				blog->BlogBody = Utils::to_fstring(blogBody);
				blog->YouTubeURL = Utils::to_fstring(youtubeURL);
				blog->YouTubeTitle = Utils::to_fstring(youtubeTitle);
				blog->MotD = Utils::to_fstring(MOTD);
				
				community->UpdateBlog();

				std::cout << "Created custom blog" << std::endl;
			}

		}
		Sleep(150);
	}

	if (!bHotkeys) {
		InitHotkeys();
		bHotkeys = true;
	}
}

void MainMenuMod::readSettingsFile(){
	std::cout << "Called readSettingsFile for menu mods" << std::endl;
	boost::property_tree::ptree pt;
	std::ifstream settings(settingsFile);
	boost::property_tree::read_json(settings, pt);
	settings.close();

	bCustomBlog = (pt.get<std::string>("Custom_Blog_Enabled", "0").compare("True") == 0) ? true : false;
	blogTitle = pt.get<std::string>("Blog_Title", "0");
	blogBody = pt.get<std::string>("Blog_Body", "0");
	MOTD = pt.get<std::string>("MOTD", "0");
	youtubeTitle = pt.get<std::string>("YouTube_Title", "0");
	youtubeURL = pt.get<std::string>("YouTube_URL", "0");

}