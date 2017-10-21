#include "TextureMods.h"

/////////////////////////////////////////////////////////////////////////////////////
//TODO:
////- Reset textures on exit to avoid crashing
////- Apply a warning method when user is not in the garage
////- Create a test module which gives the user access to all skin properties to modify
////- Include support for mystery decals
////- Test whether everything works whilst in a party (multiple cars on screen)
/////////////////////////////////////////////////////////////////////////////////////

TextureMods::TextureMods(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

TextureMods::~TextureMods() {}

void TextureMods::onMenuOpen() {
}

void TextureMods::onMenuClose() {
}

void TextureMods::DrawMenu() {
	ImGui::Begin("Texture Mods", &p_open, ImVec2(520, 550), 0.75f);

	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "Texture mods are very unstable right now. Expect occasional crashing when applying.");
	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "Crashing is also likely when exiting the game. Working on a fix.");
	ImGui::Separator();

	//Decal Mods - WIP
	ImGui::Text("Car Decal Texture Mods");
	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "Currently only works if a skin is applied! Will crash otherwise!");
	ImGui::InputText("Curvature Pack Texture", curvaturePackURL, IM_ARRAYSIZE(curvaturePackURL));
	ImGui::InputText("Diffuse Texture", diffuseURL, IM_ARRAYSIZE(diffuseURL));
	ImGui::InputText("Skin Texture", skinURL, IM_ARRAYSIZE(skinURL));
	if (ImGui::Button("Update Textures")) {
		bUpdateDecalTextures = true;
	}
	ImGui::Separator();

	//Texture Replacement - WIP
	ImGui::Text("Replace Specific Texture (uMod semi-replacement)");
	ImGui::InputText("Texture To Replace", textureToReplace, IM_ARRAYSIZE(textureToReplace));
	ImGui::Text("Example: 'Skin_Octane_Flames.Pepe_Flames'", NULL);
	ImGui::NewLine();
	ImGui::InputText("New Replacement Texture URL", newReplacementTexture, IM_ARRAYSIZE(newReplacementTexture));
	if (ImGui::Button("Replace Texture")) {
		bReplaceTextures = true;
	}
	ImGui::Separator();

	//Loopers Wheel Replacement
	ImGui::InputText("Image URL", ACWheelsURL, IM_ARRAYSIZE(ACWheelsURL));
	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "Currently only works in the Garage.");
	if (ImGui::Button("Apply & Replace Loopers")) {
		bReplaceLoopers = true;

	}
	ImGui::Separator();

	//Reset - WIP (Not working at all right now)
	if (ImGui::Button("Reset")) {
		bResetTextures = true;
	}

	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void TextureMods::onMainMenuTick(Event *) {
	if (bUpdateDecalTextures) {
		UpdateDecalTextures();
		bUpdateDecalTextures = false;
	}

	if (bReplaceTextures) {
		ReplaceTexture(textureToReplace, newReplacementTexture);
		bReplaceTextures = false;
	}

	if (bReplaceLoopers) {
		if (tickCounter < 1) {
			EquipLoopers();
			tickCounter++;
		}
		else if (tickCounter < 4) {
			ReplaceLoopersTexture(ACWheelsURL);
			tickCounter++;
		}
		else {
			bReplaceLoopers = false;
			tickCounter = 0;
		}
	}

	if (bResetTextures) {
		ResetTextures();
		bResetTextures = false;
	}
}

void TextureMods::ResetTextures() {
	ResetTexture(textureToReplace);
}

SDK::UMaterialInstanceConstant* TextureMods::GetCurrentSkinName() {
	UGameShare_TA* GameShare = (UGameShare_TA*)Utils::GetInstanceOf(UGameShare_TA::StaticClass());
	SDK::UMaterialInterface* CurrentSkin = GameShare->CarPreviewActors[0]->CarMesh->SkinAsset->Skin;
	if (GameShare != NULL) {
		std::string SkinName = CurrentSkin->Outer->GetName() + "." + CurrentSkin->GetName();
		SDK::UObject* loadSkinMAT = SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(Utils::to_fstring(SkinName), SDK::UMaterialInstanceConstant::StaticClass(), true);
		if (loadSkinMAT != NULL) {
			SDK::UMaterialInstanceConstant* skinMAT = (SDK::UMaterialInstanceConstant*)loadSkinMAT;
			return skinMAT;
		} 
		else {return NULL;}
	} 
	else {return NULL;}
}

void TextureMods::UpdateDecalTextures() {
	SDK::UMaterialInstanceConstant* skinMAT = GetCurrentSkinName();
	if (skinMAT != NULL) {
		if (strcmp(curvaturePackURL, "") == 1) {
			skinMAT->SetTextureParameterValue(SDK::FName("CurvaturePack"), DownloadTexture(curvaturePackURL));
		}
		if (strcmp(diffuseURL, "") == 1) {
			skinMAT->SetTextureParameterValue(SDK::FName("Diffuse"), DownloadTexture(diffuseURL));
		}
		if (strcmp(skinURL, "") == 1) {
			skinMAT->SetTextureParameterValue(SDK::FName("Skin"), DownloadTexture(skinURL));
		}
	}
}

void TextureMods::ResetTexture(char* TextureName) {
	SDK::UObject* loadTexture = SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(Utils::to_fstring(std::string(TextureName)), SDK::UTexture2D::StaticClass(), true);
	SDK::UTexture2D* getTexture = (SDK::UTexture2D*)loadTexture;

	std::cout << "Resetting Texture: " << getTexture->GetFullName().c_str() << std::endl;
}

void TextureMods::ReplaceTexture(char* TextureName, char* NewTextureURL) {
	SDK::UObject* loadTexture = SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(Utils::to_fstring(std::string(TextureName)), SDK::UTexture2D::StaticClass(), true);
	SDK::UTexture2D* getTexture = (SDK::UTexture2D*)loadTexture;
	if (getTexture != nullptr) {
		auto newTexture = DownloadTexture(newReplacementTexture);
		if (newTexture != nullptr) {
			getTexture->Resource = newTexture->Resource;
		}
	}
}

SDK::UProduct_TA* TextureMods::GetCurrentWheelProduct() {
	UGameShare_TA* GameShare = (UGameShare_TA*)Utils::GetInstanceOf(UGameShare_TA::StaticClass());
	return GameShare->CarPreviewActors[0]->CarMesh->WheelAsset->GetProduct();
}

void TextureMods::EquipLoopers() {
	UProduct_TA* CurrentWheelProduct = GetCurrentWheelProduct();
	UProduct_TA* LooperWheelProduct = (SDK::UProduct_TA*)SDK::UObject::FindObject<SDK::UProduct_TA>("Product_TA ProductsDB.Products.WHEEL_Proto_02");
	CurrentWheelProduct->AssetPath = LooperWheelProduct->AssetPath;
	CurrentWheelProduct->AssetPackageName = LooperWheelProduct->AssetPackageName;
	RefreshCar();
}

void TextureMods::ReplaceLoopersTexture(char* url) {
	SDK::UObject* loadLoopersMAT = SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(Utils::to_fstring("WHEEL_Proto_02.Materials.WHEEL_Proto_02_MIC"), SDK::UMaterialInstanceConstant::StaticClass(), true);
	UMaterialInstanceConstant* loopersMAT = (UMaterialInstanceConstant*)loadLoopersMAT;
	if (loopersMAT != NULL) {
		loopersMAT->SetTextureParameterValue(SDK::FName("ImageSeq_SubUV"), DownloadTexture(url));
	}
}

void TextureMods::RefreshCar() {
	SDK::UGFxData_Garage_TA* dGarage = (SDK::UGFxData_Garage_TA*)Utils::GetInstanceOf(SDK::UGFxData_Garage_TA::StaticClass());
	SDK::UGFxData_LoadoutSets_TA* dLoadoutSets = (SDK::UGFxData_LoadoutSets_TA*)Utils::GetInstanceOf(SDK::UGFxData_LoadoutSets_TA::StaticClass());
	if (dGarage != NULL && dLoadoutSets != NULL) {
		int PrevTeam = dGarage->PreviewTeam;
		if (PrevTeam == 0) {
			dLoadoutSets->SetPreviewTeam(1);
			dLoadoutSets->SetPreviewTeam(0);
		}
		else {
			dLoadoutSets->SetPreviewTeam(0);
			dLoadoutSets->SetPreviewTeam(1);
		}
	}
}

SDK::UTexture2D* TextureMods::DownloadTexture(char* stringURL) {
	SDK::FString URL = Utils::to_fstring(stringURL);
	SDK::UOnlineImageDownloaderWeb_X* ImageDownloaderWeb = (SDK::UOnlineImageDownloaderWeb_X*)Utils::GetInstanceOf(SDK::UOnlineImageDownloaderWeb_X::StaticClass());
	SDK::TArray< class SDK::FDownloadedImageRequest> Requests = ImageDownloaderWeb->Requests;

	//Check to see if this texture has already been downloaded
	for (int i = 0; i < Requests.Num(); i++) {
		if (strcmp(Requests[i].Image.URL.ToString().c_str(), stringURL) == 0) {
			return (SDK::UTexture2D*)ImageDownloaderWeb->Requests[i].Image.Texture;
		}
	}

	size_t RequestIndex = Requests.Num();
	SDK::UHttpFactory* anyFactory = (SDK::UHttpFactory*)Utils::GetInstanceOf(SDK::UHttpFactory::StaticClass());
	SDK::UTexture2DDynamic* anyTexture = (SDK::UTexture2DDynamic*)Utils::GetInstanceOf(SDK::UTexture2DDynamic::StaticClass());
	SDK::UHttpRequestInterface* anyRequestInterface = (SDK::UHttpRequestInterface*)Utils::GetInstanceOf(SDK::UHttpRequestInterface::StaticClass());
	SDK::UHttpResponseInterface* anyResponseInterface = (SDK::UHttpResponseInterface*)Utils::GetInstanceOf(SDK::UHttpResponseInterface::StaticClass());

	//Create a request
	SDK::FDownloadedImageRequest Request;
	Request.Id = URL;
	Request.Image.URL = URL;
	Request.HTTPRequest = anyRequestInterface;
	Request.HTTPRequest->SetVerb(Utils::to_fstring("GET"));
	Request.HTTPRequest->SetURL(URL);

	ImageDownloaderWeb->RequestOnlineImage(URL, true, ImageDownloaderWeb->__EventImageDownloaded__Delegate);
	ImageDownloaderWeb->EventImageDownloaded(ImageDownloaderWeb, Request.Image);
	ImageDownloaderWeb->OnDownloadComplete(anyRequestInterface, anyResponseInterface, true);

	return (SDK::UTexture2D*)ImageDownloaderWeb->Requests[RequestIndex].Image.Texture;
}