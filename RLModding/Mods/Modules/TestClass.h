#pragma once
#include "../ModBase.h"

class TestClass :
	public ModBase
{
public:
	TestClass();
	~TestClass();
	void MainMenuTick(SDK::UObject**,SDK::UFunction*,void* params);
	void ChatSend(SDK::UObject**,SDK::UFunction*,void* params);
	void onActorJump(SDK::UObject**,SDK::UFunction*,void* parms);
};

