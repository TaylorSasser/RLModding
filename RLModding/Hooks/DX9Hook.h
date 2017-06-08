#pragma once
#include <Windows.h>
#include <d3d9.h>



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

