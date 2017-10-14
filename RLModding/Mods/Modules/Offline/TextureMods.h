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

	void TextureMods::ReplaceTexture(char* TextureName, char* NewTextureURL);
	void TextureMods::UpdateDecalTextures();
	void TextureMods::ResetTextures();

private:
	bool bReplaceLoopers = false;
	char ACWheelsURL[2056] = "https://i.imgur.com/SvEZpGf.png";
	bool p_open = true;

	//Custom Skin URLs
	char curvaturePackURL[2056] = "";
	char diffuseURL[2056] = "";
	char skinURL[2056] = "";
	bool bUpdateDecalTextures = false;

	//uMod Replacement
	char textureToReplace[2056] = "Skin_Octane_Flames.Pepe_Flames";
	char newReplacementTexture[2056] = "";
	bool bReplaceTextures = false;

	//Reset
	bool bResetTextures = false;
};
