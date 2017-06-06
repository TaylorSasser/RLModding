#pragma once
#include <functional>
#include <unordered_map>
#include "../Mods/ModBase.h"

typedef void (ModBase::*function)(SDK::UObject**,SDK::UFunction*,void*);

class EventManager {
public:
	EventManager();
	~EventManager();
	std::function<void(SDK::UObject**,SDK::UFunction*, void*,bool)> FunctionProto;
	void addFunction(std::string FuncName,function);
private:
	void FunctionProxy(SDK::UObject** object, SDK::UFunction* function, void* params, bool isCallFunc);
	std::unordered_map<std::string,function> hashmap;
};

