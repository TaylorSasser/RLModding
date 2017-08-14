#include "Interfaces.h"

// 1 MB of memory is PLENTY. It should be enough to support (800) ProductAssets;

MemoryAllocator& Interfaces::Memory() {
	static MemoryAllocator m_memory_allocator(1); 
	return m_memory_allocator;
}

Garage&	Interfaces::CustomGarage() {
	static Garage m_Custom_Garage;
	return m_Custom_Garage;
}

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

BlackList& Interfaces::Blacklist() {
	static BlackList m_black_list;
	return m_black_list;
}