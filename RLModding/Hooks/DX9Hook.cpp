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

void print_result(HRESULT result) {
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
		printf("something else...");
		break;

	}
}

// Unknown Cheats Code
bool bCompare(const BYTE* pData, const BYTE* bMask, const char* szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask)
		if (*szMask == 'x' && *pData != *bMask)
			return false;

	return (*szMask) == NULL;
}
DWORD FindPattern(DWORD dwAddress, DWORD dwLen, BYTE *bMask, char * szMask)
{
	for (DWORD i = 0; i < dwLen; i++)
		if (bCompare((BYTE*)(dwAddress + i), bMask, szMask))
			return (DWORD)(dwAddress + i);

	return 0;
}


void HookAPI()
{
	DWORD EndSceneaddy;
	DWORD* vtbl = 0;
	DWORD table = FindPattern((DWORD)GetModuleHandle(TEXT("d3d9.dll")), 0x128000, (PBYTE)"\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx");
	memcpy(&vtbl, (void*)(table + 2), 4);
	EndSceneaddy = vtbl[42];
	HookedReset = vtbl[16];
	if (EndSceneaddy && HookedReset)
	{
		pD3D9EndScene = (HRESULT(WINAPI *)(LPDIRECT3DDEVICE9 pDevice))(DetourFunction((PBYTE)EndSceneaddy, (PBYTE)Hooked_EndScene));
		pD3D9HookedReset = (D3D9HookedReset_t)DetourFunction((PBYTE)HookedReset, (PBYTE)Hooked_Reset);
	}

}

// End UC code

void DX9Hook::InitGUI() {	
	HWND window = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
	WINDOWPLACEMENT p;
	GetWindowPlacement(window, &p);
	while (p.showCmd != 1) {
		window = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
		GetWindowPlacement(window, &p);
		Sleep(100);
	}
	printf("Window Placement: %d\n", p.showCmd);
	Sleep(1000);

	// Works for fullscreen !!!
	HookAPI();
	

	WNDCLASSEXA wc = { sizeof(WNDCLASSEX),CS_CLASSDC,D3D9MsgProc,0L,0L,GetModuleHandleA(NULL),NULL,NULL,NULL,NULL,"DX",NULL };
	RegisterClassExA(&wc);
	HWND hWnd = CreateWindowA("DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, window, NULL, wc.hInstance, NULL);
	this->Direct3DCreate9 = (myDirect3DCreate9)GetProcAddress(GetModuleHandle(TEXT("d3d9.dll")), "Direct3DCreate9");

	LPDIRECT3D9 pD3D = Direct3DCreate9(32);
	if (pD3D == nullptr) { printf("Device is null"); }

	D3DPRESENT_PARAMETERS d3dpp;
	ZeroMemory(&d3dpp, sizeof(d3dpp));
	d3dpp.BackBufferCount = 1;
	d3dpp.MultiSampleType = D3DMULTISAMPLE_NONE;
	d3dpp.MultiSampleQuality = 0;
	d3dpp.hDeviceWindow = hWnd;
	d3dpp.FullScreen_RefreshRateInHz = D3DPRESENT_RATE_DEFAULT;
	d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_DEFAULT;
	d3dpp.Windowed = false; // setting this to true causes alt-tab bug for fullscreen
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;
	d3dpp.EnableAutoDepthStencil = FALSE;

	IDirect3DDevice9 *pd3dDevice;
	HRESULT result = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pd3dDevice);
	printf("result = ");
	print_result(result);
	
	/* Keep this as backup
	DWORD* pVTable;
	pVTable = (DWORD*)pd3dDevice;

	if (pVTable) {
		pVTable = (DWORD*)pVTable[0];
		D3D9VTable = pVTable;

		printf("pVTable = 0x%x", pVTable);

		if (hWnd != NULL)
			DestroyWindow(hWnd);

		EndScene = D3D9VTable[42];
		HookedReset = D3D9VTable[16];

		pD3D9EndScene = (D3D9EndScene_t)DetourFunction((PBYTE)EndScene, (PBYTE)Hooked_EndScene);
		pD3D9HookedReset = (D3D9HookedReset_t)DetourFunction((PBYTE)HookedReset, (PBYTE)Hooked_Reset);
	}
	*/
	
		
	
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
