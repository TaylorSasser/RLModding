#include "DX9Hook.h"
#include <thread>
#include "../Utils/Wrapper.h"
#include "../Libs/Detours.h"
#include "../Gui/GUIConsole.h"

DX9Hook* DX9Hook::instance = nullptr;
DX9Hook::DX9Hook(){}
DX9Hook::~DX9Hook(){}



LRESULT CALLBACK D3D9MsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {return DefWindowProc(hwnd, uMsg, wParam, lParam); }

typedef HRESULT(__stdcall* D3D9EndScene_t)(LPDIRECT3DDEVICE9);
D3D9EndScene_t pD3D9EndScene;
HRESULT __stdcall Hooked_EndScene(IDirect3DDevice9* pDevice);

DWORD* D3D9VTable;
DWORD EndScene = NULL;
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
	pD3D9EndScene = (D3D9EndScene_t)DetourFunction((PBYTE)EndScene,(PBYTE)Hooked_EndScene);


}

void DX9Hook::RemoveHook() {
	DetourRemove((PBYTE)pD3D9EndScene,(PBYTE)Hooked_EndScene);
}

HRESULT __stdcall Hooked_EndScene(IDirect3DDevice9* pDevice) {
	__asm pushad


	GUIConsole::Instance()->DrawGUI();

	for (auto& Mod : Wrapper::Interfaces::getModHandler()->getMods()) {
		std::function<void(IDirect3DDevice9*)> renderFunction = std::bind(&ModBase::onDX9RenderTick,Mod,std::placeholders::_1);
		if (pDevice != nullptr) {
			renderFunction(pDevice);
		}
	}

	__asm popad
	return pD3D9EndScene(pDevice);
}

