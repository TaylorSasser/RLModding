#pragma once
#include "../Utils/Utils.h"
#include "../../ModBase.h"
#include "../../../DrawManager/DrawManager.hpp"

class CustomBlog : public ModBase
{
public:
	CustomBlog(std::string name, int key, Category category, GameState gamestate);
	~CustomBlog();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void ExportSettings(pt::ptree&);
	void ImportSettings(pt::ptree&);

	void onMainMenuTick(Event*) override;

private:
	char carousel_title[128] = "Rocket Launcher";
	char carousel_body[128] = "Thanks for using Rocket Launcher!";
	char carousel_ImageUrl[512] = "https://media.discordapp.net/attachments/357638651192016901/357652929345486848/rl.jpg";
	char carousel_URL[128] = "http://rocketleaguemods.com";

	char RLCS_title[128] = "RLCS Tile";
	char RLCS_body[128] = "Description of RLCS Tile";
	char RLCS_ImageUrl[512] = "https://static.wixstatic.com/media/d00a38_05393888d98a46089988582ed14bd289~mv2.png";
	char RLCS_URL[128] = "https://twitter.com/RL_Mods";

	char Comm_title[128] = "Community Tile";
	char Comm_body[128] = "Description of Community Tile";
	char Comm_ImageUrl[512] = "https://rocketleaguemods.com/wp-content/uploads/cmdm/166390/1495043086_low-res.jpg";
	char Comm_URL[128] = "http://rocketleaguemods.com";

	char motd[128] = "Created by ButterandCream, Taylor and two.";

	bool bSet = false;
	bool p_open = true;
};
