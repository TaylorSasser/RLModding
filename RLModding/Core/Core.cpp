#include "Core.h"
#include <Windows.h>
#include "../Utils/Utils.h"
#include "../RL/SDK.hpp"
#include "../Hooks/KeyboardHook.h"
#include "../Hooks/DX9Hook.h"
#include "../Hooks/FunctionHook.h"

namespace Core {


	HANDLE _out = NULL, _old_out = NULL;
	HANDLE _err = NULL, _old_err = NULL;
	HANDLE _in = NULL, _old_in = NULL;

	void Initialize() {
		_old_out = GetStdHandle(STD_OUTPUT_HANDLE);
		_old_err = GetStdHandle(STD_ERROR_HANDLE);
		_old_in = GetStdHandle(STD_INPUT_HANDLE);

		AllocConsole() && AttachConsole(GetCurrentProcessId());
		freopen("CON", "w", stdout);
		if (!Utils::InitializeNamesStore()) { printf("Name Store failed"); } else { printf("GNames Found \n"); }
		if (!Utils::InitializeObjectsStore()) { printf("Object Store failed"); } else { printf("GObjects Found \n"); }
		printf("Core::Initialize Finished \n");
	}

	void Restore() {
		printf("Core Restore Called \n");
		if (_out && _err && _in) {
			FreeConsole();
			if (_old_out)
				SetStdHandle(STD_OUTPUT_HANDLE, _old_out);
			if (_old_err)
				SetStdHandle(STD_ERROR_HANDLE, _old_err);
			if (_old_in)
				SetStdHandle(STD_INPUT_HANDLE, _old_in);
		}
	}
}
