#pragma once
#include "../ModBase.h"

class TestClass : public ModBase {
public:
	TestClass(std::string name,int key);
	~TestClass();

	void onEnable() override;
	void onDisable() override;

	void onJoinGame(SDK::UObject** object, SDK::UFunction*,void* params) override;
	void onProfileJoinGame(SDK::UObject **, SDK::UFunction *, void * parameters) override;
	void onMainMenuTick(SDK::UObject**,SDK::UFunction*,void* params) override;
	void onChatSend(SDK::UObject**,SDK::UFunction*,void* params) override;
	void onActorJump(SDK::UObject**,SDK::UFunction*,void* parms) override;
	void onInGameTick(SDK::UObject**, SDK::UFunction*, void*) override;
	void onCarTick(SDK::UObject**, SDK::UFunction*, void*) override;
	void onPostRender(SDK::UObject**,SDK::UFunction*,void*) override;

	void onTCPConnectionBegin(SDK::UObject**,SDK::UFunction*,void*) override;
	void onTCPConnectionEnd(SDK::UObject**,SDK::UFunction*,void*) override;

};

