#pragma once
#include <unordered_map>
#include "ModBase.h"
#include <string>
#include <memory>

class ModHandler {
public:
	ModHandler();
	std::list<ModBase*> getMods();
	size_t GetModListSize();
	void addMod(std::unique_ptr<ModBase>);
	ModBase* getModInstance(const std::string &name);

private:
	std::unordered_map<std::string, std::unique_ptr<ModBase>> mods;
};

