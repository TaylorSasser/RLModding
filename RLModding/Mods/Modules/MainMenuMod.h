#pragma once
#include "../ModBase.h"
/*
	File: MainMenuMod.h
	Description: This file will contain the prototypes for the Main Menu mods.
	This will have things related to the custom blog and whatever other mods we use in the main
	menu.
*/

class MainMenuMod : public ModBase {
	public:
		MainMenuMod();
		~MainMenuMod();
		void MainMenuTick(SDK::UObject**, SDK::UFunction*, void* params);
	private:
		//Variables for reading and saving the settings
		const std::string settingsFile = "settings.json";
		bool bCustomBlog = false, bFoundController = false, bHotkeys = false;
		std::string blogTitle, blogBody, youtubeURL, youtubeTitle, MOTD;

		//Read the settings file
		void readSettingsFile();


		//SDK variables needed
		SDK::APlayerController_Menu_TA* menuController;
		SDK::UGFxData_Community_TA* community;
		SDK::UOnlineGameBlog_X* blog;
		
		
};