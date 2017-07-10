#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.AkPlaySoundComponent.EAkPlaySoundReceiver
enum class EAkPlaySoundReceiver
{
	PlaySoundReceiver_All          = 0,
	PlaySoundReceiver_Local        = 1,
	PlaySoundReceiver_NonLocal     = 2,
	PlaySoundReceiver_MAX          = 3
};


// Enum AkAudio.AkDevice.EAkOutputType
enum class EAkOutputType
{
	AkOT_Speakers                  = 0,
	AKOT_Headphones                = 1,
	EAkOutputType_MAX              = 2
};


// Enum AkAudio.AkDevice.EAkListenerSpacialization
enum class EAkListenerSpacialization
{
	AkLS_3D                        = 0,
	AkLS_Left                      = 1,
	AkLS_Right                     = 2,
	AkLS_MAX                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkEnvironmentVolume.uint
// 0x0004
struct Fuint
{
	int                                                dummyint;                                                 // 0x0000(0x0004)
};

// ScriptStruct AkAudio.AkParamGroup.AkParamSet
// 0x0078
struct FAkParamSet
{
	struct FMap_Mirror                                 RTCPs;                                                    // 0x0000(0x003C) (CPF_Const, CPF_Native)
	struct FMap_Mirror                                 Switches;                                                 // 0x003C(0x003C) (CPF_Const, CPF_Native)
};

// ScriptStruct AkAudio.AkSoundSource.ActiveSound
// 0x000C
struct FActiveSound
{
	class UAkSoundCue*                                 Sound;                                                    // 0x0000(0x0004)
	int                                                PlayId;                                                   // 0x0004(0x0004)
	int                                                StopId;                                                   // 0x0008(0x0004)
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x0008
struct FAkEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	class UAkEvent*                                    Event;                                                    // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimPhysicsControls
// 0x0018
struct FAkRevSimPhysicsControls
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit)
	float                                              EngineTorque;                                             // 0x0004(0x0004) (CPF_Edit)
	float                                              BreakingHorsePower;                                       // 0x0008(0x0004) (CPF_Edit)
	TArray<float>                                      GearRatios;                                               // 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimFrame
// 0x000C
struct FAkRevSimFrame
{
	float                                              RPM;                                                      // 0x0000(0x0004)
	int                                                Gear;                                                     // 0x0004(0x0004)
	float                                              Velocity;                                                 // 0x0008(0x0004)
};

// ScriptStruct AkAudio.AkRevPhysicsSimulation.AkRevSimUpdateParams
// 0x003C
struct FAkRevSimUpdateParams
{
	float                                              Throttle;                                                 // 0x0000(0x0004)
	float                                              Brake;                                                    // 0x0004(0x0004)
	float                                              EngineFrictionScale;                                      // 0x0008(0x0004)
	float                                              GroundFrictionScale;                                      // 0x000C(0x0004)
	float                                              ClutchedGearRatio;                                        // 0x0010(0x0004)
	unsigned long                                      bEnableUpShifting : 1;                                    // 0x0014(0x0004)
	struct FAkRevSimPhysicsControls                    Controls;                                                 // 0x0018(0x0018) (CPF_NeedCtorLink)
	struct FAkRevSimFrame                              frame;                                                    // 0x0030(0x000C)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
