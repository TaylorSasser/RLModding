#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>
#include <functional>


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

	/*
	virtual void onJoinGame(SDK::UObject**,SDK::UFunction*,void*)			{}

	virtual void onMainMenuTick(SDK::UObject**,SDK::UFunction*,void*)		{}					
	virtual void onInGameTick(SDK::UObject**,SDK::UFunction*,void*)			{}		
	virtual void onAActorTick(SDK::UObject**,SDK::UFunction*,void*)			{}					
	virtual void onBallTick(SDK::UObject**,SDK::UFunction*,void*)			{}							
	virtual void onGameEventTick(SDK::UObject**,SDK::UFunction*,void*)		{}				
	virtual void onReplayTick(SDK::UObject**,SDK::UFunction*,void*)			{}
	virtual void onFreeplayTick(SDK::UObject**,SDK::UFunction*,void*)		{}			
	virtual void onPostRender(SDK::UObject**,SDK::UFunction*,void*)			{}

	virtual void onEventMMRChange(SDK::UObject**, SDK::UFunction*,void*)	{}		
	virtual void onActorJump(SDK::UObject**, SDK::UFunction*,void*)			{}
	virtual void onTCPConnectionBegin(SDK::UObject**,SDK::UFunction*,void*) {}
	virtual void onTCPConnectionEnd(SDK::UObject**,SDK::UFunction*,void*)	{}
	virtual void onCarTick(SDK::UObject**, SDK::UFunction*, void*) {}
	*/
	virtual void onChatSend(SDK::UObject**, SDK::UFunction*, void*) {}


private:
	bool enabled = false;
	std::string name;
	int Key = -1;
};