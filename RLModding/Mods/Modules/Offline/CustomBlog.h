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
	char ImageUrl[512] = "https://media.discordapp.net/attachments/357638651192016901/357652929345486848/rl.jpg";
	char URL[128] = "http://rocketleaguemods.com";
	bool bSet = false;
};
