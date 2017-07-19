#pragma once
#include <Windows.h>

enum class ClickEvent : WORD {
	LeftMouse		= 0x0,
	RightMouse		= 0x1,
	MiddleMouse		= 0x2
};

enum class KeyEvent : WORD {
	KeyDown			= 0x0,
	KeyUp			= 0x1
};