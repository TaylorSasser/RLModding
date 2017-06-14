#pragma once
#include <list>
#include "ModBase.h"
#include <string>

class ModHandler
{
public:
	ModHandler();
	~ModHandler();
	std::list<ModBase*> getMods();
	size_t GetModListSize();
	void addMod(ModBase* Mod);
	ModBase* getModInstance(std::string name);

private:
	std::list<ModBase*> Mods;
};

