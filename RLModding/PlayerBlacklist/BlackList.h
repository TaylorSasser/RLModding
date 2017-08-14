#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include "../Interfaces/InstanceStorage.h"
#include "../RL/SDK.hpp"
#include "../Utils/Utils.h"

// https://steamid.io <- Go here to find steam ids

class BlackList
{
public:
	BlackList();
	~BlackList();
	bool Exists(std::string);
	void Check();
	std::string GetPlayerId();
	bool isBlacklisted();

private:
	std::vector<std::string> blacklist;
	std::string steamId = "";
	bool bBlacklisted;
};

