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
	
	//Decal Mods
	SDK::UMaterialInstanceConstant* TextureMods::GetCurrentSkinName();
	void TextureMods::UpdateDecalTextures();

	//Alpha Console Wheels
	void ReplaceLoopersTexture(char* url);
	SDK::UProduct_TA* TextureMods::GetCurrentWheelProduct();
	void TextureMods::EquipLoopers();

	//Reset
	void TextureMods::ResetTextures();
	void TextureMods::ResetTexture(char* TextureName);

	//Tools
	SDK::UTexture2D* DownloadTexture(char* stringURL);
	void TextureMods::ReplaceTexture(char* TextureName, char* NewTextureURL);
	void TextureMods::RefreshCar();

private:
	int tickCounter = 0;
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
