#include "EventFactory.h"
#include "../RL/SDK.hpp"
#include "../Interfaces/Interfaces.h"


EventFactory::EventFactory() {
	SubscribeEvent("Function TAGame.PlayerController_Menu_TA.PlayerTick", &ModBase::onMainMenuTick);
	SubscribeEvent("Function TAGame.PlayerControllerBase_TA.Say_TA", &ModBase::onChatSend);
	SubscribeEvent("Function TAGame.Car_TA.OnJumpReleased", &ModBase::onActorJump);
	SubscribeEvent("Function TAGame.Car_TA.Tick", &ModBase::onCarTick);
	SubscribeEvent("Function TAGame.Ball_TA.Tick", &ModBase::onBallTick);
	SubscribeEvent("Function TAGame.GameEvent_Tutorial_FreePlay_TA.Active.Tick", &ModBase::onFreeplayTick);
	SubscribeEvent("Function TAGame.GameEvent_TA.Tick", &ModBase::onGameEventTick);
	SubscribeEvent("Function ProjectX.TcpConnection.EventConnected", &ModBase::onTCPConnectionBegin);
	SubscribeEvent("Function ProjectX.TcpConnection.EventDisconnected", &ModBase::onTCPConnectionEnd);
	SubscribeEvent("Function Engine.GameViewportClient.PostRender", &ModBase::onPostRender);
	SubscribeEvent("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation", &ModBase::onJoinGame);
}


EventFactory::~EventFactory() {
	delete[] & hashmap;
}

bool EventFactory::FunctionProxy(SDK::UObject** object, SDK::UFunction* func, void* params, bool isCallFunc) {
	std::unordered_map<std::string, Function>::iterator it = hashmap.find(func->GetFullName());
	if (it != hashmap.end()) {
		for (auto& Mod : Interfaces::Mods()->getMods()) {
			if (Mod->isEnabled() == true) {
				std::function<void(Event*)> ModFunction = std::bind(it->second, Mod, std::placeholders::_1);
				if (isCallFunc) {
					Event* event = new Event(object, func, NULL);
					ModFunction(event);
					delete event;
				}
				else {
					Event* event = new Event(object, func, params);
					ModFunction(event);
					delete event;
				}
			}
		}
		return false;
	}
}
void EventFactory::SubscribeEvent(const std::string& name, Function function) {
	hashmap.insert(std::pair<std::string, Function>(name, function));
}