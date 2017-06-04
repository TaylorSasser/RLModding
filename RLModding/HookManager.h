#pragma once

#include "EventManager.h"
#include "functional"
#include "RL/SDK.hpp"



class HookManager {
private:
	static HookManager* instance;
	HookManager();
	HookManager(const HookManager&) = delete;
	~HookManager();
public:	
	static HookManager* Instance() {
		if (!instance) instance = new HookManager();
		return instance;
	}
	void HookManager::DetourFunctions(std::function<void(SDK::UObject**, SDK::UFunction*, void*, bool)> function);

};