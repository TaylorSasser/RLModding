#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>
#include <functional>
#include "../Events/Event.h"
#include "../Interfaces/GlobalVariables.h"
#include "../Interfaces/InstanceStorage.h"


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
	ModBase(const std::string& modName, int keyBind,Category category,GameState gamestate) : name(modName), key(keyBind), cat(category),allowedGameStates(gamestate) {}
	ModBase(const std::string& modName, int keyBind) : name(modName), key(keyBind), cat(Category::ALL),allowedGameStates(ANY) {}
	
	virtual ~ModBase() = default;

	virtual void Toggle() {
		enabled = !enabled;
		onToggle();
	if (enabled) { onEnable(); } else { onDisable(); }		
	}
	
	virtual void setState(bool state) { enabled = state; }
	virtual bool isEnabled() { return enabled; }

	virtual const std::string& getName() { return name; }
	virtual void setName(const std::string &newName) { name = newName; }

	virtual int getBind() { return key; }
	virtual void setBind(int keycode) { key = keycode; }

	virtual Category getCategory() {return cat;}
	//Get the mods allowed gamestates
	virtual GameState getAllowedGameStates() {return allowedGameStates;}
	//Get the current game state, in menu? in training? etc.
	virtual GameState getCurrentGameState() {
		if (Globals::inCustom) return LAN;
		else if (Globals::inExhibition) return EXHIBITION;
		else if (Globals::inMainMenu) return MENU;
		else if (Globals::inOnline) return ONLINE;
		else if (Globals::inTraining) return TRAINING;
		else return NONE;
	};

	virtual void DrawMenu() {}

	virtual void onEnable() {}
	virtual void onDisable() {}
	//When toggled, check to make sure they are in a valid state
	virtual void onToggle() {
		GameState currentState = getCurrentGameState();
		if (!(currentState & getAllowedGameStates())) {
			printf("Invalid state\n");
			setState(false);
		}
			
	}

	virtual void onProfileJoinGame(Event*) {}
	virtual void onPlayerTick(Event*) {}

	virtual void onOnlineGameStart(Event* event) {
		Globals::inMainMenu = false; Globals::inOnline = true; Globals::inCustom = false; Globals::inExhibition = false; Globals::inTraining = false;
	}

	virtual void onSetFriendJoinLocation(Event*) {}

	virtual void onPlayerTATick(Event* event) {
		InstanceStorage::SetController(reinterpret_cast<SDK::APlayerController_TA*>(event->getCallingObject()));

	}
	virtual void onMainMenuTick(Event* event) {
		InstanceStorage::SetMenuController(reinterpret_cast<SDK::APlayerController_Menu_TA*>(event->getCallingObject()));
		Globals::inMainMenu = true;Globals::inOnline = false;Globals::inCustom = false;Globals::inExhibition = false;Globals::inTraining = false;
	}
	virtual void onCarTick(Event* event) {
		InstanceStorage::SetCurrentCar(reinterpret_cast<SDK::ACar_TA*>(event->getCallingObject()));
	}
	virtual void onGameEventTick(Event* event) {
		InstanceStorage::SetGameEvent(reinterpret_cast<SDK::AGameEvent_TA*>(event->getCallingObject()));
	}
	virtual void onGameStart(Event* event) {
		InstanceStorage::SetLanServer(reinterpret_cast<SDK::UOnlineGameLanServer_TA*>(event->getCallingObject()));
	}
	virtual void onGameEnd(Event* event) {
		InstanceStorage::SetLanServer(reinterpret_cast<SDK::UOnlineGameLanServer_TA*>(event->getCallingObject()));
	}
	virtual void onReplayTick(Event*) {}
	virtual void onFreeplayTick(Event*) {
		Globals::inMainMenu = false; Globals::inOnline = false; Globals::inCustom = false; Globals::inExhibition = false; Globals::inTraining = true;
	}
	virtual void onPostRender(Event*) {}

	virtual void onEventMMRChange(Event*) {}
	virtual void onChatSend(Event*) {}
	virtual void onActorJump(Event*) {}
	virtual void onTCPConnectionBegin(Event*) {}
	virtual void onTCPConnectionEnd(Event*) {}

	virtual void onInitExhibition(Event*){
		Globals::inMainMenu = false; Globals::inOnline = false; Globals::inCustom = false; Globals::inExhibition = true; Globals::inTraining = false;
	}

	bool enabled = false;
protected:
	GameState allowedGameStates;
	Category cat;
	std::string name;
	int key = -1;
};
