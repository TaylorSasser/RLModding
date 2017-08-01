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
	/*

	ImGui::Begin("Rocket League Mods",0,ImVec2(400,300),0.75f);
	ImGui::CollapsingHeader("Misc Mods");

	auto mod = Interfaces::Mods()->getModInstance("Test Class");
	bool toggle = ImGui::Checkbox(mod->getName().c_str(),mod->state());
	mod->setState(toggle);




	ImGui::End();
	*/
}

bool InGameGUI::MouseClickEvent(ClickEvent e, short x, short y) {
	return isGUIOpen;
}

bool InGameGUI::KeyPressEvent(KeyEvent e, WPARAM w) {
	if ((w == VK_HOME) && (e == KeyEvent::KeyUp)) {
		isGUIOpen = !isGUIOpen;
	}
	return isGUIOpen;
}
