#include "Utils.h"
#include "Pattern/PatternFinder.h"
#include "../RL/SDK.hpp"
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

	SDK::FString to_fstring(const std::string& s) {
		wchar_t *p = new wchar_t[s.size() + 1];
		for (std::string::size_type i = 0; i < s.size(); ++i)
			p[i] = s[i];

		p[s.size()] = '\0';
		return SDK::FString(p);
	}
};