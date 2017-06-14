#include <Windows.h>
#include "Core.h"
#include "../Hooks/HookManager.h"
#include "../Mods/ModBase.h"
#include "../Utils/Wrapper.h"
#include "../Hooks/KeyboardHook.h"
#include "../Hooks/DX9Hook.h"

HANDLE MainThread;
void onAttach(HMODULE hModule);
static HMODULE RL_HModule;

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		MainThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, hModule, 0, NULL);
		RL_HModule = hModule;
	case DLL_PROCESS_DETACH:
		CloseHandle(MainThread);
		Core::Restore();
	}
	return true;
}
void onAttach(HMODULE hModule) {
	DisableThreadLibraryCalls(hModule);
	Core::Initialize();
	KeyboardHook::Instance()->HookKeyboard();
	DX9Hook::Instance()->InitGUI();
	HookManager::Instance()->DetourFunctions(Wrapper::Interfaces::getEventManager()->FunctionProto); 
}