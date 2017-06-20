#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include "../../Libs/DirectX9/d3dx9.h"
#include <functional>
#include "../../Vector/Vector3D.h"

bool isConnected = false;
SDK::UTcpConnection* Connection;
D3DRECT rec = { 200, 200, 400, 600 };

TestClass::TestClass(std::string name,int key) : ModBase(name,key) {}
TestClass::~TestClass(){}

void TestClass::onEnable() {
	printf("Test class enabled \n");

	Vec::Vector3D aVec(100.0f,100.0f,23.0f);
	Vec::Vector3D aVec2(200.0f,200.0f,13.0f);
	aVec += aVec2;
	printf("aVec \n",aVec);
}
void TestClass::onDisable() {printf("Test class disabled \n");}

void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {

}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onDX9RenderTick(IDirect3DDevice9* Device) {
}

void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {
	printf("Connection established at :%d \n",((SDK::UTcpConnection*)object)->Socket.Dummy);
	Connection = (SDK::UTcpConnection*)object;
	bool isConnected = true;
}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}

void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
