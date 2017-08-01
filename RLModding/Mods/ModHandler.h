#pragma once
#include <unordered_map>
#include "ModBase.h"
#include <string>
#include <memory>

class ModHandler {
public:
	ModHandler();

	auto begin() { return mods.begin(); }
	auto end() { return mods.end(); }

	size_t GetModListSize();

	template<typename T>
	void CreateMod(const std::string& name, int key)
	{
		mods[name] = std::make_unique<T>(std::move(name), key);
	}

	void addMod(std::unique_ptr<ModBase>);
	ModBase* getModInstance(const std::string &name);

private:
	std::unordered_map<std::string, std::unique_ptr<ModBase>> mods;
};

