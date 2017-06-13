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


LRESULT __stdcall HookedWindowProc(HWND hwnd,UINT code,WPARAM wParam,LPARAM lParam);

void KeyboardHook::HookKeyboard() {
	printf("Hook Keyboard called \n");
	RLWindow = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
	OldWindow = reinterpret_cast<WNDPROC>(SetWindowLongPtr(RLWindow,GWL_WNDPROC,reinterpret_cast<LONG_PTR>(HookedWindowProc)));
}

void KeyboardHook::RestoreKeyboard() {
	SetWindowLongPtr(RLWindow,GWLP_WNDPROC,reinterpret_cast<LONG_PTR>(OldWindow));
}

LRESULT __stdcall HookedWindowProc(HWND hwnd,UINT code, WPARAM wParam,LPARAM lParam) {
	if(code == WM_KEYDOWN) {
		for (auto& Mod : Wrapper::Interfaces::getModHandler()->GetMods()) {
			if (Mod->getBind() == wParam && Mod->getBind() != NULL && &Mod != nullptr) {
				std::function<void()> CallToggle = std::bind(&ModBase::Toggle,Mod);
				CallToggle();return true;
			} else {
				return CallWindowProc(OldWindow,hwnd,code,wParam,lParam);
			}
		}	
	}
}

