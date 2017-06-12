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
	void DX9RenderTick(IDirect3DDevice9* device);


	void InGameTick(SDK::UObject**, SDK::UFunction*, void*);
	void TCPConnectionBegin(SDK::UObject**,SDK::UFunction*,void*);
	void TCPConnectionEnd(SDK::UObject**,SDK::UFunction*,void*);

};

