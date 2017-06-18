#include "Utils.h"
#include "Pattern/PatternFinder.h"
#include "../RL/SDK.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using std::string;


namespace Utils {
	
	bool InitializeObjectsStore() {
		auto address = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00"), "x????x??x??xxxxx");
		if (address == -1) { return false; }
		SDK::UObject::GObjects = reinterpret_cast<decltype(SDK::UObject::GObjects)>(*reinterpret_cast<uint32_t*>(address + 1));
		return SDK::UObject::GObjects != nullptr;
	}

	bool InitializeNamesStore() {
		auto address = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x8B\x0D\x00\x00\x00\x00\x83\x3C\x81\x00\x74"), "xx????xxxxx");
		if (address == -1) { return false; }
		SDK::FName::GNames = reinterpret_cast<decltype(SDK::FName::GNames)>(*reinterpret_cast<uint32_t*>(address + 2));
		return SDK::FName::GNames != nullptr;
	}
	SDK::UObject* GetInstanceOf(SDK::UClass* Class) {
		static SDK::UObject* ObjectInstance;
		ObjectInstance = NULL;

		for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
			SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
			if (CheckObject && CheckObject->IsA(Class)) {
				if (!strstr(CheckObject->GetFullName().c_str(), "Default"))
					ObjectInstance = CheckObject;
			}
		}
		return ObjectInstance;
	}

	SDK::FString to_fstring(std::string s) {
		wchar_t *p = new wchar_t[s.size() + 1];
		for (std::string::size_type i = 0; i < s.size(); ++i)
			p[i] = s[i];

		p[s.size()] = '\0';
		return SDK::FString(p);
	}

	std::unordered_map<std::string, char> getKeybinds(string csv) {
		// initialize keybind map if not initialized yet
		if (keybindMap.size() == 0) {
			initializeKeybinds();
		}

		std::unordered_map<std::string, char> keybinds;

		std::ifstream data("keybinds.csv");

		std::string line;
		while (std::getline(data, line))
		{
			string key;
			string action;
			getline(data, key, ',');
			getline(data, action, ',');

			if (action != "none" && keybindMap[key] != NULL) {
				keybinds[action] = keybindMap[key];
			}
		}

		return keybinds;
	}

	void initializeKeybinds() {
		keybindMap["VK_ABNT_C1"] = 0xC1;
		keybindMap["VK_ABNT_C2"] = 0xC2;
		keybindMap["VK_ADD"] = 0x6B;
		keybindMap["VK_ATTN"] = 0xF6;
		keybindMap["VK_BACK"] = 0x08;
		keybindMap["VK_CANCEL"] = 0x03;
		keybindMap["VK_CLEAR"] = 0x0C;
		keybindMap["VK_CRSEL"] = 0xF7;
		keybindMap["VK_DECIMAL"] = 0x6E;
		keybindMap["VK_DIVIDE"] = 0x6F;
		keybindMap["VK_EREOF"] = 0xF9;
		keybindMap["VK_ESCAPE"] = 0x1B;
		keybindMap["VK_EXECUTE"] = 0x2B;
		keybindMap["VK_EXSEL"] = 0xF8;
		keybindMap["VK_ICO_CLEAR"] = 0xE6;
		keybindMap["VK_ICO_HELP"] = 0xE3;
		keybindMap["VK_KEY_0"] = 0x30;
		keybindMap["VK_KEY_1"] = 0x31;
		keybindMap["VK_KEY_2"] = 0x32;
		keybindMap["VK_KEY_3"] = 0x33;
		keybindMap["VK_KEY_4"] = 0x34;
		keybindMap["VK_KEY_5"] = 0x35;
		keybindMap["VK_KEY_6"] = 0x36;
		keybindMap["VK_KEY_7"] = 0x37;
		keybindMap["VK_KEY_8"] = 0x38;
		keybindMap["VK_KEY_9"] = 0x39;
		keybindMap["VK_KEY_A"] = 0x41;
		keybindMap["VK_KEY_B"] = 0x42;
		keybindMap["VK_KEY_C"] = 0x43;
		keybindMap["VK_KEY_D"] = 0x44;
		keybindMap["VK_KEY_E"] = 0x45;
		keybindMap["VK_KEY_F"] = 0x46;
		keybindMap["VK_KEY_G"] = 0x47;
		keybindMap["VK_KEY_H"] = 0x48;
		keybindMap["VK_KEY_I"] = 0x49;
		keybindMap["VK_KEY_J"] = 0x4A;
		keybindMap["VK_KEY_K"] = 0x4B;
		keybindMap["VK_KEY_L"] = 0x4C;
		keybindMap["VK_KEY_M"] = 0x4D;
		keybindMap["VK_KEY_N"] = 0x4E;
		keybindMap["VK_KEY_O"] = 0x4F;
		keybindMap["VK_KEY_P"] = 0x50;
		keybindMap["VK_KEY_Q"] = 0x51;
		keybindMap["VK_KEY_R"] = 0x52;
		keybindMap["VK_KEY_S"] = 0x53;
		keybindMap["VK_KEY_T"] = 0x54;
		keybindMap["VK_KEY_U"] = 0x55;
		keybindMap["VK_KEY_V"] = 0x56;
		keybindMap["VK_KEY_W"] = 0x57;
		keybindMap["VK_KEY_X"] = 0x58;
		keybindMap["VK_KEY_Y"] = 0x59;
		keybindMap["VK_KEY_Z"] = 0x5A;
		keybindMap["VK_MULTIPLY"] = 0x6A;
		keybindMap["VK_NONAME"] = 0xFC;
		keybindMap["VK_NUMPAD0"] = 0x60;
		keybindMap["VK_NUMPAD1"] = 0x61;
		keybindMap["VK_NUMPAD2"] = 0x62;
		keybindMap["VK_NUMPAD3"] = 0x63;
		keybindMap["VK_NUMPAD4"] = 0x64;
		keybindMap["VK_NUMPAD5"] = 0x65;
		keybindMap["VK_NUMPAD6"] = 0x66;
		keybindMap["VK_NUMPAD7"] = 0x67;
		keybindMap["VK_NUMPAD8"] = 0x68;
		keybindMap["VK_NUMPAD9"] = 0x69;
		keybindMap["VK_OEM_1"] = 0xBA;
		keybindMap["VK_OEM_102"] = 0xE2;
		keybindMap["VK_OEM_2"] = 0xBF;
		keybindMap["VK_OEM_3"] = 0xC0;
		keybindMap["VK_OEM_4"] = 0xDB;
		keybindMap["VK_OEM_5"] = 0xDC;
		keybindMap["VK_OEM_6"] = 0xDD;
		keybindMap["VK_OEM_7"] = 0xDE;
		keybindMap["VK_OEM_8"] = 0xDF;
		keybindMap["VK_OEM_ATTN"] = 0xF0;
		keybindMap["VK_OEM_AUTO"] = 0xF3;
		keybindMap["VK_OEM_AX"] = 0xE1;
		keybindMap["VK_OEM_BACKTAB"] = 0xF5;
		keybindMap["VK_OEM_CLEAR"] = 0xFE;
		keybindMap["VK_OEM_COMMA"] = 0xBC;
		keybindMap["VK_OEM_COPY"] = 0xF2;
		keybindMap["VK_OEM_CUSEL"] = 0xEF;
		keybindMap["VK_OEM_ENLW"] = 0xF4;
		keybindMap["VK_OEM_FINISH"] = 0xF1;
		keybindMap["VK_OEM_FJ_LOYA"] = 0x95;
		keybindMap["VK_OEM_FJ_MASSHOU"] = 0x93;
		keybindMap["VK_OEM_FJ_ROYA"] = 0x96;
		keybindMap["VK_OEM_FJ_TOUROKU"] = 0x94;
		keybindMap["VK_OEM_JUMP"] = 0xEA;
		keybindMap["VK_OEM_MINUS"] = 0xBD;
		keybindMap["VK_OEM_PA1"] = 0xEB;
		keybindMap["VK_OEM_PA2"] = 0xEC;
		keybindMap["VK_OEM_PA3"] = 0xED;
		keybindMap["VK_OEM_PERIOD"] = 0xBE;
		keybindMap["VK_OEM_PLUS"] = 0xBB;
		keybindMap["VK_OEM_RESET"] = 0xE9;
		keybindMap["VK_OEM_WSCTRL"] = 0xEE;
		keybindMap["VK_PA1"] = 0xFD;
		keybindMap["VK_PACKET"] = 0xE7;
		keybindMap["VK_PLAY"] = 0xFA;
		keybindMap["VK_PROCESSKEY"] = 0xE5;
		keybindMap["VK_RETURN"] = 0x0D;
		keybindMap["VK_SELECT"] = 0x29;
		keybindMap["VK_SEPARATOR"] = 0x6C;
		keybindMap["VK_SPACE"] = 0x20;
		keybindMap["VK_SUBTRACT"] = 0x6D;
		keybindMap["VK_TAB"] = 0x09;
		keybindMap["VK_ZOOM"] = 0xFB;
		keybindMap["VK__none_"] = 0xFF;
		keybindMap["VK_ACCEPT"] = 0x1E;
		keybindMap["VK_APPS"] = 0x5D;
		keybindMap["VK_BROWSER_BACK"] = 0xA6;
		keybindMap["VK_BROWSER_FAVORITES"] = 0xAB;
		keybindMap["VK_BROWSER_FORWARD"] = 0xA7;
		keybindMap["VK_BROWSER_HOME"] = 0xAC;
		keybindMap["VK_BROWSER_REFRESH"] = 0xA8;
		keybindMap["VK_BROWSER_SEARCH"] = 0xAA;
		keybindMap["VK_BROWSER_STOP"] = 0xA9;
		keybindMap["VK_CAPITAL"] = 0x14;
		keybindMap["VK_CONVERT"] = 0x1C;
		keybindMap["VK_DELETE"] = 0x2E;
		keybindMap["VK_DOWN"] = 0x28;
		keybindMap["VK_END"] = 0x23;
		keybindMap["VK_F1"] = 0x70;
		keybindMap["VK_F10"] = 0x79;
		keybindMap["VK_F11"] = 0x7A;
		keybindMap["VK_F12"] = 0x7B;
		keybindMap["VK_F13"] = 0x7C;
		keybindMap["VK_F14"] = 0x7D;
		keybindMap["VK_F15"] = 0x7E;
		keybindMap["VK_F16"] = 0x7F;
		keybindMap["VK_F17"] = 0x80;
		keybindMap["VK_F18"] = 0x81;
		keybindMap["VK_F19"] = 0x82;
		keybindMap["VK_F2"] = 0x71;
		keybindMap["VK_F20"] = 0x83;
		keybindMap["VK_F21"] = 0x84;
		keybindMap["VK_F22"] = 0x85;
		keybindMap["VK_F23"] = 0x86;
		keybindMap["VK_F24"] = 0x87;
		keybindMap["VK_F3"] = 0x72;
		keybindMap["VK_F4"] = 0x73;
		keybindMap["VK_F5"] = 0x74;
		keybindMap["VK_F6"] = 0x75;
		keybindMap["VK_F7"] = 0x76;
		keybindMap["VK_F8"] = 0x77;
		keybindMap["VK_F9"] = 0x78;
		keybindMap["VK_FINAL"] = 0x18;
		keybindMap["VK_HELP"] = 0x2F;
		keybindMap["VK_HOME"] = 0x24;
		keybindMap["VK_ICO_00"] = 0xE4;
		keybindMap["VK_INSERT"] = 0x2D;
		keybindMap["VK_JUNJA"] = 0x17;
		keybindMap["VK_KANA"] = 0x15;
		keybindMap["VK_KANJI"] = 0x19;
		keybindMap["VK_LAUNCH_APP1"] = 0xB6;
		keybindMap["VK_LAUNCH_APP2"] = 0xB7;
		keybindMap["VK_LAUNCH_MAIL"] = 0xB4;
		keybindMap["VK_LAUNCH_MEDIA_SELECT"] = 0xB5;
		keybindMap["VK_LBUTTON"] = 0x01;
		keybindMap["VK_LCONTROL"] = 0xA2;
		keybindMap["VK_LEFT"] = 0x25;
		keybindMap["VK_LMENU"] = 0xA4;
		keybindMap["VK_LSHIFT"] = 0xA0;
		keybindMap["VK_LWIN"] = 0x5B;
		keybindMap["VK_MBUTTON"] = 0x04;
		keybindMap["VK_MEDIA_NEXT_TRACK"] = 0xB0;
		keybindMap["VK_MEDIA_PLAY_PAUSE"] = 0xB3;
		keybindMap["VK_MEDIA_PREV_TRACK"] = 0xB1;
		keybindMap["VK_MEDIA_STOP"] = 0xB2;
		keybindMap["VK_MODECHANGE"] = 0x1F;
		keybindMap["VK_NEXT"] = 0x22;
		keybindMap["VK_NONCONVERT"] = 0x1D;
		keybindMap["VK_NUMLOCK"] = 0x90;
		keybindMap["VK_OEM_FJ_JISHO"] = 0x92;
		keybindMap["VK_PAUSE"] = 0x13;
		keybindMap["VK_PRINT"] = 0x2A;
		keybindMap["VK_PRIOR"] = 0x21;
		keybindMap["VK_RBUTTON"] = 0x02;
		keybindMap["VK_RCONTROL"] = 0xA3;
		keybindMap["VK_RIGHT"] = 0x27;
		keybindMap["VK_RMENU"] = 0xA5;
		keybindMap["VK_RSHIFT"] = 0xA1;
		keybindMap["VK_RWIN"] = 0x5C;
		keybindMap["VK_SCROLL"] = 0x91;
		keybindMap["VK_SLEEP"] = 0x5F;
		keybindMap["VK_SNAPSHOT"] = 0x2C;
		keybindMap["VK_UP"] = 0x26;
		keybindMap["VK_VOLUME_DOWN"] = 0xAE;
		keybindMap["VK_VOLUME_MUTE"] = 0xAD;
		keybindMap["VK_VOLUME_UP"] = 0xAF;
		keybindMap["VK_XBUTTON1"] = 0x05;
		keybindMap["VK_XBUTTON2"] = 0x06;
	}

};