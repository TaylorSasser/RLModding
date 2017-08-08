#pragma once
#include "Windows.h"
#include "../RL/SDK.hpp"

class MemoryAllocator
{
public:
	MemoryAllocator(size_t PoolSizeMegaBytes);
	~MemoryAllocator();

	template<class T>
	T* MemoryAllocator::AllocUObject(T* src, std::string ObjectName) {
		T* Object = AllocNullObject<T>();
		if (src != nullptr || src != NULL) {
			memcpy(Object, src, sizeof(T));
		}
		RegisterObject(reinterpret_cast<SDK::UObject*>(Object), ObjectName);
		return reinterpret_cast<T*>(Object);
	}
	
	template<class T> void MemoryAllocator::DestroyUObject(T* src) {
		ZeroMemory(src, sizeof(T));
		HeapFree(MemoryPool, NULL, src);
	}

private:
	template <class T>
	T* MemoryAllocator::AllocNullObject() {
		LPVOID UObject = HeapAlloc(MemoryPool, HEAP_ZERO_MEMORY, sizeof(T));
		ZeroMemory(UObject, sizeof(T));
		return reinterpret_cast<T*>(UObject);
	}
	void RegisterObject(SDK::UObject*, std::string objectName);
	HANDLE MemoryPool;
};



