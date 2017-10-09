#include "TextureMods.h"

TextureMods::TextureMods(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

TextureMods::~TextureMods() {}

void TextureMods::onMenuOpen() {
}

void TextureMods::onMenuClose() {
}

void TextureMods::DrawMenu() {
	ImGui::Begin("Texture Mods", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::InputText("Image URL", url, IM_ARRAYSIZE(url));
	
	if (ImGui::Button("Replace Loopers")) {
		replaceLoopers = true;
		
	}

	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void TextureMods::onMainMenuTick(Event *) {
	if (replaceLoopers) {
		ReplaceLoopers(url);
		replaceLoopers = false;
	}
	
}

void TextureMods::ReplaceLoopers(char* url) {
	SDK::UTexture2D* protoT = SDK::UTexture2D::FindObject<SDK::UTexture2D>("Texture2D WHEEL_Proto.Textures.Tech_01");	
	if (protoT != nullptr) {
		auto texture = DownloadTexture(Utils::to_fstring(url));
		if (texture != nullptr) {
			protoT->Resource = texture->Resource;
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