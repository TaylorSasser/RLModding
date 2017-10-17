#include "InstanceStorage.h"

AAIManager_TA*				InstanceStorage::m_AAIManager_TA = nullptr;
UWorld*						InstanceStorage::m_UWorld= nullptr;
APlayerController_Menu_TA*	InstanceStorage::m_APlayerController_Menu_TA = nullptr;
APlayerController_TA*		InstanceStorage::m_PlayerController_TA = nullptr;
ACar_TA*					InstanceStorage::m_ACar_TA = nullptr;
AGameEvent_TA*				InstanceStorage::m_GameEvent_TA = nullptr;
AGameInfo_TA*				InstanceStorage::m_GameInfo_TA = nullptr;
UOnlineGameLanServer_TA*	InstanceStorage::m_OnlineGameLanServer_TA = nullptr;
TArray<ACar_TA*>			InstanceStorage::m_GameCars;
UEngine*					InstanceStorage::m_Engine = nullptr;


AAIManager_TA* InstanceStorage::AAIManager() {
	return (AAIManager_TA*)m_AAIManager_TA;
}
UWorld* InstanceStorage::World() {
	return (UWorld*)m_UWorld;
}
TArray<ULevel*> InstanceStorage::Levels() {
	//return World()->Levels;
}
APlayerController_TA* InstanceStorage::PlayerController() {
	return (APlayerController_TA*)m_PlayerController_TA;
}
APlayerController_Menu_TA* InstanceStorage::MenuController() {
	return (APlayerController_Menu_TA*)m_APlayerController_Menu_TA;
}
ACar_TA* InstanceStorage::CurrentCar() {
	return (ACar_TA*)m_ACar_TA;
}
AGameEvent_TA* InstanceStorage::GameEvent() {
	return (AGameEvent_TA*)m_GameEvent_TA;
}
AGameInfo_TA* InstanceStorage::GameInfo() {
	return (AGameInfo_TA*)m_GameInfo_TA;
}
UOnlineGameLanServer_TA* InstanceStorage::LanServer() {
	return (UOnlineGameLanServer_TA*)m_OnlineGameLanServer_TA;
}
TArray<ACar_TA*> InstanceStorage::GameCars() {
	return (TArray<ACar_TA*>)m_GameCars;
}
UEngine* InstanceStorage::Engine() {
	return (UEngine*)m_Engine;
}

void InstanceStorage::SetLanServer(UOnlineGameLanServer_TA* server) {
	m_OnlineGameLanServer_TA = server;
}

void InstanceStorage::SetAIManager(AAIManager_TA* manager) {
	m_AAIManager_TA = manager;
}
void InstanceStorage::SetWorld(UWorld* world) {
	m_UWorld = world;
}
void InstanceStorage::SetController(APlayerController_TA* controller) {
	m_PlayerController_TA = controller;
}
void InstanceStorage::SetMenuController(APlayerController_Menu_TA* menucontroller) {
	m_APlayerController_Menu_TA = menucontroller;
}
void InstanceStorage::SetCurrentCar(ACar_TA* car) {
	m_ACar_TA = car;
}
void InstanceStorage::SetGameEvent(AGameEvent_TA* gameevent) {
	m_GameEvent_TA = gameevent;
}
void InstanceStorage::SetGameInfo(AGameInfo_TA* gameinfo) {
	m_GameInfo_TA = gameinfo;
}
void InstanceStorage::SetEngine(UEngine* engine) {
	m_Engine = engine;
}
