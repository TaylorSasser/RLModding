#include "TextureMods.h"

TextureMods::TextureMods(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

TextureMods::~TextureMods() {}

void TextureMods::onMenuOpen() {
}

void TextureMods::onMenuClose() {
}

void TextureMods::DrawMenu() {
	ImGui::Begin("Texture Mods", &p_open, ImVec2(520, 550), 0.75f);

	//Testing
	ImGui::InputText("Image URL", ACWheelsURL, IM_ARRAYSIZE(ACWheelsURL));
	if (ImGui::Button("Replace Loopers")) {
		bReplaceLoopers = true;
		
	}
	ImGui::Separator();

	//Decal Mods - WIP
	ImGui::Text("Car Decal Texture Mods");
	//ImGui::InputText("Curvature Pack Texture", curvaturePackURL, IM_ARRAYSIZE(curvaturePackURL));
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
	if (bReplaceLoopers) {
		ReplaceLoopers(ACWheelsURL);
		bReplaceLoopers = false;
	}

	if (bUpdateDecalTextures) {
		UpdateDecalTextures();
		bUpdateDecalTextures = false;
	}

	if (bReplaceTextures) {
		ReplaceTexture(textureToReplace, newReplacementTexture);
		bReplaceTextures = false;
	}

	if (bResetTextures) {
		ResetTextures();
		bResetTextures = false;
	}
}

void TextureMods::ResetTextures() {
	ResetTexture(textureToReplace);
}

void TextureMods::UpdateDecalTextures() {
	//TODO: Fix CurvaturePack Textures
	SDK::UObject* loadSkinMAT = SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(Utils::to_fstring("Skin_MuscleCar_Wings.MIC_Body_MuscleCar_Wings"), SDK::UMaterialInstanceConstant::StaticClass(), true);
	SDK::UMaterialInstanceConstant* skinMAT = (SDK::UMaterialInstanceConstant*)loadSkinMAT;

	SDK::UTexture2D* curvaturePackTexture = NULL;
	SDK::UTexture2D* diffuseTexture = NULL;
	SDK::UTexture2D* skinTexture = NULL;

	SDK::UTexture2D* newCurvaturePackTexture = NULL;
	SDK::UTexture2D* newDiffuseTexture = NULL;
	SDK::UTexture2D* newSkinTexture = NULL;

	if (curvaturePackURL != "") {
		newCurvaturePackTexture = DownloadTexture(Utils::to_fstring(curvaturePackURL));
	}
	if (diffuseURL != "") {
		newDiffuseTexture = DownloadTexture(Utils::to_fstring(diffuseURL));
	}
	if (skinURL != "") {
		newSkinTexture = DownloadTexture(Utils::to_fstring(skinURL));
	}

	//CurvaturePack crashes instantly so need a new method for this (Skin works perfectly)
	//skinMAT->SetTextureParameterValue(SDK::FName("CurvaturePack"), newCurvaturePackTexture);
	skinMAT->SetTextureParameterValue(SDK::FName("Diffuse"), newDiffuseTexture);
	skinMAT->SetTextureParameterValue(SDK::FName("Skin"), newSkinTexture);
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
		auto newTexture = DownloadTexture(Utils::to_fstring(newReplacementTexture));
		if (newTexture != nullptr) {
			getTexture->Resource = newTexture->Resource;
		}
	}
}

void TextureMods::ReplaceLoopers(char* url) {
	SDK::UObject* loadLooperTexture = SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(Utils::to_fstring("WHEEL_Proto.Textures.Tech_01"), SDK::UTexture2D::StaticClass(), true);
	SDK::UTexture2D* getLooperTexture = (SDK::UTexture2D*)loadLooperTexture;
	if (getLooperTexture != nullptr) {
		auto alphaTexture = DownloadTexture(Utils::to_fstring(url));
		if (alphaTexture != nullptr) {
			getLooperTexture->Resource = alphaTexture->Resource;
		}
	}
}

SDK::UTexture2D * TextureMods::DownloadTexture(SDK::FString URL) {
	SDK::UOnlineImageDownloaderWeb_X* ImageDownloaderWeb = (SDK::UOnlineImageDownloaderWeb_X*)Utils::GetInstanceOf(SDK::UOnlineImageDownloaderWeb_X::StaticClass());	
	SDK::TArray< class SDK::FDownloadedImageRequest> Requests = ImageDownloaderWeb->Requests;	
	size_t RequestIndex = Requests.Num();

	SDK::UHttpFactory* anyFactory = (SDK::UHttpFactory*)Utils::GetInstanceOf(SDK::UHttpFactory::StaticClass());
	SDK::UTexture2DDynamic* anyTexture = (SDK::UTexture2DDynamic*)Utils::GetInstanceOf(SDK::UTexture2DDynamic::StaticClass());
	SDK::UHttpRequestInterface* anyRequestInterface = (SDK::UHttpRequestInterface*)Utils::GetInstanceOf(SDK::UHttpRequestInterface::StaticClass());
	SDK::UHttpResponseInterface* anyResponseInterface = (SDK::UHttpResponseInterface*)Utils::GetInstanceOf(SDK::UHttpResponseInterface::StaticClass());

	//Create a request
	//Should not be needed but seems to crash without it
	SDK::FDownloadedImageRequest Request = Requests[RequestIndex];
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