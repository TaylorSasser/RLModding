#include "Interfaces.h"
#include "../Gui/InGameGUI.h"

FunctionHook*				Interfaces::m_function_hook_ = nullptr;
EventFactory*				Interfaces::m_event_manager_ = nullptr;
DX9Hook*					Interfaces::m_dx9_hook_ = nullptr;
DrawManager*				Interfaces::m_draw_manager_ = nullptr;
KeyboardHook*				Interfaces::m_keyboard_hook_ = nullptr;
FileManager*				Interfaces::m_file_manager_ = nullptr;
ModHandler*					Interfaces::m_mod_handler_ = nullptr;
InGameGUI*					Interfaces::m_InGame_GUI = nullptr;

HMODULE mod = nullptr;


FunctionHook* Interfaces::FunctionHandler() {
	if (!m_function_hook_) m_function_hook_ = new FunctionHook();
	return m_function_hook_;
}
ModHandler*	Interfaces::Mods() {
	if (!m_mod_handler_) m_mod_handler_ = new ModHandler();
	return m_mod_handler_;
}

InGameGUI* Interfaces::GUI() {
	if (!m_InGame_GUI) m_InGame_GUI = new InGameGUI();
	return m_InGame_GUI;
}

EventFactory* Interfaces::EventHandler() {
	if (!m_event_manager_) m_event_manager_ = new EventFactory();
	return m_event_manager_;
}
DX9Hook* Interfaces::DX9Handler() {
	if (!m_dx9_hook_) m_dx9_hook_ = new DX9Hook();
	return m_dx9_hook_;
}
DrawManager* Interfaces::RenderHandler() {
	if (!m_draw_manager_) m_draw_manager_ = new DrawManager();
	return m_draw_manager_;
}
KeyboardHook* Interfaces::KeyboardHandler() {
	if (!m_keyboard_hook_) m_keyboard_hook_ = new KeyboardHook();
	return m_keyboard_hook_;
}
FileManager* Interfaces::FileHandler() {
	if (!m_file_manager_) m_file_manager_ = new FileManager();
	return m_file_manager_;
}
HMODULE Interfaces::HModule() {
	return mod;
}

void Interfaces::ConstructAll(HMODULE h) {
	mod = h;
	Mods();
	FunctionHandler();
	EventHandler();
	DX9Handler();
	RenderHandler();
	KeyboardHandler();
	FileHandler();
}

void Interfaces::DestructAll() {
	Interfaces::m_function_hook_ = nullptr;
	Interfaces::m_event_manager_ = nullptr;
	Interfaces::m_dx9_hook_ = nullptr;
	Interfaces::m_draw_manager_ = nullptr;
	Interfaces::m_keyboard_hook_ = nullptr;
	Interfaces::m_file_manager_ = nullptr;
	Interfaces::m_mod_handler_ = nullptr;
}
