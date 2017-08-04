#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>
#include <functional>
#include "../Events/Event.h"
#include "../Interfaces/InstanceStorage.h"


class ModBase
{
public:
	ModBase(const std::string& modName, int keyBind) : name(modName), key(keyBind) {}

	virtual ~ModBase() = default;

	virtual void Toggle() {
	enabled = !enabled;
	if (enabled) { onEnable(); } else { onDisable(); }
		onToggle();
	}
	
	virtual void setState(bool state) { enabled = state; }
	virtual bool isEnabled() { return enabled; }

	virtual const std::string& getName() { return name; }
	virtual void setName(const std::string &newName) { name = newName; }

	virtual int getBind() { return key; }
	virtual void setBind(int keycode) { key = keycode; }

	virtual void DrawMenu() {}

	virtual void onEnable() {}
	virtual void onDisable() {}
	virtual void onToggle() {}

	virtual void onProfileJoinGame(Event*) {}
	virtual void onPlayerTick(Event*) {}

	virtual void onPlayerTATick(Event* event) {
		InstanceStorage::SetController(reinterpret_cast<SDK::APlayerController_TA*>(event->getCallingObject()));
	}

	virtual void onMainMenuTick(Event* event) {
		InstanceStorage::SetMenuController(reinterpret_cast<SDK::APlayerController_Menu_TA*>(event->getCallingObject()));
	}
	virtual void onInGameTick(Event*) {}
	virtual void onAActorTick(Event*) {}
	virtual void onBallTick(Event*) {}
	virtual void onCarTick(Event* event) {
		InstanceStorage::SetCurrentCar(reinterpret_cast<SDK::ACar_TA*>(event->getCallingObject()));
	}
	virtual void onGameEventTick(Event* event) {
		InstanceStorage::SetGameEvent(reinterpret_cast<SDK::AGameEvent_TA*>(event->getCallingObject()));
	}
	virtual void onReplayTick(Event*) {}
	virtual void onFreeplayTick(Event*) {}
	virtual void onPostRender(Event*) {}

	virtual void onEventMMRChange(Event*) {}
	virtual void onChatSend(Event*) {}
	virtual void onActorJump(Event*) {}
	virtual void onTCPConnectionBegin(Event*) {}
	virtual void onTCPConnectionEnd(Event*) {}

private:
	bool enabled = false;
	std::string name;
	int key = -1;
};
