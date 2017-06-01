#include "EventManager.h"


ModBase* aBase = new ModBase;

EventManager::EventManager() {
	auto MainMenuTick = SDK::UObject::FindObject<SDK::UFunction>("Function TAGame.PlayerController_Menu_TA.PlayerTick");
	AddFunction(aBase->onMainMenuTick,MainMenuTick);
}


EventManager::~EventManager() {


}



void EventManager::AddFunction(tEventMethod event,SDK::UFunction* function) {
	hashmap.insert(std::make_pair(function,event));
}

void EventManager::AddFunction(tEventMethod event,std::string fullName) {
	auto object = SDK::UObject::FindObject<SDK::UFunction>(fullName);
	hashmap.insert(std::make_pair(object,event));
}

void EventManager::ProxyFunction(SDK::UObject** object, SDK::UFunction* function, void* parameters) {
	
}
