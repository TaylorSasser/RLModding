#pragma once
#include "../Libs/ImGUI/imgui.h"
#include "../Libs/DirectX9/d3d9.h"
#include "ClickEvent.h"


class InGameGUI {
	//This class does all the tabs BUT the console tab, that is going inside of the Console Folder. 
	//Its not included to allow a better implementation of console commands and other things.

public:
	InGameGUI();
	~InGameGUI();
	void Render();
	void Initialize(IDirect3DDevice9* device);
	bool MouseClickEvent(ClickEvent e, short x, short y);
	bool KeyPressEvent(KeyEvent e, WPARAM w);
	bool isGUIOpen = false;
};

