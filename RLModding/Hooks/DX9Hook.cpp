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
	}
	printf("Window Placement: %d\n", p.showCmd);
	Sleep(100);
	

	WNDCLASSEXA wc = { sizeof(WNDCLASSEX),CS_CLASSDC,D3D9MsgProc,0L,0L,GetModuleHandleA(NULL),NULL,NULL,NULL,NULL,"DX",NULL };
	RegisterClassExA(&wc);
	HWND hWnd = CreateWindowA("DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, GetDesktopWindow(), NULL, wc.hInstance, NULL);
	this->Direct3DCreate9 = (myDirect3DCreate9)GetProcAddress(GetModuleHandle(TEXT("d3d9.dll")), "Direct3DCreate9");

	LPDIRECT3D9 pD3D = Direct3DCreate9(32);
	if (pD3D == nullptr) { printf("Device is null"); }

	D3DPRESENT_PARAMETERS d3dpp;
	ZeroMemory(&d3dpp, sizeof(d3dpp));
	d3dpp.Windowed = true;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;

	IDirect3DDevice9 *pd3dDevice;
	if (pd3dDevice)
	{
		HANDLE hHandle = GetModuleHandle(TEXT("d3d9.dll"));
		printf("Address of d3d9.dll: 0x%x\n", hHandle);
		HRESULT result = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pd3dDevice);
		printf("result = ");
		switch (result) {
			case D3D_OK:
				printf("D3D_OK\n");
				break;
			case D3DERR_DEVICELOST:
				printf("D3DERR_DEVICELOST\n");
				break;
			case D3DERR_INVALIDCALL:
				printf("D3DERR_INVALIDCALL\n");
				break;
			case D3DERR_NOTAVAILABLE:
				printf("D3DERR_NOTAVAILABLE\n");
				break;
			case D3DERR_OUTOFVIDEOMEMORY:
				printf("D3DERR_OUTOFVIDEOMEMORY\n");
				break;

			default:
				printf("somethng else...");
				break;

		}

		printf("Address of pd3dDevice: 0x%x\n", pd3dDevice);
		printf("pd3dDevice - d3d9.dll address: 0x%x\n", pd3dDevice - hHandle);
		std::cout << "CreatedDevice: " << result << std::endl;
		DWORD* pVTable = (DWORD*)pd3dDevice;

		if (pVTable) {
			pVTable = (DWORD*)pVTable[0];
			D3D9VTable = pVTable;

			std::cout << "Found pVTable: " << pVTable << std::endl;

			if (hWnd != NULL)
				DestroyWindow(hWnd);

			EndScene = D3D9VTable[42];
			HookedReset = D3D9VTable[16];

			pD3D9EndScene = (D3D9EndScene_t)DetourFunction((PBYTE)EndScene, (PBYTE)Hooked_EndScene);
			pD3D9HookedReset = (D3D9HookedReset_t)DetourFunction((PBYTE)HookedReset, (PBYTE)Hooked_Reset);
		}
		
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
