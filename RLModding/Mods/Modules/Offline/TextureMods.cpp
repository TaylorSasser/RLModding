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
	ImGui::Begin("Texture Mods", &p_open, ImVec2(970, 695), 0.75f);
	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "Texture mods are very unstable right now. Expect occasional crashing when applying.");
	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "Crashing may occur when applying, if the game has not already loaded the texture.");
	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "Crashing is also likely when exiting the game. Working on a fix.");
	ImGui::Separator();
	
	//Skin Mods
	if (ImGui::CollapsingHeader("Skin/Decal Mods")) {
		if (ImGui::Button("Load Parameters")) {
			bPopulateParams = true;
		} ImGui::SameLine();
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "- Currently only works if a skin is applied! The Game will crash otherwise!");
		if (ImGui::CollapsingHeader("Texture Values")) {
			for (int i = 0; i < textureNames.size(); i++) {
				ImGui::PushID(i);
				if (ImGui::Button("Update##")) {
					textureNameIndex = i;
					textureValue = textureBuffers[i].text;
					bSetTextureValue = true;
				}
				ImGui::PopID();
				ImGui::SameLine(80);
				ImGui::InputText(textureNames[i], textureBuffers[i].text, IM_ARRAYSIZE(textureBuffers[i].text), ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_EnterReturnsTrue);
			}
		}
		if (ImGui::CollapsingHeader("Scalar Values")) {
			for (int i = 0; i < scalarNames.size(); i++) {
				if (ImGui::InputFloat(scalarNames[i], &scalarValues[i])) {
					scalarNameIndex = i;
					scalarValue = scalarValues[i];
					bSetScalarValue = true;
				}
			}
		}
		if (ImGui::CollapsingHeader("Vector Values")) {
			for (int i = 0; i < vectorNames.size(); i++) {
				ImGui::Text(vectorNames[i]);
				//R
				ImGui::PushID(vectorNames[i]); ImGui::PushItemWidth(80);
				ImGui::Text("R"); ImGui::SameLine();
				if (ImGui::InputFloat("##R", &vectorValues[i].R)) {
					vectorNameIndex = i;
					vectorValue.R = vectorValues[i].R;
					bSetVectorValue = true;
				} ImGui::SameLine();
				//G
				ImGui::Text("G"); ImGui::SameLine();
				if (ImGui::InputFloat("##G", &vectorValues[i].G)) {
					vectorNameIndex = i;
					vectorValue.G = vectorValues[i].G;
					bSetVectorValue = true;
				} ImGui::SameLine();
				//B
				ImGui::Text("B"); ImGui::SameLine();
				if (ImGui::InputFloat("##B", &vectorValues[i].B)) {
					vectorNameIndex = i;
					vectorValue.B = vectorValues[i].B;
					bSetVectorValue = true;
				} ImGui::SameLine();
				//A
				ImGui::Text("A"); ImGui::SameLine();
				if (ImGui::InputFloat("##A", &vectorValues[i].A)) {
					vectorNameIndex = i;
					vectorValue.A = vectorValues[i].A;
					bSetVectorValue = true;
				}
				ImGui::PopID(); ImGui::PopItemWidth(); ImGui::NewLine();
			}
		}
	} ImGui::Separator();

	//uMod Replacement
	if (ImGui::CollapsingHeader("Texture Replacement (uMod Semi-Replacement)")) {
		ImGui::PushItemWidth(400);
		ImGui::Text("Texture To Replace (GameFile Name)");
		ImGui::SameLine(430);
		ImGui::Text("New Texture URL");
		for (int i = 0; i < textureReplacements.size(); i++) {
			ImGui::PushID(i);
			ImGui::InputText("##textureName", textureReplacements[i].textureName, IM_ARRAYSIZE(textureReplacements[i].textureName), ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
			ImGui::SameLine(430);
			ImGui::InputText("##textureURL", textureReplacements[i].url, IM_ARRAYSIZE(textureReplacements[i].url), ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
			ImGui::SameLine();
			if (ImGui::Button("Update##")) {
				textureToReplace = textureReplacements[i].textureName;
				newReplacementTextureURL = textureReplacements[i].url;
				bReplaceTextures = true;
			} ImGui::SameLine();
			if (ImGui::Button("Remove##")) {
				replacementTextureToRemoveIndex = i;
				bRemoveReplacementTexture = true;
			}
			ImGui::PopID();
		}
		ImGui::PopItemWidth();

		if (ImGui::Button("Add New Texture To Replace")) {
			bAddNewReplacementTexture = true;
		}
	} ImGui::Separator();

	//Wheel Mods
	if (ImGui::CollapsingHeader("Wheel Mods")) {
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "If you are in the Garage and the wheel does not change, simply try again. (Sometimes the wheel object is not found first time)");
		ImGui::InputText("Wheel Texture URL", ACWheelsURL, IM_ARRAYSIZE(ACWheelsURL), ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
		if (ImGui::Button("Apply & Replace Loopers")) {
			bReplaceLoopers = true;
		} ImGui::SameLine();
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "- Currently only works in the Garage.");
	} ImGui::Separator();

	//Ball Mods
	/*
	if (ImGui::CollapsingHeader("Ball Mods - WIP")) {
		ImGui::InputText("Ball Texture URL", BallTextureURL, IM_ARRAYSIZE(BallTextureURL), ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
		if (ImGui::Button("Apply")) {
			textureToReplace = ballDiffuse;
			newReplacementTextureURL = BallTextureURL;
			bReplaceTextures = true;
			//bReplaceBallTexture = true;
		}
	} ImGui::Separator();
	*/

	//Reset - WIP (Not working at all right now)
	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "Reset is disabled for now.");
	if (ImGui::Button("Reset")) {
		bResetTextures = true;
	}
	ImGui::Separator();

	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void TextureMods::onMainMenuTick(Event *) {
	if (bSetTextureValue) {
		SetTextureValue();
		bSetTextureValue = false;
	}

	if (bSetScalarValue) {
		SetScalarValue();
		bSetScalarValue = false;
	}

	if (bSetVectorValue) {
		SetVectorValue();
		bSetVectorValue = false;
	}

	if (bReplaceTextures) {
		ReplaceTexture(textureToReplace, newReplacementTextureURL);
		bReplaceTextures = false;
	}

	if (bAddNewReplacementTexture) {
		AddNewReplacementTexture();
		bAddNewReplacementTexture = false;
	}

	if (bRemoveReplacementTexture) {
		RemoveReplacementTexture();
		bRemoveReplacementTexture = false;
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

	if (bReplaceBallTexture) {
		ReplaceTexture(ballDiffuse, newReplacementTextureURL);
		ReplaceBallTexture();
		bReplaceBallTexture = false;
	}

	if (bResetTextures) {
		ResetTextures();
		bResetTextures = false;
	}

	if (bPopulateParams) {
		PopulateParams();
		bPopulateParams = false;
	}
}

void TextureMods::SetTextureValue() {
	SDK::UMaterialInstanceConstant* skinMAT = GetCurrentSkinName();
	FTextureParameterValue value = skinMAT->TextureParameterValues[textureNameIndex];
	skinMAT->SetTextureParameterValue(value.ParameterName, DownloadTexture(textureValue));
}

void TextureMods::SetScalarValue() {
	SDK::UMaterialInstanceConstant* skinMAT = GetCurrentSkinName();
	FScalarParameterValue value = skinMAT->ScalarParameterValues[scalarNameIndex];
	skinMAT->SetScalarParameterValue(value.ParameterName, scalarValue);
}

void TextureMods::SetVectorValue() {
	SDK::UMaterialInstanceConstant* skinMAT = GetCurrentSkinName();
	FVectorParameterValue value = skinMAT->VectorParameterValues[vectorNameIndex];
	skinMAT->SetVectorParameterValue(value.ParameterName, vectorValue);
}

void TextureMods::PopulateParams() {
	SDK::UMaterialInstanceConstant* skinMAT = GetCurrentSkinName();
	PopulateTextureParameters(skinMAT);
	PopulateScalarParameters(skinMAT);
	PopulateVectorParameters(skinMAT);
}

void TextureMods::PopulateTextureParameters(UMaterialInstanceConstant* skinMAT) {
	//SDK::UMaterialInstanceConstant* skinMAT = GetCurrentSkinName();
	if (skinMAT != NULL) {
		textureNames.clear();
		textureBuffers.clear();
		for (int i = 0; i < skinMAT->TextureParameterValues.Num(); i++) {
			textureNames.push_back(Utils::stringToCharArray(skinMAT->TextureParameterValues[i].ParameterName.GetName().c_str()));
			TextureMods::Buffer newBuffer;
			newBuffer.text[0] = '\0';
			textureBuffers.push_back(newBuffer);
		}
	}
}

void TextureMods::PopulateScalarParameters(UMaterialInstanceConstant* skinMAT) {
	//SDK::UMaterialInstanceConstant* skinMAT = GetCurrentSkinName();
	if (skinMAT != NULL) {
		scalarNames.clear();
		scalarValues.clear();
		for (int i = 0; i < skinMAT->ScalarParameterValues.Num(); i++) {
			scalarNames.push_back(Utils::stringToCharArray(skinMAT->ScalarParameterValues[i].ParameterName.GetName().c_str()));
			scalarValues.push_back(skinMAT->ScalarParameterValues[i].ParameterValue);
		}
	}
}

void TextureMods::PopulateVectorParameters(UMaterialInstanceConstant* skinMAT) {
	//SDK::UMaterialInstanceConstant* skinMAT = GetCurrentSkinName();
	if (skinMAT != NULL) {
		vectorNames.clear();
		vectorValues.clear();
		std::cout << skinMAT->GetFullName().c_str() << std::endl;
		for (int i = 0; i < skinMAT->VectorParameterValues.Num() && i < 20; i++) {
			vectorNames.push_back(Utils::stringToCharArray(skinMAT->VectorParameterValues[i].ParameterName.GetName().c_str()));
			vectorValues.push_back(skinMAT->VectorParameterValues[i].ParameterValue);
		}
	}
}

void TextureMods::ResetTextures() {
	ResetTexture(textureToReplace);
}

SDK::UMaterialInstanceConstant* TextureMods::GetCurrentSkinName() {
	UGameShare_TA* GameShare = (UGameShare_TA*)Utils::GetInstanceOf(UGameShare_TA::StaticClass());
	if (GameShare != NULL) {
		SDK::UMaterialInterface* CurrentSkin = GameShare->CarPreviewActors[0]->CarMesh->SkinAsset->Skin;
		if (CurrentSkin != NULL) {
			std::string SkinName = CurrentSkin->Outer->GetName() + "." + CurrentSkin->GetName();
			SDK::UObject* loadSkinMAT = SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(Utils::to_fstring(SkinName), SDK::UMaterialInstanceConstant::StaticClass(), true);
			if (loadSkinMAT != NULL) {
				SDK::UMaterialInstanceConstant* skinMAT = (SDK::UMaterialInstanceConstant*)loadSkinMAT;
				return skinMAT;
			}
			else { return NULL; }
		}
		else { return NULL; }
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
		auto newTexture = DownloadTexture(newReplacementTextureURL);
		if (newTexture != nullptr) {
			getTexture->Resource = newTexture->Resource;
		}
	}
}

void TextureMods::AddNewReplacementTexture() {
	TextureReplacement textureReplacement;
	textureReplacements.push_back(textureReplacement);
}

void TextureMods::RemoveReplacementTexture() {
	textureReplacements.erase(textureReplacements.begin() + replacementTextureToRemoveIndex);
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

void TextureMods::ReplaceBallTexture() {
	SDK::UObject* ballMAT = SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(Utils::to_fstring("Ball_Default.Materials.MAT_Ball_V3"), SDK::UMaterial::StaticClass(), true);
	UMaterial* ballMaterial = (UMaterial*)ballMAT;
}

SDK::UTexture2D* TextureMods::DownloadTexture(char* stringURL) {
	std::cout << stringURL << std::endl;
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
	SDK::UHttpResponseInterface* anyResponseInterface = (SDK::UHttpResponseInterface*)Utils::GetInstanceOf(SDK::UHttpResponseInterface::StaticClass());
	SDK::UHttpRequestInterface* anyRequestInterface = (SDK::UHttpRequestInterface*)Utils::GetInstanceOf(SDK::UHttpRequestInterface::StaticClass());

	//Create a request
	SDK::FDownloadedImageRequest Request;
	Request.Id = URL;
	Request.Image.URL = URL;
	Request.HTTPRequest = anyRequestInterface;
	//Request.HTTPRequest->SetVerb(Utils::to_fstring("GET"));
	Request.HTTPRequest->SetURL(URL);

	ImageDownloaderWeb->RequestOnlineImage(URL, true, ImageDownloaderWeb->__EventImageDownloaded__Delegate);
	ImageDownloaderWeb->EventImageDownloaded(ImageDownloaderWeb, Request.Image);
	ImageDownloaderWeb->OnDownloadComplete(anyRequestInterface, anyResponseInterface, true);
	
	SDK::UTexture2D* FinalTexture = (SDK::UTexture2D*)ImageDownloaderWeb->Requests[RequestIndex].Image.Texture;
	if (FinalTexture != nullptr) {
		return FinalTexture;
	}
	else {
		return (SDK::UTexture2D*)ImageDownloaderWeb->Requests[0].Image.Texture;
	}
}