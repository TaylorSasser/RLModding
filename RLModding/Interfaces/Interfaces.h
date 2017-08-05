#pragma once

#include "../Hooks/FunctionHook.h"
#include "../Hooks/DX9Hook.h"
#include "../DrawManager/DrawManager.hpp"
#include "../Hooks/KeyboardHook.h"
#include "../Filesystem/FileManager.h"
#include "../Mods/ModHandler.h"
#include "../Gui/InGameGUI.h"
#include "../Events/EventFactory.h"
#include "../CustomGarage/Garage.h"

class Interfaces {
public:
	static Garage& CustomGarage();
	static FunctionHook& FunctionHandler();
	static DX9Hook& DX9Handler();
	static DrawManager& RenderHandler();
	static KeyboardHook& KeyboardHandler();
	static FileManager& FileHandler();
	static ModHandler& Mods();
	static InGameGUI& GUI();
	static EventFactory& EventHandler();
};
