#pragma once
#include "Windows.h"
#include "../RL/SDK.hpp"

class MemoryAllocator
{
public:
	MemoryAllocator(size_t PoolSizeMegaBytes);
	~MemoryAllocator();
	template<class T> T* AllocUObject(T* src, std::string ObjectName);
	template<class T> void MemoryAllocator::DestroyUObject(T* src);
private:
	template<class T> T* AllocNullObject();
	void RegisterObject(SDK::UObject*, std::string objectName);
	HANDLE MemoryPool;
};



