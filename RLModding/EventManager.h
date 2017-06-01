#pragma once
#include "ModBase.h"
#include "Event.h"
#include <string>
#include "RL/SDK.hpp"
#include <unordered_map>

class EventManager
{
public:
	EventManager();
	~EventManager();
	void AddFunction(tEventMethod,SDK::UFunction*);
	void AddFunction(tEventMethod,std::string);
	void EventManager::ProxyFunction(SDK::UObject** object,SDK::UFunction* function,void* parameters);

private:
	std::unordered_map<SDK::UFunction*,tEventMethod> hashmap;
};

