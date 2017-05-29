#pragma once

#include "functional"
#include "RL/SDK.hpp"



class HookManager {
public:
	//UObject is the object which the function called belongs too, UFunction is the function call, void* is EITHER the FFRAME or the Params, and the bool is for isCallFunction <True = YES> 
	HookManager(std::function<void(SDK::UObject**,SDK::UFunction*, void*, bool)>);
	~HookManager();

};

