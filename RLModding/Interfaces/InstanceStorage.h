#pragma once
#include "../RL/SDK.hpp"


using namespace SDK;
class InstanceStorage {
public:
	static AAIManager_TA* AAIManager(); 
	static UWorld* World();
	static TArray<ULevel*> Levels();
	static APlayerController_TA* PlayerController();
	static ACar_TA*	CurrentCar();
	static AGameEvent_TA* GameEvent();

	static void SetAIManager(AAIManager_TA*);
	static void SetWorld(UWorld*);
	static void SetController(APlayerController_TA*);
	static void SetCurrentCar(ACar_TA*);
	static void SetGameEvent(AGameEvent_TA*);

	//if an object can be dervived from a from a higher level object with 2 or less calls, we dont need a setter
	//Example APlayerController->Camera->HUD->Fov == Have a getter/setter for FOV directly
	//Example APlayerController->Camera == We can just use PlayerController()->Camera to access the field.
private:
	static AAIManager_TA*				m_AAIManager_TA;
	static UWorld*						m_UWorld;
	static APlayerController_TA*		m_PlayerController_TA;
	static ACar_TA*						m_ACar_TA;
	static AGameEvent_TA*				m_GameEvent_TA;
};

