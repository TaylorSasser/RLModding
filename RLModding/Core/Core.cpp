#include "Core.h"
#include <Windows.h>
#include "../Utils/Utils.h"
#include "../RL/SDK.hpp"
#include "../Hooks/KeyboardHook.h"
#include "../Hooks/DX9Hook.h"
#include "../Hooks/HookManager.h"

namespace Core {

	void Initialize() {
		AllocConsole();
		AttachConsole(GetCurrentProcessId());
		freopen("CON", "w", stdout);
		if (!Utils::InitializeNamesStore()) { printf("Name Store failed"); } else { printf("GNames Found \n"); }
		if (!Utils::InitializeObjectsStore()) { printf("Object Store failed"); } else { printf("GObjects Found \n"); }
		printf("Core::Initialize Finished \n");
	}

	void Restore() {
		FreeConsole();
	}

}
