#pragma once
#include <Windows.h>

enum ClickEvent : byte {
	LeftClick = 0x00,
	RightClick = 0x01,
	MiddleClick = 0x02
};

enum KeyEvent : byte {
	Down = 0x00,
	Up = 0x01,
};