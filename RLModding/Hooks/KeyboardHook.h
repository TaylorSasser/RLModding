#pragma once
#include "../Mods/ModBase.h"


typedef bool (ModBase::*onKeyPress)(WORD,bool);

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
	void HookKeyboard(onKeyPress keypress);
	void RestoreKeyboard();
};

