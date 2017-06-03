#include "EventManager.h"
#include "ModHandler.h"
#include "ModBase.h"
#include "Wrapper.h"


std::function<void(SDK::UObject**,SDK::UFunction*,void*)> functionTEMP;

EventManager::EventManager() {
	FunctionProto = std::bind(&EventManager::FunctionProxy,this,std::placeholders::_1,std::placeholders::_2,std::placeholders::_3,std::placeholders::_4);
	addFunction("Function TAGame.PlayerController_Menu_TA.PlayerTick",&ModBase::MainMenuTick);
}
EventManager::~EventManager() {
	delete this;
}
void EventManager::addFunction(std::string funcname,function func) {
	auto fn = SDK::UObject::FindObject<SDK::UFunction>(funcname);
	hashmap.insert(std::pair<SDK::UFunction*,function>(fn,func));
}

void EventManager::FunctionProxy(SDK::UObject** object,SDK::UFunction* func,void* params,bool isCallFunc) {
	std::unordered_map<SDK::UFunction*,function>::iterator it;
	for (it = hashmap.begin(); it != hashmap.end(); ++it) {
		if (it->first->GetFullName() == func->GetFullName()) {
			for (auto& Mod : Wrapper::Interfaces::getModHandler()->GetMods()) {
				std::function<void(SDK::UObject**,SDK::UFunction*,void*)> tempvar = std::bind(it->second,Mod,std::placeholders::_1,std::placeholders::_2,std::placeholders::_3);
				tempvar(object,func,params);
			}
		}
	}
}