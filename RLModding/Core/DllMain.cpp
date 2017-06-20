#include <Windows.h>
#include "Core.h"
#include "../Hooks/HookManager.h"
#include "../Mods/ModBase.h"
#include "../Utils/Wrapper.h"
#include "../Hooks/KeyboardHook.h"
#include "../Hooks/DX9Hook.h"

HANDLE MainThread;
void onAttach(HMODULE hModule);

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		MainThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, hModule, 0, NULL);
	case DLL_PROCESS_DETACH:
		CloseHandle(MainThread);
		Core::Restore();
	}
	return true;
}
void onAttach(HMODULE hModule) {
	DisableThreadLibraryCalls(hModule);
	Core::Initialize();
	DX9Hook::Instance()->InitGUI();
	KeyboardHook::Instance()->HookKeyboard();
	HookManager::Instance()->DetourFunctions(Wrapper::Interfaces::getEventManager()->FunctionProto);
}
