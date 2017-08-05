#pragma once
#include "../RL/SDK.hpp"
#include "Windows.h"

class Garage {
public:
	Garage();
	~Garage();
	SDK::UProductAsset_Skin_TA* Garage::LoadCarDecal();
private:
	HANDLE Heap;
};

