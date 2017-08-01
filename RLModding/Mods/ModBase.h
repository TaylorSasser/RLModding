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

	ModBase(std::string ModName,int KeyBind) {
		this->name = ModName;
		this->Key = KeyBind;
	}

	virtual void Toggle() {
		this->enabled = !enabled;
		if (this->enabled) {this->onEnable();} else {this->onDisable();}
		this->onToggle();
	}

	virtual void Bind(SDK::UObject** object, SDK::UFunction* func, void* params, function fff) {}

	virtual void setState(bool state) {this->enabled = state;}
	virtual bool isEnabled() {return this->enabled;}

	virtual std::string getName() {return this->name;}
	virtual void setName(std::string name) {this->name = name;}

	virtual int	 getBind() { return this->Key; }
	virtual void setBind(int keycode) { this->Key = keycode;}

	virtual void onEnable() {}
	virtual void onDisable() {}
	virtual void onToggle() {}

	virtual void onJoinGame(Event*)											{}

	virtual void onMainMenuTick(Event*)										{}					
	virtual void onInGameTick(Event*)										{}		
	virtual void onAActorTick(Event*)										{}					
	virtual void onBallTick(Event*)											{}						
	virtual void onCarTick(Event*)											{}						
	virtual void onGameEventTick(Event*)									{}				
	virtual void onReplayTick(Event*)										{}
	virtual void onFreeplayTick(Event*)										{}			
	virtual void onPostRender(Event*)										{}

	virtual void onEventMMRChange(Event*)									{}		
	virtual void onChatSend(Event*)											{}
	virtual void onActorJump(Event*)										{}
	virtual void onTCPConnectionBegin(Event*)								{}
	virtual void onTCPConnectionEnd(Event*)									{}

private:
	bool enabled = false;
	std::string name;
	int Key = -1;
};