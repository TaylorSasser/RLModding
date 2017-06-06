#include "KeyboardHook.h"
#include <Windows.h>
#include <iostream>


KeyboardHook* KeyboardHook::instance = nullptr;
KeyboardHook::KeyboardHook(){}
KeyboardHook::~KeyboardHook(){}

WNDPROC OldWindow;
HWND	RLWindow;
HINSTANCE RLModding;

onKeyPress onKeyPressCallFunc;

LRESULT __stdcall HookedWindowProc(int code,WPARAM wParam,LPARAM lParam);

void KeyboardHook::HookKeyboard(onKeyPress keypress) {
	SetWindowsHookEx(WH_KEYBOARD_LL,HookedWindowProc,GetModuleHandle(NULL),GetThreadId(GetCurrentThread()));	
}
void KeyboardHook::RestoreKeyboard() {
}

LRESULT __stdcall HookedWindowProc(int code, WPARAM wParam,LPARAM lParam) {
	printf("Keyboard function was called");
	return 0;
}

