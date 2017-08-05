#include "Garage.h"
#include "../Utils/Utils.h"

/* Potental Bugs
 * Setting skins for cars not unlocked / owned
 * Heap Overflow
 * 
 *
 *
 *  
 */

Garage::Garage() {
	//Allocates 1/2 a MB for our custom decals
	Heap = HeapCreate(HEAP_CREATE_ENABLE_EXECUTE,262144,1);
}
Garage::~Garage() {}

SDK::UProductAsset_Skin_TA* Garage::LoadCarDecal() {
	SDK::UProductAsset_Skin_TA* SkinMemory = reinterpret_cast<SDK::UProductAsset_Skin_TA*>(HeapAlloc(Heap, HEAP_ZERO_MEMORY, sizeof(SDK::UProductAsset_Skin_TA)));
	ZeroMemory(SkinMemory,sizeof(SDK::UProductAsset_Skin_TA));
	SDK::UProductAsset_Skin_TA* DummySkin = (SDK::UProductAsset_Skin_TA*)SDK::UObject::FindObject<SDK::UProductAsset_Skin_TA>("ProductAsset_Skin_TA Skin_MuscleCar_Wings.Skin_MuscleCar_Wings");
	memcpy(SkinMemory,DummySkin,sizeof(SDK::UProductAsset_Skin_TA));
	return SkinMemory;
}