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

// Enum GFxUI.SwfMovie.FlashTextureRescale
enum class FlashTextureRescale
{
	FlashTextureScale_High         = 0,
	FlashTextureScale_Low          = 1,
	FlashTextureScale_NextLow      = 2,
	FlashTextureScale_Mult4        = 3,
	FlashTextureScale_None         = 4,
	FlashTextureScale_MAX          = 5
};


// Enum GFxUI.GFxMoviePlayer.ASType
enum class ASType
{
	AS_Undefined                   = 0,
	AS_Null                        = 1,
	AS_Number                      = 2,
	AS_Int                         = 3,
	AS_String                      = 4,
	AS_Boolean                     = 5,
	AS_Texture                     = 6,
	AS_MAX                         = 7
};


// Enum GFxUI.GFxMoviePlayer.GFxAlign
enum class GFxAlign
{
	Align_Center                   = 0,
	Align_TopCenter                = 1,
	Align_BottomCenter             = 2,
	Align_CenterLeft               = 3,
	Align_CenterRight              = 4,
	Align_TopLeft                  = 5,
	Align_TopRight                 = 6,
	Align_BottomLeft               = 7,
	Align_BottomRight              = 8,
	Align_MAX                      = 9
};


// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
enum class GFxScaleMode
{
	SM_NoScale                     = 0,
	SM_ShowAll                     = 1,
	SM_ExactFit                    = 2,
	SM_NoBorder                    = 3,
	SM_MAX                         = 4
};


// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
enum class GFxTimingMode
{
	TM_Game                        = 0,
	TM_Real                        = 1,
	TM_MAX                         = 2
};


// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
enum class GFxRenderTextureMode
{
	RTM_Opaque                     = 0,
	RTM_Alpha                      = 1,
	RTM_AlphaComposite             = 2,
	RTM_MAX                        = 3
};


// Enum GFxUI.GFxEngine.EWeatherVariant
enum class EWeatherVariant
{
	WeatherVariant_None            = 0,
	WeatherVariant_Day             = 1,
	WeatherVariant_Dusk            = 2,
	WeatherVariant_Lab             = 3,
	WeatherVariant_Night           = 4,
	WeatherVariant_Rain            = 5,
	WeatherVariant_Snow            = 6,
	WeatherVariant_MAX             = 7
};



//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GFxUI.GFxEngine
// 0x0068 (0x00A4 - 0x003C)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                     		// 0x003C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                RefCount;                                         		// 0x0048(0x0004) (CPF_Transient)
	struct FLoadingMovieMapInfo                        LoadingScreenInfo;                                		// 0x004C(0x0058) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxEngine");
		return ptr;
	}


	void UpdateMovieLoadingInfo(struct FLoadingMovieMapInfo* LoadingInfo);
	void Tick(float DeltaTime);
};


// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxInteraction
// 0x0008 (0x0090 - 0x0088)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0088(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	unsigned long                                      bFakeMobileTouches : 1;                           		// 0x008C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxInteraction");
		return ptr;
	}


	void DebugInputKey(int ControllerId, const struct FName& Key, TEnumAsByte<enum class EInputEvent> Event, float AmountDepressed, bool bGamepad);
	void CloseAllMoviePlayers();
	void NotifySplitscreenLayoutChanged();
	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	class UGFxMoviePlayer* GetFocusMovie(int ControllerId);
};


// Class GFxUI.GFxMoviePlayer
// 0x0130 (0x016C - 0x003C)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                           		// 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	struct FPointer                                    pCaptureKeys;                                     		// 0x0040(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	struct FPointer                                    pFocusIgnoreKeys;                                 		// 0x0044(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	unsigned char                                      UnknownData00[0x3C];                              		// 0x0048(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[0x3C];                              		// 0x0084(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                    		// 0x00C0(0x0004) (CPF_Const, CPF_Transient)
	class USwfMovie*                                   MovieInfo;                                        		// 0x00C4(0x0004)
	unsigned long                                      bMovieIsOpen : 1;                                 		// 0x00C8(0x0004) (CPF_Const)
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x00C8(0x0004)
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x00C8(0x0004)
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                 		// 0x00C8(0x0004) (CPF_Const, CPF_Transient)
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;            		// 0x00C8(0x0004)
	unsigned long                                      bAllowInput : 1;                                  		// 0x00C8(0x0004)
	unsigned long                                      bAllowFocus : 1;                                  		// 0x00C8(0x0004)
	unsigned long                                      bAutoPlay : 1;                                    		// 0x00C8(0x0004)
	unsigned long                                      bPauseGameWhileActive : 1;                        		// 0x00C8(0x0004)
	unsigned long                                      bDisableWorldRendering : 1;                       		// 0x00C8(0x0004)
	unsigned long                                      bCaptureWorldRendering : 1;                       		// 0x00C8(0x0004)
	unsigned long                                      bCloseOnLevelChange : 1;                          		// 0x00C8(0x0004)
	unsigned long                                      bOnlyOwnerFocusable : 1;                          		// 0x00C8(0x0004)
	unsigned long                                      bForceFullViewport : 1;                           		// 0x00C8(0x0004)
	unsigned long                                      bDiscardNonOwnerInput : 1;                        		// 0x00C8(0x0004)
	unsigned long                                      bCaptureInput : 1;                                		// 0x00C8(0x0004)
	unsigned long                                      bCaptureMouseInput : 1;                           		// 0x00C8(0x0004)
	unsigned long                                      bIgnoreMouseInput : 1;                            		// 0x00C8(0x0004)
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                 		// 0x00C8(0x0004) (CPF_Transient)
	unsigned long                                      bShowHardwareMouseCursor : 1;                     		// 0x00C8(0x0004)
	unsigned long                                      bForceFullScreen : 1;                             		// 0x00C8(0x0004)
	unsigned long                                      bBlurLesserMovies : 1;                            		// 0x00C8(0x0004)
	unsigned long                                      bHideLesserMovies : 1;                            		// 0x00C8(0x0004)
	unsigned long                                      bIsPriorityBlurred : 1;                           		// 0x00C8(0x0004)
	unsigned long                                      bIsPriorityHidden : 1;                            		// 0x00C8(0x0004)
	unsigned long                                      bIgnoreVisibilityEffect : 1;                      		// 0x00C8(0x0004)
	unsigned long                                      bIgnoreBlurEffect : 1;                            		// 0x00C8(0x0004)
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x00CC(0x0004) (CPF_Edit)
	int                                                LocalPlayerOwnerIndex;                            		// 0x00D0(0x0004) (CPF_Transient)
	class UObject*                                     ExternalInterface;                                		// 0x00D4(0x0004)
	TArray<struct FName>                               CaptureKeys;                                      		// 0x00D8(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                  		// 0x00E4(0x000C) (CPF_NeedCtorLink)
	TArray<struct FExternalTexture>                    ExternalTextures;                                 		// 0x00F0(0x000C) (CPF_NeedCtorLink)
	TArray<struct FSoundThemeBinding>                  SoundThemes;                                      		// 0x00FC(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TEnumAsByte<enum class GFxTimingMode>              TimingMode;                                       		// 0x0108(0x0001)
	TEnumAsByte<enum class GFxRenderTextureMode>       RenderTextureMode;                                		// 0x0109(0x0001)
	unsigned char                                      Priority;                                         		// 0x010A(0x0001)
	unsigned char                                      UnknownData02[0x1];                               		// 0x010B(0x0001) MISSED OFFSET
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                   		// 0x010C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData03[0x3C];                              		// 0x0118(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	class UGFxObject*                                  SplitscreenLayoutObject;                          		// 0x0154(0x0004) (CPF_Transient)
	int                                                SplitscreenLayoutYAdjust;                         		// 0x0158(0x0004) (CPF_Config)
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                        		// 0x015C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                               		// 0x015C(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		return ptr;
	}


	void SetFullScreen(bool bFullScreen);
	bool IsHidden();
	void SetHidden(bool bHidden);
	void RenderOnce();
	void UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect(bool bRemoveEffect);
	void ApplyPriorityBlurEffect(bool bRemoveEffect);
	void ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState);
	void PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName);
	void OnFocusLost(int LocalPlayerIndex);
	void OnFocusGained(int LocalPlayerIndex);
	void ConsoleCommand(const struct FString& Command);
	class APlayerController* GetPC();
	class ULocalPlayer* GetLP();
	void Init(class ULocalPlayer* LocPlay);
	void SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path);
	void PostWidgetInit();
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	class UGFxObject* ActionScriptConstructor(const struct FString& ClassName);
	class UGFxObject* ActionScriptObject(const struct FString& Path);
	struct FString ActionScriptString(const struct FString& Path);
	float ActionScriptFloat(const struct FString& Path);
	int ActionScriptInt(const struct FString& Path);
	void ActionScriptVoid(const struct FString& Path);
	struct FASValue Invoke(const struct FString& method, TArray<struct FASValue> args);
	void ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member);
	class UGFxObject* CreateArray();
	class UGFxObject* CreateObject(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args);
	bool SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg);
	bool SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg);
	bool SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg);
	bool SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg);
	bool GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg);
	bool GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg);
	bool GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg);
	bool GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg);
	void SetVariableObject(const struct FString& Path, class UGFxObject* Object);
	void SetVariableString(const struct FString& Path, const struct FString& S);
	void SetVariableInt(const struct FString& Path, int I);
	void SetVariableNumber(const struct FString& Path, float F);
	void SetVariableBool(const struct FString& Path, bool B);
	void SetVariable(const struct FString& Path, const struct FASValue& Arg);
	class UGFxObject* GetVariableObject(const struct FString& Path, class UClass* Type);
	struct FString GetVariableString(const struct FString& Path);
	int GetVariableInt(const struct FString& Path);
	float GetVariableNumber(const struct FString& Path);
	bool GetVariableBool(const struct FString& Path);
	struct FASValue GetVariable(const struct FString& Path);
	int GetAVMVersion();
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<enum class EInputEvent> InputEvent);
	void FlushPlayerInput(bool capturekeysonly);
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey(const struct FName& Key);
	void ClearCaptureKeys();
	void AddCaptureKey(const struct FName& Key);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetPerspective3D(struct FMatrix* matPersp);
	void SetView3D(struct FMatrix* matView);
	void GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1);
	void SetAlignment(TEnumAsByte<enum class GFxAlign> A);
	void SetViewScaleMode(TEnumAsByte<enum class GFxScaleMode> SM);
	void SetViewport(int X, int Y, int Width, int Height);
	class UGameViewportClient* GetGameViewportClient();
	void SetPriority(unsigned char NewPriority);
	bool SetExternalTexture(const struct FString& Resource, class UTexture* Texture);
	void SetExternalInterface(class UObject* H);
	void SetTimingMode(TEnumAsByte<enum class GFxTimingMode> Mode);
	void SetMovieInfo(class USwfMovie* Data);
	void ConditionalClearPause();
	void OnCleanup();
	void OnClose();
	void Close(bool Unload);
	void SetPause(bool bPausePlayback);
	void OnPostAdvance(float DeltaTime);
	void PostAdvance(float DeltaTime);
	void Advance(float Time);
	bool Start(bool StartPaused);
};


// Class GFxUI.GFxObject
// 0x003C (0x0078 - 0x003C)
class UGFxObject : public UObject
{
public:
	int                                                Value[0xC];                                       		// 0x003C(0x0004) (CPF_Const, CPF_Native)
	TArray<struct FGFxWidgetBinding>                   SubWidgetBindings;                                		// 0x006C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxObject");
		return ptr;
	}


	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	class UGFxObject* AttachMovie(const struct FString& symbolname, const struct FString& instancename, int Depth, class UClass* Type);
	class UGFxObject* CreateEmptyMovieClip(const struct FString& instancename, int Depth, class UClass* Type);
	void GotoAndStopI(int frame);
	void GotoAndStop(const struct FString& frame);
	void GotoAndPlayI(int frame);
	void GotoAndPlay(const struct FString& frame);
	TArray<class UGFxObject*> ActionScriptArray(const struct FString& Path);
	class UGFxObject* ActionScriptObject(const struct FString& Path);
	struct FString ActionScriptString(const struct FString& method);
	float ActionScriptFloat(const struct FString& method);
	int ActionScriptInt(const struct FString& method);
	void ActionScriptVoid(const struct FString& method);
	struct FASValue Invoke(const struct FString& Member, TArray<struct FASValue> args);
	void ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member);
	void ActionScriptSetFunction(const struct FString& Member);
	void SetElementMemberString(int Index, const struct FString& Member, const struct FString& S);
	void SetElementMemberInt(int Index, const struct FString& Member, int I);
	void SetElementMemberFloat(int Index, const struct FString& Member, float F);
	void SetElementMemberBool(int Index, const struct FString& Member, bool B);
	void SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val);
	void SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg);
	struct FString GetElementMemberString(int Index, const struct FString& Member);
	int GetElementMemberInt(int Index, const struct FString& Member);
	float GetElementMemberFloat(int Index, const struct FString& Member);
	bool GetElementMemberBool(int Index, const struct FString& Member);
	class UGFxObject* GetElementMemberObject(int Index, const struct FString& Member, class UClass* Type);
	struct FASValue GetElementMember(int Index, const struct FString& Member);
	void SetElementColorTransform(int Index, const struct FASColorTransform& cxform);
	void SetElementPosition(int Index, float X, float Y);
	void SetElementVisible(int Index, bool Visible);
	void SetElementDisplayMatrix(int Index, const struct FMatrix& M);
	void SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D);
	struct FMatrix GetElementDisplayMatrix(int Index);
	struct FASDisplayInfo GetElementDisplayInfo(int Index);
	void SetElementString(int Index, const struct FString& S);
	void SetElementInt(int Index, int I);
	void SetElementFloat(int Index, float F);
	void SetElementBool(int Index, bool B);
	void SetElementObject(int Index, class UGFxObject* val);
	void SetElement(int Index, const struct FASValue& Arg);
	struct FString GetElementString(int Index);
	int GetElementInt(int Index);
	float GetElementFloat(int Index);
	bool GetElementBool(int Index);
	class UGFxObject* GetElementObject(int Index, class UClass* Type);
	struct FASValue GetElement(int Index);
	void SetText(const struct FString& Text, class UTranslationContext* InContext);
	struct FString GetText();
	void SetVisible(bool Visible);
	void SetDisplayMatrix3D(const struct FMatrix& M);
	void SetDisplayMatrix(const struct FMatrix& M);
	void SetColorTransform(const struct FASColorTransform& cxform);
	void SetPosition(float X, float Y);
	void SetDisplayInfo(const struct FASDisplayInfo& D);
	struct FMatrix GetDisplayMatrix3D();
	struct FMatrix GetDisplayMatrix();
	struct FASColorTransform GetColorTransform();
	bool GetPosition(float* X, float* Y);
	struct FASDisplayInfo GetDisplayInfo();
	struct FString STATIC_TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext);
	void SetFunction(const struct FString& Member, class UObject* context, const struct FName& fname);
	void SetObject(const struct FString& Member, class UGFxObject* val);
	void SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext);
	void SetInt(const struct FString& Member, int I);
	void SetFloat(const struct FString& Member, float F);
	void SetBool(const struct FString& Member, bool B);
	void Set(const struct FString& Member, const struct FASValue& Arg);
	class UGFxObject* GetObject(const struct FString& Member, class UClass* Type);
	struct FString GetString(const struct FString& Member);
	int GetInt(const struct FString& Member);
	float GetFloat(const struct FString& Member);
	bool GetBool(const struct FString& Member);
	struct FASValue Get(const struct FString& Member);
};


// Class GFxUI.GFxRawData
// 0x0030 (0x006C - 0x003C)
class UGFxRawData : public UObject
{
public:
	TArray<unsigned char>                              RawData;                                          		// 0x003C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FString>                             ReferencedSwfs;                                   		// 0x0048(0x000C) (CPF_Edit, CPF_EditConst, CPF_NeedCtorLink)
	TArray<class UObject*>                             References;                                       		// 0x0054(0x000C) (CPF_Edit, CPF_EditConst, CPF_NeedCtorLink)
	TArray<class UObject*>                             UserReferences;                                   		// 0x0060(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxRawData");
		return ptr;
	}

};


// Class GFxUI.SwfMovie
// 0x0044 (0x00B0 - 0x006C)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                 		// 0x006C(0x0004) (CPF_Edit)
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                   		// 0x006C(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bPackTextures : 1;                                		// 0x006C(0x0004) (CPF_Edit)
	unsigned long                                      bForceSquarePacking : 1;                          		// 0x006C(0x0004) (CPF_Edit)
	struct FString                                     SourceFile;                                       		// 0x0070(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                PackTextureSize;                                  		// 0x007C(0x0004) (CPF_Edit)
	TEnumAsByte<enum class FlashTextureRescale>        TextureRescale;                                   		// 0x0080(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0081(0x0003) MISSED OFFSET
	struct FString                                     TextureFormat;                                    		// 0x0084(0x000C) (CPF_Edit, CPF_EditConst, CPF_NeedCtorLink)
	struct FString                                     SourceFileTimestamp;                              		// 0x0090(0x000C) (CPF_Edit, CPF_EditConst, CPF_NeedCtorLink)
	int                                                SourceFileCRC;                                    		// 0x009C(0x0004) (CPF_Edit, CPF_EditConst)
	int                                                RTTextures;                                       		// 0x00A0(0x0004)
	int                                                RTVideoTextures;                                  		// 0x00A4(0x0004)
	unsigned char                                      UnknownData01[0x8];                               		// 0x00A8(0x0008) UNKNOWN PROPERTY: QWordProperty GFxUI.SwfMovie.ImportTimeStamp

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.SwfMovie");
		return ptr;
	}

};


// Class GFxUI.FlashMovie
// 0x0000 (0x00B0 - 0x00B0)
class UFlashMovie : public USwfMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.FlashMovie");
		return ptr;
	}

};


// Class GFxUI.GFxAction_CloseMovie
// 0x0008 (0x0104 - 0x00FC)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC(0x0004)
	unsigned long                                      bUnload : 1;                                      		// 0x0100(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_CloseMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_GetVariable
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC(0x0004)
	struct FString                                     Variable;                                         		// 0x0100(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_GetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_Invoke
// 0x001C (0x0118 - 0x00FC)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC(0x0004)
	struct FString                                     MethodName;                                       		// 0x0100(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FASValue>                            Arguments;                                        		// 0x010C(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_Invoke");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_OpenMovie
// 0x0030 (0x012C - 0x00FC)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                            		// 0x00FC(0x0004) (CPF_Edit)
	class UClass*                                      MoviePlayerClass;                                 		// 0x0100(0x0004) (CPF_Edit)
	class UGFxMoviePlayer*                             MoviePlayer;                                      		// 0x0104(0x0004)
	unsigned long                                      bTakeFocus : 1;                                   		// 0x0108(0x0004) (CPF_Edit)
	unsigned long                                      bCaptureInput : 1;                                		// 0x0108(0x0004) (CPF_Edit)
	unsigned long                                      bStartPaused : 1;                                 		// 0x0108(0x0004) (CPF_Edit)
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x0108(0x0004)
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x0108(0x0004) (CPF_Edit)
	TEnumAsByte<enum class GFxRenderTextureMode>       RenderTextureMode;                                		// 0x010C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x010D(0x0003) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x0110(0x0004) (CPF_Edit)
	TArray<struct FName>                               CaptureKeys;                                      		// 0x0114(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                  		// 0x0120(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_OpenMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC(0x0004)
	TArray<struct FName>                               CaptureKeys;                                      		// 0x0100(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_SetCaptureKeys");
		return ptr;
	}

};


// Class GFxUI.GFxAction_SetVariable
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC(0x0004)
	struct FString                                     Variable;                                         		// 0x0100(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_SetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxEvent_FSCommand
// 0x0014 (0x0128 - 0x0114)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                            		// 0x0114(0x0004) (CPF_Edit)
	struct FString                                     FSCommand;                                        		// 0x0118(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                          		// 0x0124(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxEvent_FSCommand");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler_Kismet");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxClikWidget
// 0x0010 (0x0088 - 0x0078)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                        		// 0x0078(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0078(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxClikWidget");
		return ptr;
	}


	void ASRemoveAllEventListeners(const struct FString& Event);
	void AS3AddEventListener(const struct FString& Type, class UGFxObject* O, bool useCapture, int listenerPriority, bool useWeakReference);
	void ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func);
	void SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener);
	struct FString GetEventStringFromTypename(const struct FName& Typename);
	void RemoveAllEventListeners(const struct FString& Event);
	void AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int listenerPriority, bool useWeakReference);
	void EventListener(const struct FEventData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
