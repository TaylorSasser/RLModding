#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include "../../Libs/DirectX9/d3dx9.h"
#include <functional>
#include "../../Vector/Vector3D.h"
#include "../../Vector/VMatrix.h"

SDK::ACar_TA* currentCar = nullptr;

TestClass::TestClass(std::string name, int key) : ModBase(name, key) {}
TestClass::~TestClass(){}

void TestClass::onEnable() {printf("Test class enabled \n");}
void TestClass::onDisable() {printf("Test class disabled \n");}

void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {

}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onDX9RenderTick(IDirect3DDevice9* Device) {

	if (Device == nullptr) return;
	printf("Device is not null \n");
	Vec::Vector3D aVec = Utils::WorldToScreen(Device,currentCar->Mesh->Bounds.Origin,currentCar->PlayerController);
	Vec::Vector3D aVec1 = Utils::WorldToScreen(Device,currentCar->Mesh->Bounds.BoxExtent,currentCar->PlayerController);
	
	if (aVec.x == 0 || aVec.y == 0 || aVec1.x == 0 || aVec1.y == 0) return;
	printf("2D Vec %ld,%ld,%ld,%ld \n",aVec.x,aVec.y,aVec1.x,aVec1.y);
	D3DRECT aRec  = {aVec.x,aVec.y,aVec1.x,aVec1.y};
	Device->Clear(1,&aRec,0,D3DCOLOR_XRGB(127,0,127),0,0);
}	

void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
void TestClass::onCarTick(SDK::UObject** object,SDK::UFunction* funct,void* params) {
	currentCar = (SDK::ACar_TA*)*object; 
}