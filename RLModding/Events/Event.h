#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>


class EventBuilder {
public:
	EventBuilder(SDK::UObject** object,SDK::UFunction* function ,void* params) {
		if (object != nullptr) {
			pCallObject = object;
		}
		if (function != nullptr) {
			pUFunction = function;
		}
		if (params != nullptr) {
			parameters = params;
		}
	}

private:
	SDK::UObject**		pCallObject;
	SDK::UFunction*		pUFunction;
	void*				parameters;
};

template<class T>
class Event : public EventBuilder {
public:

	Event<T>::Event(SDK::UObject** object,SDK::UFunction* function,void* params) : EventBuilder(object,function,params) {}

	T ConstructParams() {
		if (__super::parameters == nullptr) {
			
		}
	}
};

//addFunction(BallAttachEvent,&ModBase::onBallAttach);

//Set the params iterator->First.Params = param builder (Param builder not implemented)

