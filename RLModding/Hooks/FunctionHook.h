#pragma once
#include "functional"
#include "../RL/SDK.hpp"


class FunctionHook {
public:
	FunctionHook();
	~FunctionHook();
	void FunctionHook::DetourFunctions(std::function<bool(SDK::UObject**, SDK::UFunction*, void*, bool isCallFunc)>);
	void FunctionHook::RemoveDetours();
};
