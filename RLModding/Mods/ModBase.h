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

	void Toggle() {
		this->enabled = !enabled;
		if (this->enabled) {this->onEnable();} else {this->onDisable();}
		this->onToggle();
	}

	virtual void onEnable() {}
	virtual void onDisable() {}
	virtual void onToggle() {}

	virtual int getBind() { return this->Key;}

	virtual void MainMenuTick(SDK::UObject**,SDK::UFunction*, void* parameters) {}					//APlayerController_Menu_TA -> PlayerTick(float deltatime)
	virtual void InGameTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//APlayerController -> PlayerTick(float deltatime)
	virtual void AActorTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//AActor_TA -> Tick(float deltatime)
	virtual void BallTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}						//ABall_TA -> Tick(float deltatime)
	virtual void CarTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}						//ACar_TA -> Tick(float deltatime)
	virtual void GameEventTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//AGameEvent_TA -> Tick(float deltatime)
	virtual void ReplayTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//UReplay_TA or UReplayManager_TA -> Tick(float deltatime)
	virtual void DX9RenderTick(IDirect3DDevice9*) {}
	virtual void FreeplayTick(SDK::UObject**, SDK::UFunction*, void*) {}			
	

	virtual void EventMMRChange(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*
	virtual void ChatSend(SDK::UObject**,SDK::UFunction*,void* parameters) {}
	virtual void onActorJump(SDK::UObject**, SDK::UFunction*, void*) {}
	virtual void TCPConnectionBegin(SDK::UObject**,SDK::UFunction*, void* parameters) {}
	virtual void TCPConnectionEnd(SDK::UObject**,SDK::UFunction*,void* parameters) {}

private:

	bool enabled = false;
	std::string name;
	int Key = -1;


};
