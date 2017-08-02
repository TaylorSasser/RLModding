#include <Windows.h>
#include "Core.h"
#include "../Interfaces/Interfaces.h"


HANDLE MainThread;
void onAttach(HMODULE hModule);
void onDetach(HMODULE hModule);

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		MainThread = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(onAttach), hModule, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		onDetach(hModule);
		break;
	}
	return true;
}
void onAttach(HMODULE hModule) {
	DisableThreadLibraryCalls(hModule);
	Core::Initialize();
	Interfaces::FunctionHandler().DetourFunctions(Interfaces::EventHandler().getProxy());
	Interfaces::DX9Handler().InitGUI();
	Interfaces::KeyboardHandler().HookKeyboard();
}

void onDetach(HMODULE hModule) {
	Core::Restore();
	Interfaces::FunctionHandler().RemoveDetours();
	Interfaces::DX9Handler().RemoveHook();
	Interfaces::KeyboardHandler().RestoreKeyboard();
}