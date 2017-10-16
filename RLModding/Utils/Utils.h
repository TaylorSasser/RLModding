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

	struct FOutputDevice {
		void* VfTable;
		unsigned long bAllowSuppression;
		unsigned long bSuppressEventTag;
		unsigned long bAutoEmitLineTerminator;
	};

	struct FFrame : public FOutputDevice{
		SDK::UStruct*		Node;
		SDK::UObject*		Object;
		BYTE*				Code;
		BYTE*				Locals;
		FFrame*				PreviousFrame;
		FOutParamRec*		OutParams;
	};

	bool InitializeObjectsStore();
	bool InitializeNamesStore();

	SDK::UObject* GetInstanceOf(SDK::UClass* Class);
	SDK::FString to_fstring(const std::string& s);
	char* stringToCharArray(const std::string& s);

	bool FloatCompare(float a, float b);
	bool ExportInventory(SDK::USaveData_TA* saveData, std::string outFile);
	void FlashWindow(int flashCount);

}
