#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>


class Event {
public:
	Event(SDK::UObject** object, SDK::UFunction* func, void* parameters) : pCallObject(object), pUFunction(func), params(parameters) {
		if (params == nullptr) { isCallFunction = true; }
		else { isCallFunction = false; }
	}

	SDK::UObject* getCallingObject() const {
		return reinterpret_cast<SDK::UObject*>(pCallObject);
	}

	SDK::UFunction* getUFunction() const {
		return pUFunction;
	}

	//event->getParams<STRUCT WITH FNAME>():
	template<class T>
	T* getParams() {
		return reinterpret_cast<T*>(params);
	}

private:
	SDK::UObject** pCallObject;
	SDK::UFunction* pUFunction;
	bool isCallFunction;
	void* params;
};


//addFunction(BallAttachEvent,&ModBase::onBallAttach);

//Set the params iterator->First.Params = param builder (Param builder not implemented)

