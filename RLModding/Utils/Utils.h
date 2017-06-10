#pragma once
#include <Windows.h>
#include "../RL/SDK.hpp"


namespace Utils {
	struct FOutParamRec {
		class uProperty*	Property;
		unsigned char*		PropertyAddr;
		struct FOutParamRec*	NextOutParam;
	};

	struct FFrame {
		unsigned char		UnknownData00[0xC];
		class UStruct*		Node;
		BYTE*				Code;
		BYTE*				Locals;
		struct FFrame*		PreviousFrame;
	};
	bool InitializeObjectsStore();
	bool InitializeNamesStore();
	SDK::UObject* GetInstanceOf(SDK::UClass* Class);
	SDK::FString to_fstring(std::string s);

	template<typename T>
	void EditParams(T* newParams,T* oldParams) {
		delete[] oldParams;
		oldParams = &newParams;
	}
}