#pragma once
#include "../Mods/ModBase.h"
#include "../Mods/ModHandler.h"
#include "../Events/EventManager.h"
#include "../Hooks/HookManager.h"

namespace Wrapper {
	class Interfaces {
	public:
		static EventManager* getEventManager();
		static ModHandler* getModHandler();
		static HookManager* getHookManager();
	private:
		static EventManager* m_EventManager;
		static ModHandler* m_ModHandler;
		static HookManager* m_HookManager;
	};
}
