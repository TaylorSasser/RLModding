#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include "../../Libs/DirectX9/d3dx9.h"
#include <functional>
#include "../../Vector/Vector.hpp"
#include "../../Vector/VecUtils.h"
#include "../../DrawManager/DrawManager.hpp"

SDK::ACar_TA* currentCar = nullptr;
SDK::UCanvas* currentCanvas = nullptr;

Vec::Vector carBoundsOrigin(0, 0, 0);
float boostAmount = 0;

TestClass::TestClass(std::string name, int key) : ModBase(name, key) {}
TestClass::~TestClass(){}

void TestClass::onEnable() {
	printf("Test class enabled \n");
	/*
	if (currentCanvas == nullptr || currentCar == nullptr) return;
	auto pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());

	Vec::Vector carBoundsOrigin = Vec::VecUtils::WorldToScreen(currentCanvas, pPlayerController, currentCar->CarMesh->Bounds.Origin);
	*/
}
void TestClass::onDisable() {printf("Test class disabled \n");}

void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::onPostRender(SDK::UObject** object,SDK::UFunction* function,void* parameters) {

	SDK::APlayerController* pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());
	SDK::ABall_TA* ball = (SDK::ABall_TA*)Utils::GetInstanceOf(SDK::AGameEvent_TA::StaticClass());

	if  (pPlayerController != NULL) {
			SDK::FVector _carBoundsOrigin = Vec::VecUtils::CalculateScreenCoordinate(ball->Location, pPlayerController);
			DrawManager::Instance()->BeginRendering();
			DrawManager::Instance()->AddRectFilled(ImVec2(300, 300), ImVec2(250, 250), D3DCOLOR_ARGB(255, 127, 0, 127));
			DrawManager::Instance()->EndRendering();
			
	}
}
void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
void TestClass::onCarTick(SDK::UObject** object,SDK::UFunction* funct,void* params) {
	currentCar = (SDK::ACar_TA*)*object; 
}