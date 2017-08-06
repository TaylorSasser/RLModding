#pragma once
#include "../RL/SDK.hpp"
#include <Windows.h>


class Event {
public:
	Event(SDK::UObject** object, SDK::UFunction* func, void* parameters) : pCallObject(object), pUFunction(func), params(parameters) {
		if (params == nullptr) { isCallFunction = true; }
		else { isCallFunction = false; }
	}

	SDK::UObject* getCallingObject() const
	{
		return reinterpret_cast<SDK::UObject*>(pCallObject);
	}

	SDK::UFunction* getUFunction() const
	{
		return pUFunction;
	}

	template<class T>
	T* readParams() {
		if (isCallFunction) {
			this->params = new T;
			for (auto property = (SDK::UProperty*)pUFunction->Children; property != nullptr; property = (SDK::UProperty*)property->Next) {
				memcpy(params + property->Offset, property + property->Offset, property->ElementSize);
			}
			return reinterpret_cast<T>(params);
		}
		return nullptr;
	}

	template<class T>
	void setParams(T* parameters) {
		if (isCallFunction) {
			for (auto property = (SDK::UProperty*)pUFunction->Children; property != nullptr; property = (SDK::UProperty*)property->Next) {
				memcpy(property + property->Offset, params + property->Offset, property->ElementSize);
			}
			reinterpret_cast<T>(params) = parameters;
		}
	}
private:
	SDK::UObject** pCallObject;
	SDK::UFunction* pUFunction;
	bool isCallFunction;
	void* params;
};


//addFunction(BallAttachEvent,&ModBase::onBallAttach);

//Set the params iterator->First.Params = param builder (Param builder not implemented)

