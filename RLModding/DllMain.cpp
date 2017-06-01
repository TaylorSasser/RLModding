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
		MainThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, hModule, 0, NULL);
		//CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Sniffer::PacketSniffer,0,0,NULL);
	case DLL_PROCESS_DETACH:
		CloseHandle(MainThread);
		Core::Restore();
	}
	return true;
}
void onAttach(HMODULE hModule) {
	DisableThreadLibraryCalls(hModule);
	Core::Initialize();
	HookManager hkManager(TestFunction);
	auto* test = ConstructUObject<SDK::ABall_TA>("CustomObject UObject.TestObject");
}