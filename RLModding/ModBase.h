#pragma once
#include "RL/SDK.hpp"
#include <iostream>


class ModBase
{
public:
	//Ticks
	virtual void MainMenuTick(SDK::UObject**,SDK::UFunction*, void* parameters) {}				//APlayerController_Menu_TA -> PlayerTick(float deltatime)
	virtual void InGameTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}			//APlayerController -> PlayerTick(float deltatime)
	virtual void AActorTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//AActor_TA -> Tick(float deltatime)
	virtual void BallTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//ABall_TA -> Tick(float deltatime)
	virtual void CarTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//ACar_TA -> Tick(float deltatime)
	virtual void GameEventTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//AGameEvent_TA -> Tick(float deltatime)
	virtual void ReplayTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}			//UReplay_TA or UReplayManager_TA -> Tick(float deltatime)
	virtual void EventMMRChange(SDK::UObject**, SDK::UFunction*, void* parameters) {}				//UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*)
};
