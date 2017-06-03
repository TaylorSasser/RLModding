#pragma once
#include <functional>
#include <unordered_map>
#include "RL/SDK.hpp"

class EventManager
{
public:
	
	EventManager();
	~EventManager();
	void FunctionProxy(SDK::UObject** object,SDK::UFunction* function,void* params,bool isCallFunc);

private:
	typedef std::function<void(void**, void*, void*)> functionType;
	std::unordered_map<SDK::UFunction*,functionType> hashmap;
};

