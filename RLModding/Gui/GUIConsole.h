#pragma once
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
	void ReadKeyBinds();
	void SetModKeyBinds();
	void isShowing();
	void Show();
	void Hide();

	void InitDevice(IDirect3DDevice9* pDevice);
	void DrawGUI();
};

