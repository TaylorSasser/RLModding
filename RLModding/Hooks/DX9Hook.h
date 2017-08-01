#pragma once
#include <Windows.h>
#include "../Libs/DirectX9/d3d9.h"
#include "../Libs/DirectX9/d3dx9.h"
#include "../DrawManager/DrawManager.hpp"



#pragma comment(lib,"d3d9.lib")
#pragma comment(lib,"d3dx9.lib")

class DX9Hook{
	typedef IDirect3D9* (__stdcall* myDirect3DCreate9)(UINT SDKVersion);
public:
	DX9Hook();
	~DX9Hook();

	void InitGUI();
	void RemoveHook();

	typedef long(__stdcall* EndScene_t)(IDirect3DDevice9* device);
	myDirect3DCreate9 Direct3DCreate9;
};

