#include <Windows.h>
#include <iostream>
#include "Core.h"
#include "HookManager.h"
#include "LogManager.h"
#include "RL/SDK.hpp"
#include "ObjectInitializer.h"
#include "TestClass.h"
#include "Wrapper.h"


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
	HookManager::Instance()->DetourFunctions(TestFunction); 
}

void TestFunction(SDK::UObject** object,SDK::UFunction* func,void* params, bool isCallFunc) {

	if (func != nullptr) {	
		Wrapper::Interfaces::getLogger()->WriteToLog(func->GetName());
	}
}