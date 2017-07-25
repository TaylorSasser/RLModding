#pragma once
#include "Event.h"
#include "Mods/ModBase.h"
#include "../RL/SDK.hpp"
#include <unordered_map>

class EventFactory {
	typedef void (ModBase::*Function)(const EventBuilder& e);
public:
	EventFactory();
	~EventFactory();
private:
	std::unordered_map<std::string,Function> map;
};