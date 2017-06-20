#include "GUIConsole.h"
#include "../Libs/ImGui/imgui.h"
#include "../Libs/ImGui/DX9/imgui_impl_dx9.h"
#include <memory>
#include "../Mods/Modules/TestClass.h"
#include <functional>
#include "../Libs/DirectX9/d3dx9.h"
#include "../Utils/Wrapper.h"


GUIConsole::GUIConsole(){}
GUIConsole::~GUIConsole(){}
GUIConsole* GUIConsole::instance = nullptr;

IDirect3DDevice9* RLDevice = nullptr;


void GUIConsole::InitDevice() {
	//ImGui_ImplDX9_Init(FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)"),pDevice);
	//ImGui::GetIO().MouseDrawCursor = true;
}

void GUIConsole::DrawGUI(IDirect3DDevice9* pDevice) {



	if (pDevice != nullptr) {
		D3DRECT aRec = { 200, 200, 400, 600 };
		pDevice->Clear(1, &aRec, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 0, 0), 0, 0);
	} else {
		printf("DX9 Device is nullptr \n");
	}
}

bool GUIConsole::MouseClickEvent(ClickEvent e,int x, int y) {
	printf("Mouse Click event X:%d Y:%d \n",x,y);
	return false;
}


bool GUIConsole::KeyPressEvent(WPARAM key) {
	printf("Key Press event called %d \n",key);
	return false;
}