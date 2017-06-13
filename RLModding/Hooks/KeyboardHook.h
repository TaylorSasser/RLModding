#pragma once
#include "../Mods/ModBase.h"


class KeyboardHook {
private:
	static KeyboardHook* instance;
	KeyboardHook();
	KeyboardHook(const KeyboardHook&) = delete;
	~KeyboardHook();
public:
	static KeyboardHook* Instance() {
		if (!instance) instance = new KeyboardHook();
		return instance;
	}
	void HookKeyboard();
	void RestoreKeyboard();
};

