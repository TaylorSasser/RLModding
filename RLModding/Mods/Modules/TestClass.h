#pragma once
#include "../ModBase.h"

class TestClass : public ModBase {
public:
	TestClass(std::string name,int key);
	~TestClass();

	void onEnable() override;
	void onDisable() override;

<<<<<<< HEAD
	void onJoinGame(Event* event) override;
	void onActorJump(Event* event) override;
=======
	/*void onJoinGame(SDK::UObject** object, SDK::UFunction*,void* params) override;
	void onProfileJoinGame(SDK::UObject **, SDK::UFunction *, void * parameters) override;
	void onMainMenuTick(SDK::UObject**,SDK::UFunction*,void* params) override;
	void onChatSend(SDK::UObject**,SDK::UFunction*,void* params) override;
	void onActorJump(SDK::UObject**,SDK::UFunction*,void* parms) override;
	void onInGameTick(SDK::UObject**, SDK::UFunction*, void*) override;
	void onPostRender(SDK::UObject**,SDK::UFunction*,void*) override;

	void onTCPConnectionBegin(SDK::UObject**,SDK::UFunction*,void*) override;
	void onTCPConnectionEnd(SDK::UObject**,SDK::UFunction*,void*) override;
	void onCarTick(SDK::UObject**, SDK::UFunction*, void*) override;*/


	void onChatSend(SDK::UObject**, SDK::UFunction*, void* params) override;

	void Bind(SDK::UObject** object, SDK::UFunction* func, void* params, function fff) {
		typedef void (ModBase::*function)(SDK::UObject**, SDK::UFunction*, SDK::APlayerController_TA_Say_TA_Params*);
		std::function<void(SDK::UObject**, SDK::UFunction*, SDK::APlayerController_TA_Say_TA_Params*)> tempvar = std::bind(fff, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
		if (object != nullptr && func != nullptr && params != nullptr) {
			tempvar(object, func, (SDK::APlayerController_TA_Say_TA_Params*)params);
		}
		
	}

>>>>>>> 90c37a067e3a8cf33a92c260128c6f382df91475
};

