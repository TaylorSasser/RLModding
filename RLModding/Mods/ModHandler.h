#pragma once
#include <map>
#include "ModBase.h"
#include <memory>

class ModHandler {
public:
	ModHandler();

	auto begin() { return mods.begin(); }
	auto end() { return mods.end(); }

	size_t GetModListSize();

	template<typename T>
	void CreateMod(const std::string& name, int key) {
		mods[name] = std::make_unique<T>(std::move(name), key);
	}
	template<typename T>
	void CreateMod(const std::string& name, int key,Category category,GameState gamestate) {
		mods[name] = std::make_unique<T>(std::move(name), key,category,gamestate);
	}
	template<typename T>
	void CreateMod(const std::string& name, int key, Category category, GameState gamestate, const std::string& toolTip) {
		mods[name] = std::make_unique<T>(std::move(name), key, category, gamestate, toolTip);
	}
	void addMod(std::unique_ptr<ModBase>);
	ModBase* getModInstance(const std::string &name);

private:
	std::map<std::string, std::unique_ptr<ModBase>> mods;
};

