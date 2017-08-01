#include "Interfaces.h"
#include "../Gui/InGameGUI.h"

FunctionHook& Interfaces::FunctionHandler() {
	static FunctionHook m_function_hook_;
	return m_function_hook_;
}

ModHandler& Interfaces::Mods() {
	static ModHandler m_mod_handler_;
	return m_mod_handler_;
}

InGameGUI& Interfaces::GUI() {
	static InGameGUI m_InGame_GUI;
	return m_InGame_GUI;
}

EventFactory& Interfaces::EventHandler() {
	static EventFactory m_event_manager_;
	return m_event_manager_;
}

DX9Hook& Interfaces::DX9Handler() {
	static DX9Hook m_dx9_hook_;
	return m_dx9_hook_;
}

DrawManager& Interfaces::RenderHandler() {
	static DrawManager m_draw_manager_;
	return m_draw_manager_;
}

KeyboardHook& Interfaces::KeyboardHandler() {
	static KeyboardHook m_keyboard_hook_;
	return m_keyboard_hook_;
}

FileManager& Interfaces::FileHandler() {
	static FileManager m_file_manager_;
	return m_file_manager_;
}
