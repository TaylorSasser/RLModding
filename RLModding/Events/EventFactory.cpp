#include "EventFactory.h"
#include "../RL/SDK.hpp"
#include "../Interfaces/Interfaces.h"
#include <iostream>
#include <fstream>

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
	SubscribeEvent("Function TAGame.OnlineGameLanServer_TA.StartMatch", &ModBase::onGameStart);
	SubscribeEvent("Function TAGame.OnlineGameLanServer_TA.HandleGameEventEnded", &ModBase::onGameEnd);
	SubscribeEvent("Function ProjectX.OnlineGameJoinGame_X.EventJoinGameComplete", &ModBase::onOnlineGameStart);
	SubscribeEvent("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation", &ModBase::onSetFriendJoinLocation);
	SubscribeEvent("Function TAGame.MatchType_Offline_TA.OnInitGameEvent", &ModBase::onInitExhibition);
	SubscribeEvent("Function TAGame.PRI_TA.PostBeginPlay", &ModBase::onPostPRI);
	SubscribeEvent("Function Core.Object.GotoState", &ModBase::onGotoState);
	SubscribeEvent("Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.SetNetworkKeys", &ModBase::onKeysBeginState);
	SubscribeEvent("Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.HandleGenerateKeys", &ModBase::onHandleGenKeys);
	SubscribeEvent("Function ProjectX.OnlineGameJoinGame_X.SetServerBeaconAddress", &ModBase::onBeaconAddress);
	SubscribeEvent("Function Engine.Engine.GetEngine", &ModBase::onEngineTick);
	SubscribeEvent("Function ProjectX.PsyNet_X.RPC", &ModBase::onPsyNetRPC);
	SubscribeEvent("Function TAGame.GFxData_Garage_TA.LoadTitles", &ModBase::onTitlesLoad);
	SubscribeEvent("Function ProjectX.TcpConnection.EventConnected", &ModBase::onTCPConnect);
	SubscribeEvent("Function IpDrv.WebConnection.ProcessPost", &ModBase::onPostProcess);
	SubscribeEvent("Function IpDrv.WebConnection.ProcessGet", &ModBase::onGetProcess);
	SubscribeEvent("Function ProjectX.WebRequest_X.Send", &ModBase::onWebRequestSend);
	SubscribeEvent("Function ProjectX.WebRequest_X.ConstructHttpRequest", &ModBase::onConstructWebRequest);
	SubscribeEvent("Function ProjectX.Aws4Signature_X.SignRequest", &ModBase::onRequestSigned);
	SubscribeEvent("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData", &ModBase::onWorkshopDownloaded);
	SubscribeEvent("Function TAGame.GameEvent_Breakout_TA.EventPlatformDamaged", &ModBase::onBreakoutPlatformDamaged);
	SubscribeEvent("Function ProjectX.RPC_KeysBase_X.SetPrimaryPlayer", &ModBase::onSetPrimaryPlayer);
	SubscribeEvent("Function ProjectX.OnlineGameJoinGame_X.EventServerReserved", &ModBase::onSendServerReservedEvent);
	SubscribeEvent("Function TAGame.GameEvent_TA.OnCarSpawned", &ModBase::onCarSpawned);
	SubscribeEvent("Function TAGame.GameEvent_TA.RemovePRI", &ModBase::onPRIRemove); // Gets player replication info when they leave
	SubscribeEvent("Function TAGame.GameEvent_TA.AddPRI", &ModBase::onPRIAdd); // Gets player replication info when they join
	SubscribeEvent("Function TAGame.GameEvent_TA.RemovePlayer", &ModBase::onGameEventRemovePlayer);
	SubscribeEvent("Function TAGame.GameEvent_TA.AddPlayer", &ModBase::onGameEventAddPlayer);
	SubscribeEvent("Function TAGame.GameEvent_TA.RemoveLocalPlayer", &ModBase::onLocalPlayerLeave);
	SubscribeEvent("Function TAGame.Car_TA.OnDemolished", &ModBase::onCarDemolished);
	SubscribeEvent("Function TAGame.Car_TA.OnHitBall",&ModBase::onBallHit);
	//SubscribeEvent("Function TAGame.AdManager_TA.GetNextImage", &ModBase::onGetNextImage);
	//SubscribeEvent("Function TAGame.GameEvent_Soccar_TA.PostBeginPlay", &ModBase::onGameEventSoccarPostBeginPlay);
	//SubscribeEvent("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit", &ModBase::onSteamNetCloser);
	//SubscribeEvent("Function Engine.HUD.PostRender", &ModBase::onHUDPostRender);
	// "Function TAGame.GameEvent_TA.IsPlayingLan"
	// "Function TAGame.GameEvent_TA.HandleCarDemolished"
	// "Function TAGame.GameEvent_TA.HandleCarDestroyed"
}

bool EventFactory::FunctionProxy(SDK::UObject** object, SDK::UFunction* func, void* params, bool isCallFunc) {
	auto it = hashmap.find(func->GetFullName());
	if (it != hashmap.end()) {
		std::function<void(Event*)> ModFunction = std::bind(it->second,modBase,std::placeholders::_1);
		Event event(object, func, params);
		ModFunction(&event);

		for (auto& mod : Interfaces::Mods()) {
			if (mod.second->isEnabled()) {
				std::function<void(Event*)> ModFunction = std::bind(it->second, mod.second.get(), std::placeholders::_1);
				if (object == nullptr || func == nullptr || params == nullptr) continue;
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
