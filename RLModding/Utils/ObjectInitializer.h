#pragma once
#include "../RL/SDK.hpp"
#include <string>

template<typename T>
T* ConstructUObject(std::string CustomName) {
	size_t nameindex = SDK::FName::GNames->Num() + 1;
	size_t objectindex = SDK::UObject::GObjects->Num() + 1;
	T* object = (T*)malloc(sizeof(T));
	SDK::UObject::GObjects->Data[objectindex] = object;
	SDK::FNameEntry* objectName = (SDK::FNameEntry*)malloc(sizeof(SDK::FNameEntry));
	strcpy(objectName->AnsiName,CustomName.c_str());
	SDK::FName::GNames->Data[nameindex] = objectName;
	T* UObject = reinterpret_cast<T>(object);
	UObject->Name.Index = nameindex;
	UObject->Name.Number = 0;
	return UObject;
}
