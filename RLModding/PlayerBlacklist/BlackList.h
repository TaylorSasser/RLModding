#pragma once
#include <iostream>
#include "../Interfaces/InstanceStorage.h"
#include "../RL/SDK.hpp"
#include "../Utils/Utils.h"
#include <Windows.h>


class BlackList {
public:
	BlackList();
	~BlackList();
	__int64 GetPlayerId();
};

