#pragma once
#include "../RL/SDK.hpp"
#include "Windows.h"

class Garage {
public:
	Garage();
	~Garage();
	SDK::UProductAsset_Skin_TA* Garage::LoadCarDecal();
	void Garage::InsertAssetIntoGarage(SDK::UProductAsset_Skin_TA* asset);
	SDK::UTexture2D* Garage::DownloadTextureFromURL(SDK::FString URL);
private:
	HANDLE Heap;
};

