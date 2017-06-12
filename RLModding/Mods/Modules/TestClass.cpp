#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"

bool isConnected = false;
SDK::UTcpConnection* Connection;
D3DRECT rec = { 200, 200, 400, 600 };

TestClass::TestClass(){}TestClass::~TestClass(){}

void TestClass::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}

void TestClass::ChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}


void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::DX9RenderTick(IDirect3DDevice9* Device) {
	//Device->Clear(1,&rec,D3DCLEAR_TARGET,D3DCOLOR_XRGB(255,0,0),0,0);
}


void TestClass::TCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {
	printf("Connection established at :%d",((SDK::UTcpConnection*)object)->Socket);
	Connection = (SDK::UTcpConnection*)object;
	bool isConnected = true;
}

void TestClass::TCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {
	
}

void TestClass::InGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {
	auto ByteToString = []() -> void {
		unsigned char* inBytes = Connection->InBytesDecoded.Data;
		if (inBytes != nullptr) {
			std::string result(reinterpret_cast<char*>(inBytes));
			printf("Bytes to string : %s",result);
		}
	};
	ByteToString();
}