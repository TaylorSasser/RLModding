#include <Windows.h>
#include "Core.h"
#include "../Interfaces/Interfaces.h"

HANDLE MainThread;
void onAttach(HMODULE hModule);
void onDetach();

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		MainThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, hModule, 0, NULL);
		break;
	case DLL_PROCESS_DETACH:
		Core::Restore();
		onDetach();//This case block is called when the dll is attached for some reason and it keeps crashing and is annoying
		CloseHandle(MainThread);
		break;
	}
	return true;
}
void onAttach(HMODULE hModule) {
	DisableThreadLibraryCalls(hModule);
	Core::Initialize();
	Interfaces::ConstructAll(hModule);
	Interfaces::FunctionHandler()->DetourFunctions(Interfaces::EventHandler()->FunctionProto);
	Interfaces::DX9Handler()->InitGUI();
	Interfaces::KeyboardHandler()->HookKeyboard();
}
void onDetach() {
	if (!MainThread) return;
	Core::Restore();
	Interfaces::FunctionHandler()->RemoveDetours();
	Interfaces::DX9Handler()->RemoveHook();
	Interfaces::KeyboardHandler()->RestoreKeyboard();
	Interfaces::DestructAll();
	FreeLibraryAndExitThread(hModule, 0);
}
