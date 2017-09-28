#include "Garage.h"
#include "../Utils/Utils.h"
#include "../Interfaces/Interfaces.h"

Garage::Garage() {}
Garage::~Garage() {}

//DEPRECIATED. Only use the methods for REFERENCE. USE Interfaces::Memory() to create any custom UObjects;

void Garage::LoadCarDecal() {
	auto UDecal = Interfaces::Memory().AllocUObject<UProductAsset_Skin_TA>(UObject::FindObject<UProductAsset_Skin_TA>("ProductAsset_Skin_TA Skin_MuscleCar_Wings.Skin_MuscleCar_Wings"),"CustomDecal_Skin_TA.Test");
	auto UProduct = Interfaces::Memory().AllocUObject<UProduct_TA>(UObject::FindObject<UProduct_TA>("Product_TA ProductsDB.Products.Skin_MuscleCar_Wings"),"CustomProduct_SkinDecal_TA.Test");
}

SDK::UTexture2D* Garage::DownloadTextureFromURL(SDK::FString URL) {
	SDK::UOnlineImageDownloaderWeb_X* ImageDownloaderWeb = (SDK::UOnlineImageDownloaderWeb_X*)Utils::GetInstanceOf(SDK::UOnlineImageDownloaderWeb_X::StaticClass());
	SDK::TArray<SDK::FDownloadedImageRequest> Requests = ImageDownloaderWeb->Requests;

	SDK::UHttpFactory* anyFactory = (SDK::UHttpFactory*)Utils::GetInstanceOf(SDK::UHttpFactory::StaticClass());
	SDK::UTexture2DDynamic* anyTexture = (SDK::UTexture2DDynamic*)Utils::GetInstanceOf(SDK::UTexture2DDynamic::StaticClass());
	SDK::UHttpRequestInterface* anyRequestInterface = (SDK::UHttpRequestInterface*)Utils::GetInstanceOf(SDK::UHttpRequestInterface::StaticClass());
	SDK::UHttpResponseInterface* anyResponseInterface = (SDK::UHttpResponseInterface*)Utils::GetInstanceOf(SDK::UHttpResponseInterface::StaticClass());

	SDK::FDownloadedImageRequest Request = Requests[Requests.Num()];
	Request.Id = URL;
	Request.Image.URL = URL;
	Request.HTTPRequest = anyRequestInterface;
	Request.HTTPRequest->SetVerb(Utils::to_fstring("GET"));
	Request.HTTPRequest->SetURL(URL);

	ImageDownloaderWeb->RequestOnlineImage(URL, true, ImageDownloaderWeb->__EventImageDownloaded__Delegate);
	ImageDownloaderWeb->EventImageDownloaded(ImageDownloaderWeb, Request.Image);
	ImageDownloaderWeb->OnDownloadComplete(anyRequestInterface, anyResponseInterface, true); 
	return (SDK::UTexture2D*)ImageDownloaderWeb->Requests[Requests.Num()].Image.Texture;
}



