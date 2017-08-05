#include "Garage.h"
#include "../Utils/Utils.h"
#include "../Utils/ObjectInitializer.h"

/* Potental Bugs
 * Setting skins for cars not unlocked / owned
 * Heap Overflow
 */

Garage::Garage() {
	//Allocates 1/2 a MB for our custom decals
	Heap = HeapCreate(HEAP_CREATE_ENABLE_EXECUTE,262144,1);
	InsertAssetIntoGarage(LoadCarDecal());
}
Garage::~Garage() {}

SDK::UProductAsset_Skin_TA* Garage::LoadCarDecal() {
	SDK::UProductAsset_Skin_TA* SkinMemory = reinterpret_cast<SDK::UProductAsset_Skin_TA*>(HeapAlloc(Heap, HEAP_ZERO_MEMORY, sizeof(SDK::UProductAsset_Skin_TA)));
	ZeroMemory(SkinMemory,sizeof(SDK::UProductAsset_Skin_TA));
	SDK::UProductAsset_Skin_TA* DummySkin = (SDK::UProductAsset_Skin_TA*)SDK::UObject::FindObject<SDK::UProductAsset_Skin_TA>("ProductAsset_Skin_TA Skin_MuscleCar_Wings.Skin_MuscleCar_Wings");
	memcpy(SkinMemory,DummySkin,sizeof(SDK::UProductAsset_Skin_TA));
	return SkinMemory;
}
void Garage::InsertAssetIntoGarage(SDK::UProductAsset_Skin_TA* asset) {

}
SDK::UTexture2D* Garage::DownloadTextureFromURL(SDK::FString URL) {
	SDK::UOnlineImageDownloaderWeb_X* ImageDownloaderWeb = (SDK::UOnlineImageDownloaderWeb_X*)Utils::GetInstanceOf(SDK::UOnlineImageDownloaderWeb_X::StaticClass());
	SDK::TArray< class SDK::FDownloadedImageRequest> Requests = ImageDownloaderWeb->Requests;

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