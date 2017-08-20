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
	"Menu Mods",
	"Game Modes",
	"Ball Mods",
	"LAN Mods",
	"Car Mods",
	"Other Mods"
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
	virtual void onKeysBeginState(Event* e) {
	}

	virtual void onInitExhibition(Event*){
		inMainMenu = false; inOnline = false; inCustom = false; inExhibition = true; inTraining = false;
	}

	virtual void onPostPRI(Event* event) {}

	virtual void onGotoState(Event*) {}

	virtual void onEngineSecurityKeys(Event* e) {

	}

	virtual void onHandleGenKeys(Event* e) {
		std::cout << "Hooked!\n";
		/*auto params = e->getParams<HandleGenerateKeys_Params>();
		params->RPC->Key = L"JhtbJ4M43lRIyQSA6xYuYelB0bEQl+n6hRsDcQmj0pk=";
		params->RPC->IV = L"HKNBpu215LCUGiDTs1XwCA==";
		params->RPC->HMACKey = L"J8mUXRphocYppAyEX/mKB07FgbBD6RaF+CwNBXA5JBI=";
		*///params->RPC->SessionId

	}

	virtual void onBeaconAddress(Event* e) {

	}

	virtual void onEngineTick(Event* e) {
		InstanceStorage::SetEngine(reinterpret_cast<SDK::UEngine*>(e->getCallingObject()));
	}

	virtual void onPsyNetRPC(Event* e) {
		auto params = e->getParams<UPsyNet_X_RPC_Params>();
		//URPC_GenerateKeys_X
		//std::cout << "PsyNetRPC\n";
		if (params) {
			if (params->ReturnValue != nullptr) {
				URPC_GenerateKeys_X* RPC = reinterpret_cast<URPC_GenerateKeys_X*>(params->ReturnValue);
				if (RPC) {
					std::cout << "Trying to print service\n";
					std::cout << RPC->Service.ToString() << std::endl;
				}
			}
		}
		
	}

	virtual void onTitlesLoad(Event* e) {
		UGFxData_Garage_TA* garage = (UGFxData_Garage_TA*)e->getCallingObject();
		if (garage) {
			for (int i = 0; i < garage->PlayerTitles.Num(); i++) {
				if (garage->PlayerTitles.IsValidIndex(i)) {
					std::cout << garage->PlayerTitles[i].Text.ToString() << std::endl;
				}
			}
		}
	}

	bool enabled = false;
protected:
	GameState allowedGameStates;
	Category cat;
	std::string name;
	int key = -1;
};

