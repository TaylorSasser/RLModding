#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>


class ModBase
{
public:
	//Ticks
	virtual bool onKeyPress(WORD ascii,bool isPressed) {return false;}

	virtual void MainMenuTick(SDK::UObject**, SDK::UFunction*, void*) {}					//APlayerController_Menu_TA -> PlayerTick(float deltatime)
	virtual void InGameTick(SDK::UObject**, SDK::UFunction*, void*) {}						//APlayerController -> PlayerTick(float deltatime)
	virtual void AActorTick(SDK::UObject**, SDK::UFunction*, void*) {}						//AActor_TA -> Tick(float deltatime)
	virtual void BallTick(SDK::UObject**, SDK::UFunction*, void*) {}						//ABall_TA -> Tick(float deltatime)
	virtual void CarTick(SDK::UObject**, SDK::UFunction*, void*) {}							//ACar_TA -> Tick(float deltatime)
	virtual void OnJump(SDK::UObject**, SDK::UFunction*, void*) {}
	virtual void GameEventTick(SDK::UObject**, SDK::UFunction*, void*) {}					//AGameEvent_TA -> Tick(float deltatime)
	virtual void ReplayTick(SDK::UObject**, SDK::UFunction*, void*) {}						//UReplay_TA or UReplayManager_TA -> Tick(float deltatime)
	virtual void EventMMRChange(SDK::UObject**, SDK::UFunction*, void*) {}					//UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*)
	virtual void FreeplayTick(SDK::UObject**, SDK::UFunction*, void*) {}					//UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*)

	//events 
	virtual void ChatSend(SDK::UObject**,SDK::UFunction*,void* parameters) {}
	virtual void onActorJump(SDK::UObject**, SDK::UFunction*, void*) {}
};
