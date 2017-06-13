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


LRESULT __stdcall HookedWindowProc(HWND hwnd,int code,WPARAM wParam,LPARAM lParam);

void KeyboardHook::HookKeyboard() {
	printf("Hook Keyboard called \n");
	RLWindow = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
	OldWindow = reinterpret_cast<WNDPROC>(SetWindowLongPtr(RLWindow,GWL_WNDPROC,reinterpret_cast<LONG_PTR>(HookedWindowProc)));
}

void KeyboardHook::RestoreKeyboard() {}

LRESULT __stdcall HookedWindowProc(HWND hwnd,int code, WPARAM wParam,LPARAM lParam) {
	printf("Hooked WNDPROC called \n");
	return CallWindowProc(OldWindow,hwnd,code,wParam,lParam);
}

