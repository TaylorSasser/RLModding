#include "EventFactory.h"
#include "../RL/SDK.hpp"
#include "../Interfaces/Interfaces.h"


EventFactory::EventFactory() {
	modBase = new ModBase("ModBase InstanceUpdater", -1);
	SubscribeEvent("Function TAGame.PlayerController_Menu_TA.PlayerTick", &ModBase::onMainMenuTick);
	SubscribeEvent("Function TAGame.PlayerControllerBase_TA.Say_TA", &ModBase::onChatSend);
	SubscribeEvent("Function TAGame.Car_TA.OnJumpReleased", &ModBase::onActorJump);
	SubscribeEvent("Function TAGame.Car_TA.Tick", &ModBase::onCarTick);
	SubscribeEvent("Function TAGame.GameEvent_Tutorial_FreePlay_TA.Active.Tick", &ModBase::onFreeplayTick);
	SubscribeEvent("Function TAGame.GameEvent_TA.Tick", &ModBase::onGameEventTick);
	SubscribeEvent("Function ProjectX.TcpConnection.EventConnected", &ModBase::onTCPConnectionBegin);
	SubscribeEvent("Function ProjectX.TcpConnection.EventDisconnected", &ModBase::onTCPConnectionEnd);
	SubscribeEvent("Function Engine.GameViewportClient.PostRender", &ModBase::onPostRender);
	SubscribeEvent("Function ProjectX.PartyMessage_X.Broadcast", &ModBase::onProfileJoinGame);
	SubscribeEvent("Function Engine.PlayerController.PlayerTick", &ModBase::onPlayerTick);
	SubscribeEvent("Function TAGame.PlayerController_TA.PostAsyncTick", &ModBase::onPlayerTATick);
	SubscribeEvent("Function TAGame.OnlineGameLanServer_TA.StartMatch",&ModBase::onGameStart);
	SubscribeEvent("Function TAGame.OnlineGameLanServer_TA.HandleGameEventEnded",&ModBase::onGameEnd);
}

bool EventFactory::FunctionProxy(SDK::UObject** object, SDK::UFunction* func, void* params, bool isCallFunc) {
	auto it = hashmap.find(func->GetFullName());
	if (it != hashmap.end()) {

		//This is for updating the InstanceStorage with all of our good types before the Mod functions can get called. It also allows us to use the override operator inside of our module and not invoke the superclass function.
		std::function<void(Event*)> ModFunction = std::bind(it->second,modBase,std::placeholders::_1);
		Event event(object, func, params);
		ModFunction(&event);
		//printf("Calling Object Address %p : Function Name %s \n",event.getCallingObject(),event.getUFunction()->GetFullName());

		for (auto& mod : Interfaces::Mods()) {
			if (mod.second->isEnabled() == true) {
				std::function<void(Event*)> ModFunction = std::bind(it->second, mod.second.get(), std::placeholders::_1);
				Event event(object, func,params);
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
