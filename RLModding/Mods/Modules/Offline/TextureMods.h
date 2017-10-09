#pragma once

#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"

class TextureMods : public ModBase
{
public:
	TextureMods(std::string name, int key, Category cat, GameState gamestate);
	~TextureMods();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	
	void onMainMenuTick(Event*) override;

	void ReplaceLoopers(char* url);
	SDK::UTexture2D* DownloadTexture(SDK::FString URL);

private:
	bool replaceLoopers = false;
	char url[2056] = "https://i.imgur.com/SvEZpGf.png";
	bool p_open = true;

	
};
