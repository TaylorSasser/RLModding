#ifndef _XBOX_CONTROLLER
#define _XBOX_CONTROLLER
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <Xinput.h>

class XboxController
{
public:
	XboxController(int playerNum);
	XINPUT_STATE GetState();
	bool IsConnected();
private:
	XINPUT_STATE _controllerState;
	int _controllerNum;
};

#endif
