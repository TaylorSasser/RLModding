#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>
#include <functional>
#include "../Events/Event.h"
#include "../Interfaces/GlobalVariables.h"
#include "../Interfaces/InstanceStorage.h"
#include "../DrawManager/DrawManager.hpp"
#include "../Utils/Utils.h"
#include <iostream>


/*
None:		00000
Training:	00001
Exhibition: 00010
Online:		00100
LAN:		01000
Menu:		10000
Any:		11111
*/
enum GameState {
	NONE = 0, TRAINING = 1 << 0, EXHIBITION = 1 << 1,ONLINE = 1 << 2, LAN = 1 << 3, MENU = 1 << 4, ANY = (1 << 5) - 1
};


inline GameState operator|(GameState a,GameState b) {return static_cast<GameState>(static_cast<int>(a) | static_cast<int>(b));}
inline GameState operator^(GameState a, GameState b) { return static_cast<GameState>(static_cast<int>(a) ^ static_cast<int>(b)); }

enum Category {
	Menu = 0,GameModes,Ball,Lan,Car,Other,ALL,MAX
};

static const std::string categoryNames[MAX-1] = {
	"Menu Mods","Game Modes","Ball Mods","LAN Mods","Car Mods","Other Mods"
};

class ModBase
{
public:
	ModBase() {}
	ModBase(const std::string& modName, int keyBind,Category category,GameState gamestate) : name(modName), key(keyBind), cat(category),allowedGameStates(gamestate) {}
	ModBase(const std::string& modName, int keyBind) : name(modName), key(keyBind), cat(Category::ALL),allowedGameStates(ANY) {}
	
	virtual ~ModBase() = default;

	virtual void Toggle() {
		enabled = !enabled;		
		onToggle();
		if (enabled) onEnable(); 
		else onDisable();
	}
	
	virtual void setState(bool state) { enabled = state; }
	virtual bool isEnabled() { return enabled; }

	virtual const std::string& getName() { return name; }
	virtual void setName(const std::string &newName) { name = newName; }

	virtual int getBind() { return key; }
	virtual void setBind(int keycode) { key = keycode; }

	virtual Category getCategory() {return cat;}
	virtual GameState getAllowedGameStates() {return allowedGameStates;}
	
	virtual GameState getCurrentGameState() {
		if (inCustom) return LAN;
		else if (inExhibition) return EXHIBITION;
		else if (inMainMenu) return MENU;
		else if (inOnline) return ONLINE;
		else if (inTraining) return TRAINING;
		else return NONE;
	};

	static GameState STATIC_getCurrentGameState() { return ModBase().getCurrentGameState(); };

	virtual void DrawMenu() {}
	virtual void onEnable() {}
	virtual void onDisable() {}
	
	virtual void onToggle() {  
		GameState currentState = getCurrentGameState();
		if (!(currentState & getAllowedGameStates())) setState(false);
	}

	virtual void onProfileJoinGame(Event*) {}
	virtual void onPlayerTick(Event*) {}

	virtual void onOnlineGameStart(Event* event) {
		inMainMenu = false; inOnline = true; inCustom = false; inExhibition = false; inTraining = false;
	}

	virtual void onSetFriendJoinLocation(Event*) {}

	virtual void onPlayerTATick(Event* event) {
		InstanceStorage::SetController(reinterpret_cast<SDK::APlayerController_TA*>(event->getCallingObject()));
	}
	virtual void onMainMenuTick(Event* event) {
		InstanceStorage::SetMenuController(reinterpret_cast<SDK::APlayerController_Menu_TA*>(event->getCallingObject()));
		inMainMenu = true; inOnline = false; inCustom = false; inExhibition = false; inTraining = false;
		
	}
	virtual void onCarTick(Event* event) {
		InstanceStorage::SetCurrentCar(reinterpret_cast<SDK::ACar_TA*>(event->getCallingObject()));
	}
	virtual void onGameEventTick(Event* event) {
		InstanceStorage::SetGameEvent(reinterpret_cast<SDK::AGameEvent_TA*>(event->getCallingObject()));
		if (!inOnline) { inMainMenu = false; inOnline = false; inCustom = true; inExhibition = false; inTraining = false; }
	}
	virtual void onGameStart(Event* event) {
		InstanceStorage::SetLanServer(reinterpret_cast<SDK::UOnlineGameLanServer_TA*>(event->getCallingObject()));
	}
	virtual void onGameEnd(Event* event) {
		InstanceStorage::SetLanServer(reinterpret_cast<SDK::UOnlineGameLanServer_TA*>(event->getCallingObject()));
	}
	virtual void onReplayTick(Event*) {}
	virtual void onFreeplayTick(Event*) {
		inMainMenu = false; inOnline = false; inCustom = false; inExhibition = false; inTraining = true;
	}
	virtual void onPostRender(Event*) {}
	virtual void onEventMMRChange(Event*) {}
	virtual void onChatSend(Event*) {}
	virtual void onActorJump(Event*) {}
	virtual void onTCPConnectionBegin(Event*) {}
	virtual void onTCPConnectionEnd(Event*) {}
	virtual void onKeysBeginState(Event* e) {}

	virtual void onInitExhibition(Event*){
		inMainMenu = false; inOnline = false; inCustom = false; inExhibition = true; inTraining = false;
	}

	virtual void onPostPRI(Event*) {}
	virtual void onGotoState(Event*) {}
	virtual void onEngineSecurityKeys(Event* e) {}
	virtual void onHandleGenKeys(Event* e) {}
	virtual void onBeaconAddress(Event* e) {}

	virtual void onEngineTick(Event* e) {
		InstanceStorage::SetEngine(reinterpret_cast<SDK::UEngine*>(e->getCallingObject()));
	}

<<<<<<< HEAD
	virtual void onPsyNetRPC(Event* e) {}
	virtual void onTitlesLoad(Event* e) {}
	virtual void onTCPConnect(Event* e) {}
	virtual void onMessageSend(Event* event) {}
	virtual void onPostProcess(Event* event) {}
	virtual void onGetProcess(Event* event) {}
	virtual void onWebRequestSend(Event* event) {}
	virtual void onConstructWebRequest(Event* event) {}
	virtual void onRequestSigned(Event* event) {}
=======
	virtual void onPsyNetRPC(Event* e) {
		auto params = e->getParams<UPsyNet_X_RPC_Params>();
		//URPC_GenerateKeys_X
		//std::cout << "PsyNetRPC\n"
		
	}

	virtual void onTitlesLoad(Event* e) {
		UGFxData_Garage_TA* garage = (UGFxData_Garage_TA*)e->getCallingObject();
	}

	virtual void onTCPConnect(Event* e) {
		UTcpConnection* connection = (UTcpConnection*)e->getCallingObject();
		if (connection != nullptr) {
			std::cout << connection->GetRemoteAddress().ToString() << std::endl;
			std::cout << connection->GetAddress().ToString() << std::endl;
		}
		

	}
	
	virtual void onSetPrimaryPlayer(Event* e) {
		URPC_KeysBase_X* caller = reinterpret_cast<SDK::URPC_KeysBase_X*>(e->getCallingObject());
		std::cout << ">>>>>>SETTING NEW SERVER: " << std::endl;
		/*caller->SetServerAddress(L"25.82.10.172:7778");
		caller->Key = L"JhtbJ4M43lRIyQSA6xYuYelB0bEQl+n6hRsDcQmj0pk=";
		caller->IV = L"HKNBpu215LCUGiDTs1XwCA==";
		caller->HMACKey = L"J8mUXRphocYppAyEX/mKB07FgbBD6RaF+CwNBXA5JBI=";
		caller->SessionId = L"Hifv0CpmgG6QwFKRHovTLw==";*/

		// OLD
		//std::cout << "current server address: " << e->getParams<URPC_KeysBase_X_SetServerAddress_Params>()->ServerAddress. << std::endl;
		//std::cout << caller->ServerHost.ToString() << std::endl;
		//e->getParams<URPC_KeysBase_X_SetServerAddress_Params>()->ServerAddress = L"25.82.10.172:7778";
		//std::cout << "set server address" << std::endl;
	}
	virtual void onSendServerReservedEvent(Event* e) {
		std::cout << ">>>>>>MESSAGE: " << std::endl;
		UOnlineGameJoinGame_X* game = reinterpret_cast<SDK::UOnlineGameJoinGame_X*>(Utils::GetInstanceOf(UOnlineGameJoinGame_X::StaticClass()));
		std::cout << ">>>>>>MESSAGE2: " << game->ServerGameAddress.ToString() << std::endl;
		game->ServerGameAddress = L"25.81.228.178:7777";
		//std::cout << e->getParams<SOnlineGameJoinGame_TA_ReservingServer_JoinServer_Params>()->Message->ServerAddress.ToString() << std::endl;
		//e->getParams<SOnlineGameJoinGame_TA_ReservingServer_JoinServer_Params>()->Message->ServerAddress = L"192.168.0.144:7778";
		
	}

	virtual void onWorkshopDownloaded(Event* e) {
		std::cout << "Dowanloadedfdfdfdfdf" << std::endl;
		UOnlineCommunityContentInterfaceSteamworks_OnDownloadedWorkshopData_Params* params = e->getParams<UOnlineCommunityContentInterfaceSteamworks_OnDownloadedWorkshopData_Params>();

		TArray<struct FDownloadedWorkshopData> items = params->Items;
		for (int i = 0; i < items.Num(); i++) {
			if(items.IsValidIndex(i) && items.GetByIndex(i).Filename.IsValid())
				std::cout << items.GetByIndex(i).Filename.ToString() << std::endl;
		}

	

	}
		virtual void onBreakoutPlatformDamaged(Event* e) {
		std::cout << "Platform Damaged" << std::endl;
		AGameEvent_Breakout_TA_EventPlatformDamaged_Params* params = e->getParams<AGameEvent_Breakout_TA_EventPlatformDamaged_Params>();

		ABreakOutActor_Platform_TA* platform = params->Platform;
		//platform->DamageState.bDirectDamage = true;
		//platform->DamageState.bImmediate = true;
		//platform->Location.Z += 100;
		//platform->StaticMeshComponent->SetBlockRigidBody(false);
		//platform->StaticMeshComponent->SetRBCollisionChannels(false);
		//platform->StaticMeshComponent->SetRBChannel(ERBCollisionChannel::RBCC_Nothing);
		platform->StaticMeshComponent->StaticMesh->UseSimpleRigidBodyCollision = false;
		//platform->StaticMeshComponent->CollideActors = false;
		//platform->StaticMeshComponent->StaticMesh->BodySetup->bNoCollision = true;
	}
>>>>>>> b10d2542b868273eecaedb99d935e2de5c70f679

	bool enabled = false;
protected:
	GameState allowedGameStates;
	Category cat;
	std::string name;
	int key = -1;
};

