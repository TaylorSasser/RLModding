#include "KeyboardHook.h"
#include <Windows.h>
#include <Windowsx.h>
#include <iostream>
#include "../Gui/ClickEvent.h"
#include "../Utils/Wrapper.h"
#include "../Gui/GUIConsole.h"
#include "../Libs/ImGui/imgui.h"
#include "../Libs/ImGui/DX9/imgui_impl_dx9.h"

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
	while (RLWindow == nullptr); Sleep(200);
	OldWindow = reinterpret_cast<WNDPROC>(SetWindowLongPtr(RLWindow,GWLP_WNDPROC,reinterpret_cast<LONG_PTR>(HookedWindowProc)));

}

void KeyboardHook::RestoreKeyboard() {
	SetWindowLongPtr(RLWindow,GWLP_WNDPROC,reinterpret_cast<LONG_PTR>(OldWindow));
}


// TRUE = GUI is open
LRESULT __stdcall HookedWindowProc(HWND hwnd,UINT code, WPARAM wParam,LPARAM lParam) {

	ImGuiIO& io = ImGui::GetIO();
	switch (code)
	{
	case WM_LBUTTONDOWN:
		io.MouseDown[0] = true;
		return (GUIConsole::Instance()->MouseClickEvent(ClickEvent::LeftClick, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 1 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_LBUTTONUP:
		io.MouseDown[0] = false;
		return (GUIConsole::Instance()->MouseClickEvent(ClickEvent::LeftClick, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 1 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_RBUTTONDOWN:
		io.MouseDown[1] = true;
		return (GUIConsole::Instance()->MouseClickEvent(ClickEvent::RightClick, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 1 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_RBUTTONUP:
		io.MouseDown[1] = false;
		return (GUIConsole::Instance()->MouseClickEvent(ClickEvent::RightClick, GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)) ? 1 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
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
		return (GUIConsole::Instance()->KeyPressEvent(KeyEvent::Down, wParam) ? 1 : CallWindowProc(OldWindow, hwnd, code, wParam, lParam));
	case WM_KEYUP:
		if (GUIConsole::Instance()->KeyPressEvent(KeyEvent::Up, wParam) != false) { return true; }
		for (auto& Mod : Wrapper::Interfaces::getModHandler()->getMods()) {
			if (Mod->getBind() == wParam) {
				Mod->Toggle();
			}
		}
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	case WM_CHAR:
		// You can also use ToAscii()+GetKeyboardState() to retrieve characters.
		if (wParam > 0 && wParam < 0x10000)
			io.AddInputCharacter((unsigned short)wParam);
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	default:
		return CallWindowProc(OldWindow, hwnd, code, wParam, lParam);
	}
}



