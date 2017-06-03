#pragma once
#include "ModBase.h"
#include "LogManager.h"
#include "ModHandler.h"
#include "EventManager.h"
#include "HookManager.h"

namespace Wrapper {
	class Interfaces {
	public:
		static EventManager* getEventManager();
		static LogManager* getLogger();
		static ModHandler* getModHandler();
		static HookManager* getHookManager();
	private:
		static EventManager* m_EventManager;
		static LogManager* m_LogManager;
		static ModHandler* m_ModHandler;
		static HookManager* m_HookManager;
	};
}
