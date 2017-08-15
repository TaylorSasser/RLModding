#pragma once
#include "../Utils/Utils.h"
#include "../../ModBase.h"
#include "../../../DrawManager/DrawManager.hpp"

class CustomBlog : public ModBase
{
public:
	CustomBlog(std::string name, int key, Category category, GameState gamestate);
	~CustomBlog();

	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;

	void onMainMenuTick(Event*) override;

private:
	char title[128] = "Rocket Launcher";
	char body[128] = "This is the body of the blog text";
	char motd[128] = "Created by ButterandCream, Taylor and two.";
	char youtubeTitle[128] = "Rocket League Mods";
	char youtubeURL[128] = "rocketleaguemods.com";
	bool bSet = false;
};
