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

bool isTestClassEnabled;


void GUIConsole::InitDevice(IDirect3DDevice9* pDevice) {
	

	//ImGui_ImplDX9_Init(FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)"),pDevice);
	//ImGui::GetIO().MouseDrawCursor = true;
}

void GUIConsole::DrawGUI() {
	/*
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
	*/
}

bool GUIConsole::MouseClickEvent(ClickEvent e,int x, int y) {
	printf("Mouse Click event X:%d Y:%d \n",x,y);
	return false;
}


bool GUIConsole::KeyPressEvent(WPARAM key) {
	printf("Key Press event called %d \n",key);
	return false;
}