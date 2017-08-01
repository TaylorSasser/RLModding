#include "EventManager.h"
#include "../Mods/ModHandler.h"
#include "../Mods/ModBase.h"
#include "../RL/SDK.hpp"
#include "../Interfaces/Interfaces.h"
#include "string"

#include "boost/algorithm/string.hpp"


std::function<void(SDK::UObject**,SDK::UFunction*,void*)> functionTEMP;

EventManager::EventManager() {
	FunctionProto = std::bind(&EventManager::FunctionProxy,this,std::placeholders::_1,std::placeholders::_2,std::placeholders::_3,std::placeholders::_4);
	/*addFunction("Function TAGame.PlayerController_Menu_TA.PlayerTick",&ModBase::onMainMenuTick);
	addFunction("Function TAGame.Car_TA.OnJumpReleased",&ModBase::onActorJump);
	addFunction("Function TAGame.Car_TA.Tick", &ModBase::onCarTick);
	addFunction("Function TAGame.Ball_TA.Tick", &ModBase::onBallTick);
	addFunction("Function TAGame.GameEvent_Tutorial_FreePlay_TA.Active.Tick", &ModBase::onFreeplayTick);
	addFunction("Function TAGame.GameEvent_TA.Tick", &ModBase::onGameEventTick);
	addFunction("Function ProjectX.TcpConnection.EventConnected",&ModBase::onTCPConnectionBegin);
	addFunction("Function ProjectX.TcpConnection.EventDisconnected",&ModBase::onTCPConnectionEnd);
	addFunction("Function Engine.GameViewportClient.PostRender",&ModBase::onPostRender);
	addFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation",&ModBase::onJoinGame);*/

	addFunction("Function TAGame.PlayerController_TA.Say_TA", &ModBase::onChatSend);
}
EventManager::~EventManager() {
	delete[] &hashmap;
}
void EventManager::addFunction(std::string funcname,function func) {
	hashmap.insert(std::pair<std::string,function>(funcname,func));
}

/*void EventManager::FunctionProxy(SDK::UObject** object,SDK::UFunction* func,void* params,bool isCallFunc) {
	std::unordered_map<std::string, function>::iterator it = hashmap.find(func->GetFullName());
	if (it != hashmap.end()) {
		for (auto& Mod : Interfaces::Mods()->getMods()) {
			if (Mod->isEnabled() == true) {
				Mod->Bind(object, func, params, it->second);
			}
		}
	}
}*/

void EventManager::FunctionProxy(SDK::UObject** object, SDK::UFunction* func, void* params, bool isCallFunc) {
	std::unordered_map<std::string, function>::iterator it = hashmap.find(func->GetFullName());

	if (it != hashmap.end()) {
		for (auto& Mod : Interfaces::Mods()->getMods()) {
			if (Mod->isEnabled() == true) {
				Mod->Bind( object, func, params, it->second);
			}
		}
	}
}