#pragma once
#include <list>
#include "ModBase.h"

class ModHandler
{
public:
	ModHandler();
	~ModHandler();
	std::list<ModBase*> GetMods();
	size_t GetModListSize();
	void AddMod(ModBase* Mod);

private:
	std::list<ModBase*> Mods;
};

