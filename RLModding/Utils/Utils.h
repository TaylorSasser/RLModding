#pragma once
#include <Windows.h>
#include "../RL/SDK.hpp"
#include <unordered_map>


namespace Utils {
	struct FOutParamRec {
		class UProperty*		Property;
		unsigned char*			PropertyAddr;
		struct FOutParamRec*	NextOutParam;
	};

	struct FFrame {
		unsigned char		UnknownData00[0xC];
		class UStruct*		Node;
		SDK::UObject*		Object;
		BYTE*				Code;
		BYTE*				Locals;
		struct FFrame*		PreviousFrame;
		FOutParamRec*		OutParams;
	};

	bool InitializeObjectsStore();
	bool InitializeNamesStore();

	SDK::UObject* GetInstanceOf(SDK::UClass* Class);
	SDK::FString to_fstring(const std::string& s);
}
