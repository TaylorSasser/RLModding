#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x000C
struct FGCReference
{
	class UObject*                                     m_object;                                         		// 0x0000(0x0004) (CPF_Const)
	int                                                m_count;                                          		// 0x0004(0x0004)
	int                                                m_statid;                                         		// 0x0008(0x0004)
};

// ScriptStruct GFxUI.GFxEngine.LoadingMovieMapInfo
// 0x0058
struct FLoadingMovieMapInfo
{
	TEnumAsByte<enum class EInputPlatformType>         InputType;                                        		// 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	struct FString                                     MapBaseName;                                      		// 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PlaylistName;                                     		// 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FString                                     MapVariantName;                                   		// 0x001C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     MaximumPlayerCounts;                              		// 0x0028(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ProtipMessage;                                    		// 0x0034(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ProtipTitle;                                      		// 0x0040(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	TEnumAsByte<enum class EWeatherVariant>            WeatherVariant;                                   		// 0x004C(0x0001)
	unsigned char                                      UnknownData01[0x3];                               		// 0x004D(0x0003) MISSED OFFSET
	class UTexture2D*                                  LargeMapImage;                                    		// 0x0050(0x0004)
	unsigned long                                      bSetBackgroundVisible : 1;                        		// 0x0054(0x0004)
	unsigned long                                      bDisplayGenericBackground : 1;                    		// 0x0054(0x0004)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0010
struct FExternalTexture
{
	struct FString                                     Resource;                                         		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                          		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x0018
struct FSoundThemeBinding
{
	struct FName                                       ThemeName;                                        		// 0x0000(0x0008) (CPF_Edit)
	class UUISoundTheme*                               Theme;                                            		// 0x0008(0x0004) (CPF_Edit)
	struct FString                                     ThemeClassName;                                   		// 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x000C
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                       		// 0x0000(0x0008) (CPF_Edit)
	class UClass*                                      WidgetClass;                                      		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x0020
struct FASValue
{
	TEnumAsByte<enum class ASType>                     Type;                                             		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      B : 1;                                            		// 0x0004(0x0004) (CPF_Edit)
	float                                              N;                                                		// 0x0008(0x0004) (CPF_Edit)
	int                                                I;                                                		// 0x000C(0x0004) (CPF_Edit)
	struct FString                                     S;                                                		// 0x0010(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
	class UTexture*                                    T;                                                		// 0x001C(0x0004) (CPF_Edit)
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                                		// 0x0000(0x0004) (CPF_Edit)
	float                                              Y;                                                		// 0x0004(0x0004) (CPF_Edit)
	float                                              Z;                                                		// 0x0008(0x0004) (CPF_Edit)
	float                                              Rotation;                                         		// 0x000C(0x0004) (CPF_Edit)
	float                                              XRotation;                                        		// 0x0010(0x0004) (CPF_Edit)
	float                                              YRotation;                                        		// 0x0014(0x0004) (CPF_Edit)
	float                                              XScale;                                           		// 0x0018(0x0004) (CPF_Edit)
	float                                              YScale;                                           		// 0x001C(0x0004) (CPF_Edit)
	float                                              ZScale;                                           		// 0x0020(0x0004) (CPF_Edit)
	float                                              Alpha;                                            		// 0x0024(0x0004) (CPF_Edit)
	unsigned long                                      Visible : 1;                                      		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasX : 1;                                         		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasY : 1;                                         		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasZ : 1;                                         		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasRotation : 1;                                  		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasXRotation : 1;                                 		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasYRotation : 1;                                 		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasXScale : 1;                                    		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasYScale : 1;                                    		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasZScale : 1;                                    		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasAlpha : 1;                                     		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      hasVisible : 1;                                   		// 0x0028(0x0004) (CPF_Edit)
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                         		// 0x0000(0x0010) (CPF_Edit)
	struct FLinearColor                                Add;                                              		// 0x0010(0x0010) (CPF_Edit)
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x0028
struct FEventData
{
	class UGFxObject*                                  _this;                                            		// 0x0000(0x0004)
	class UGFxObject*                                  Target;                                           		// 0x0004(0x0004)
	struct FString                                     Type;                                             		// 0x0008(0x000C) (CPF_NeedCtorLink)
	int                                                Data;                                             		// 0x0014(0x0004)
	int                                                mouseIndex;                                       		// 0x0018(0x0004)
	int                                                Button;                                           		// 0x001C(0x0004)
	int                                                Index;                                            		// 0x0020(0x0004)
	int                                                lastIndex;                                        		// 0x0024(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
