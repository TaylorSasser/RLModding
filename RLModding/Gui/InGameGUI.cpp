#include"InGameGUI.h"
#include "ClickEvent.h"
#include "../Libs/DirectX9/d3d9.h"
#include "../Libs/ImGui/imgui.h"
#include "../Libs/ImGui/DX9/imgui_impl_dx9.h"
#include "../Interfaces/Interfaces.h"


InGameGUI::InGameGUI() {}
InGameGUI::~InGameGUI() {}


bool isGUIOpen = false;

bool DrawModToggle(std::string name);

void InGameGUI::Render() {

	if (isGUIOpen == false) {
		return;
	}

	// Draw mouse cursor in game (since it is disabled);
	ImGui::GetIO().MouseDrawCursor = true;

	// Menu
	{
		if (ImGui::BeginMainMenuBar())
		{
			if (ImGui::BeginMenu("Mods"))
			{
				for (auto& mod : Interfaces::Mods()) {
					bool temp = mod.second->isEnabled();
					bool* state = &temp;
					static bool enabled = true;

					ImGui::MenuItem(mod.second->getName().c_str(), NULL, &enabled);

					if (temp != enabled) {
						mod.second->Toggle();
					}
					
				}

				ImGui::EndMenu();
			}
			if (ImGui::BeginMenu("Favorites"))
			{
				
				ImGui::EndMenu();
			}
			if (ImGui::BeginMenu("Help"))
			{
				ImGui::EndMenu();
			}
			ImGui::EndMainMenuBar();
		}
	}

	for (auto& mod : Interfaces::Mods()) {
		bool temp = mod.second->isEnabled();
		bool* state = &temp;
		if (temp) mod.second->DrawMenu();

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