#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include <functional>

bool isConnected = false;
SDK::UTcpConnection* Connection;
D3DRECT rec = { 200, 200, 400, 600 };

TestClass::TestClass(std::string name,int key) : ModBase(name,key) {}
TestClass::~TestClass(){}

void TestClass::onEnable() {
	printf("Test class enabled \n");

	static auto fn = SDK::UObject::FindObject<SDK::UFunction>("Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.BeginState");
	auto keyProp  = SDK::UObject::FindObject<SDK::UNameProperty>("Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.BeginState.P");

	struct {
		SDK::UNameProperty* property;
	} GenerateKeys;
	GenerateKeys.property = keyProp;

}
void TestClass::onDisable() {printf("Test class disabled \n");}

void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onDX9RenderTick(IDirect3DDevice9* Device) {}

void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {
	printf("Connection established at :%d",((SDK::UTcpConnection*)object)->Socket.Dummy);
	Connection = (SDK::UTcpConnection*)object;
	bool isConnected = true;
}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}

void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
