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

	if (!isGUIOpen) {
		return;
	}

	// Draw mouse cursor in game (since it is disabled);
	ImGui::GetIO().MouseDrawCursor = true;
	//ImGui::GetStyle().Alpha = 50;  // This made it so you couldn't see diddly peat

	if (ImGui::BeginMainMenuBar()) {
		for (auto& name : categoryNames) {
			if (ImGui::BeginMenu(name.c_str())) {
				for (auto& mods : Interfaces::Mods()) {
					if (categoryNames[mods.second->getCategory()].compare(name) != 0)
						continue;
					if (ImGui::MenuItem(mods.second->getName().c_str(), NULL, mods.second->enabled)) {
						mods.second->Toggle();
					}
				}
				ImGui::EndMenu();
			}
		}
		ImGui::EndMainMenuBar();
	}

	// Draws the actual windows outside of the menu loop cause DUH
	for (auto& mods : Interfaces::Mods()) {
		if (mods.second->isEnabled()) {
			mods.second->DrawMenu();
		}	
	}

}

bool InGameGUI::MouseClickEvent(ClickEvent e, short x, short y) {
	return isGUIOpen;
}

bool InGameGUI::KeyPressEvent(KeyEvent e, WPARAM w) {
	if ((w == VK_HOME) && (e == KeyEvent::KeyUp)) {
		isGUIOpen = !isGUIOpen;
	}
	if ((w == Interfaces::FileHandler().GetGUIKeyBind("eject")) && (e == KeyEvent::KeyUp)) {
		FreeLibraryAndExitThread(LoadLibrary(L"RLModding.dll"),0);
	}
	return isGUIOpen;
}