#include "KeyboardHook.h"
#include <Windows.h>
#include <Windowsx.h>
#include <iostream>
#include "../Libs/ImGui/imgui.h"
#include "../Libs/ImGui/DX9/imgui_impl_dx9.h"
#include "../Interfaces/Interfaces.h"
#include "../Gui/ClickEvent.h"

KeyboardHook::KeyboardHook(){}
KeyboardHook::~KeyboardHook(){}

WNDPROC OldWindow;
HWND	RLWindow;
HINSTANCE RLModding;

bool PressedKeys[256] = {};

LRESULT __stdcall HookedWindowProc(HWND hwnd,unsigned int code,WPARAM wParam,LPARAM lParam);

void KeyboardHook::HookKeyboard() {
	RLWindow = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
	while (RLWindow == nullptr); Sleep(200);
	OldWindow = reinterpret_cast<WNDPROC>(SetWindowLongPtr(RLWindow,GWLP_WNDPROC,reinterpret_cast<LONG_PTR>(HookedWindowProc)));

}

void KeyboardHook::RestoreKeyboard() {
	SetWindowLongPtr(RLWindow,GWLP_WNDPROC,reinterpret_cast<LONG_PTR>(OldWindow));
}


// TRUE = GUI is open
LRESULT __stdcall HookedWindowProc(HWND hwnd,unsigned int code, WPARAM wParam,LPARAM lParam) {

	ImGuiIO& io = ImGui::GetIO();
	switch (code) {
	case WM_LBUTTONDOWN:
		io.MouseDown[0] = true;
		return (Interfaces::GUI()->MouseClickEvent(ClickEvent::LeftMouse, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 0 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_LBUTTONUP:
		io.MouseDown[0] = false;
		return (Interfaces::GUI()->MouseClickEvent(ClickEvent::LeftMouse, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 0 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_RBUTTONDOWN:
		io.MouseDown[1] = true;
		return (Interfaces::GUI()->MouseClickEvent(ClickEvent::RightMouse, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 0 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_RBUTTONUP:
		io.MouseDown[1] = false;
		return (Interfaces::GUI()->MouseClickEvent(ClickEvent::RightMouse, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 0 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_MBUTTONDOWN:
		io.MouseDown[2] = true;
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	case WM_MBUTTONUP:
		io.MouseDown[2] = false;
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	case WM_MOUSEWHEEL:
		io.MouseWheel += GET_WHEEL_DELTA_WPARAM(wParam) > 0 ? +1.0f : -1.0f;
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	case WM_MOUSEMOVE:
		io.MousePos.x = (signed short)(lParam);
		io.MousePos.y = (signed short)(lParam >> 16);
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	case WM_KEYDOWN:
		if (wParam < 256)
			io.KeysDown[wParam] = 1;
		return (Interfaces::GUI()->KeyPressEvent(KeyEvent::KeyDown, wParam) ? 0 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_KEYUP:
		for (auto& Mod : Interfaces::Mods()->getMods()) {
			if (Mod->getBind() == wParam) {
				Mod->Toggle();
			}
		}
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	case WM_CHAR:
		if (wParam > 0 && wParam < 0x10000)
			io.AddInputCharacter((unsigned short)wParam);
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	default:
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	}
}



