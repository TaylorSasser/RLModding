#pragma once
#include "../RL/SDK.hpp"

class Garage {
public:
	Garage();
	~Garage();
	SDK::UProduct_TA* LoadObject(SDK::UProductAsset_TA* asset);
	SDK::UTexture2D* LoadTexture(SDK::FString DecalName);
	void LoadCustomDecals();
private:
	
};

