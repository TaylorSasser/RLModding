#pragma once
#include "functional"
#include "../RL/SDK.hpp"


class FunctionHook {
public:	
	FunctionHook();
	~FunctionHook();
	void FunctionHook::DetourFunctions(std::function<void(SDK::UObject**, SDK::UFunction*, void*, bool)> function);
	void FunctionHook::RemoveDetours();
};
