#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include "../../Libs/DirectX9/d3dx9.h"
#include <functional>
#include "../../Vector/Vector3D.h"
#include "../../Vector/VecUtils.h"

SDK::ACar_TA* currentCar = nullptr;
SDK::UCanvas* currentCanvas = nullptr;
IDirect3DDevice9* pDevice = nullptr;

TestClass::TestClass(std::string name, int key) : ModBase(name, key) {}
TestClass::~TestClass(){}

void TestClass::onEnable() {
	printf("Test class enabled \n");
	/*
	if (currentCanvas == nullptr || currentCar == nullptr) return;
	auto pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());

	Vec::Vector3D carBoundsOrigin = Vec::VecUtils::WorldToScreen(currentCanvas, pPlayerController, currentCar->CarMesh->Bounds.Origin);
	*/
}
void TestClass::onDisable() {printf("Test class disabled \n");}

void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::onPostRender(SDK::UObject** object,SDK::UFunction* function,void* parameters) {
	currentCanvas = ((SDK::UGameViewportClient_PostRender_Params*)parameters)->Canvas;

	if (currentCanvas == nullptr || currentCar == nullptr || pDevice == nullptr) return;
	auto pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());

	printf("Carbounds origin %f:%f:%f \n",currentCar->Location.X,currentCar->Location.Y,currentCar->Location.Z);

	Vec::Vector3D carBoundsOrigin = Vec::VecUtils::WorldToScreen(currentCanvas, pPlayerController, currentCar->Location);

	D3DRECT aRec = { carBoundsOrigin.x - 50,carBoundsOrigin.y - 50,carBoundsOrigin.y + 50,carBoundsOrigin.y + 50 };
	pDevice->Clear(1, &aRec, D3DCLEAR_TARGET, D3DCOLOR_XRGB(127, 0, 127), 0, 0);
	delete &aRec;
}

void TestClass::onDX9RenderTick(IDirect3DDevice9* Device) {
	pDevice = Device;
}

void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
void TestClass::onCarTick(SDK::UObject** object,SDK::UFunction* funct,void* params) {
	currentCar = (SDK::ACar_TA*)*object; 
}