#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>
#include <functional>
#include "../Events/Event.h"


class ModBase
{
public:
	//Tick

	typedef void (ModBase::*function)(SDK::UObject**, SDK::UFunction*, void*);

	ModBase(std::string&& modName, int keyBind)
		: name(std::move(modName)),
		  key(keyBind)
	{
	}

	virtual ~ModBase() = default;

	virtual void Toggle() {
		enabled = !enabled;
		if (enabled) { onEnable(); }
		else { onDisable(); }
		onToggle();
	}

	virtual void Bind(SDK::UObject** object, SDK::UFunction* func, void* params, function fff) {}

	virtual void setState(bool state) { enabled = state; }
	virtual bool isEnabled() { return enabled; }

	virtual const std::string& getName() { return name; }
	virtual void setName(const std::string &newName) { name = newName; }

	virtual int	 getBind() { return key; }
	virtual void setBind(int keycode) { key = keycode; }

	virtual void onEnable() {}
	virtual void onDisable() {}
	virtual void onToggle() {}

	virtual void onJoinGame(Event*) {}

	virtual void onMainMenuTick(Event*) {}
	virtual void onInGameTick(Event*) {}
	virtual void onAActorTick(Event*) {}
	virtual void onBallTick(Event*) {}
	virtual void onCarTick(Event*) {}
	virtual void onGameEventTick(Event*) {}
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