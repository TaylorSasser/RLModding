#pragma once
#include <Windows.h>
#include "../Libs/DirectX9/d3d9.h"


class GUIConsole {
private:
	static GUIConsole* instance;
	GUIConsole();
	GUIConsole(const GUIConsole&) = delete;
	~GUIConsole();
	bool isGUIOpen = true;
public:
	static GUIConsole* Instance() {
		if (!instance) instance = new GUIConsole();
		return instance;
	}
	//void ReadKeyBinds();
	//void SetModKeyBinds();
	//void isShowing();
	//void Hide();

	bool MouseClickEvent(enum ClickEvent,int x, int y);
	bool KeyPressEvent(WPARAM);

	void InitDevice();
	void DrawGUI(IDirect3DDevice9* pDevice);
};

