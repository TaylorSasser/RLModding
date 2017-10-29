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
	void TextureMods::AddNewReplacementTexture();
	void TextureMods::RemoveReplacementTexture();
	void TextureMods::RefreshCar();

	void TextureMods::PopulateParams();
	void TextureMods::PopulateTextureParameters(UMaterialInstanceConstant* skinMAT);
	void TextureMods::PopulateScalarParameters(UMaterialInstanceConstant* skinMAT);
	void TextureMods::PopulateVectorParameters(UMaterialInstanceConstant* skinMAT);

	void TextureMods::SetTextureValue();
	void TextureMods::SetScalarValue();
	void TextureMods::SetVectorValue();

	void TextureMods::ReplaceBallTexture();

private:
	SDK::UHttpRequestInterface* anyRequestInterface = NULL;
	UMaterialInstanceConstant* skinMaterials = NULL;
	bool p_open = true;

	int tickCounter = 0;
	//AC Wheels
	bool bReplaceLoopers = false;
	char ACWheelsURL[256] = "https://i.imgur.com/SvEZpGf.png";

	//Ball Texture
	bool bReplaceBallTexture = false;
	char BallTextureURL[256] = "";
	char* ballDiffuse = "Ball_Default_Textures.Textures.Ball_Default00_D";

	//Custom Skin URLs
	char curvaturePackURL[2056] = "";
	char diffuseURL[2056] = "";
	char skinURL[2056] = "";
	bool bUpdateDecalTextures = false;

	//uMod Replacement
	struct TextureReplacement {
		char textureName[256] = "";
		char url[256] = "";
	};

	char* textureToReplace = "Skin_Octane_Flames.Pepe_Flames";
	char* newReplacementTextureURL = "";
	TextureReplacement temp = { "Skin_Octane_Flames.Pepe_Flames", "" };
	std::vector<TextureReplacement>textureReplacements = { temp };
	bool bAddNewReplacementTexture = false;
	bool bRemoveReplacementTexture = false;
	int replacementTextureToRemoveIndex = 0;
	bool bReplaceTextures = false;

	//Reset
	bool bResetTextures = false;

	/////////////
	//Skin Mods//
	/////////////
	bool bPopulateParams = false;

	//Texture
	struct Buffer {
		char text[256];
	};
	std::vector<const char*>textureNames = {};
	std::vector<Buffer>textureBuffers = {};
	int textureNameIndex = 0;
	char* textureValue = "";
	bool bSetTextureValue = false;

	//Scalar
	std::vector<const char*>scalarNames = {};
	std::vector<float>scalarValues = {};
	int scalarNameIndex = 0;
	int scalarValue = 0;
	bool bSetScalarValue = false;

	//Vector
	std::vector<const char*>vectorNames = {};
	std::vector<FLinearColor>vectorValues = {};
	int vectorNameIndex = 0;
	FLinearColor vectorValue = { 0,0,0,0 };
	bool bSetVectorValue = false;	
};
