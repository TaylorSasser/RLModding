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
	SubscribeEvent("Function ProjectX.PartyMessage_X.Broadcast", &ModBase::onProfileJoinGame);
	SubscribeEvent("Function Engine.PlayerController.PlayerTick", &ModBase::onPlayerTick);
	SubscribeEvent("Function TAGame.PlayerController_TA.PostAsyncTick", &ModBase::onPlayerTATick);

}

bool EventFactory::FunctionProxy(SDK::UObject** object, SDK::UFunction* func, void* params, bool isCallFunc) {
	auto it = hashmap.find(func->GetFullName());
	if (it != hashmap.end()) {
		for (auto& mod : Interfaces::Mods()) {
			if (mod.second->isEnabled() == true) {
				std::function<void(Event*)> ModFunction = std::bind(it->second, mod.second.get(), std::placeholders::_1);
				Event event(object, func, isCallFunc ? nullptr : params);
				ModFunction(&event);
			}
		}
		return false;
	}
	return false;
}

void EventFactory::SubscribeEvent(const std::string& name, Function function) {
	hashmap[name] = function;
}
