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
bool isGUIInit = false;
HWND g_hWindow = nullptr;
bool isMenuShowing = true;


bool show_test_window = false;
bool show_another_window = true;
bool showRumbleWindow = false;
bool showConsole = true;

// Temp test variables while I figure out why it had injection issues before
bool unlimJumps = false;
float ballScale = 1.0;
float carScale = 1.0;

void GUIConsole::InitDevice() {
	//ImGui_ImplDX9_Init(FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)"),pDevice);
	//ImGui::GetIO().MouseDrawCursor = true;
}

void GUIConsole::DrawGUI(IDirect3DDevice9* pDevice) {



	if (pDevice != nullptr) {
		//D3DRECT aRec = { 200, 200, 400, 600 };
		//pDevice->Clear(1, &aRec, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 0, 0), 0, 0);

		if (!isGUIInit) {
			isGUIInit = true;
			LPCTSTR WindowName = L"LaunchUnrealUWindowsClient";
			while (!(g_hWindow = FindWindow(WindowName, NULL))) Sleep(200);
			ImGui_ImplDX9_Init(g_hWindow, pDevice);
			//rlConsole(mainConsole);
		}
		//vice->ShowCursor(false);
		// TestClass::showMenu
		if (true) {
			isMenuShowing = true;

			ImGui::GetIO().MouseDrawCursor = true;
			ImGui_ImplDX9_NewFrame();

			{
				ImGui::SetNextWindowPos(ImVec2(20, 20), ImGuiSetCond_FirstUseEver);

				//ImGui::SetNextWindowSize(ImVec2(400, 400), ImGuiSetCond_FirstUseEver);
				ImGui::Begin("Server Settings");
				if (ImGui::Button("Pause Server")) {
					//TestClass::pauseServer = true;
				}

				if (ImGui::Button("Run CMD!")) {
					//TestClass::runConsoleCommand = true;

				}
				if (ImGui::Button("Toggle Debug")) {
					//TestClass::debugOut = !TestClass::debugOut;

				}


				ImGui::End();
			}

			// Console Window
			/*
			{
				mainConsole.Draw("Console", &showConsole);

				if (ImGui::BeginMainMenuBar())
				{
					if (ImGui::BeginMenu("Edit"))
					{
						if (ImGui::MenuItem("Undo", "CTRL+Z")) {}
						if (ImGui::MenuItem("Redo", "CTRL+Y", false, false)) {}  // Disabled item
						ImGui::Separator();
						if (ImGui::MenuItem("Cut", "CTRL+X")) {}
						if (ImGui::MenuItem("Copy", "CTRL+C")) {}
						if (ImGui::MenuItem("Paste", "CTRL+V")) {}
						ImGui::EndMenu();
					}

					if (ImGui::BeginPopupContextItem("color context menu"))
					{
						ImGui::Text("Spawn Ball");
						//ImGui::ColorEdit3("##edit", (float*)&color);
						if (ImGui::Button("Close"))
							ImGui::CloseCurrentPopup();
						ImGui::EndPopup();
					}

					ImGui::EndMainMenuBar();
				}


			}
			*/

			{
				ImGui::SetNextWindowPos(ImVec2(420, 20), ImGuiSetCond_FirstUseEver);

				ImGui::SetNextWindowSize(ImVec2(400, 400), ImGuiSetCond_FirstUseEver);

				ImGui::Begin("Test Modifiers");

				//ImGui::Text("Hello, world!");
				//ImGui::SliderFloat("Ball Scale", &TestClass::ballScale, 0.0f, 20.0f, "%.1f");
				ImGui::SliderFloat("Ball Scale", &ballScale, 0.0f, 20.0f, "%.1f");


				ImGui::Separator();

				//ImGui::SliderFloat("Car Scale", &TestClass::carScale, 0.1f, 10.0f, "%.1f");
				ImGui::SliderFloat("Car Scale", &carScale, 0.1f, 10.0f, "%.1f");


				//ImGui::Checkbox("Unlimited Jumps", &TestClass::unlimJumps);
				ImGui::Checkbox("Unlimited Jumps", &unlimJumps);
				//ImGui::Checkbox("Unlimited Jumps", &TestClass::disableHud);

				ImGui::Separator();

				if (ImGui::Button("Show Rumble Options")) showRumbleWindow ^= 1;


				//ImGui::ColorEdit3("clear color", (float*)&clear_col);
				//if (ImGui::Button("Test Window")) show_test_window ^= 1;
				//if (ImGui::Button("Another Window")) show_another_window ^= 1;
				ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
				ImGui::End();

			}
		

			ImGui::Render();
		}
	}
	else {
		printf("DX9 Device is nullptr \n");
	}


}

bool GUIConsole::MouseClickEvent(ClickEvent e,int x, int y) {
	printf("Mouse Click event X:%d Y:%d \n",x,y);
	return isMenuShowing;
}


bool GUIConsole::KeyPressEvent(KeyEvent e, WPARAM key) {
	printf("Key Press event called %d \n",key);
	return isMenuShowing;
}