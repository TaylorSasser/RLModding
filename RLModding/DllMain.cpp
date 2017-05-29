#include <Windows.h>
#include <iostream>
#include "Core.h"
#include "HookManager.h"
#include "LogManager.h"
#include "RL/SDK.hpp"
#include "ObjectInitializer.h"


void TestFunction(SDK::UObject** object,SDK::UFunction* func, void* params, bool isCallFunc);
void ObjectTest();
LogManager logManager;

HANDLE MainThread;
void onAttach(HMODULE hModule);

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, hModule, 0, NULL);
	case DLL_PROCESS_DETACH:
		Core::Restore();
	}
	return true;
}
void onAttach(HMODULE hModule) {
	DisableThreadLibraryCalls(hModule);
	Core::Initialize();
	HookManager hkManager(TestFunction);
	SDK::UObject* test = ConstructUObject<SDK::UObject>("CustomObject UObject.TestObject");
	std::cout << test->GetName() << std::endl;

}

void TestFunction(SDK::UObject** object,SDK::UFunction* func, void* params, bool isCallFunc) {

	if (GetAsyncKeyState(VK_NUMPAD5)) {
	SDK::UOnlineGameDedicatedServer_X* server = (SDK::UOnlineGameDedicatedServer_X*)Utils::GetInstanceOf(SDK::UOnlineGameDedicatedServer_X::StaticClass());
		if (server != NULL) {
			std::cout << "Traveling to map..." << std::endl;
			server->TravelToMap(L"UTOPIASTADIUM_P?Game=TAGame.GameInfo_Tutorial_TA?FreePlay?");
		}
	}
}