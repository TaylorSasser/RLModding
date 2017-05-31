#include <Windows.h>
#include <iostream>
#include "Core.h"
#include "HookManager.h"
#include "LogManager.h"
#include "RL/SDK.hpp"
#include "ObjectInitializer.h"


void TestFunction(SDK::UObject** object,SDK::UFunction* func, void* params, bool isCallFunc);
LogManager logManager;

HANDLE MainThread;
void onAttach(HMODULE hModule);

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, hModule, 0, NULL);
		//CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Sniffer::PacketSniffer,0,0,NULL);
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

	if (func->
	}
}