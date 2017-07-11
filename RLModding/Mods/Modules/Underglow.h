#pragma once
#include "../ModBase.h"

class Underglow : public ModBase {
public:
	Underglow(std::string name, int Key);
	~Underglow();

	void onEnable();
	void onDisable();

	//void onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* params);
	//void onChatSend(SDK::UObject**, SDK::UFunction*, void* params);
	//void onActorJump(SDK::UObject**, SDK::UFunction*, void* parms);
	//void onDX9RenderTick(IDirect3DDevice9* device);
	//void onInGameTick(SDK::UObject**, SDK::UFunction*, void*);
	//void onCarTick(SDK::UObject**, SDK::UFunction*, void*);
	//void onPostRender(SDK::UObject**, SDK::UFunction*, void*);

	//void onTCPConnectionBegin(SDK::UObject**, SDK::UFunction*, void*);
	//void onTCPConnectionEnd(SDK::UObject**, SDK::UFunction*, void*);
};
