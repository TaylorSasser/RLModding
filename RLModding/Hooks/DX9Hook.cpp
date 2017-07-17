#include "DX9Hook.h"
#include <thread>
#include "../Libs/Detours.h"
#include "../Gui/GUIConsole.h"
#include "../DrawManager/DrawManager.hpp"
#include "../Libs/ImGUI/DX9/imgui_impl_dx9.h"
#include "../Libs/DirectX9/d3d9.h"
#include "../Interfaces/Interfaces.h"


DX9Hook::DX9Hook(){}
DX9Hook::~DX9Hook(){}

LRESULT CALLBACK D3D9MsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {return DefWindowProc(hwnd, uMsg, wParam, lParam); }

typedef HRESULT(__stdcall* D3D9EndScene_t)(LPDIRECT3DDEVICE9);
typedef HRESULT(__stdcall* D3D9HookedReset_t)(LPDIRECT3DDEVICE9,D3DPRESENT_PARAMETERS*);

D3D9EndScene_t pD3D9EndScene;
D3D9HookedReset_t pD3D9HookedReset;

HRESULT __stdcall Hooked_EndScene(IDirect3DDevice9* pDevice);
HRESULT __stdcall Hooked_Reset(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters);

DWORD* D3D9VTable;
DWORD EndScene = NULL;
DWORD HookedReset = NULL;
DWORD Device = NULL;

static bool FirstRun = false;

void DX9Hook::InitGUI() {
	WNDCLASSEXA wc = {sizeof(WNDCLASSEX),CS_CLASSDC,D3D9MsgProc,0L,0L,GetModuleHandleA(NULL),NULL,NULL,NULL,NULL,"DX",NULL};
	RegisterClassExA(&wc);
	HWND hWnd = CreateWindowA("DX",NULL,WS_OVERLAPPEDWINDOW,100,100,300,300,GetDesktopWindow(),NULL,wc.hInstance,NULL);
	this->Direct3DCreate9 = (myDirect3DCreate9)GetProcAddress(GetModuleHandle(TEXT("d3d9.dll")),"Direct3DCreate9");

	LPDIRECT3D9 pD3D = Direct3DCreate9(32);
	if (pD3D == nullptr) {printf("Device is null");}

	D3DPRESENT_PARAMETERS d3dpp;
	ZeroMemory(&d3dpp,sizeof(d3dpp));
	d3dpp.Windowed = true;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;

	IDirect3DDevice9 *pd3dDevice;
	pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pd3dDevice);
	DWORD* pVTable = (DWORD*)pd3dDevice;
	pVTable = (DWORD*)pVTable[0];
	D3D9VTable = pVTable;

	DestroyWindow(hWnd);

	EndScene = D3D9VTable[42];
	HookedReset = D3D9VTable[16];

	pD3D9EndScene = (D3D9EndScene_t)DetourFunction((PBYTE)EndScene,(PBYTE)Hooked_EndScene);
	pD3D9HookedReset = (D3D9HookedReset_t)DetourFunction((PBYTE)HookedReset,(PBYTE)Hooked_Reset);

}

void DX9Hook::RemoveHook() {
	DetourRemove((PBYTE)pD3D9EndScene,(PBYTE)Hooked_EndScene);
}
HRESULT __stdcall Hooked_Reset(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters) {
	//ImGui_ImplDX9_InvalidateObjects();			Destruct objects
	//GUIConsole::InvalidateObjects();				Destruct objects

	HRESULT restore = pD3D9HookedReset(pDevice,pPresentationParameters);

	//ImGui_ImplDX9_CreateDeviceObjects();			Create new objects
	//GUIConsole::CreateObjects();					Create new objects
	return restore;
}


HRESULT __stdcall Hooked_EndScene(IDirect3DDevice9* pDevice) {
	if (Interfaces::RenderHandler()->isInitialized() == false) {
		ImGui_ImplDX9_Init(FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)"), pDevice);
		Interfaces::RenderHandler()->Initialize(pDevice);
		Interfaces::RenderHandler()->CreateObjects();
	} else {
		ImGui_ImplDX9_NewFrame();
		ImGui::Render();
		Interfaces::RenderHandler()->EndRendering();
		Interfaces::RenderHandler()->BeginRendering();
	}
	return pD3D9EndScene(pDevice);
}

	/*
	for (auto& Mod : Wrapper::Interfaces::getModHandler()->getMods()) {
		std::function<void(IDirect3DDevice9*)> renderFunction = std::bind(&ModBase::onDX9RenderTick,Mod,std::placeholders::_1);
		if (Mod->isEnabled() && Mod != nullptr) {
			if (pDevice != nullptr) {
				renderFunction(pDevice);
			}
		}
	}
	*/
	

