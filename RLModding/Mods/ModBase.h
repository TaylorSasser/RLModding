#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>
#include <functional>
#include <utility>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "../Events/Event.h"
#include "../Interfaces/GlobalVariables.h"
#include "../Interfaces/InstanceStorage.h"
#include "../DrawManager/DrawManager.hpp"
#include "../Utils/Utils.h"
#include <iostream>

namespace pt = boost::property_tree;

enum GameState {
	NONE = 0, TRAINING = 1 << 0, EXHIBITION = 1 << 1, ONLINE = 1 << 2, LAN = 1 << 3, MENU = 1 << 4, ANY = (1 << 5) - 1
};


inline GameState operator|(GameState a, GameState b) { return static_cast<GameState>(static_cast<int>(a) | static_cast<int>(b)); }
inline GameState operator^(GameState a, GameState b) { return static_cast<GameState>(static_cast<int>(a) ^ static_cast<int>(b)); }

enum Category { Menu = 0, GameModes, Lan, InGame, Other, Help, ALL, MAX };

static const std::string categoryNames[MAX - 1] = {
	"Menu Mods","Game Modes","LAN Mods","In Game Mods","Other Mods", "Help"
};

class ModBase
{
public:
	ModBase() {}
	ModBase(const std::string& modName, int keyBind, Category category, GameState gamestate, const std::string& modToolTip) : name(modName), key(keyBind), cat(category), allowedGameStates(gamestate), toolTip(modToolTip) {}
	ModBase(const std::string& modName, int keyBind, Category category, GameState gamestate) : name(modName), key(keyBind), cat(category), allowedGameStates(gamestate), toolTip("") {}
	ModBase(const std::string& modName, int keyBind) : name(modName), key(keyBind), cat(Category::ALL), allowedGameStates(ANY), toolTip("") {}

	virtual ~ModBase() = default;

	virtual void Toggle() {
		enabled = !enabled;
		onToggle();
		if (enabled) onMenuOpen();
		else onMenuClose();
	}

	virtual void setState(bool state) { enabled = state; }
	virtual bool isEnabled() { return enabled; }

	// Add startup flags for mods

	virtual const std::string& getName() { return name; }
	virtual void setName(const std::string &newName) { name = newName; }

	virtual int getBind() { return key; }
	virtual void setBind(int keycode) { key = keycode; }

	virtual std::string getToolTip() { return toolTip; }
	virtual void setToolTip(const std::string &newToolTip) { toolTip = newToolTip; }

	virtual Category getCategory() { return cat; }
	virtual GameState getAllowedGameStates() { return allowedGameStates; }

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
	virtual void DrawRLMenuAddon() {}

	virtual void onMenuOpen() {}
	virtual void onMenuClose() {}

	virtual void unloadMod() {}
	virtual void loadMod() {}

	virtual void onToggle() {
		GameState currentState = getCurrentGameState();
		if (!(currentState & getAllowedGameStates())) setState(false);
	}
	virtual void onProfileJoinGame(Event*) {}
	virtual void onPlayerTick(Event*) {}
	virtual void onOnlineGameStart(Event* event) {
		inMainMenu = false; inOnline = true; inCustom = false; inExhibition = false; inTraining = false;
		if (enabled) {
			GameState currentState = getCurrentGameState();
			if (!(currentState & getAllowedGameStates())) setState(false);
		}
	}
	virtual void onBallHit(Event* event) {}
	virtual void onSetFriendJoinLocation(Event*) {}
	virtual void onPlayerTATick(Event* event) {
		InstanceStorage::SetController(reinterpret_cast<SDK::APlayerController_TA*>(event->getCallingObject()));
	}
	virtual void onMainMenuTick(Event* event) {
		InstanceStorage::SetMenuController(reinterpret_cast<SDK::APlayerController_Menu_TA*>(event->getCallingObject()));
		inMainMenu = true; inOnline = false; inCustom = false; inExhibition = false; inTraining = false;
		if (enabled) {
			GameState currentState = getCurrentGameState();
			if (!(currentState & getAllowedGameStates())) setState(false);
		}

	}
	virtual void onCarTick(Event* event) {
		InstanceStorage::SetCurrentCar(reinterpret_cast<SDK::ACar_TA*>(event->getCallingObject()));
	}
	virtual void onGameEventTick(Event* event) {
		InstanceStorage::SetGameEvent(reinterpret_cast<SDK::AGameEvent_TA*>(event->getCallingObject()));
		if (!inOnline) { inMainMenu = false; inOnline = false; inCustom = true; inExhibition = false; inTraining = false; }
		if (enabled) {
			GameState currentState = getCurrentGameState();
			if (!(currentState & getAllowedGameStates())) setState(false);
		}
	}
	virtual void gameInfoInitGame(Event* event) {
		InstanceStorage::SetGameInfo(reinterpret_cast<SDK::AGameInfo_TA*>(event->getCallingObject()));

	};

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
	virtual void onInitExhibition(Event*) {
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
	virtual void onPostProcess(Event* e) {}
	virtual void onGetProcess(Event* e) {}
	virtual void onWebRequestSend(Event* e) {}
	virtual void onConstructWebRequest(Event* e) {}
	virtual void onRequestSigned(Event* e) {}
	virtual void onPsyNetRPC(Event* e) {}
	virtual void onTitlesLoad(Event* e) {}
	virtual void onTCPConnect(Event* e) {}
	virtual void onSetPrimaryPlayer(Event* e) {}
	virtual void onSendServerReservedEvent(Event* e) {}
	virtual void onWorkshopDownloaded(Event* e) {}
	virtual void onBreakoutPlatformDamaged(Event* e) {}
	virtual void onCarSpawned(Event* e) {}
	virtual void onCarDemolished(Event* e) {}
	virtual void onBallCarTouch(Event* e) {}
	virtual void onGameTimeUpdated(Event* e) {}

	virtual void onEventGoalScored(Event* e) {}
	virtual void onReplayGoalScored(Event* e) {}
	virtual void onReplayCameraFinished(Event* e) {}
	virtual void onReplayCameraStarted(Event* e) {}

	virtual void onLocalPlayerLeave(Event* e) {}
	virtual void onPRIAdd(Event* e) {}
	virtual void onPRIRemove(Event* e) {}
	virtual void onGameEventAddPlayer(Event* e) {}
	virtual void onGameEventRemovePlayer(Event* e) {}
	virtual void onBallTick(Event* e) {}

	virtual void eventGameEnded(Event* e) {}
	virtual void onMatchEnded(Event* e) {}

	virtual void eventReplayHeadersLoaded(Event* e) {}
	virtual void eventAllTrainingFilesLoaded(Event* e) {}

	virtual void eventBallHitGround(Event* e) {}
	virtual void onBallSpawned(Event* e) {}

	virtual void onServerBrowserSearchComplete(Event* e) {}
	virtual void eventLanSearchResultComplete(Event* e) {}
	virtual void ExportSettings(pt::ptree&root) {}
	virtual void ImportSettings(pt::ptree&root) {}

	virtual void statOnGoalScored(Event* e) {}
	virtual void eventPlayerScored(Event* e) {}
	virtual void eventReplicatedGoalScored(Event* e) {}

	virtual void priEventScoredGoal(Event* e) {}
	virtual void priEventScorePoint(Event* e) {}
	virtual void onTeamScoreUpdate(Event* e) {}

	virtual void onCarEventLanded(Event* e) {}

	virtual void onGameEventTeamPlayerAdded(Event* e) {}
	virtual void onGameEventTeamPlayerRemoved(Event* e) {}

	virtual void onWebRequestEventCompleted(Event* e) {};
	virtual void onHttpProcessRequestComplete(Event* e) {}

	virtual void onGfxShellTick(Event* e) {}

	virtual void onGetNextImage(Event* e) {
		/*
		UAdManager_TA* callerObject = (UAdManager_TA*)e->getCallingObject();
		if (callerObject) {
		for (int i = 0; i < callerObject->CachedAdImages.Num(); i++) {
		//std::string url = callerObject->CachedAdImages.GetByIndex(i).ImageURL.ToString();
		if (i % 2 == 0) {
		callerObject->CachedAdImages.GetByIndex(i).ImageURL = FString(L"http://i.imgur.com/3WIwB6d.jpg");
		}
		else {
		callerObject->CachedAdImages.GetByIndex(i).ImageURL = FString(L"http://i.imgur.com/3WIwB6d.jpg");
		}
		}
		}

		*/
	}
	virtual void onGameEventSoccarPostBeginPlay(Event* e) {}
	virtual void OnCarBumped(Event* e) {}
	virtual void OnRoundStart(Event* e) {}
	virtual void OnLANMatchCreate(Event* e) {}
	virtual void OnLANMatchDestroy(Event* e) {}
	virtual void onRumbleItemActivated(Event *e) {}

	bool enabled = false;
protected:
	GameState allowedGameStates;
	Category cat;
	std::string toolTip;
	std::string name;
	int key = -1;
};

