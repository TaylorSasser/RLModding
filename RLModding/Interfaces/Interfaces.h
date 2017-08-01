#pragma once

#include "../RL/SDK.hpp"
#include "../Hooks/FunctionHook.h"
#include "../Hooks/DX9Hook.h"
#include "../DrawManager/DrawManager.hpp"
#include "../Hooks/KeyboardHook.h"
#include "../Filesystem/FileManager.h"
#include "../Mods/ModHandler.h"
#include "../Gui/InGameGUI.h"
#include "../Events/EventFactory.h"

class Interfaces {
public:
	static FunctionHook*				FunctionHandler();
	static DX9Hook*						DX9Handler();
	static DrawManager*					RenderHandler();
	static KeyboardHook*				KeyboardHandler();
	static FileManager*					FileHandler();
	static ModHandler*					Mods();
	static InGameGUI*					GUI();
	static EventFactory*				EventHandler();
	static void							ConstructAll();
	static void							DestructAll();
	static HMODULE						HModule();

private:
	static ModHandler*					m_mod_handler_;
	static FunctionHook*				m_function_hook_;
	static EventFactory*				m_event_manager_;
	static DX9Hook*						m_dx9_hook_;
	static DrawManager*					m_draw_manager_;
	static KeyboardHook*				m_keyboard_hook_;
	static FileManager*					m_file_manager_;
	static InGameGUI*					m_InGame_GUI;
};
