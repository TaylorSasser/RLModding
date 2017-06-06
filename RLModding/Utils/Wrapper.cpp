#include "Wrapper.h"


	
namespace Wrapper {
	EventManager* Interfaces::m_EventManager = nullptr;
	ModHandler* Interfaces::m_ModHandler = nullptr;


	EventManager* Interfaces::getEventManager() {
		if(!Interfaces::m_EventManager) {
			Interfaces::m_EventManager = new EventManager();
		}
		return m_EventManager;
	}
	ModHandler* Interfaces::getModHandler() {
		if(!Interfaces::m_ModHandler) {
			Interfaces::m_ModHandler = new ModHandler();
		}
		return m_ModHandler;
	}
}