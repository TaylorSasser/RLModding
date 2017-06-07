#include "DX9Hook.h"
#include <d3d9.h>
#include <d3dx9.h>

#pragma comment (lib, "d3d9.lib")
#pragma comment (lib, "d3dx9.lib")

// Prototypes for d3d functions we want to hook

typedef HRESULT(WINAPI *CreateDevice_t)(IDirect3D9* Direct3D_Object, UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow,
	DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters,
	IDirect3DDevice9** ppReturnedDeviceInterface);
typedef HRESULT(WINAPI *EndScene_t)(IDirect3DDevice9* surface);

// Function pointers to the original functions
CreateDevice_t D3DCreateDevice_orig;
EndScene_t D3DEndScene_orig;

// Our hooking functions
HRESULT WINAPI D3DCreateDevice_hook(IDirect3D9* Direct3D_Object, UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow,
	DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters,
	IDirect3DDevice9** ppReturnedDeviceInterface);
HRESULT WINAPI D3DEndScene_hook(IDirect3DDevice9* device);

// vtable stuff
PDWORD IDirect3D9_vtable = NULL;

// Function indices: These are liable to change
// This is the functions index into the vtable
// Find these by reading through d3d9.h and counting in order
// IDirect3D9
#define CREATEDEVICE_VTI 16
// IDirect3DDevice9
#define ENDSCENE_VTI 42

HRESULT WINAPI HookCreateDevice();
DWORD WINAPI VTablePatchThread(LPVOID threadParam);

/**
* Temporary Draw functions just to test functionality
*/
ID3DXLine *g_pLine = 0;

VOID DrawLine(INT x0, INT y0, INT x1, INT y1, D3DXCOLOR color)
{
	g_pLine->SetWidth(1);
	g_pLine->SetAntialias(0);

	D3DXVECTOR2 VertexList[2];
	VertexList[0].x = x0;
	VertexList[0].y = y0;
	VertexList[1].x = x1;
	VertexList[1].y = y1;

	g_pLine->Begin();
	g_pLine->Draw(VertexList, 2, color);
	g_pLine->End();
}

VOID DrawFilledRect(INT x0, INT y0, INT x1, INT y1, D3DXCOLOR color)
{
	int w = x1 - x0;
	int h = y1 - y0;

	g_pLine->SetWidth(h);
	g_pLine->SetAntialias(0);

	D3DXVECTOR2 VertexList[2];
	VertexList[0].x = x0;
	VertexList[0].y = y0 + (h >> 1);
	VertexList[1].x = x0 + w;
	VertexList[1].y = y0 + (h >> 1);

	g_pLine->Begin();
	g_pLine->Draw(VertexList, 2, color);
	g_pLine->End();
}

DX9Hook* DX9Hook::instance = nullptr;

DX9Hook::DX9Hook(){
	if (HookCreateDevice() == D3D_OK)
	{
	}
	else {
	}
}
DX9Hook::~DX9Hook(){}

void DX9Hook::InitGUI(IDirect3DDevice9 * pDevice)
{
	pDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, TRUE);
	pDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
	pDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
	D3DXCreateLine(pDevice, &g_pLine);
}


/**
* This function sets up the hook for CreateDevice by replacing the pointer
* to CreateDevice within IDirect3D9's vtable.
*/
HRESULT WINAPI HookCreateDevice()
{
	// Obtain a D3D object
	IDirect3D9* device = Direct3DCreate9(D3D_SDK_VERSION);
	if (!device)
	{
		return D3DERR_INVALIDCALL;
	}
	// Now we have an object, store a pointer to its vtable and release the object
	IDirect3D9_vtable = (DWORD*)*(DWORD*)device; // Confusing typecasts
	device->Release();

	// Unprotect the vtable for writing
	DWORD protectFlag;
	if (VirtualProtect(&IDirect3D9_vtable[CREATEDEVICE_VTI], sizeof(DWORD), PAGE_READWRITE, &protectFlag))
	{
		// Store the original CreateDevice pointer and shove our own function into the vtable
		*(DWORD*)&D3DCreateDevice_orig = IDirect3D9_vtable[CREATEDEVICE_VTI];
		*(DWORD*)&IDirect3D9_vtable[CREATEDEVICE_VTI] = (DWORD)D3DCreateDevice_hook;

		// Reprotect the vtable
		if (!VirtualProtect(&IDirect3D9_vtable[CREATEDEVICE_VTI], sizeof(DWORD), protectFlag, &protectFlag))
		{

			return D3DERR_INVALIDCALL;
		}
	}
	else {

		return D3DERR_INVALIDCALL;
	}

	return D3D_OK;
}

/**
* Thanks to HookCreateDevice(), The program should now call this method instead of
* Direct3D's CreateDevice method. This allows us to then hook the IDirect3DDevice9
* methods we need
*/
HRESULT WINAPI D3DCreateDevice_hook(IDirect3D9* Direct3D_Object, UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow,
	DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters,
	IDirect3DDevice9** ppReturnedDeviceInterface)
{

	// Append the almighty D3DCREATE_MULTITHREADED flag...
	HRESULT result = D3DCreateDevice_orig(Direct3D_Object, Adapter, DeviceType, hFocusWindow, BehaviorFlags | D3DCREATE_MULTITHREADED, pPresentationParameters, ppReturnedDeviceInterface);

	// Now we've intercepted the program's call to CreateDevice and we have the IDirect3DDevice9 that it uses
	// We can get it's vtable and patch in our own detours
	// Reset the CreateDevice hook since it's no longer needed
	// Unprotect the vtable for writing
	DWORD protectFlag;
	if (VirtualProtect(&IDirect3D9_vtable[CREATEDEVICE_VTI], sizeof(DWORD), PAGE_READWRITE, &protectFlag))
	{
		// Store the original CreateDevice pointer and shove our own function into the vtable
		*(DWORD*)&IDirect3D9_vtable[CREATEDEVICE_VTI] = (DWORD)D3DCreateDevice_orig;

		// Reprotect the vtable
		if (!VirtualProtect(&IDirect3D9_vtable[CREATEDEVICE_VTI], sizeof(DWORD), protectFlag, &protectFlag))
		{
			return D3DERR_INVALIDCALL;
		}
	}
	else {
		return D3DERR_INVALIDCALL;
	}

	if (result == D3D_OK)
	{
		// Load the new vtable
		IDirect3D9_vtable = (DWORD*)*(DWORD*)*ppReturnedDeviceInterface;

		// Store pointers to the original functions that we want to hook
		*(PDWORD)&D3DEndScene_orig = (DWORD)IDirect3D9_vtable[ENDSCENE_VTI];

		if (!CreateThread(NULL, 0, VTablePatchThread, NULL, NULL, NULL))
		{
			return D3DERR_INVALIDCALL;
		}
	}

	return result;
}

/**
* This is a thread which indefinately resets the vtable pointers to our own functions
* This is needed because the program might set these pointers back to
* their original values at any point
*/
DWORD WINAPI VTablePatchThread(LPVOID threadParam)
{

	while (true)
	{
		Sleep(100);

		*(DWORD*)&IDirect3D9_vtable[ENDSCENE_VTI] = (DWORD)D3DEndScene_hook;
	}
}

HRESULT WINAPI D3DEndScene_hook(IDirect3DDevice9* device)
{
	HRESULT result;

	if (!g_pLine) {
		DX9Hook::Instance()->InitGUI(device);
	}

	DrawFilledRect(25, 25, 1000, 400, D3DXCOLOR(0, 0, 0, 0.4));

	result = D3DEndScene_orig(device);

	return result;
}