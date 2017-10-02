#pragma once
#include <Windows.h>
#include <iostream>
#include "../Interfaces/InstanceStorage.h"
#include "../RL/SDK.hpp"
#include "../Utils/Utils.h"


class BlackList {
public:
	BlackList();
	~BlackList();
	__int64 GetPlayerId();
};

