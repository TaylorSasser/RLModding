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
=======

>>>>>>> 8bda33116af03d0cab858e1201140141fd784703
	virtual void MainMenuTick(SDK::UObject**,SDK::UFunction*, void* parameters) {}					//APlayerController_Menu_TA -> PlayerTick(float deltatime)
	virtual void InGameTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//APlayerController -> PlayerTick(float deltatime)
	virtual void AActorTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//AActor_TA -> Tick(float deltatime)
	virtual void BallTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}						//ABall_TA -> Tick(float deltatime)
	virtual void CarTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}						//ACar_TA -> Tick(float deltatime)
	virtual void GameEventTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//AGameEvent_TA -> Tick(float deltatime)
	virtual void ReplayTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}					//UReplay_TA or UReplayManager_TA -> Tick(float deltatime)
	virtual void EventMMRChange(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*)
<<<<<<< HEAD
	virtual void DX9RenderTick(IDirect3DDevice9*) {}

	virtual void FreeplayTick(SDK::UObject**, SDK::UFunction*, void*) {}							//UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*)

=======
	//virtual void DX9RenderTick(IDirect3DSurface9*) {}
	virtual void OnJump(SDK::UObject**, SDK::UFunction*, void*) {}
	virtual void FreeplayTick(SDK::UObject**, SDK::UFunction*, void*) {}					//UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*)
>>>>>>> 8bda33116af03d0cab858e1201140141fd784703

	//events 
	virtual void ChatSend(SDK::UObject**,SDK::UFunction*,void* parameters) {}
	virtual void onActorJump(SDK::UObject**, SDK::UFunction*, void*) {}
<<<<<<< HEAD
	virtual void TCPConnectionBegin(SDK::UObject**,SDK::UFunction*, void* parameters) {}
	virtual void TCPConnectionEnd(SDK::UObject**,SDK::UFunction*,void* parameters) {}
=======

	void InitHotkeys();
protected:
	int menuHotkey = 0;
	int gameHotkey = 0;
	int mapLoaderHotkey = 0;
	int joinHotkey = 0;
	int hostHotkey = 0;

>>>>>>> 8bda33116af03d0cab858e1201140141fd784703

};
