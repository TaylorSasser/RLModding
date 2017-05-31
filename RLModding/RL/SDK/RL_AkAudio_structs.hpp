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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
