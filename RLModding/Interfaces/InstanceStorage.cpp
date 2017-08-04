#include "InstanceStorage.h"

AAIManager_TA*				InstanceStorage::m_AAIManager_TA = nullptr;
UWorld*						InstanceStorage::m_UWorld = nullptr;
APlayerController_Menu_TA*	InstanceStorage::m_APlayerController_Menu_TA = nullptr;
APlayerController_TA*		InstanceStorage::m_PlayerController_TA = nullptr;
ACar_TA*					InstanceStorage::m_ACar_TA = nullptr;
AGameEvent_TA*				InstanceStorage::m_GameEvent_TA = nullptr;
UOnlineGameLanServer_TA*	InstanceStorage::m_OnlineGameLanServer_TA = nullptr;
TArray<ACar_TA*>			InstanceStorage::m_GameCars;


AAIManager_TA* InstanceStorage::AAIManager() {
	return m_AAIManager_TA;
}
UWorld* InstanceStorage::World() {
	return m_UWorld;
}
TArray<ULevel*> InstanceStorage::Levels() {
	return m_UWorld->Levels;
}
APlayerController_TA* InstanceStorage::PlayerController() {
	return m_PlayerController_TA;
}
APlayerController_Menu_TA* InstanceStorage::MenuController() {
	return m_APlayerController_Menu_TA;
}
ACar_TA* InstanceStorage::CurrentCar() {
	return m_ACar_TA;
}
AGameEvent_TA* InstanceStorage::GameEvent() {
	return m_GameEvent_TA;
}
UOnlineGameLanServer_TA* InstanceStorage::LanServer() {
	return m_OnlineGameLanServer_TA;
}
TArray<ACar_TA*> InstanceStorage::GameCars() {
	return m_GameCars;
}

void InstanceStorage::SetLanServer(UOnlineGameLanServer_TA* server) {
	m_OnlineGameLanServer_TA = server;
	m_GameEvent_TA = server->GetCurrentGameEvent();
	m_AAIManager_TA = server->GetCurrentGameEvent()->AIManager;
	m_GameCars = server->GetCurrentGameEvent()->Cars;
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
