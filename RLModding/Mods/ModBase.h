#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>
#include <d3d9.h>


class ModBase
{
public:
	//Ticks
	virtual bool onKeyPress(WORD ascii,bool isPressed) {return false;}

<<<<<<< HEAD
	virtual void MainMenuTick(SDK::UObject**,SDK::UFunction*, void* parameters) {}					//APlayerController_Menu_TA -> PlayerTick(float deltatime)
	virtual void InGameTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//APlayerController -> PlayerTick(float deltatime)
	virtual void AActorTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//AActor_TA -> Tick(float deltatime)
	virtual void BallTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}						//ABall_TA -> Tick(float deltatime)
	virtual void CarTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}						//ACar_TA -> Tick(float deltatime)
	virtual void GameEventTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//AGameEvent_TA -> Tick(float deltatime)
	virtual void ReplayTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//UReplay_TA or UReplayManager_TA -> Tick(float deltatime)
	virtual void EventMMRChange(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*)
	virtual void DX9RenderTick(IDirect3DSurface9*) {}
=======
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
>>>>>>> 3ed13480c56effb72358aa6d2155040c17ca4832

	//events 
	virtual void ChatSend(SDK::UObject**,SDK::UFunction*,void* parameters) {}
	virtual void onActorJump(SDK::UObject**, SDK::UFunction*, void*) {}
};
