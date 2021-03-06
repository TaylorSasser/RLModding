#include"InGameGUI.h"
#include "ClickEvent.h"
#include "../Libs/DirectX9/d3d9.h"
#include "../Libs/ImGui/imgui.h"
#include "../Libs/ImGui/DX9/imgui_impl_dx9.h"
#include "../Interfaces/Interfaces.h"
#include "../Mods/ModBase.h"
#include "../Core/Core.h"
#include <Windows.h>
#include <iostream>

//Style from UnknownCheats by Exasty Hosting
void SetStyle(ImGuiStyle * style) {

	style->WindowPadding = ImVec2(15, 15);
	style->WindowRounding = 5.0f;
	style->FramePadding = ImVec2(5, 5);
	style->FrameRounding = 4.0f;
	style->ItemSpacing = ImVec2(12, 8);
	style->ItemInnerSpacing = ImVec2(8, 6);
	style->IndentSpacing = 25.0f;
	style->ScrollbarSize = 15.0f;
	style->ScrollbarRounding = 9.0f;
	style->GrabMinSize = 5.0f;
	style->GrabRounding = 3.0f;
	style->Alpha = 1.0f;

	style->Colors[ImGuiCol_Text] = ImVec4(0.80f, 0.80f, 0.82f, 1.00f);
	style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style->Colors[ImGuiCol_WindowBg] = ImVec4(0.05f, 0.05f, 0.07f, 1.00f);
	style->Colors[ImGuiCol_ChildWindowBg] = ImVec4(0.07f, 0.07f, 0.13f, 1.00f);
	style->Colors[ImGuiCol_PopupBg] = ImVec4(0.07f, 0.07f, 0.13f, 1.00f);
	style->Colors[ImGuiCol_Border] = ImVec4(0.80f, 0.80f, 0.90f, 0.88f);
	style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.09f, 0.08f, 0.10f, 0.10f);
	style->Colors[ImGuiCol_FrameBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.77f, 0.76f, 0.80f, 1.00f);
	style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.80f, 0.80f, 0.80f, 1.00f);
	style->Colors[ImGuiCol_TitleBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.07f, 0.07f, 0.09f, 1.00f);
	style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.07f, 0.07f, 0.09f, 1.00f);
	style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
	style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.16f, 0.15f, 0.17f, 1.00f);
	style->Colors[ImGuiCol_ComboBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_CheckMark] = ImVec4(0.078f, 0.592f, 1.0f, 0.7f);
	style->Colors[ImGuiCol_SliderGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
	style->Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.16f, 0.15f, 0.17f, 1.00f);
	style->Colors[ImGuiCol_Button] = ImVec4(0.12f, 0.10f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_ButtonHovered] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style->Colors[ImGuiCol_ButtonActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_Header] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
	style->Colors[ImGuiCol_Column] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_ColumnHovered] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style->Colors[ImGuiCol_ColumnActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_ResizeGrip] = ImVec4(1.00f, 1.00f, 1.00f, 0.80f);
	style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
	style->Colors[ImGuiCol_CloseButton] = ImVec4(0.40f, 0.39f, 0.38f, 0.16f);
	style->Colors[ImGuiCol_CloseButtonHovered] = ImVec4(0.40f, 0.39f, 0.38f, 0.39f);
	style->Colors[ImGuiCol_CloseButtonActive] = ImVec4(0.40f, 0.39f, 0.38f, 1.00f);
	style->Colors[ImGuiCol_PlotLines] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
	style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
	style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
	style->Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
	style->Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 1.00f, 0.00f, 0.43f);
	style->Colors[ImGuiCol_ModalWindowDarkening] = ImVec4(1.00f, 0.98f, 0.95f, 0.73f);

}

InGameGUI::InGameGUI() {
	SetStyle(&ImGui::GetStyle());
}
InGameGUI::~InGameGUI() {}

void InGameGUI::Render() {

	if (!(ModBase::STATIC_getCurrentGameState() & GameState::MENU) && isGUIOpen ) {
		ImGui::GetIO().MouseDrawCursor = true;
	}
	else {
		ImGui::GetIO().MouseDrawCursor = false;
	}

	// Draw elements that can exist regardless if menu is showing or not.
	// These items are meant to be additions to the rocket league menus
	for (auto& mods : Interfaces::Mods()) {
		if (mods.second->isEnabled()) {
			mods.second->DrawRLMenuAddon();
		}
	}

	if (!isGUIOpen) {
		return;
	}

	// Draw mouse cursor in game (since it is disabled);
	//ImGui::GetIO().MouseDrawCursor = true;
	if (ImGui::BeginMainMenuBar()) {
		for (auto& name : categoryNames) {
			if (ImGui::BeginMenu(name.c_str())) {
				for (auto& mods : Interfaces::Mods()) {
					if (categoryNames[mods.second->getCategory()].compare(name) != 0)
						continue;
					if (ImGui::MenuItem(mods.second->getName().c_str(), NULL, mods.second->enabled, ModBase::STATIC_getCurrentGameState() & mods.second->getAllowedGameStates())) {
						mods.second->Toggle();
					}						
					if (ImGui::IsItemHovered()) {
						if (mods.second->getToolTip().length() > 0) {
							ImGui::SetTooltip(mods.second->getToolTip().c_str());
						}
					}
				}

				ImGui::EndMenu();
			}
			
		}

		if (ImGui::BeginMenu("Config")) {
			if (ImGui::MenuItem("Save")) {
				Interfaces::FileHandler().ExportModSettings();
				Sleep(100);
			}
			if (ImGui::IsItemHovered()) {
				ImGui::SetTooltip("Save all current game mode configurations");
			}

			if (ImGui::MenuItem("Load")) {
				Interfaces::FileHandler().ImportModSettings();
				Sleep(100);
			}
			if (ImGui::IsItemHovered()) {
				ImGui::SetTooltip("Load previously saved game mode configurations");
			}

			ImGui::EndMenu();
		}
		
		
	}

	ImGui::EndMainMenuBar();
	for (auto& mods : Interfaces::Mods()) {
		if (mods.second->isEnabled()) {
			mods.second->DrawMenu();
		}
	}
}

bool InGameGUI::MouseClickEvent(ClickEvent e, short x, short y) {
	// Used to return isGUIOpen
	return ImGui::IsMouseHoveringAnyWindow();
}

bool InGameGUI::KeyPressEvent(KeyEvent e, WPARAM w) {
	if ((w == VK_HOME) && (e == KeyEvent::KeyUp) || (w == VK_OEM_3) && (e == KeyEvent::KeyUp)) {
		isGUIOpen = !isGUIOpen;
	}
	/*if ((w == VK_END) && (e == KeyEvent::KeyUp)) {
		Core::Restore();
		Interfaces::FunctionHandler().RemoveDetours();
		Interfaces::DX9Handler().RemoveHook();
		Interfaces::KeyboardHandler().RestoreKeyboard();
		FreeLibraryAndExitThread(LoadLibraryA("RLModding"), 0);
	}*/
	// Used to return isGUIOpen

	return ImGui::GetIO().WantCaptureKeyboard;
}

