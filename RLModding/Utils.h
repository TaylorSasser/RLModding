#pragma once
#include <Windows.h>
#include "RL/SDK.hpp"

namespace Utils {
	struct FOutParmRec {
		class UProperty*								   Property;
		unsigned char*				 					   PropAddr;
		struct FOutParmRec*		 						   NextOutParm;
	};

	struct FFrame {
		unsigned char 									   UnknownData00[0xC];
		class UStruct*									   Node;
		class UObject*									   Object;
		BYTE*											   Code;
		BYTE* 											   Locals;
		struct FFrame* 									   PreviousFrame;
	};

	bool InitializeObjectsStore();
	bool InitializeNamesStore();
	SDK::UObject* GetInstanceOf(SDK::UClass* Class);
}

  