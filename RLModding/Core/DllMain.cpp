#include <Windows.h>
#include "Core.h"
#include "../Interfaces/Interfaces.h"
#include "../PlayerBlacklist/BlackList.h"


HANDLE MainThread;
void onAttach(HMODULE hModule);
void onDetach(HMODULE hModule);

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		MainThread = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(onAttach), hModule, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
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
	Interfaces::FileHandler().Load();
	//Interfaces::Blacklist().Check();
	CreateThread(NULL, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(onDetach), hModule, 0, nullptr);
}

void onDetach(HMODULE hModule) {
	while (true) {
		if (GetAsyncKeyState(VK_END)) {
			Core::Restore();
			Interfaces::FunctionHandler().RemoveDetours();
			Interfaces::DX9Handler().RemoveHook();
			Interfaces::KeyboardHandler().RestoreKeyboard();
			Sleep(1000);
			FreeLibraryAndExitThread(hModule, 0);
			ExitThread(0);
		}
		Sleep(3000);
	}

}
