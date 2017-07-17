#include <Windows.h>
#include "Core.h"
#include "../Interfaces/Interfaces.h"


HANDLE MainThread;
void onAttach(HMODULE hModule);

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		MainThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, hModule, 0, NULL);
	case DLL_PROCESS_DETACH:
		Core::Restore();
		CloseHandle(MainThread);
	}
	return true;
}
void onAttach(HMODULE hModule) {
	DisableThreadLibraryCalls(hModule);
	Core::Initialize();
	Interfaces::ConstructAll();
	Interfaces::FunctionHandler()->DetourFunctions(Interfaces::EventHandler()->FunctionProto);
	Interfaces::DX9Handler()->InitGUI();
	Interfaces::KeyboardHandler()->HookKeyboard();
}
