#include "GUIConsole.h"

#include "../Libs/DirectX9/d3dx9.h"
#include "../Libs/ImGui/imgui.h"
#include "../Libs/ImGui/DX9/imgui_impl_dx9.h"
#include <memory>
#include "../Mods/Modules/TestClass.h"
#include <functional>
#include "../Utils/Wrapper.h"

#define getTestClass Wrapper::Interfaces::getModHandler()->getModInstance("TestClass")

GUIConsole::GUIConsole(){}
GUIConsole::~GUIConsole(){}
GUIConsole* GUIConsole::instance = nullptr;

bool isTestClassEnabled;


void GUIConsole::InitDevice(IDirect3DDevice9* pDevice) {
	ImGui_ImplDX9_Init(FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)"),pDevice);
	ImGui::GetIO().MouseDrawCursor = true;
	std::function<bool()> isTestModEnabled = std::bind(&ModBase::isEnabled, getTestClass);
	isTestClassEnabled = isTestModEnabled();
}

void GUIConsole::DrawGUI() {
	ImGui_ImplDX9_NewFrame();
	
	ImGui::Begin("Rocket Launcher",NULL,ImVec2(300,250),0.75f); 
	{
		if (ImGui::CollapsingHeader("In-Game Mods")) {
			ImGui::Checkbox("TestClass",&isTestClassEnabled);
		}
		if (ImGui::CollapsingHeader("Render Mods")) {
			ImGui::Checkbox("Example Render Mod",NULL);
		}
		if (ImGui::CollapsingHeader("Miscellaneous Mods")) {
			
		}
		if (ImGui::CollapsingHeader("Console")) {

		}
	}
	ImGui::End();
}