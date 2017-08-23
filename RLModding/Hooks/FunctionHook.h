#pragma once
#include <Windows.h> 
#include "functional"
#include "../Libs/detours.h"
#include "../Utils/Pattern/TFL_HT.h"
#include "../Utils/Utils.h"
#include "../Utils/SDKDefines.h"
#include "../RL/SDK.hpp"



class FunctionHook {
public:
	FunctionHook();
	~FunctionHook();
	void FunctionHook::DetourFunctions(std::function<bool(SDK::UObject**, SDK::UFunction*, void*, bool isCallFunc)>);
	void FunctionHook::RemoveDetours();
};
