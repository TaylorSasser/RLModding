#pragma once
#include <Windows.h>
#include <memory>
#include "../Utils/Utils.h"

#include "../Mods/ModBase.h"
#include "../Libs/DirectX9/d3d9.h"
#include "../Libs/DirectX9/d3dx9.h"

#pragma comment(lib,"d3d9.lib")
#pragma comment(lib,"d3dx9.lib")

class DX9Hook{

	typedef IDirect3D9* (__stdcall* myDirect3DCreate9)(UINT SDKVersion);

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
	void RemoveHook();


	typedef long(__stdcall* EndScene_t)(IDirect3DDevice9* device);
	myDirect3DCreate9 Direct3DCreate9;
};

