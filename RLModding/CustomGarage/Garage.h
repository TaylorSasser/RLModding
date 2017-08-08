#pragma once
#include "../RL/SDK.hpp"
#include "Windows.h"

class Garage {
public:
	Garage();
	~Garage();
	void Garage::LoadCarDecal();
	SDK::UTexture2D* Garage::DownloadTextureFromURL(SDK::FString URL);
private:
	HANDLE Heap;
};





