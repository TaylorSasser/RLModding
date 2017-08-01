#include "InstanceStorage.h"


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
ACar_TA* InstanceStorage::CurrentCar() {
	return m_ACar_TA;
}
AGameEvent_TA* InstanceStorage::GameEvent() {
	return m_GameEvent_TA;
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
void InstanceStorage::SetCurrentCar(ACar_TA* car) {
	m_ACar_TA = car;
}
void InstanceStorage::SetGameEvent(AGameEvent_TA* gameevent) {
	m_GameEvent_TA = gameevent;
}
