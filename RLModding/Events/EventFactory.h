#pragma once
#include "Event.h"
#include "../Mods/ModBase.h"
#include "../RL/SDK.hpp"
#include <unordered_map>
#include <functional>


typedef void (ModBase::*Function)(Event* e);
class EventFactory {
public:
	EventFactory();

	std::function<bool(SDK::UObject**, SDK::UFunction*, void*, bool)> getProxy() {
		return std::bind(&EventFactory::FunctionProxy, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_3);
	}
	void SubscribeEvent(const std::string&, Function);

	bool GameStateCheck(GameState game);
private:
	ModBase* modBase;
	bool FunctionProxy(SDK::UObject** object, SDK::UFunction* function, void* params, bool isCallFunc);
	std::unordered_map<std::string, Function> hashmap;
};