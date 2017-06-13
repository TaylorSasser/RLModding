#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>
#include <d3d9.h>


class ModBase
{
public:
	//Tick

	ModBase(std::string ModName,int KeyBind) {
		this->name = ModName;
		this->Key = KeyBind;
	}

	virtual void Toggle() {
		this->enabled = !enabled;
		if (this->enabled) {this->onEnable();} else {this->onDisable();}
		this->onToggle();
	}
	virtual bool isEnabled() {return this->enabled;}
	virtual std::string getName() {return this->name;}
	virtual int	 getBind() { return this->Key; }

	virtual void onEnable() {}
	virtual void onDisable() {}
	virtual void onToggle() {}


	virtual void onMainMenuTick(SDK::UObject**,SDK::UFunction*,void*)		{}					
	virtual void onInGameTick(SDK::UObject**,SDK::UFunction*,void*)			{}		
	virtual void onAActorTick(SDK::UObject**,SDK::UFunction*,void*)			{}					
	virtual void onBallTick(SDK::UObject**,SDK::UFunction*,void*)			{}						
	virtual void onCarTick(SDK::UObject**,SDK::UFunction*,void*)			{}						
	virtual void onGameEventTick(SDK::UObject**,SDK::UFunction*,void*)		{}				
	virtual void onReplayTick(SDK::UObject**,SDK::UFunction*,void*)			{}
	virtual void onDX9RenderTick(IDirect3DDevice9*)							{}
	virtual void onFreeplayTick(SDK::UObject**,SDK::UFunction*,void*)		{}			
	

	virtual void onEventMMRChange(SDK::UObject**, SDK::UFunction*,void*)	{}		
	virtual void onChatSend(SDK::UObject**,SDK::UFunction*,void*)			{}
	virtual void onActorJump(SDK::UObject**, SDK::UFunction*,void*)			{}
	virtual void onTCPConnectionBegin(SDK::UObject**,SDK::UFunction*,void*) {}
	virtual void onTCPConnectionEnd(SDK::UObject**,SDK::UFunction*,void*)	{}

private:
	bool enabled = false;
	std::string name;
	int Key = -1;
};
