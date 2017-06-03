#pragma once
#include "RL/SDK.hpp"


class ModBase
{
public:
	//Ticks
	virtual void MainMenuTick(void**, void*, void*) {}//APlayerController_Menu_TA -> PlayerTick(float deltatime)
	virtual void InGameTick(void**, void*, void*) {} //APlayerController -> PlayerTick(float deltatime)
	virtual void AActorTick(void**, void*, void*) {} //AActor_TA -> Tick(float deltatime)
	virtual void BallTick(void**, void*, void*) {}//ABall_TA -> Tick(float deltatime)
	virtual void CarTick(void**, void*, void*) {} //ACar_TA -> Tick(float deltatime)
	virtual void GameEventTick(void**, void*, void*) {} //AGameEvent_TA -> Tick(float deltatime)
	virtual void ReplayTick(void**, void*, void*) {}//UReplay_TA or UReplayManager_TA -> Tick(float deltatime)
	virtual void EventMMRChange(void**, void*, void*) {} //UOnlineGameDedicatedServer_X -> EventAverageMMRChanged(UOnlineGameDedicatedServer_X*)
};