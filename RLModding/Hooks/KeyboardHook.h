#pragma once
#include "../Mods/ModBase.h"


class KeyboardHook {

public:
	KeyboardHook();
	~KeyboardHook();
	void HookKeyboard();
	void RestoreKeyboard();
};

