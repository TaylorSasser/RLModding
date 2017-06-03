#include "EventManager.h"
#include "ModHandler.h"
#include "ModBase.h"
#include "Wrapper.h"




EventManager::EventManager() {

}


EventManager::~EventManager() {

}

void EventManager::FunctionProxy(SDK::UObject** object,SDK::UFunction* func,void* params,bool isCallFunc) {
	
	if (func != nullptr) {
		Wrapper::Interfaces::getLogger()->WriteToLog(func->GetName());
	}

	/*
	if (func->GetName() == "Tick") {
		for (auto& Mod : Wrapper::Interfaces::getModHandler()->GetMods()) {
			functionType pointer = std::bind(&ModBase::MainMenuTick, Mod, std::placeholders::_1,std::placeholders::_2,std::placeholders::_3);
			pointer((void**)object,(void*)func,(void*)params);
		}
	}
	*/
}