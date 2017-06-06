#include "EventManager.h"
#include "../Mods/ModHandler.h"
#include "../Mods/ModBase.h"
#include "../Utils/Wrapper.h"
#include "../RL/SDK.hpp"


std::function<void(SDK::UObject**,SDK::UFunction*,void*)> functionTEMP;

EventManager::EventManager() {
	FunctionProto = std::bind(&EventManager::FunctionProxy,this,std::placeholders::_1,std::placeholders::_2,std::placeholders::_3,std::placeholders::_4);
	addFunction("Function TAGame.PlayerController_Menu_TA.PlayerTick",&ModBase::MainMenuTick);
	addFunction("Function TAGame.PlayerControllerBase_TA.Say_TA",&ModBase::ChatSend);
	addFunction("Function TAGame.Car_TA.OnJumpReleased",&ModBase::onActorJump);
}
EventManager::~EventManager() {
	delete this;
}
void EventManager::addFunction(std::string funcname,function func) {
	hashmap.insert(std::pair<std::string,function>(funcname,func));
}

void EventManager::FunctionProxy(SDK::UObject** object,SDK::UFunction* func,void* params,bool isCallFunc) {
	std::unordered_map<std::string, function>::iterator it = hashmap.find(func->GetFullName());
	if (it != hashmap.end()) {
		for (auto& Mod : Wrapper::Interfaces::getModHandler()->GetMods()) {
			std::function<void(SDK::UObject**, SDK::UFunction*, void*)> tempvar = std::bind(it->second, Mod, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
			if (object != nullptr && func != nullptr && params != nullptr) {
				tempvar(object, func, params);
			}
		}
	}
}