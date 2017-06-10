#pragma once
#include <Windows.h>
#include "../Mods/ModBase.h"
#include "../Libs/DirectX9/d3d9.h"
#include "../Libs/DirectX9/d3dx9.h"

class DX9Hook{

private:
	static DX9Hook* instance;
	DX9Hook();
	~DX9Hook();
	DX9Hook(const DX9Hook&) = delete;
public:
	static DX9Hook* Instance() {
		if (!instance) instance = new DX9Hook();
		return instance;
	}
	void InitGUI();
};

