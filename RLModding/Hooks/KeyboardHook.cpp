#include "KeyboardHook.h"
#include <Windows.h>
#include <iostream>
#include "../Utils/Wrapper.h"


KeyboardHook* KeyboardHook::instance = nullptr;
KeyboardHook::KeyboardHook(){}
KeyboardHook::~KeyboardHook(){}

WNDPROC OldWindow;
HWND	RLWindow;
HINSTANCE RLModding;

onKeyPress onKeyPressCallFunc;

LRESULT __stdcall HookedWindowProc(int code,WPARAM wParam,LPARAM lParam);

void KeyboardHook::HookKeyboard(onKeyPress keypress) {}

void KeyboardHook::RestoreKeyboard() {}

LRESULT __stdcall HookedWindowProc(int code, WPARAM wParam,LPARAM lParam) {
	


	for (auto& Mod : Wrapper::Interfaces::getModHandler()->GetMods()) {
		if (Mod->getBind() == code) {
			Mod->Toggle();
		}
	}
	return 0;
}

