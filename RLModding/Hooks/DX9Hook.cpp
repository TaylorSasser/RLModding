#include "../Interfaces/Interfaces.h"
#include "DX9Hook.h"
#include "../Libs/Detours.h"
#include "../Mods/ModBase.h"
#include "../Libs/ImGUI/DX9/imgui_impl_dx9.h"


DX9Hook::DX9Hook() {}
DX9Hook::~DX9Hook() {}

LRESULT CALLBACK D3D9MsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) { return DefWindowProc(hwnd, uMsg, wParam, lParam); }

typedef HRESULT(__stdcall* D3D9EndScene_t)(LPDIRECT3DDEVICE9);
typedef HRESULT(__stdcall* D3D9HookedReset_t)(LPDIRECT3DDEVICE9, D3DPRESENT_PARAMETERS*);

D3D9EndScene_t pD3D9EndScene;
D3D9HookedReset_t pD3D9HookedReset;
IDirect3DDevice9 *pd3dDevice;

HRESULT __stdcall Hooked_EndScene(IDirect3DDevice9* pDevice);
HRESULT __stdcall Hooked_Reset(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters);

DWORD* D3D9VTable;
DWORD EndScene = NULL;
DWORD HookedReset = NULL;
DWORD Device = NULL;

static bool FirstRun = false;

void DX9Hook::InitGUI() {	
	HWND window = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
	WINDOWPLACEMENT p;
	GetWindowPlacement(window, &p);

	while (p.showCmd != 1) {
		window = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
		GetWindowPlacement(window, &p);
		Sleep(100);
	}

	DWORD table = TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(TEXT("d3d9.dll")),0x128000,reinterpret_cast<PBYTE>(DX9VTable_Pattern), DX9VTable_Mask);
	memcpy(&D3D9VTable,(void*)(table + 2),4);

	if (D3D9VTable == nullptr) {
		std::cout << "Pattern Scan failed, using CreateDevice Hook" << std::endl;
		WNDCLASSEXA wc = { sizeof(WNDCLASSEX),CS_CLASSDC,D3D9MsgProc,0L,0L,GetModuleHandleA(NULL),NULL,NULL,NULL,NULL,"DX",NULL };
		RegisterClassExA(&wc);
		HWND hWnd = CreateWindowA("DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, window, NULL, wc.hInstance, NULL);
		this->Direct3DCreate9 = (myDirect3DCreate9)GetProcAddress(GetModuleHandle(TEXT("d3d9.dll")), "Direct3DCreate9");

		LPDIRECT3D9 pD3D = Direct3DCreate9(32);
		if (pD3D == nullptr) { printf("Device is null"); }

		D3DPRESENT_PARAMETERS d3dpp;
		ZeroMemory(&d3dpp, sizeof(d3dpp));
		d3dpp.Windowed = false;
		d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
		d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;

		IDirect3DDevice9 *pd3dDevice;
		HRESULT result = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pd3dDevice);
		DWORD* pVTable = (DWORD*)pd3dDevice;
		pVTable = (DWORD*)pd3dDevice;

		if (pVTable) {
			pVTable = (DWORD*)pVTable[0];
			D3D9VTable = pVTable;
			if (hWnd != NULL) DestroyWindow(hWnd);
		}
	} 

	if (D3D9VTable) {
		EndScene = D3D9VTable[42];
		HookedReset = D3D9VTable[16];

		pD3D9EndScene = (D3D9EndScene_t)DetourFunction((PBYTE)EndScene, (PBYTE)Hooked_EndScene);
		pD3D9HookedReset = (D3D9HookedReset_t)DetourFunction((PBYTE)HookedReset, (PBYTE)Hooked_Reset);
	} else {
		std::cout << "Whoops, something whent wrong with the GUI" << std::endl;
	}
}


void DX9Hook::RemoveHook() {
	DetourRemove((PBYTE)pD3D9EndScene, (PBYTE)Hooked_EndScene);
	DetourRemove((PBYTE)pD3D9HookedReset, (PBYTE)Hooked_Reset);
}
HRESULT __stdcall Hooked_Reset(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters) {
	ImGui_ImplDX9_InvalidateDeviceObjects();
	Interfaces::RenderHandler().InvalidateObjects();
	HRESULT restore = pD3D9HookedReset(pDevice, pPresentationParameters);

	ImGui_ImplDX9_CreateDeviceObjects();
	Interfaces::RenderHandler().CreateObjects();
	return restore;
}


HRESULT __stdcall Hooked_EndScene(IDirect3DDevice9* pDevice) {
	if (Interfaces::RenderHandler().isInitialized() == false) {
		ImGui_ImplDX9_Init(FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)"), pDevice);
		Interfaces::RenderHandler().Initialize(pDevice);
		Interfaces::RenderHandler().CreateObjects();
	}
	else {
		ImGui_ImplDX9_NewFrame();
		Interfaces::GUI().Render();
		ImGui::Render();
		Interfaces::RenderHandler().EndRendering();
		Interfaces::RenderHandler().BeginRendering();
	}
	return pD3D9EndScene(pDevice);
}
