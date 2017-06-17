#include "KeyboardHook.h"
#include <Windows.h>
#include <Windowsx.h>
#include <iostream>
#include "../Gui/ClickEvent.h"
#include "../Utils/Wrapper.h"
#include "../Gui/GUIConsole.h"


KeyboardHook* KeyboardHook::instance = nullptr;
KeyboardHook::KeyboardHook(){}
KeyboardHook::~KeyboardHook(){}

WNDPROC OldWindow;
HWND	RLWindow;
HINSTANCE RLModding;

bool PressedKeys[256] = {};

LRESULT __stdcall HookedWindowProc(HWND hwnd,UINT code,WPARAM wParam,LPARAM lParam);

void KeyboardHook::HookKeyboard() {
	printf("Hook Keyboard called \n");
	RLWindow = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
	OldWindow = reinterpret_cast<WNDPROC>(SetWindowLongPtr(RLWindow,GWLP_WNDPROC,reinterpret_cast<LONG_PTR>(HookedWindowProc)));

}

void KeyboardHook::RestoreKeyboard() {
	SetWindowLongPtr(RLWindow,GWLP_WNDPROC,reinterpret_cast<LONG_PTR>(OldWindow));
}


// TRUE = GUI is open
LRESULT __stdcall HookedWindowProc(HWND hwnd,UINT code, WPARAM wParam,LPARAM lParam) {
	switch(code) {
		case WM_LBUTTONUP:
			return (GUIConsole::Instance()->MouseClickEvent(ClickEvent::LeftClick, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 1 : CallWindowProc(OldWindow,hwnd,code,wParam,lParam));
		case WM_RBUTTONUP:
			return (GUIConsole::Instance()->MouseClickEvent(ClickEvent::RightClick, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 1 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
		case WM_KEYUP:
			if (GUIConsole::Instance()->KeyPressEvent(wParam) != false) {return true;}
			for (auto& Mod : Wrapper::Interfaces::getModHandler()->getMods()) {
				if (Mod->getBind() == wParam) {
					Mod->Toggle();
				}
			}
			return CallWindowProc(OldWindow,hwnd,code,wParam,lParam);
		default:
			return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	}
}



