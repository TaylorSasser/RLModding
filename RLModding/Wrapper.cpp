#include "Wrapper.h"


	
namespace Wrapper {
	LogManager* Interfaces::m_LogManager = nullptr;
	EventManager* Interfaces::m_EventManager = nullptr;
	ModHandler* Interfaces::m_ModHandler = nullptr;


	EventManager* Interfaces::getEventManager() {
		if(!Interfaces::m_EventManager) {
			Interfaces::m_EventManager = new EventManager();
		}
		return m_EventManager;
	}
	
	LogManager* Interfaces::getLogger() {
		if(!Interfaces::m_LogManager) {
			Interfaces::m_LogManager = new LogManager();
		}
		return m_LogManager;
	}
	ModHandler* Interfaces::getModHandler() {
		if(!Interfaces::m_ModHandler) {
			Interfaces::m_ModHandler = new ModHandler();
		}
		return m_ModHandler;
	}
}