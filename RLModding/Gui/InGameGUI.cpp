#include"InGameGUI.h"
#include "ClickEvent.h"
#include "../Libs/DirectX9/d3d9.h"
#include "../Libs/ImGui/imgui.h"
#include "../Libs/ImGui/DX9/imgui_impl_dx9.h"
#include "../Interfaces/Interfaces.h"


InGameGUI::InGameGUI() {}
InGameGUI::~InGameGUI() {}


bool isGUIOpen = false;


void InGameGUI::Render() {

	if (isGUIOpen == false) {
		return;
	}
}

bool InGameGUI::MouseClickEvent(ClickEvent e, short x, short y) {
	return isGUIOpen;
}

bool InGameGUI::KeyPressEvent(KeyEvent e, WPARAM w) {
	if ((w == VK_HOME) && (e == KeyEvent::KeyUp)) {
		isGUIOpen = !isGUIOpen;
	}
	if ((w == VK_END) && (e == KeyEvent::KeyUp)) {
		FreeLibraryAndExitThread(LoadLibrary(L"RLModding.dll"),0);
	}
	return isGUIOpen;
}