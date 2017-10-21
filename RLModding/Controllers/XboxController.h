#ifndef _XBOX_CONTROLLER
#define _XBOX_CONTROLLER
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <Xinput.h>

#pragma comment(lib, "XInput.lib")

// Class is meant to be allocated on the heap. Need a work around

class XboxController
{
public:
	XboxController();
	XboxController(int playerNum);
	XINPUT_STATE GetState();
	bool IsConnected();
	void Vibrate(int leftVal = 0, int rightVal = 0);
private:
	XINPUT_STATE _controllerState;
	int _controllerNum;
};

#endif