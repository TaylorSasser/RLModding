#pragma once
#include <Windows.h>
#include "../RL/SDK.hpp"
#include "../Vector/Vector.hpp"
#include <unordered_map>
#include "../Libs/DirectX9/d3d9.h"
#include "../Libs/DirectX9/d3dx9.h"
#include "../DrawManager/DrawManager.hpp"

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


	bool DrawMessage(LPD3DXFONT font, unsigned int x, unsigned int y, int alpha, unsigned char r, unsigned char g, unsigned char b, LPCSTR Message);

	static std::unordered_map<std::string, int> keybindMap;
	std::unordered_map<std::string, int> getKeybinds(std::string file);
	std::unordered_map<std::string, int> initializeKeybinds();
}
