#include "MemoryAllocator.h"

MemoryAllocator::MemoryAllocator(size_t PoolSize) {
	MemoryPool = HeapCreate(HEAP_CREATE_ENABLE_EXECUTE,((1024*1024)*PoolSize), 1);
	HeapLock(MemoryPool);
}

MemoryAllocator::~MemoryAllocator() {
	HeapDestroy(MemoryPool);
}

void MemoryAllocator::RegisterObject(SDK::UObject* Object, std::string ObjectName) {
	SDK::UObject::GObjects->Add(Object);
	SDK::FNameEntry* ObjectNameEntry = reinterpret_cast<SDK::FNameEntry*>(HeapAlloc(MemoryPool, HEAP_ZERO_MEMORY, sizeof(SDK::FNameEntry)));
	ObjectName = ObjectName + ".CustomObject";
	strcpy_s(ObjectNameEntry->AnsiName, ObjectName.c_str());
	SDK::FName::GNames->Add(ObjectNameEntry);
	ObjectNameEntry->Index = SDK::FName::GNames->Num();
	reinterpret_cast<SDK::UObject*>(Object)->Name = SDK::FName(ObjectNameEntry->Index);
}

