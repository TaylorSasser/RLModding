#include "Garage.h"
#include "../Utils/Utils.h"

Garage::Garage() {}
Garage::~Garage() {}

SDK::UProduct_TA* Garage::LoadObject(SDK::UProductAsset_TA*	asset) {
	SDK::UProduct_TA* Product = reinterpret_cast<SDK::UProduct_TA*>(SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(asset->GetPackageName(), SDK::UProduct_TA::StaticClass(), true));
	Product->Slot = SDK::UObject::FindObject<SDK::UProductSlot_TA>("ProductSlot_TA ProductSlots.Body");
	return Product;
}
SDK::UTexture2D* Garage::LoadTexture(SDK::FString DecalName) {
	return reinterpret_cast<SDK::UTexture2D*>(SDK::UObject::StaticClass()->STATIC_DynamicLoadObject(DecalName, SDK::UTexture2D::StaticClass(), true));
}
SDK::UProductAsset_TA* Garage::LoadAsset(SDK::UTexture2D)

void Garage::LoadCustomDecals() {
	SDK::UProduct_TA* CustomCar = LoadObject(L"CustomCar.Dominus_Tribal");
	SDK::UProductDatabase_TA* DataBase = (SDK::UProductDatabase_TA*)Utils::GetInstanceOf(SDK::UProductDatabase_TA::StaticClass());
	DataBase->Products_New.Add(CustomCar);
}
