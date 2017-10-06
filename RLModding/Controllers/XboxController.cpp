#include "XboxController.h"

XboxController::XboxController(int playerNum) {
	_controllerNum = playerNum;
}

XINPUT_STATE XboxController::GetState() {
	ZeroMemory(&_controllerNum, sizeof(XINPUT_STATE));
	XInputGetState(_controllerNum, &_controllerState);
	return _controllerState;
}

bool XboxController::IsConnected() {
	ZeroMemory(&_controllerNum, sizeof(XINPUT_STATE));

	// Get the state
	DWORD Result = XInputGetState(_controllerNum, &_controllerState);

	return Result == ERROR_SUCCESS;
}

