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

// ScriptStruct Engine.Actor.TimerData
// 0x0028
struct FTimerData
{
	unsigned long                                      bLoop : 1;                                        		// 0x0000(0x0004)
	unsigned long                                      bPaused : 1;                                      		// 0x0000(0x0004)
	struct FName                                       FuncName;                                         		// 0x0004(0x0008)
	float                                              Rate;                                             		// 0x000C(0x0004)
	float                                              Count;                                            		// 0x0010(0x0004)
	float                                              TimerTimeDilation;                                		// 0x0014(0x0004)
	class UObject*                                     TimerObj;                                         		// 0x0018(0x0004)
	unsigned long                                      bStateTimer : 1;                                  		// 0x001C(0x0004)
	struct FName                                       TimerStateName;                                   		// 0x0020(0x0008)
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x001C
struct FLUTBlender
{
	TArray<class UTexture*>                            LUTTextures;                                      		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<float>                                      LUTWeights;                                       		// 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bHasChanged : 1;                                  		// 0x0018(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
};

// ScriptStruct Engine.PostProcessVolume.MobileColorGradingParams
// 0x003C
struct FMobileColorGradingParams
{
	float                                              TransitionTime;                                   		// 0x0000(0x0004) (CPF_Edit)
	float                                              Blend;                                            		// 0x0004(0x0004) (CPF_Edit)
	float                                              Desaturation;                                     		// 0x0008(0x0004) (CPF_Edit)
	struct FLinearColor                                HighLights;                                       		// 0x000C(0x0010) (CPF_Edit)
	struct FLinearColor                                MidTones;                                         		// 0x001C(0x0010) (CPF_Edit)
	struct FLinearColor                                Shadows;                                          		// 0x002C(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.PostProcessVolume.MobilePostProcessSettings
// 0x0034
struct FMobilePostProcessSettings
{
	unsigned long                                      bOverride_Mobile_BlurAmount : 1;                  		// 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_TransitionTime : 1;              		// 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_Bloom_Scale : 1;                 		// 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_Bloom_Threshold : 1;             		// 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_Bloom_Tint : 1;                  		// 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_DOF_Distance : 1;                		// 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_DOF_MinRange : 1;                		// 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_DOF_MaxRange : 1;                		// 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_DOF_FarBlurFactor : 1;           		// 0x0000(0x0004)
	float                                              Mobile_BlurAmount;                                		// 0x0004(0x0004) (CPF_Edit)
	float                                              Mobile_TransitionTime;                            		// 0x0008(0x0004) (CPF_Edit)
	float                                              Mobile_Bloom_Scale;                               		// 0x000C(0x0004) (CPF_Edit)
	float                                              Mobile_Bloom_Threshold;                           		// 0x0010(0x0004) (CPF_Edit)
	struct FLinearColor                                Mobile_Bloom_Tint;                                		// 0x0014(0x0010) (CPF_Edit)
	float                                              Mobile_DOF_Distance;                              		// 0x0024(0x0004) (CPF_Edit)
	float                                              Mobile_DOF_MinRange;                              		// 0x0028(0x0004) (CPF_Edit)
	float                                              Mobile_DOF_MaxRange;                              		// 0x002C(0x0004) (CPF_Edit)
	float                                              Mobile_DOF_FarBlurFactor;                         		// 0x0030(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x0150
struct FPostProcessSettings
{
	unsigned long                                      bOverride_EnableBloom : 1;                        		// 0x0000(0x0004)
	unsigned long                                      bOverride_EnableDOF : 1;                          		// 0x0000(0x0004)
	unsigned long                                      bOverride_EnableMotionBlur : 1;                   		// 0x0000(0x0004)
	unsigned long                                      bOverride_EnableSceneEffect : 1;                  		// 0x0000(0x0004)
	unsigned long                                      bOverride_AllowAmbientOcclusion : 1;              		// 0x0000(0x0004)
	unsigned long                                      bOverride_OverrideRimShaderColor : 1;             		// 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_Scale : 1;                        		// 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_Threshold : 1;                    		// 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_Tint : 1;                         		// 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_ScreenBlendThreshold : 1;         		// 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_InterpolationDuration : 1;        		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FalloffExponent : 1;                		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_BlurKernelSize : 1;                 		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_BlurBloomKernelSize : 1;            		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_MaxNearBlurAmount : 1;              		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_MinBlurAmount : 1;                  		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_MaxFarBlurAmount : 1;               		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FocusType : 1;                      		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FocusInnerRadius : 1;               		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FocusDistance : 1;                  		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FocusPosition : 1;                  		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_InterpolationDuration : 1;          		// 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_BokehTexture : 1;                   		// 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_MaxVelocity : 1;             		// 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_Amount : 1;                  		// 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_FullMotionBlur : 1;          		// 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_CameraRotationThreshold : 1; 		// 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_CameraTranslationThreshold : 1;		// 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_InterpolationDuration : 1;   		// 0x0000(0x0004)
	unsigned long                                      bOverride_Scene_Desaturation : 1;                 		// 0x0000(0x0004)
	unsigned long                                      bOverride_Scene_Colorize : 1;                     		// 0x0000(0x0004)
	unsigned long                                      bOverride_Scene_TonemapperScale : 1;              		// 0x0000(0x0004)
	unsigned long                                      bOverride_Scene_ImageGrainScale : 1;              		// 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_HighLights : 1;                   		// 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_MidTones : 1;                     		// 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_Shadows : 1;                      		// 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_InterpolationDuration : 1;        		// 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_ColorGradingLUT : 1;              		// 0x0004(0x0004)
	unsigned long                                      bOverride_RimShader_Color : 1;                    		// 0x0004(0x0004)
	unsigned long                                      bOverride_RimShader_InterpolationDuration : 1;    		// 0x0004(0x0004)
	unsigned long                                      bOverride_MobileColorGrading : 1;                 		// 0x0004(0x0004)
	unsigned long                                      bEnableBloom : 1;                                 		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bEnableDOF : 1;                                   		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bEnableMotionBlur : 1;                            		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bEnableSceneEffect : 1;                           		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bAllowAmbientOcclusion : 1;                       		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bOverrideRimShaderColor : 1;                      		// 0x0004(0x0004) (CPF_Edit)
	float                                              Bloom_Scale;                                      		// 0x0008(0x0004) (CPF_Edit)
	float                                              Bloom_Threshold;                                  		// 0x000C(0x0004) (CPF_Edit)
	struct FColor                                      Bloom_Tint;                                       		// 0x0010(0x0004) (CPF_Edit)
	float                                              Bloom_ScreenBlendThreshold;                       		// 0x0014(0x0004) (CPF_Edit)
	float                                              Bloom_InterpolationDuration;                      		// 0x0018(0x0004) (CPF_Edit)
	float                                              DOF_BlurBloomKernelSize;                          		// 0x001C(0x0004) (CPF_Edit)
	float                                              DOF_FalloffExponent;                              		// 0x0020(0x0004) (CPF_Edit)
	float                                              DOF_BlurKernelSize;                               		// 0x0024(0x0004) (CPF_Edit)
	float                                              DOF_MaxNearBlurAmount;                            		// 0x0028(0x0004) (CPF_Edit)
	float                                              DOF_MinBlurAmount;                                		// 0x002C(0x0004) (CPF_Edit)
	float                                              DOF_MaxFarBlurAmount;                             		// 0x0030(0x0004) (CPF_Edit)
	TEnumAsByte<enum class EFocusType>                 DOF_FocusType;                                    		// 0x0034(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0035(0x0003) MISSED OFFSET
	float                                              DOF_FocusInnerRadius;                             		// 0x0038(0x0004) (CPF_Edit)
	float                                              DOF_FocusDistance;                                		// 0x003C(0x0004) (CPF_Edit)
	struct FVector                                     DOF_FocusPosition;                                		// 0x0040(0x000C) (CPF_Edit)
	float                                              DOF_InterpolationDuration;                        		// 0x004C(0x0004) (CPF_Edit)
	class UTexture2D*                                  DOF_BokehTexture;                                 		// 0x0050(0x0004) (CPF_Edit)
	float                                              MotionBlur_MaxVelocity;                           		// 0x0054(0x0004) (CPF_Edit)
	float                                              MotionBlur_Amount;                                		// 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      MotionBlur_FullMotionBlur : 1;                    		// 0x005C(0x0004) (CPF_Edit)
	float                                              MotionBlur_CameraRotationThreshold;               		// 0x0060(0x0004) (CPF_Edit)
	float                                              MotionBlur_CameraTranslationThreshold;            		// 0x0064(0x0004) (CPF_Edit)
	float                                              MotionBlur_InterpolationDuration;                 		// 0x0068(0x0004) (CPF_Edit)
	float                                              Scene_Desaturation;                               		// 0x006C(0x0004) (CPF_Edit)
	struct FVector                                     Scene_Colorize;                                   		// 0x0070(0x000C) (CPF_Edit)
	float                                              Scene_TonemapperScale;                            		// 0x007C(0x0004) (CPF_Edit)
	float                                              Scene_ImageGrainScale;                            		// 0x0080(0x0004) (CPF_Edit)
	struct FVector                                     Scene_HighLights;                                 		// 0x0084(0x000C) (CPF_Edit)
	struct FVector                                     Scene_MidTones;                                   		// 0x0090(0x000C) (CPF_Edit)
	struct FVector                                     Scene_Shadows;                                    		// 0x009C(0x000C) (CPF_Edit)
	float                                              Scene_InterpolationDuration;                      		// 0x00A8(0x0004) (CPF_Edit)
	struct FLinearColor                                RimShader_Color;                                  		// 0x00AC(0x0010) (CPF_Edit)
	float                                              RimShader_InterpolationDuration;                  		// 0x00BC(0x0004) (CPF_Edit)
	class UTexture*                                    ColorGrading_LookupTable;                         		// 0x00C0(0x0004) (CPF_Edit)
	struct FLUTBlender                                 ColorGradingLUT;                                  		// 0x00C4(0x001C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FMobileColorGradingParams                   MobileColorGrading;                               		// 0x00E0(0x003C) (CPF_Edit)
	struct FMobilePostProcessSettings                  MobilePostProcess;                                		// 0x011C(0x0034) (CPF_Edit)
};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x0010
struct FReverbSettings
{
	unsigned long                                      bApplyReverb : 1;                                 		// 0x0000(0x0004) (CPF_Edit)
	TEnumAsByte<enum class ReverbPreset>               ReverbType;                                       		// 0x0004(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	float                                              Volume;                                           		// 0x0008(0x0004) (CPF_Edit)
	float                                              FadeTime;                                         		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned long                                      bIsWorldInfo : 1;                                 		// 0x0000(0x0004)
	float                                              ExteriorVolume;                                   		// 0x0004(0x0004) (CPF_Edit)
	float                                              ExteriorTime;                                     		// 0x0008(0x0004) (CPF_Edit)
	float                                              ExteriorLPF;                                      		// 0x000C(0x0004) (CPF_Edit)
	float                                              ExteriorLPFTime;                                  		// 0x0010(0x0004) (CPF_Edit)
	float                                              InteriorVolume;                                   		// 0x0014(0x0004) (CPF_Edit)
	float                                              InteriorTime;                                     		// 0x0018(0x0004) (CPF_Edit)
	float                                              InteriorLPF;                                      		// 0x001C(0x0004) (CPF_Edit)
	float                                              InteriorLPFTime;                                  		// 0x0020(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0020
struct FNetViewer
{
	class APlayerController*                           InViewer;                                         		// 0x0000(0x0004)
	class AActor*                                      Viewer;                                           		// 0x0004(0x0004)
	struct FVector                                     ViewLocation;                                     		// 0x0008(0x000C)
	struct FVector                                     ViewDir;                                          		// 0x0014(0x000C)
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x0024
struct FMusicTrackStruct
{
	class USoundCue*                                   TheSoundCue;                                      		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bPersistentAcrossLevels : 1;                      		// 0x0004(0x0004) (CPF_Edit)
	float                                              FadeInTime;                                       		// 0x0008(0x0004) (CPF_Edit)
	float                                              FadeInVolumeLevel;                                		// 0x000C(0x0004) (CPF_Edit)
	float                                              FadeOutTime;                                      		// 0x0010(0x0004) (CPF_Edit)
	float                                              FadeOutVolumeLevel;                               		// 0x0014(0x0004) (CPF_Edit)
	struct FString                                     MP3Filename;                                      		// 0x0018(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	unsigned long                                      bUseHardware : 1;                                 		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bFixedTimeStep : 1;                               		// 0x0000(0x0004) (CPF_Edit)
	float                                              TimeStep;                                         		// 0x0004(0x0004) (CPF_Edit)
	int                                                MaxSubSteps;                                      		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                     		// 0x0000(0x000C) (CPF_Edit, CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                             		// 0x000C(0x000C) (CPF_Edit, CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentFluid;                                 		// 0x0018(0x000C) (CPF_Edit, CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentCloth;                                 		// 0x0024(0x000C) (CPF_Edit, CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                              		// 0x0030(0x000C) (CPF_Edit, CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	unsigned long                                      RigidBody : 1;                                    		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Fluid : 1;                                        		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cloth : 1;                                        		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      SoftBody : 1;                                     		// 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x0014
struct FApexModuleDestructibleSettings
{
	int                                                MaxChunkIslandCount;                              		// 0x0000(0x0004) (CPF_Edit)
	int                                                MaxShapeCount;                                    		// 0x0004(0x0004) (CPF_Edit)
	int                                                MaxRrbActorCount;                                 		// 0x0008(0x0004)
	float                                              MaxChunkSeparationLOD;                            		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bOverrideMaxChunkSeparationLOD : 1;               		// 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	unsigned long                                      bDisableLod : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	int                                                ParticlesLodMin;                                  		// 0x0004(0x0004) (CPF_Edit)
	int                                                ParticlesLodMax;                                  		// 0x0008(0x0004) (CPF_Edit)
	int                                                PacketsPerPhysXParticleSystemMax;                 		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bApplyCylindricalPacketCulling : 1;               		// 0x0010(0x0004) (CPF_Edit)
	float                                              SpawnLodVsFifoBias;                               		// 0x0014(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                         		// 0x0000(0x0018) (CPF_Edit, CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0020
struct FScreenMessageString
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.WorldInfo.ScreenMessageString.Key
	struct FString                                     ScreenMessage;                                    		// 0x0008(0x000C) (CPF_Transient, CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FColor                                      DisplayColor;                                     		// 0x0014(0x0004) (CPF_Transient, CPF_AlwaysInit)
	float                                              TimeToDisplay;                                    		// 0x0018(0x0004) (CPF_Transient, CPF_AlwaysInit)
	float                                              CurrentTimeDisplayed;                             		// 0x001C(0x0004) (CPF_Transient, CPF_AlwaysInit)
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x0058
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                         		// 0x0000(0x0004) (CPF_Edit)
	int                                                NumIndirectLightingBounces;                       		// 0x0004(0x0004) (CPF_Edit)
	struct FColor                                      EnvironmentColor;                                 		// 0x0008(0x0004) (CPF_Edit)
	float                                              EnvironmentIntensity;                             		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bEnableAdvancedEnvironmentColor : 1;              		// 0x0010(0x0004) (CPF_Edit)
	struct FColor                                      EnvironmentSunColor;                              		// 0x0014(0x0004) (CPF_Edit)
	float                                              EnvironmentSunIntensity;                          		// 0x0018(0x0004) (CPF_Edit)
	float                                              EnvironmentLightTerminatorAngle;                  		// 0x001C(0x0004) (CPF_Edit)
	struct FVector                                     EnvironmentLightDirection;                        		// 0x0020(0x000C) (CPF_Edit)
	float                                              EmissiveBoost;                                    		// 0x002C(0x0004) (CPF_Edit)
	float                                              DiffuseBoost;                                     		// 0x0030(0x0004) (CPF_Edit)
	float                                              SpecularBoost;                                    		// 0x0034(0x0004)
	float                                              IndirectNormalInfluenceBoost;                     		// 0x0038(0x0004) (CPF_Edit)
	unsigned long                                      bUseAmbientOcclusion : 1;                         		// 0x003C(0x0004) (CPF_Edit)
	unsigned long                                      bEnableImageReflectionShadowing : 1;              		// 0x003C(0x0004) (CPF_Edit)
	float                                              DirectIlluminationOcclusionFraction;              		// 0x0040(0x0004) (CPF_Edit)
	float                                              IndirectIlluminationOcclusionFraction;            		// 0x0044(0x0004) (CPF_Edit)
	float                                              OcclusionExponent;                                		// 0x0048(0x0004) (CPF_Edit)
	float                                              FullyOccludedSamplesFraction;                     		// 0x004C(0x0004) (CPF_Edit)
	float                                              MaxOcclusionDistance;                             		// 0x0050(0x0004) (CPF_Edit)
	unsigned long                                      bVisualizeMaterialDiffuse : 1;                    		// 0x0054(0x0004) (CPF_Edit)
	unsigned long                                      bVisualizeAmbientOcclusion : 1;                   		// 0x0054(0x0004) (CPF_Edit)
	unsigned long                                      bCompressShadowmap : 1;                           		// 0x0054(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PitchTekClearSettings
// 0x0010
struct FPitchTekClearSettings
{
	unsigned long                                      bClearColorTargetEveryFrame : 1;                  		// 0x0000(0x0004) (CPF_Edit)
	struct FColor                                      ColorTargetClearColor;                            		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bClearDataTargetEveryFrame : 1;                   		// 0x0008(0x0004) (CPF_Edit)
	struct FColor                                      DataTargetClearColor;                             		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PitchTekWorldInfoSettings
// 0x0044
struct FPitchTekWorldInfoSettings
{
	TEnumAsByte<enum class EPitchTekTargetSize>        ColorTargetSize;                                  		// 0x0000(0x0001) (CPF_Edit)
	TEnumAsByte<enum class EPitchTekTargetSize>        DataTargetSize;                                   		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0002(0x0002) MISSED OFFSET
	float                                              PitchLengthX;                                     		// 0x0004(0x0004) (CPF_Edit)
	float                                              PitchLengthY;                                     		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bUseInitialColorTexture : 1;                      		// 0x000C(0x0004) (CPF_Edit)
	class UTexture2D*                                  InitialColorTexture;                              		// 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      bUseInitialDataTexture : 1;                       		// 0x0014(0x0004) (CPF_Edit)
	class UTexture2D*                                  InitialDataTexture;                               		// 0x0018(0x0004) (CPF_Edit)
	struct FPitchTekClearSettings                      ClearSettings;                                    		// 0x001C(0x0010) (CPF_Edit)
	unsigned long                                      bRenderCarPositionDecal : 1;                      		// 0x002C(0x0004) (CPF_Edit)
	unsigned long                                      bRenderBallDecalOnContact : 1;                    		// 0x002C(0x0004) (CPF_Edit)
	float                                              BallContactHeight;                                		// 0x0030(0x0004) (CPF_Edit)
	float                                              WheelContactHeight;                               		// 0x0034(0x0004) (CPF_Edit)
	float                                              CarBodyContactHeight;                             		// 0x0038(0x0004) (CPF_Edit)
	float                                              DemolitionExplosionMaxHeight;                     		// 0x003C(0x0004) (CPF_Edit)
	float                                              JumpBlastMaxHeight;                               		// 0x0040(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PitchTekTextureDecalSettings
// 0x0018
struct FPitchTekTextureDecalSettings
{
	unsigned long                                      bDrawColorDecal : 1;                              		// 0x0000(0x0004) (CPF_Edit)
	float                                              ColorTextureScale;                                		// 0x0004(0x0004) (CPF_Edit)
	class UTexture2D*                                  ColorTexture;                                     		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bDrawDataDecal : 1;                               		// 0x000C(0x0004) (CPF_Edit)
	float                                              DataTextureScale;                                 		// 0x0010(0x0004) (CPF_Edit)
	class UTexture2D*                                  DataTexture;                                      		// 0x0014(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// 0x001C
struct FHostMigrationState
{
	TEnumAsByte<enum class EHostMigrationProgress>     HostMigrationProgress;                            		// 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              HostMigrationElapsedTime;                         		// 0x0004(0x0004)
	float                                              HostMigrationTravelCountdown;                     		// 0x0008(0x0004)
	struct FString                                     HostMigrationTravelURL;                           		// 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bHostMigrationEnabled : 1;                        		// 0x0018(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x004C
struct FOnlineContent
{
	TEnumAsByte<enum class EOnlineContentType>         ContentType;                                      		// 0x0000(0x0001)
	unsigned char                                      UserIndex;                                        		// 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0002(0x0002) MISSED OFFSET
	unsigned long                                      bIsCorrupt : 1;                                   		// 0x0004(0x0004)
	int                                                DeviceID;                                         		// 0x0008(0x0004)
	int                                                LicenseMask;                                      		// 0x000C(0x0004)
	struct FString                                     FriendlyName;                                     		// 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x001C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ContentPath;                                      		// 0x0028(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             ContentPackages;                                  		// 0x0034(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             ContentFiles;                                     		// 0x0040(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.SceNpOnlineId
// 0x0014
struct FSceNpOnlineId
{
	unsigned char                                      UnknownData00[0x10];                              		// 0x0000(0x0010) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.SceNpOnlineId.Data
	unsigned char                                      Term;                                             		// 0x0010(0x0001)
	unsigned char                                      Dummy[0x3];                                       		// 0x0011(0x0001)
};

// ScriptStruct Engine.OnlineSubsystem.SceNpId
// 0x0024
struct FSceNpId
{
	struct FSceNpOnlineId                              Handle;                                           		// 0x0000(0x0014) (CPF_Const)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0014(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.SceNpId.Opt
	unsigned char                                      UnknownData01[0x8];                               		// 0x001C(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.SceNpId.Reserved
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x002E
struct FUniqueNetId
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.UniqueNetId.Uid
	struct FSceNpId                                    NpId;                                             		// 0x0008(0x0024)
	TEnumAsByte<enum class OnlinePlatform>             Platform;                                         		// 0x002C(0x0001)
	unsigned char                                      SplitscreenID;                                    		// 0x002D(0x0001)
};

// ScriptStruct Engine.Engine.NetworkEncryptionKey
// 0x0070
struct FNetworkEncryptionKey
{
	TArray<unsigned char>                              EncryptionKey;                                    		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<unsigned char>                              InitializationVector;                             		// 0x000C(0x000C) (CPF_NeedCtorLink)
	TArray<unsigned char>                              HMACKey;                                          		// 0x0018(0x000C) (CPF_NeedCtorLink)
	TArray<unsigned char>                              SessionIdentifier;                                		// 0x0024(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0030(0x0030)
	int                                                Id;                                               		// 0x0060(0x0004)
	unsigned long                                      InUse : 1;                                        		// 0x0064(0x0004)
	struct FDouble                                     TimeLastUsed;                                     		// 0x0068(0x0008)
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                               		// 0x0000(0x0004) (CPF_Config, CPF_GlobalConfig)
	struct FColor                                      Out;                                              		// 0x0004(0x0004) (CPF_Config, CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x001C
struct FStatColorMapping
{
	struct FString                                     StatName;                                         		// 0x0000(0x000C) (CPF_Config, CPF_GlobalConfig, CPF_NeedCtorLink)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                         		// 0x000C(0x000C) (CPF_Config, CPF_GlobalConfig, CPF_NeedCtorLink)
	unsigned long                                      DisableBlend : 1;                                 		// 0x0018(0x0004) (CPF_Config, CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0024
struct FDropNoteInfo
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C)
	struct FRotator                                    Rotation;                                         		// 0x000C(0x000C)
	struct FString                                     Comment;                                          		// 0x0018(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.URL
// 0x0044
struct FURL
{
	struct FString                                     Protocol;                                         		// 0x0000(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Host;                                             		// 0x000C(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	int                                                Port;                                             		// 0x0018(0x0004) (CPF_AlwaysInit)
	struct FString                                     Map;                                              		// 0x001C(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	TArray<struct FString>                             Op;                                               		// 0x0028(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Portal;                                           		// 0x0034(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	int                                                Valid;                                            		// 0x0040(0x0004) (CPF_AlwaysInit)
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                      		// 0x0000(0x0008)
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008(0x0004)
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008(0x0004)
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0028
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<enum class EFullyLoadPackageType>      FullyLoadType;                                    		// 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	struct FString                                     Tag;                                              		// 0x0004(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               PackagesToLoad;                                   		// 0x0010(0x000C) (CPF_NeedCtorLink)
	TArray<class UObject*>                             LoadedObjects;                                    		// 0x001C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x000C
struct FNamedNetDriver
{
	struct FName                                       NetDriverName;                                    		// 0x0000(0x0008)
	struct FPointer                                    NetDriver;                                        		// 0x0008(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x0018
struct FAnimTag
{
	struct FString                                     Tag;                                              		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             Contains;                                         		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                             		// 0x0000(0x0004)
	int                                                Index;                                            		// 0x0004(0x0004)
	int                                                SelectionIndex;                                   		// 0x0008(0x0004)
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                             		// 0x0000(0x0004) (CPF_Edit)
	float                                              CullDistance;                                     		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x0064
struct FKConvexElem
{
	TArray<struct FVector>                             VertexData;                                       		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FPlane>                              PermutedVertexData;                               		// 0x000C(0x000C) (CPF_NeedCtorLink)
	TArray<int>                                        FaceTriData;                                      		// 0x0018(0x000C) (CPF_NeedCtorLink)
	TArray<struct FVector>                             EdgeDirections;                                   		// 0x0024(0x000C) (CPF_NeedCtorLink)
	TArray<struct FVector>                             FaceNormalDirections;                             		// 0x0030(0x000C) (CPF_NeedCtorLink)
	TArray<struct FPlane>                              FacePlaneData;                                    		// 0x003C(0x000C) (CPF_NeedCtorLink)
	struct FBox                                        ElemBox;                                          		// 0x0048(0x001C)
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x0024
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class AActor*                                      Base;                                             		// 0x0004(0x0004)
	struct FVector                                     RelativeLocation;                                 		// 0x0008(0x000C)
	struct FRotator                                    RelativeRotation;                                 		// 0x0014(0x000C)
	unsigned long                                      bInheritBaseScale : 1;                            		// 0x0020(0x0004)
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0018
struct FConsoleMessage
{
	struct FString                                     Text;                                             		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FColor                                      TextColor;                                        		// 0x000C(0x0004)
	float                                              MessageLife;                                      		// 0x0010(0x0004)
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0014(0x0004)
};

// ScriptStruct Engine.HUD.HudLocalizedMessage
// 0x0040
struct FHudLocalizedMessage
{
	class UClass*                                      Message;                                          		// 0x0000(0x0004)
	struct FString                                     StringMessage;                                    		// 0x0004(0x000C) (CPF_NeedCtorLink)
	int                                                Switch;                                           		// 0x0010(0x0004)
	float                                              EndOfLife;                                        		// 0x0014(0x0004)
	float                                              Lifetime;                                         		// 0x0018(0x0004)
	float                                              PosY;                                             		// 0x001C(0x0004)
	struct FColor                                      DrawColor;                                        		// 0x0020(0x0004)
	int                                                FontSize;                                         		// 0x0024(0x0004)
	class UFont*                                       StringFont;                                       		// 0x0028(0x0004)
	float                                              DX;                                               		// 0x002C(0x0004)
	float                                              DY;                                               		// 0x0030(0x0004)
	unsigned long                                      Drawn : 1;                                        		// 0x0034(0x0004)
	int                                                Count;                                            		// 0x0038(0x0004)
	class UObject*                                     OptionalObject;                                   		// 0x003C(0x0004)
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0034
struct FKismetDrawTextInfo
{
	struct FString                                     MessageText;                                      		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     AppendedText;                                     		// 0x000C(0x000C) (CPF_NeedCtorLink)
	class UFont*                                       MessageFont;                                      		// 0x0018(0x0004) (CPF_Edit)
	struct FVector2D                                   MessageFontScale;                                 		// 0x001C(0x0008) (CPF_Edit)
	struct FVector2D                                   MessageOffset;                                    		// 0x0024(0x0008) (CPF_Edit)
	struct FColor                                      MessageColor;                                     		// 0x002C(0x0004) (CPF_Edit)
	float                                              MessageEndTime;                                   		// 0x0030(0x0004)
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0014
struct FActorReference
{
	class AActor*                                      Actor;                                            		// 0x0000(0x0004) (CPF_Edit)
	struct FGuid                                       Guid;                                             		// 0x0004(0x0010) (CPF_Edit, CPF_Const, CPF_EditConst)
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0018
struct FGameClassShortName
{
	struct FString                                     ShortName;                                        		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     GameClassName;                                    		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0034
struct FGameTypePrefix
{
	struct FString                                     Prefix;                                           		// 0x0000(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bUsesCommonPackage : 1;                           		// 0x000C(0x0004)
	struct FString                                     GameType;                                         		// 0x0010(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             AdditionalGameTypes;                              		// 0x001C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             ForcedObjects;                                    		// 0x0028(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0031
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                      		// 0x0000(0x001C)
	struct FVector                                     BoxCenter;                                        		// 0x001C(0x000C)
	struct FPointer                                    OctreeNode;                                       		// 0x0028(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	class UObject*                                     Owner;                                            		// 0x002C(0x0004) (CPF_Const, CPF_NoExport)
	unsigned char                                      OwnerType;                                        		// 0x0030(0x0001) (CPF_Const, CPF_NoExport)
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x0010
struct FDebugNavCost
{
	struct FString                                     Desc;                                             		// 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                Cost;                                             		// 0x000C(0x0004)
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x0014
struct FFireLink
{
	TArray<unsigned char>                              Interactions;                                     		// 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                PackedProperties_CoverPairRefAndDynamicInfo;      		// 0x000C(0x0004) (CPF_Const)
	unsigned long                                      bFallbackLink : 1;                                		// 0x0010(0x0004)
	unsigned long                                      bDynamicIndexInited : 1;                          		// 0x0010(0x0004)
};

// ScriptStruct Engine.Pylon.PolyReference
// 0x001C
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                      		// 0x0000(0x0014)
	int                                                PolyId;                                           		// 0x0014(0x0004)
	struct FPointer                                    CachedPoly;                                       		// 0x0018(0x0004) (CPF_Native)
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0034
struct FBasedPosition
{
	class AActor*                                      Base;                                             		// 0x0000(0x0004) (CPF_Edit)
	struct FVector                                     Position;                                         		// 0x0004(0x000C) (CPF_Edit)
	struct FVector                                     CachedBaseLocation;                               		// 0x0010(0x000C)
	struct FRotator                                    CachedBaseRotation;                               		// 0x001C(0x000C)
	struct FVector                                     CachedTransPosition;                              		// 0x0028(0x000C)
};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// 0x0054
struct FSlotMoveRef
{
	struct FPolyReference                              Poly;                                             		// 0x0000(0x001C) (CPF_Edit)
	struct FBasedPosition                              Dest;                                             		// 0x001C(0x0034) (CPF_Edit)
	int                                                Direction;                                        		// 0x0050(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x0008
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000(0x0004) (CPF_Edit, CPF_EditConst)
	int                                                SlotIdx;                                          		// 0x0004(0x0004) (CPF_Edit, CPF_EditConst)
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x0074
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                        		// 0x0000(0x0004)
	float                                              SlotValidAfterTime;                               		// 0x0004(0x0004) (CPF_Transient)
	TEnumAsByte<enum class ECoverType>                 ForceCoverType;                                   		// 0x0008(0x0001) (CPF_Edit)
	TEnumAsByte<enum class ECoverType>                 CoverType;                                        		// 0x0009(0x0001) (CPF_Edit, CPF_EditConst)
	TEnumAsByte<enum class ECoverLocationDescription>  LocationDescription;                              		// 0x000A(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x1];                               		// 0x000B(0x0001) MISSED OFFSET
	struct FVector                                     LocationOffset;                                   		// 0x000C(0x000C)
	struct FRotator                                    RotationOffset;                                   		// 0x0018(0x000C)
	TArray<TEnumAsByte<enum class ECoverAction>>       Actions;                                          		// 0x0024(0x000C) (CPF_NeedCtorLink)
	TArray<struct FFireLink>                           FireLinks;                                        		// 0x0030(0x000C) (CPF_Edit, CPF_EditConst, CPF_NeedCtorLink)
	TArray<struct FFireLink>                           RejectedFireLinks;                                		// 0x003C(0x000C) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NeedCtorLink)
	TArray<int>                                        ExposedCoverPackedProperties;                     		// 0x0048(0x000C) (CPF_NeedCtorLink)
	int                                                TurnTargetPackedProperties;                       		// 0x0054(0x0004)
	TArray<struct FSlotMoveRef>                        SlipRefs;                                         		// 0x0058(0x000C) (CPF_NeedCtorLink)
	TArray<struct FCoverInfo>                          OverlapClaimsList;                                		// 0x0064(0x000C) (CPF_Edit, CPF_EditConst, CPF_NeedCtorLink)
	unsigned long                                      bLeanLeft : 1;                                    		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bLeanRight : 1;                                   		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bForceCanPopUp : 1;                               		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bCanPopUp : 1;                                    		// 0x0070(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bCanMantle : 1;                                   		// 0x0070(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bCanClimbUp : 1;                                  		// 0x0070(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bForceCanCoverSlip_Left : 1;                      		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bForceCanCoverSlip_Right : 1;                     		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bCanCoverSlip_Left : 1;                           		// 0x0070(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bCanCoverSlip_Right : 1;                          		// 0x0070(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bCanSwatTurn_Left : 1;                            		// 0x0070(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bCanSwatTurn_Right : 1;                           		// 0x0070(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bEnabled : 1;                                     		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bAllowPopup : 1;                                  		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bAllowMantle : 1;                                 		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bAllowCoverSlip : 1;                              		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bAllowClimbUp : 1;                                		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bAllowSwatTurn : 1;                               		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bForceNoGroundAdjust : 1;                         		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bPlayerOnly : 1;                                  		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bPreferLeanOverPopup : 1;                         		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bDestructible : 1;                                		// 0x0070(0x0004) (CPF_Transient)
	unsigned long                                      bSelected : 1;                                    		// 0x0070(0x0004) (CPF_Transient)
	unsigned long                                      bFailedToFindSurface : 1;                         		// 0x0070(0x0004) (CPF_Edit, CPF_Transient, CPF_EditConst)
};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// 0x0018
struct FDynamicLinkInfo
{
	struct FVector                                     LastTargetLocation;                               		// 0x0000(0x000C)
	struct FVector                                     LastSrcLocation;                                  		// 0x000C(0x000C)
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                               		// 0x0000(0x0040) (CPF_Edit, CPF_EditConst)
	float                                              Radius;                                           		// 0x0040(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bNoRBCollision : 1;                               		// 0x0044(0x0004) (CPF_Edit)
	unsigned long                                      bPerPolyShape : 1;                                		// 0x0044(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                               		// 0x0000(0x0040) (CPF_Edit, CPF_EditConst)
	float                                              X;                                                		// 0x0040(0x0004) (CPF_Edit, CPF_EditConst)
	float                                              Y;                                                		// 0x0044(0x0004) (CPF_Edit, CPF_EditConst)
	float                                              Z;                                                		// 0x0048(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bNoRBCollision : 1;                               		// 0x004C(0x0004) (CPF_Edit)
	unsigned long                                      bPerPolyShape : 1;                                		// 0x004C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                               		// 0x0000(0x0040) (CPF_Edit, CPF_EditConst)
	float                                              Radius;                                           		// 0x0040(0x0004) (CPF_Edit, CPF_EditConst)
	float                                              Length;                                           		// 0x0044(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bNoRBCollision : 1;                               		// 0x0048(0x0004) (CPF_Edit)
	unsigned long                                      bPerPolyShape : 1;                                		// 0x0048(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x0038
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                      		// 0x0000(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	TArray<struct FKBoxElem>                           BoxElems;                                         		// 0x000C(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	TArray<struct FKSphylElem>                         SphylElems;                                       		// 0x0018(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	TArray<struct FKConvexElem>                        ConvexElems;                                      		// 0x0024(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	struct FPointer                                    RenderInfo;                                       		// 0x0030(0x0004) (CPF_Native, CPF_NoImport)
	unsigned long                                      bSkipCloseAndParallelChecks : 1;                  		// 0x0034(0x0004) (CPF_Edit)
	unsigned long                                      bSimpleCollisionPlane : 1;                        		// 0x0034(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.StaticMeshActor.PreCombinedStaticMeshActor
// 0x0044
struct FPreCombinedStaticMeshActor
{
	class UStaticMesh*                                 Mesh;                                             		// 0x0000(0x0004)
	struct FVector                                     Location;                                         		// 0x0004(0x000C)
	struct FRotator                                    Rotation;                                         		// 0x0010(0x000C)
	struct FVector                                     PrePivot;                                         		// 0x001C(0x000C)
	float                                              DrawScale;                                        		// 0x0028(0x0004)
	struct FVector                                     DrawScale3D;                                      		// 0x002C(0x000C)
	struct FVector                                     ComponentScale3D;                                 		// 0x0038(0x000C)
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x0008
struct FSMMaterialSetterDatum
{
	int                                                MaterialIndex;                                    		// 0x0000(0x0004) (CPF_Edit)
	class UMaterialInterface*                          TheMaterial;                                      		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0010
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                        		// 0x0000(0x0008) (CPF_Edit)
	float                                              FloatParam;                                       		// 0x0008(0x0004) (CPF_Edit)
	class USoundNodeWave*                              WaveParam;                                        		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SplineAudioComponent.InterpPointOnSpline
// 0x0014
struct FInterpPointOnSpline
{
	struct FVector                                     Position;                                         		// 0x0000(0x000C) (CPF_Edit)
	float                                              InVal;                                            		// 0x000C(0x0004) (CPF_Edit)
	float                                              Length;                                           		// 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.MultiCueSplineAudioComponent.MultiCueSplineSoundSlot
// 0x0030
struct FMultiCueSplineSoundSlot
{
	class USoundCue*                                   SoundCue;                                         		// 0x0000(0x0004) (CPF_Edit)
	float                                              PitchScale;                                       		// 0x0004(0x0004) (CPF_Edit)
	float                                              VolumeScale;                                      		// 0x0008(0x0004) (CPF_Edit)
	int                                                StartPoint;                                       		// 0x000C(0x0004) (CPF_Edit)
	int                                                EndPoint;                                         		// 0x0010(0x0004) (CPF_Edit)
	struct FDouble                                     LastUpdateTime;                                   		// 0x0014(0x0008) (CPF_Const, CPF_Native)
	float                                              SourceInteriorVolume;                             		// 0x001C(0x0004) (CPF_Const, CPF_Native)
	float                                              SourceInteriorLPF;                                		// 0x0020(0x0004) (CPF_Const, CPF_Native)
	float                                              CurrentInteriorVolume;                            		// 0x0024(0x0004) (CPF_Const, CPF_Native)
	float                                              CurrentInteriorLPF;                               		// 0x0028(0x0004) (CPF_Const, CPF_Native)
	unsigned long                                      bPlaying : 1;                                     		// 0x002C(0x0004)
};

// ScriptStruct Engine.SimpleSplineAudioComponent.SplineSoundSlot
// 0x0030
struct FSplineSoundSlot
{
	class USoundNodeWave*                              Wave;                                             		// 0x0000(0x0004) (CPF_Edit)
	float                                              PitchScale;                                       		// 0x0004(0x0004) (CPF_Edit)
	float                                              VolumeScale;                                      		// 0x0008(0x0004) (CPF_Edit)
	int                                                StartPoint;                                       		// 0x000C(0x0004) (CPF_Edit)
	int                                                EndPoint;                                         		// 0x0010(0x0004) (CPF_Edit)
	float                                              Weight;                                           		// 0x0014(0x0004) (CPF_Edit)
	struct FDouble                                     LastUpdateTime;                                   		// 0x0018(0x0008) (CPF_Const, CPF_Native)
	float                                              SourceInteriorVolume;                             		// 0x0020(0x0004) (CPF_Const, CPF_Native)
	float                                              SourceInteriorLPF;                                		// 0x0024(0x0004) (CPF_Const, CPF_Native)
	float                                              CurrentInteriorVolume;                            		// 0x0028(0x0004) (CPF_Const, CPF_Native)
	float                                              CurrentInteriorLPF;                               		// 0x002C(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000(0x0004)
	unsigned long                                      BSP : 1;                                          		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Static : 1;                                       		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Dynamic : 1;                                      		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      CompositeDynamic : 1;                             		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Skybox : 1;                                       		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Unnamed_2 : 1;                                    		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Unnamed_3 : 1;                                    		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Unnamed_4 : 1;                                    		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Unnamed_5 : 1;                                    		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Unnamed_6 : 1;                                    		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Unnamed_7 : 1;                                    		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_2 : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_3 : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_4 : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_5 : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_6 : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_7 : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_8 : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_9 : 1;                                  		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_10 : 1;                                 		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Cinematic_11 : 1;                                 		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Gameplay_2 : 1;                                   		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Gameplay_3 : 1;                                   		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Gameplay_4 : 1;                                   		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Gameplay_5 : 1;                                   		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      Crowd : 1;                                        		// 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;                                      		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      Nothing : 1;                                      		// 0x0000(0x0004) (CPF_Const)
	unsigned long                                      Pawn : 1;                                         		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      Vehicle : 1;                                      		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      Water : 1;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      GameplayPhysics : 1;                              		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      EffectPhysics : 1;                                		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      Ball : 1;                                         		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      VehicleBlocker : 1;                               		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      BallBlocker : 1;                                  		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      Untitled4 : 1;                                    		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      Cloth : 1;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      FluidDrain : 1;                                   		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      SoftBody : 1;                                     		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      FracturedMeshPart : 1;                            		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      BlockingVolume : 1;                               		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      DeadPawn : 1;                                     		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      Clothing : 1;                                     		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      ClothingCollision : 1;                            		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x000C
struct FKCachedConvexData_Mirror
{
	TArray<int>                                        CachedConvexElements;                             		// 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0008
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                           		// 0x0000(0x0004)
	class AActor*                                      Destination;                                      		// 0x0004(0x0004)
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0031
struct FClientAdjustment
{
	float                                              TimeStamp;                                        		// 0x0000(0x0004)
	TEnumAsByte<enum class EPhysics>                   newPhysics;                                       		// 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	struct FVector                                     NewLoc;                                           		// 0x0008(0x000C)
	struct FVector                                     NewVel;                                           		// 0x0014(0x000C)
	class AActor*                                      NewBase;                                          		// 0x0020(0x0004)
	struct FVector                                     NewFloor;                                         		// 0x0024(0x000C)
	unsigned char                                      bAckGoodMove;                                     		// 0x0030(0x0001)
};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// 0x0038
struct FConnectedPeerInfo
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000(0x0030)
	TEnumAsByte<enum class ENATType>                   NatType;                                          		// 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0031(0x0003) MISSED OFFSET
	unsigned long                                      bLostConnectionToHost : 1;                        		// 0x0034(0x0004)
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	TEnumAsByte<enum class EInputTypes>                Type;                                             		// 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                            		// 0x0004(0x0004)
	float                                              TimeDelta;                                        		// 0x0008(0x0004)
	TEnumAsByte<enum class EInputMatchAction>          Action;                                           		// 0x000C(0x0001)
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0040
struct FInputMatchRequest
{
	TArray<struct FInputEntry>                         Inputs;                                           		// 0x0000(0x000C) (CPF_NeedCtorLink)
	class AActor*                                      MatchActor;                                       		// 0x000C(0x0004)
	struct FName                                       MatchFuncName;                                    		// 0x0010(0x0008)
	struct FScriptDelegate                             MatchDelegate;                                    		// 0x0018(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0018(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FName                                       FailedFuncName;                                   		// 0x0028(0x0008)
	struct FName                                       RequestName;                                      		// 0x0030(0x0008)
	int                                                MatchIdx;                                         		// 0x0038(0x0004) (CPF_Transient)
	float                                              LastMatchTime;                                    		// 0x003C(0x0004) (CPF_Transient)
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0050
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                         		// 0x0000(0x0004)
	struct FVector                                     SrcActorOffset;                                   		// 0x0004(0x000C)
	struct FVector                                     SrcActorDesiredOffset;                            		// 0x0010(0x000C)
	struct FString                                     DebugText;                                        		// 0x001C(0x000C) (CPF_NeedCtorLink)
	float                                              TimeRemaining;                                    		// 0x0028(0x0004) (CPF_Transient)
	float                                              Duration;                                         		// 0x002C(0x0004)
	struct FColor                                      TextColor;                                        		// 0x0030(0x0004)
	unsigned long                                      bAbsoluteLocation : 1;                            		// 0x0034(0x0004)
	unsigned long                                      bKeepAttachedToActor : 1;                         		// 0x0034(0x0004)
	struct FVector                                     OrigActorLocation;                                		// 0x0038(0x000C)
	class UFont*                                       Font;                                             		// 0x0044(0x0004)
	struct FVector2D                                   textscale;                                        		// 0x0048(0x0008)
};

// ScriptStruct Engine.CloudSaveSystem.GetSaveDataCallbackStruct
// 0x0014
struct FGetSaveDataCallbackStruct
{
	int                                                SlotIndex;                                        		// 0x0000(0x0004)
	struct FScriptDelegate                             Callback;                                         		// 0x0004(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct Engine.CloudSaveSystem.SetSaveDataCallbackStruct
// 0x0014
struct FSetSaveDataCallbackStruct
{
	int                                                SlotIndex;                                        		// 0x0000(0x0004)
	struct FScriptDelegate                             Callback;                                         		// 0x0004(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct Engine.CloudSaveSystem.SaveSlotOperation
// 0x0005
struct FSaveSlotOperation
{
	int                                                SlotIndex;                                        		// 0x0000(0x0004)
	TEnumAsByte<enum class SaveSlotOperationEnum>      SlotOperation;                                    		// 0x0004(0x0001)
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                            		// 0x0000(0x0004)
	float                                              KeyOut;                                           		// 0x0004(0x0004)
	unsigned long                                      TangentsValid : 1;                                		// 0x0008(0x0004)
	float                                              TangentIn;                                        		// 0x000C(0x0004)
	float                                              TangentOut;                                       		// 0x0010(0x0004)
	TEnumAsByte<enum class EInterpCurveMode>           IntepMode;                                        		// 0x0014(0x0001)
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                           		// 0x0000(0x0004) (CPF_Edit)
	int                                                StartV;                                           		// 0x0004(0x0004) (CPF_Edit)
	int                                                USize;                                            		// 0x0008(0x0004) (CPF_Edit)
	int                                                VSize;                                            		// 0x000C(0x0004) (CPF_Edit)
	unsigned char                                      TextureIndex;                                     		// 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                   		// 0x0014(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x0094
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                         		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	float                                              Height;                                           		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bEnableAntialiasing : 1;                          		// 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      bEnableBold : 1;                                  		// 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      bEnableItalic : 1;                                		// 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      bEnableUnderline : 1;                             		// 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      bAlphaOnly : 1;                                   		// 0x0010(0x0004) (CPF_Edit)
	TEnumAsByte<enum class EFontImportCharacterSet>    CharacterSet;                                     		// 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0015(0x0003) MISSED OFFSET
	struct FString                                     Chars;                                            		// 0x0018(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     UnicodeRange;                                     		// 0x0024(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     CharsFilePath;                                    		// 0x0030(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     CharsFileWildcard;                                		// 0x003C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bCreatePrintableOnly : 1;                         		// 0x0048(0x0004) (CPF_Edit)
	unsigned long                                      bIncludeASCIIRange : 1;                           		// 0x0048(0x0004) (CPF_Edit)
	struct FLinearColor                                ForegroundColor;                                  		// 0x004C(0x0010) (CPF_Edit)
	unsigned long                                      bEnableDropShadow : 1;                            		// 0x005C(0x0004) (CPF_Edit)
	int                                                TexturePageWidth;                                 		// 0x0060(0x0004) (CPF_Edit)
	int                                                TexturePageMaxHeight;                             		// 0x0064(0x0004) (CPF_Edit)
	int                                                XPadding;                                         		// 0x0068(0x0004) (CPF_Edit)
	int                                                YPadding;                                         		// 0x006C(0x0004) (CPF_Edit)
	int                                                ExtendBoxTop;                                     		// 0x0070(0x0004) (CPF_Edit)
	int                                                ExtendBoxBottom;                                  		// 0x0074(0x0004) (CPF_Edit)
	int                                                ExtendBoxRight;                                   		// 0x0078(0x0004) (CPF_Edit)
	int                                                ExtendBoxLeft;                                    		// 0x007C(0x0004) (CPF_Edit)
	unsigned long                                      bEnableLegacyMode : 1;                            		// 0x0080(0x0004) (CPF_Edit)
	int                                                Kerning;                                          		// 0x0084(0x0004) (CPF_Edit)
	unsigned long                                      bUseDistanceFieldAlpha : 1;                       		// 0x0088(0x0004) (CPF_Edit)
	int                                                DistanceFieldScaleFactor;                         		// 0x008C(0x0004) (CPF_Edit)
	float                                              DistanceFieldScanRadiusScale;                     		// 0x0090(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x000C
struct FWaveformSample
{
	unsigned char                                      LeftAmplitude;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      RightAmplitude;                                   		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      LeftTriggerAmplitude;                             		// 0x0002(0x0001) (CPF_Edit)
	unsigned char                                      RightTriggerAmplitude;                            		// 0x0003(0x0001) (CPF_Edit)
	TEnumAsByte<enum class EWaveformFunction>          LeftFunction;                                     		// 0x0004(0x0001) (CPF_Edit)
	TEnumAsByte<enum class EWaveformFunction>          RightFunction;                                    		// 0x0005(0x0001) (CPF_Edit)
	TEnumAsByte<enum class EWaveformFunction>          LeftTriggerFunction;                              		// 0x0006(0x0001) (CPF_Edit)
	TEnumAsByte<enum class EWaveformFunction>          RightTriggerFunction;                             		// 0x0007(0x0001) (CPF_Edit)
	float                                              Duration;                                         		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// 0x002C
struct FGameplayEventsHeader
{
	int                                                EngineVersion;                                    		// 0x0000(0x0004) (CPF_Const)
	int                                                StatsWriterVersion;                               		// 0x0004(0x0004) (CPF_Const)
	int                                                StreamOffset;                                     		// 0x0008(0x0004) (CPF_Const)
	int                                                AggregateOffset;                                  		// 0x000C(0x0004) (CPF_Const)
	int                                                FooterOffset;                                     		// 0x0010(0x0004) (CPF_Const)
	int                                                TotalStreamSize;                                  		// 0x0014(0x0004) (CPF_Const)
	int                                                FileSize;                                         		// 0x0018(0x0004) (CPF_Const)
	struct FString                                     FilterClass;                                      		// 0x001C(0x000C) (CPF_NeedCtorLink)
	int                                                Flags;                                            		// 0x0028(0x0004)
};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// 0x0098
struct FGameSessionInformation
{
	int                                                AppTitleID;                                       		// 0x0000(0x0004)
	int                                                PlatformType;                                     		// 0x0004(0x0004)
	struct FString                                     Language;                                         		// 0x0008(0x000C) (CPF_NeedCtorLink)
	struct FString                                     GameplaySessionTimestamp;                         		// 0x0014(0x000C) (CPF_Const, CPF_NeedCtorLink)
	float                                              GameplaySessionStartTime;                         		// 0x0020(0x0004) (CPF_Const)
	float                                              GameplaySessionEndTime;                           		// 0x0024(0x0004) (CPF_Const)
	unsigned long                                      bGameplaySessionInProgress : 1;                   		// 0x0028(0x0004) (CPF_Const)
	struct FString                                     GameplaySessionID;                                		// 0x002C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     GameClassName;                                    		// 0x0038(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     MapName;                                          		// 0x0044(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     MapURL;                                           		// 0x0050(0x000C) (CPF_Const, CPF_NeedCtorLink)
	int                                                SessionInstance;                                  		// 0x005C(0x0004) (CPF_Const)
	int                                                GameTypeId;                                       		// 0x0060(0x0004) (CPF_Const)
	struct FUniqueNetId                                OwningNetId;                                      		// 0x0064(0x0030) (CPF_Const)
	int                                                PlaylistId;                                       		// 0x0094(0x0004)
};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// 0x0048
struct FPlayerInformation
{
	struct FName                                       ControllerName;                                   		// 0x0000(0x0008)
	struct FString                                     PlayerName;                                       		// 0x0008(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                         		// 0x0014(0x0030)
	unsigned long                                      bIsBot : 1;                                       		// 0x0044(0x0004)
};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// 0x0018
struct FTeamInformation
{
	int                                                TeamIndex;                                        		// 0x0000(0x0004)
	struct FString                                     TeamName;                                         		// 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FColor                                      TeamColor;                                        		// 0x0010(0x0004)
	int                                                MaxSize;                                          		// 0x0014(0x0004)
};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// 0x0008
struct FGameStatGroup
{
	TEnumAsByte<enum class EGameStatGroups>            Group;                                            		// 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	int                                                Level;                                            		// 0x0004(0x0004)
};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// 0x0018
struct FGameplayEventMetaData
{
	int                                                EventID;                                          		// 0x0000(0x0004) (CPF_Const)
	struct FName                                       EventName;                                        		// 0x0004(0x0008) (CPF_Const)
	struct FGameStatGroup                              StatGroup;                                        		// 0x000C(0x0008) (CPF_Const)
	int                                                EventDataType;                                    		// 0x0014(0x0004) (CPF_Const)
};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// 0x0008
struct FWeaponClassEventData
{
	struct FName                                       WeaponClassName;                                  		// 0x0000(0x0008)
};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// 0x0008
struct FDamageClassEventData
{
	struct FName                                       DamageClassName;                                  		// 0x0000(0x0008)
};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// 0x0008
struct FProjectileClassEventData
{
	struct FName                                       ProjectileClassName;                              		// 0x0000(0x0008)
};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// 0x0008
struct FPawnClassEventData
{
	struct FName                                       PawnClassName;                                    		// 0x0000(0x0008)
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x0029
struct FIniLocFileEntry
{
	struct FString                                     Filename;                                         		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     HashCode;                                         		// 0x0018(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bIsUnicode : 1;                                   		// 0x0024(0x0004)
	TEnumAsByte<enum class EOnlineEnumerationReadState> ReadState;                                        		// 0x0028(0x0001)
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x002C
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                      		// 0x0000(0x0004)
	struct FColor                                      CurveColor;                                       		// 0x0004(0x0004)
	struct FString                                     CurveName;                                        		// 0x0008(0x000C) (CPF_NeedCtorLink)
	int                                                bHideCurve;                                       		// 0x0014(0x0004)
	int                                                bColorCurve;                                      		// 0x0018(0x0004)
	int                                                bFloatingPointColorCurve;                         		// 0x001C(0x0004)
	int                                                bClamp;                                           		// 0x0020(0x0004)
	float                                              ClampLow;                                         		// 0x0024(0x0004)
	float                                              ClampHigh;                                        		// 0x0028(0x0004)
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0028
struct FCurveEdTab
{
	struct FString                                     TabName;                                          		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FCurveEdEntry>                       Curves;                                           		// 0x000C(0x000C) (CPF_NeedCtorLink)
	float                                              ViewStartInput;                                   		// 0x0018(0x0004)
	float                                              ViewEndInput;                                     		// 0x001C(0x0004)
	float                                              ViewStartOutput;                                  		// 0x0020(0x0004)
	float                                              ViewEndOutput;                                    		// 0x0024(0x0004)
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x001C
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                        		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<int>                                        TrackIndices;                                     		// 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bIsCollapsed : 1;                                 		// 0x0018(0x0004)
	unsigned long                                      bIsSelected : 1;                                  		// 0x0018(0x0004) (CPF_Transient)
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x0014
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                   		// 0x0000(0x0004)
	struct FString                                     SubTrackName;                                     		// 0x0004(0x000C) (CPF_NeedCtorLink)
	int                                                GroupIndex;                                       		// 0x0010(0x0004)
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	unsigned long                                      bUseTwoSidedLighting : 1;                         		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bShadowIndirectOnly : 1;                          		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bUseEmissiveForStaticLighting : 1;                		// 0x0000(0x0004) (CPF_Edit)
	float                                              EmissiveLightFalloffExponent;                     		// 0x0004(0x0004) (CPF_Edit)
	float                                              EmissiveLightExplicitInfluenceRadius;             		// 0x0008(0x0004) (CPF_Edit)
	float                                              EmissiveBoost;                                    		// 0x000C(0x0004) (CPF_Edit)
	float                                              DiffuseBoost;                                     		// 0x0010(0x0004) (CPF_Edit)
	float                                              SpecularBoost;                                    		// 0x0014(0x0004)
	float                                              FullyOccludedSamplesFraction;                     		// 0x0018(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.Settings.SettingsData
// 0x000C
struct FSettingsData
{
	TEnumAsByte<enum class ESettingsDataType>          Type;                                             		// 0x0000(0x0001) (CPF_Const)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	int                                                Value1;                                           		// 0x0004(0x0004) (CPF_Const)
	struct FPointer                                    Value2;                                           		// 0x0008(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0011
struct FSettingsProperty
{
	int                                                PropertyId;                                       		// 0x0000(0x0004)
	struct FSettingsData                               Data;                                             		// 0x0004(0x000C)
	TEnumAsByte<enum class EOnlineDataAdvertisementType> AdvertisementType;                                		// 0x0010(0x0001)
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x0018
struct FOnlineProfileSetting
{
	TEnumAsByte<enum class EOnlineProfilePropertyOwner> Owner;                                            		// 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	struct FSettingsProperty                           ProfileSetting;                                   		// 0x0004(0x0014)
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int                                                Id;                                               		// 0x0000(0x0004) (CPF_Const)
	struct FName                                       Name;                                             		// 0x0004(0x0008) (CPF_Const, CPF_Localized)
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x0040
struct FSettingsPropertyPropertyMetaData
{
	int                                                Id;                                               		// 0x0000(0x0004) (CPF_Const)
	struct FName                                       Name;                                             		// 0x0004(0x0008) (CPF_Const)
	struct FString                                     ColumnHeaderText;                                 		// 0x000C(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	TEnumAsByte<enum class EPropertyValueMappingType>  MappingType;                                      		// 0x0018(0x0001) (CPF_Const)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0019(0x0003) MISSED OFFSET
	TArray<struct FIdToStringMapping>                  ValueMappings;                                    		// 0x001C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FSettingsData>                       PredefinedValues;                                 		// 0x0028(0x000C) (CPF_Const, CPF_NeedCtorLink)
	float                                              MinVal;                                           		// 0x0034(0x0004) (CPF_Const)
	float                                              MaxVal;                                           		// 0x0038(0x0004) (CPF_Const)
	float                                              RangeIncrement;                                   		// 0x003C(0x0004) (CPF_Const)
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int                                                Id;                                               		// 0x0000(0x0004) (CPF_Const)
	struct FName                                       Name;                                             		// 0x0004(0x0008) (CPF_Const, CPF_Localized)
	unsigned long                                      bIsWildcard : 1;                                  		// 0x000C(0x0004) (CPF_Const)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0010
struct FOnlineStatsColumn
{
	int                                                ColumnNo;                                         		// 0x0000(0x0004)
	struct FSettingsData                               StatValue;                                        		// 0x0004(0x000C)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x0060
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000(0x0030) (CPF_Const)
	struct FSettingsData                               Rank;                                             		// 0x0030(0x000C) (CPF_Const)
	struct FString                                     NickName;                                         		// 0x003C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FOnlineStatsColumn>                  Columns;                                          		// 0x0048(0x000C) (CPF_NeedCtorLink)
	TArray<struct FSettingsData>                       StatValues;                                       		// 0x0054(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x001C
struct FColumnMetaData
{
	int                                                Id;                                               		// 0x0000(0x0004) (CPF_Const)
	struct FString                                     Name;                                             		// 0x0004(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ColumnName;                                       		// 0x0010(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.SteamDLCInfo
// 0x0010
struct FSteamDLCInfo
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.SteamDLCInfo.AppID
	struct FName                                       Value;                                            		// 0x0008(0x0008)
};

// ScriptStruct Engine.OnlineSubsystem.PS4DLCInfo
// 0x0014
struct FPS4DLCInfo
{
	struct FString                                     Key;                                              		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FName                                       Value;                                            		// 0x000C(0x0008)
};

// ScriptStruct Engine.OnlineSubsystem.XboxOneDLCInfo
// 0x0014
struct FXboxOneDLCInfo
{
	struct FString                                     Key;                                              		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FName                                       Value;                                            		// 0x000C(0x0008)
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x000C
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                    		// 0x0000(0x0008)
	class UObject*                                     InterfaceObject;                                  		// 0x0008(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0014
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                    		// 0x0000(0x0008)
	struct FString                                     InterfaceClassName;                               		// 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0030
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000(0x0030) (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C (0x003C - 0x0030)
struct FOnlineArbitrationRegistrant : public FOnlineRegistrant
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0030(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.OnlineArbitrationRegistrant.MachineId
	int                                                Trustworthiness;                                  		// 0x0038(0x0004) (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0028
struct FNamedSession
{
	struct FName                                       SessionName;                                      		// 0x0000(0x0008)
	struct FPointer                                    SessionInfo;                                      		// 0x0008(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x000C(0x0004)
	TArray<struct FOnlineRegistrant>                   Registrants;                                      		// 0x0010(0x000C) (CPF_NeedCtorLink)
	TArray<struct FOnlineArbitrationRegistrant>        ArbitrationRegistrants;                           		// 0x001C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// 0x000C
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                        		// 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
// 0x003C
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                       		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     DisplayName;                                      		// 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     DisplayDescription;                               		// 0x0018(0x000C) (CPF_NeedCtorLink)
	struct FString                                     DisplayPrice;                                     		// 0x0024(0x000C) (CPF_NeedCtorLink)
	struct FString                                     CurrencyType;                                     		// 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0008
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                            		// 0x0000(0x0004)
	struct FPointer                                    CriticalSection;                                  		// 0x0004(0x0004)
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x015C
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                     		// 0x0000(0x0150) (CPF_NeedCtorLink)
	class APostProcessVolume*                          LastVolumeUsed;                                   		// 0x0150(0x0004)
	float                                              BlendStartTime;                                   		// 0x0154(0x0004)
	float                                              LastBlendTime;                                    		// 0x0158(0x0004)
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x0178
struct FPostProcessSettingsOverride
{
	struct FPostProcessSettings                        Settings;                                         		// 0x0000(0x0150) (CPF_NeedCtorLink)
	unsigned long                                      bBlendingIn : 1;                                  		// 0x0150(0x0004)
	unsigned long                                      bBlendingOut : 1;                                 		// 0x0150(0x0004)
	float                                              CurrentBlendInTime;                               		// 0x0154(0x0004)
	float                                              CurrentBlendOutTime;                              		// 0x0158(0x0004)
	float                                              BlendInDuration;                                  		// 0x015C(0x0004)
	float                                              BlendOutDuration;                                 		// 0x0160(0x0004)
	float                                              BlendStartTime;                                   		// 0x0164(0x0004)
	struct FInterpCurveFloat                           TimeAlphaCurve;                                   		// 0x0168(0x0010) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// 0x0010
struct FShowFlags_Mirror
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.GameViewportClient.ShowFlags_Mirror.flags0
	unsigned char                                      UnknownData01[0x8];                               		// 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.GameViewportClient.ShowFlags_Mirror.flags1
};

// ScriptStruct Engine.GameViewportClient.ExportShowFlags_Mirror
// 0x0000 (0x0010 - 0x0010)
struct FExportShowFlags_Mirror : public FShowFlags_Mirror
{

};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                      		// 0x0000(0x0004)
	float                                              MaxPercentY;                                      		// 0x0004(0x0004)
	float                                              RecommendedPercentX;                              		// 0x0008(0x0004)
	float                                              RecommendedPercentY;                              		// 0x000C(0x0004)
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                            		// 0x0000(0x0004)
	float                                              SizeY;                                            		// 0x0004(0x0004)
	float                                              OriginX;                                          		// 0x0008(0x0004)
	float                                              OriginY;                                          		// 0x000C(0x0004)
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x000C
struct FSplitscreenData
{
	TArray<struct FPerPlayerSplitscreenData>           PlayerData;                                       		// 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0010
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                              		// 0x0000(0x0004)
	struct FName                                       PropertyName;                                     		// 0x0004(0x0008)
	unsigned long                                      bSpecialProperty : 1;                             		// 0x000C(0x0004)
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int                                                Id;                                               		// 0x0000(0x0004)
	int                                                ValueIndex;                                       		// 0x0004(0x0004)
	TEnumAsByte<enum class EOnlineDataAdvertisementType> AdvertisementType;                                		// 0x0008(0x0001)
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x0024
struct FLocalizedStringSettingMetaData
{
	int                                                Id;                                               		// 0x0000(0x0004) (CPF_Const)
	struct FName                                       Name;                                             		// 0x0004(0x0008) (CPF_Const)
	struct FString                                     ColumnHeaderText;                                 		// 0x000C(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	TArray<struct FStringIdToStringMapping>            ValueMappings;                                    		// 0x0018(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0008
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0000(0x0004) (CPF_Const)
	struct FPointer                                    PlatformData;                                     		// 0x0004(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0028
struct FOverrideSkill
{
	int                                                LeaderboardId;                                    		// 0x0000(0x0004)
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0004(0x000C) (CPF_NeedCtorLink)
	TArray<struct FDouble>                             Mus;                                              		// 0x0010(0x000C) (CPF_NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                           		// 0x001C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0014
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                               		// 0x0000(0x0008)
	struct FString                                     ObjectPropertyValue;                              		// 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x000E
struct FOnlineGameSearchParameter
{
	int                                                EntryId;                                          		// 0x0000(0x0004)
	struct FName                                       ObjectPropertyName;                               		// 0x0004(0x0008)
	TEnumAsByte<enum class EOnlineGameSearchEntryType> EntryType;                                        		// 0x000C(0x0001)
	TEnumAsByte<enum class EOnlineGameSearchComparisonType> ComparisonType;                                   		// 0x000D(0x0001)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x000C
struct FOnlineGameSearchORClause
{
	TArray<struct FOnlineGameSearchParameter>          OrParams;                                         		// 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int                                                EntryId;                                          		// 0x0000(0x0004)
	struct FName                                       ObjectPropertyName;                               		// 0x0004(0x0008)
	TEnumAsByte<enum class EOnlineGameSearchEntryType> EntryType;                                        		// 0x000C(0x0001)
	TEnumAsByte<enum class EOnlineGameSearchSortType>  SortType;                                         		// 0x000D(0x0001)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0018
struct FOnlineGameSearchQuery
{
	TArray<struct FOnlineGameSearchORClause>           OrClauses;                                        		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FOnlineGameSearchSortClause>         SortClauses;                                      		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x001C
struct FRecognisableWord
{
	int                                                Id;                                               		// 0x0000(0x0004) (CPF_Edit)
	struct FString                                     ReferenceWord;                                    		// 0x0004(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     PhoneticWord;                                     		// 0x0010(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0048
struct FRecogVocabulary
{
	TArray<struct FRecognisableWord>                   WhoDictionary;                                    		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FRecognisableWord>                   WhatDictionary;                                   		// 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FRecognisableWord>                   WhereDictionary;                                  		// 0x0018(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     VocabName;                                        		// 0x0024(0x000C) (CPF_NeedCtorLink)
	TArray<unsigned char>                              VocabData;                                        		// 0x0030(0x000C) (CPF_NeedCtorLink)
	TArray<unsigned char>                              WorkingVocabData;                                 		// 0x003C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0010
struct FRecogUserData
{
	int                                                ActiveVocabularies;                               		// 0x0000(0x0004)
	TArray<unsigned char>                              UserData;                                         		// 0x0004(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x0010
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                         		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bEnableShadowCasting : 1;                         		// 0x0004(0x0004) (CPF_Edit, CPF_Native)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0008(0x0004) MISSED OFFSET
	unsigned long                                      bEnableCollision : 1;                             		// 0x000C(0x0004) (CPF_Edit, CPF_Native)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x000C
struct FStaticMeshLODInfo
{
	TArray<struct FStaticMeshLODElement>               Elements;                                         		// 0x0000(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_Native)
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x001C
struct FLightmassMaterialInterfaceSettings
{
	unsigned long                                      bCastShadowAsMasked : 1;                          		// 0x0000(0x0004) (CPF_Edit)
	float                                              EmissiveBoost;                                    		// 0x0004(0x0004) (CPF_Edit)
	float                                              DiffuseBoost;                                     		// 0x0008(0x0004) (CPF_Edit)
	float                                              SpecularBoost;                                    		// 0x000C(0x0004)
	float                                              ExportResolutionScale;                            		// 0x0010(0x0004) (CPF_Edit)
	float                                              DistanceFieldPenumbraScale;                       		// 0x0014(0x0004) (CPF_Edit)
	unsigned long                                      bOverrideCastShadowAsMasked : 1;                  		// 0x0018(0x0004)
	unsigned long                                      bOverrideEmissiveBoost : 1;                       		// 0x0018(0x0004)
	unsigned long                                      bOverrideDiffuseBoost : 1;                        		// 0x0018(0x0004)
	unsigned long                                      bOverrideSpecularBoost : 1;                       		// 0x0018(0x0004)
	unsigned long                                      bOverrideExportResolutionScale : 1;               		// 0x0018(0x0004)
	unsigned long                                      bOverrideDistanceFieldPenumbraScale : 1;          		// 0x0018(0x0004)
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x000C
struct FKCachedConvexDataElement
{
	TArray<unsigned char>                              ConvexElementData;                                		// 0x0000(0x000C) (CPF_Native)
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x000C
struct FKCachedConvexData
{
	TArray<struct FKCachedConvexDataElement>           CachedConvexElements;                             		// 0x0000(0x000C) (CPF_Native)
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	unsigned long                                      bLit : 1;                                         		// 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x000C
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                		// 0x0000(0x000C) (CPF_Transient, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x000C
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                          		// 0x0000(0x0004) (CPF_Const, CPF_Native)
	struct FPointer                                    Next;                                             		// 0x0004(0x0004) (CPF_Const, CPF_Native)
	struct FPointer                                    PrevLink;                                         		// 0x0008(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                 		// 0x0000(0x0008) (CPF_AlwaysInit)
	struct FDouble                                     NextRepeatTime;                                   		// 0x0008(0x0008) (CPF_AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                     		// 0x0000(0x0008)
	struct FName                                       AdjacentAxisInputKey;                             		// 0x0008(0x0008)
	unsigned long                                      bEmulateButtonPress : 1;                          		// 0x0010(0x0004)
	struct FName                                       InputKeyToEmulate[0x2];                           		// 0x0014(0x0008)
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004 (0x0014 - 0x0010)
struct FUIAxisEmulationData : public FUIKeyRepeatData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0010(0x0004) (CPF_AlwaysInit)
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                         		// 0x0000(0x000C)
	struct FPackedNormal                               Normal;                                           		// 0x000C(0x0004)
	struct FColor                                      Color;                                            		// 0x0010(0x0004)
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x002C
struct FStaticMeshComponentLODInfo
{
	TArray<class UShadowMap2D*>                        ShadowMaps;                                       		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<class UObject*>                             ShadowVertexBuffers;                              		// 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FPointer                                    LightMap;                                         		// 0x0018(0x0004) (CPF_Const, CPF_Native)
	struct FPointer                                    OverrideVertexColors;                             		// 0x001C(0x0004) (CPF_Const, CPF_Native)
	TArray<struct FPaintedVertex>                      PaintedVertices;                                  		// 0x0020(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0034
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                             		// 0x0000(0x0004)
	class UStaticMesh*                                 LeanLeft;                                         		// 0x0004(0x0004)
	class UStaticMesh*                                 LeanRight;                                        		// 0x0008(0x0004)
	class UStaticMesh*                                 LeanLeftPref;                                     		// 0x000C(0x0004)
	class UStaticMesh*                                 LeanRightPref;                                    		// 0x0010(0x0004)
	class UStaticMesh*                                 Climb;                                            		// 0x0014(0x0004)
	class UStaticMesh*                                 Mantle;                                           		// 0x0018(0x0004)
	class UStaticMesh*                                 SlipLeft;                                         		// 0x001C(0x0004)
	class UStaticMesh*                                 SlipRight;                                        		// 0x0020(0x0004)
	class UStaticMesh*                                 SwatLeft;                                         		// 0x0024(0x0004)
	class UStaticMesh*                                 SwatRight;                                        		// 0x0028(0x0004)
	class UStaticMesh*                                 PopUp;                                            		// 0x002C(0x0004)
	class UStaticMesh*                                 PlayerOnly;                                       		// 0x0030(0x0004)
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x0004
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                            		// 0x0000(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x000C
struct FPathStore
{
	TArray<struct FEdgePointer>                        EdgeList;                                         		// 0x0000(0x000C) (CPF_Native)
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x0030
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                        		// 0x0000(0x0004) (CPF_Native)
	unsigned long                                      bCanMantle : 1;                                   		// 0x0004(0x0004)
	unsigned long                                      bNeedsMantleValidityTest : 1;                     		// 0x0004(0x0004)
	unsigned long                                      bAbleToSearch : 1;                                		// 0x0004(0x0004)
	struct FVector                                     SearchExtent;                                     		// 0x0008(0x000C)
	float                                              SearchLaneMultiplier;                             		// 0x0014(0x0004)
	struct FVector                                     SearchStart;                                      		// 0x0018(0x000C)
	float                                              MaxDropHeight;                                    		// 0x0024(0x0004)
	float                                              MinWalkableZ;                                     		// 0x0028(0x0004)
	float                                              MaxHoverDistance;                                 		// 0x002C(0x0004)
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x0008
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                             		// 0x0000(0x0004)
	int                                                ExtraCost;                                        		// 0x0004(0x0004)
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x000C
struct FSkelMeshActorControlTarget
{
	struct FName                                       ControlName;                                      		// 0x0000(0x0008) (CPF_Edit)
	class AActor*                                      TargetActor;                                      		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x0008
struct FSkelMaterialSetterDatum
{
	int                                                MaterialIndex;                                    		// 0x0000(0x0004) (CPF_Edit)
	class UMaterialInterface*                          TheMaterial;                                      		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_Edit)
	float                                              TargetStrength;                                   		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit)
	float                                              ParameterValue;                                   		// 0x0008(0x0004) (CPF_Edit)
	float                                              InterpTime;                                       		// 0x000C(0x0004) (CPF_Edit)
	float                                              WarmupTime;                                       		// 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                         		// 0x0000(0x000C)
	struct FVector                                     Velocity;                                         		// 0x000C(0x000C)
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                     		// 0x0000(0x0004)
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                                  		// 0x0004(0x0018)
	struct FTrailSocketSamplePoint                     ControlPointSample;                               		// 0x001C(0x0018)
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                                 		// 0x0034(0x0018)
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                     		// 0x0000(0x0004)
	struct FVector                                     FirstEdgeSample;                                  		// 0x0004(0x000C)
	struct FVector                                     ControlPointSample;                               		// 0x0010(0x000C)
	struct FVector                                     SecondEdgeSample;                                 		// 0x001C(0x000C)
};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x000C
struct FCurveKey
{
	struct FName                                       CurveName;                                        		// 0x0000(0x0008)
	float                                              Weight;                                           		// 0x0008(0x0004)
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x001C
struct FAnimBlendChild
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_Edit)
	class UAnimNode*                                   Anim;                                             		// 0x0008(0x0004) (CPF_ExportObject, CPF_NeedCtorLink, CPF_EditInline)
	float                                              Weight;                                           		// 0x000C(0x0004)
	float                                              BlendWeight;                                      		// 0x0010(0x0004) (CPF_Const, CPF_Transient)
	unsigned long                                      bMirrorSkeleton : 1;                              		// 0x0014(0x0004)
	unsigned long                                      bIsAdditive : 1;                                  		// 0x0014(0x0004)
	int                                                DrawY;                                            		// 0x0018(0x0004)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x000C
struct FBranchInfo
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008) (CPF_Edit)
	float                                              PerBoneWeightIncrease;                            		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x0018
struct FWeightNodeRule
{
	struct FName                                       NodeName;                                         		// 0x0000(0x0008) (CPF_Edit)
	class UAnimNodeBlendBase*                          CachedNode;                                       		// 0x0008(0x0004)
	class UAnimNodeSlot*                               CachedSlotNode;                                   		// 0x000C(0x0004)
	TEnumAsByte<enum class EWeightCheck>               WeightCheck;                                      		// 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	int                                                ChildIndex;                                       		// 0x0014(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x0030
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                        		// 0x0000(0x0018) (CPF_Edit)
	struct FWeightNodeRule                             SecondNode;                                       		// 0x0018(0x0018) (CPF_Edit)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x0040
struct FPerBoneMaskInfo
{
	TArray<struct FBranchInfo>                         BranchList;                                       		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	float                                              DesiredWeight;                                    		// 0x000C(0x0004) (CPF_Edit)
	float                                              BlendTimeToGo;                                    		// 0x0010(0x0004) (CPF_Edit)
	TArray<struct FWeightRule>                         WeightRuleList;                                   		// 0x0014(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bWeightBasedOnNodeRules : 1;                      		// 0x0020(0x0004) (CPF_Edit)
	unsigned long                                      bDisableForNonLocalHumanPlayers : 1;              		// 0x0020(0x0004) (CPF_Edit)
	unsigned long                                      bPendingBlend : 1;                                		// 0x0020(0x0004) (CPF_Transient)
	TArray<float>                                      PerBoneWeights;                                   		// 0x0024(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<unsigned char>                              TransformReqBone;                                 		// 0x0030(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                TransformReqBoneIndex;                            		// 0x003C(0x0004) (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                       		// 0x0000(0x0010) (CPF_Edit)
	struct FVector                                     Translation;                                      		// 0x0010(0x000C) (CPF_Edit)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
	struct FAimTransform                               LU;                                               		// 0x0010(0x0020) (CPF_Edit)
	struct FAimTransform                               LC;                                               		// 0x0030(0x0020) (CPF_Edit)
	struct FAimTransform                               LD;                                               		// 0x0050(0x0020) (CPF_Edit)
	struct FAimTransform                               CU;                                               		// 0x0070(0x0020) (CPF_Edit)
	struct FAimTransform                               CC;                                               		// 0x0090(0x0020) (CPF_Edit)
	struct FAimTransform                               CD;                                               		// 0x00B0(0x0020) (CPF_Edit)
	struct FAimTransform                               RU;                                               		// 0x00D0(0x0020) (CPF_Edit)
	struct FAimTransform                               RC;                                               		// 0x00F0(0x0020) (CPF_Edit)
	struct FAimTransform                               RD;                                               		// 0x0110(0x0020) (CPF_Edit)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x006C
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                      		// 0x0000(0x0008) (CPF_Edit, CPF_Const, CPF_EditConst)
	struct FVector2D                                   HorizontalRange;                                  		// 0x0008(0x0008) (CPF_Edit)
	struct FVector2D                                   VerticalRange;                                    		// 0x0010(0x0008) (CPF_Edit)
	TArray<struct FAimComponent>                       AimComponents;                                    		// 0x0018(0x000C) (CPF_NeedCtorLink)
	struct FName                                       AnimName_LU;                                      		// 0x0024(0x0008) (CPF_Edit)
	struct FName                                       AnimName_LC;                                      		// 0x002C(0x0008) (CPF_Edit)
	struct FName                                       AnimName_LD;                                      		// 0x0034(0x0008) (CPF_Edit)
	struct FName                                       AnimName_CU;                                      		// 0x003C(0x0008) (CPF_Edit)
	struct FName                                       AnimName_CC;                                      		// 0x0044(0x0008) (CPF_Edit)
	struct FName                                       AnimName_CD;                                      		// 0x004C(0x0008) (CPF_Edit)
	struct FName                                       AnimName_RU;                                      		// 0x0054(0x0008) (CPF_Edit)
	struct FName                                       AnimName_RC;                                      		// 0x005C(0x0008) (CPF_Edit)
	struct FName                                       AnimName_RD;                                      		// 0x0064(0x0008) (CPF_Edit)
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                           		// 0x0000(0x0004) (CPF_Edit)
	unsigned char                                      LoopCountMin;                                     		// 0x0004(0x0001) (CPF_Edit)
	unsigned char                                      LoopCountMax;                                     		// 0x0005(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0006(0x0002) MISSED OFFSET
	float                                              BlendInTime;                                      		// 0x0008(0x0004) (CPF_Edit)
	struct FVector2D                                   PlayRateRange;                                    		// 0x000C(0x0008) (CPF_Edit)
	unsigned long                                      bStillFrame : 1;                                  		// 0x0014(0x0004) (CPF_Edit)
	unsigned char                                      LoopCount;                                        		// 0x0018(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0019(0x0003) MISSED OFFSET
	float                                              LastPosition;                                     		// 0x001C(0x0004) (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0030
struct FChildBoneBlendInfo
{
	TArray<float>                                      TargetPerBoneWeight;                              		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FName                                       InitTargetStartBone;                              		// 0x000C(0x0008) (CPF_Edit)
	float                                              InitPerBoneIncrease;                              		// 0x0014(0x0004) (CPF_Edit)
	struct FName                                       OldStartBone;                                     		// 0x0018(0x0008) (CPF_Const)
	float                                              OldBoneIncrease;                                  		// 0x0020(0x0004) (CPF_Const)
	TArray<unsigned char>                              TargetRequiredBones;                              		// 0x0024(0x000C) (CPF_Transient, CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0020
struct FSynchGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                         		// 0x0000(0x000C) (CPF_NeedCtorLink)
	class UAnimNodeSequence*                           MasterNode;                                       		// 0x000C(0x0004) (CPF_Transient)
	struct FName                                       GroupName;                                        		// 0x0010(0x0008) (CPF_Edit)
	unsigned long                                      bFireSlaveNotifies : 1;                           		// 0x0018(0x0004) (CPF_Edit)
	float                                              RateScale;                                        		// 0x001C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0024
struct FAnimGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                         		// 0x0000(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	class UAnimNodeSequence*                           SynchMaster;                                      		// 0x000C(0x0004) (CPF_Const, CPF_Transient)
	class UAnimNodeSequence*                           NotifyMaster;                                     		// 0x0010(0x0004) (CPF_Const, CPF_Transient)
	struct FName                                       GroupName;                                        		// 0x0014(0x0008) (CPF_Edit, CPF_Const)
	float                                              RateScale;                                        		// 0x001C(0x0004) (CPF_Edit, CPF_Const)
	float                                              SynchPctPosition;                                 		// 0x0020(0x0004) (CPF_Const)
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0010
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008)
	class USkelControlBase*                            ControlHead;                                      		// 0x0008(0x0004) (CPF_ExportObject, CPF_NeedCtorLink, CPF_EditInline)
	int                                                DrawY;                                            		// 0x000C(0x0004)
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x0018
struct FPreviewSkelMeshStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000(0x0008) (CPF_Edit)
	class USkeletalMesh*                               PreviewSkelMesh;                                  		// 0x0008(0x0004) (CPF_Edit)
	TArray<class UMorphTargetSet*>                     PreviewMorphSets;                                 		// 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x0018
struct FPreviewSocketStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000(0x0008) (CPF_Edit)
	struct FName                                       SocketName;                                       		// 0x0008(0x0008) (CPF_Edit)
	class USkeletalMesh*                               PreviewSkelMesh;                                  		// 0x0010(0x0004) (CPF_Edit)
	class UStaticMesh*                                 PreviewStaticMesh;                                		// 0x0014(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0014
struct FPreviewAnimSetsStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000(0x0008) (CPF_Edit)
	TArray<class UAnimSet*>                            PreviewAnimSets;                                  		// 0x0008(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0010
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                      		// 0x0000(0x0008) (CPF_Const)
	class UAnimSequence*                               AnimSeq;                                          		// 0x0008(0x0004) (CPF_Const, CPF_Transient)
	int                                                AnimLinkupIndex;                                  		// 0x000C(0x0004) (CPF_Const, CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x001C
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                         		// 0x0000(0x0008) (CPF_Edit)
	struct FAnimInfo                                   AnimInfo;                                         		// 0x0008(0x0010)
	float                                              Weight;                                           		// 0x0018(0x0004) (CPF_Transient)
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x0018
struct FMorphNodeConn
{
	TArray<class UMorphNodeBase*>                      ChildNodes;                                       		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FName                                       ConnName;                                         		// 0x000C(0x0008)
	int                                                DrawY;                                            		// 0x0014(0x0004)
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                            		// 0x0000(0x0004) (CPF_Edit)
	float                                              TargetWeight;                                     		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x0014
struct FAnimNotifyEvent
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_Edit)
	class UAnimNotify*                                 Notify;                                           		// 0x0004(0x0004) (CPF_Edit, CPF_ExportObject, CPF_NeedCtorLink, CPF_EditInline)
	struct FName                                       Comment;                                          		// 0x0008(0x0008) (CPF_Edit)
	float                                              Duration;                                         		// 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0014
struct FSkelControlModifier
{
	struct FName                                       SkelControlName;                                  		// 0x0000(0x0008) (CPF_Edit)
	TArray<struct FTimeModifier>                       Modifiers;                                        		// 0x0008(0x000C) (CPF_Edit, CPF_NeedCtorLink, CPF_EditInline)
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0018
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                          		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FQuat>                               RotKeys;                                          		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0018
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                          		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<float>                                      Times;                                            		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0018
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                          		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<float>                                      Times;                                            		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0014
struct FCurveTrack
{
	struct FName                                       CurveName;                                        		// 0x0000(0x0008)
	TArray<float>                                      CurveWeights;                                     		// 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x000C
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                 		// 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x0008
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                            		// 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	float                                              LifetimeRemaining;                                		// 0x0004(0x0004)
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0008
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000(0x0004) (CPF_Const, CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FPointer                                    RenderData;                                       		// 0x0004(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.Material.MaterialInput
// 0x002C
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                       		// 0x0000(0x0004)
	int                                                OutputIndex;                                      		// 0x0004(0x0004)
	struct FString                                     InputName;                                        		// 0x0008(0x000C) (CPF_NeedCtorLink)
	int                                                Mask;                                             		// 0x0014(0x0004)
	int                                                MaskR;                                            		// 0x0018(0x0004)
	int                                                MaskG;                                            		// 0x001C(0x0004)
	int                                                MaskB;                                            		// 0x0020(0x0004)
	int                                                MaskA;                                            		// 0x0024(0x0004)
	int                                                GCC64_Padding;                                    		// 0x0028(0x0004)
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008 (0x0034 - 0x002C)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x002C(0x0004)
	struct FColor                                      Constant;                                         		// 0x0030(0x0004)
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008 (0x0034 - 0x002C)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x002C(0x0004)
	float                                              Constant;                                         		// 0x0030(0x0004)
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010 (0x003C - 0x002C)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x002C(0x0004)
	struct FVector                                     Constant;                                         		// 0x0030(0x000C)
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C (0x0038 - 0x002C)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x002C(0x0004)
	float                                              ConstantX;                                        		// 0x0030(0x0004)
	float                                              ConstantY;                                        		// 0x0034(0x0004)
};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x0014
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                          		// 0x0000(0x0010)
	class UMaterialFunction*                           Function;                                         		// 0x0010(0x0004)
};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// 0x0024
struct FDeferredPartToSpawn
{
	int                                                ChunkIndex;                                       		// 0x0000(0x0004)
	struct FVector                                     InitialVel;                                       		// 0x0004(0x000C)
	struct FVector                                     InitialAngVel;                                    		// 0x0010(0x000C)
	float                                              RelativeScale;                                    		// 0x001C(0x0004)
	unsigned long                                      bExplosion : 1;                                   		// 0x0020(0x0004)
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x0010
struct FPhysEffectInfo
{
	float                                              Threshold;                                        		// 0x0000(0x0004) (CPF_Edit)
	float                                              ReFireDelay;                                      		// 0x0004(0x0004) (CPF_Edit)
	class UParticleSystem*                             Effect;                                           		// 0x0008(0x0004) (CPF_Edit)
	class USoundCue*                                   Sound;                                            		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                        		// 0x0000(0x0040)
	struct FVector2D                                   LightmapUVBias;                                   		// 0x0040(0x0008)
	struct FVector2D                                   ShadowmapUVBias;                                  		// 0x0048(0x0008)
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0010
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                          		// 0x0000(0x0004) (CPF_Native)
	struct FPointer                                    LightMap;                                         		// 0x0004(0x0004) (CPF_Native)
	class UTexture2D*                                  LightmapTexture;                                  		// 0x0008(0x0004)
	class UShadowMap2D*                                ShadowmapTexture;                                 		// 0x000C(0x0004)
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                         		// 0x0000(0x000C)
	struct FVector                                     StartTangent;                                     		// 0x000C(0x000C)
	struct FVector2D                                   StartScale;                                       		// 0x0018(0x0008)
	float                                              StartRoll;                                        		// 0x0020(0x0004)
	struct FVector2D                                   StartOffset;                                      		// 0x0024(0x0008)
	struct FVector                                     EndPos;                                           		// 0x002C(0x000C)
	struct FVector                                     EndTangent;                                       		// 0x0038(0x000C)
	struct FVector2D                                   EndScale;                                         		// 0x0044(0x0008)
	float                                              EndRoll;                                          		// 0x004C(0x0004)
	struct FVector2D                                   EndOffset;                                        		// 0x0050(0x0008)
};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// 0x000C
struct FClothingLodInfo
{
	TArray<int>                                        LODMaterialMap;                                   		// 0x0000(0x000C) (CPF_Edit, CPF_Const, CPF_EditFixedSize, CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// 0x0014
struct FNxDestructibleDamageParameters
{
	float                                              DamageThreshold;                                  		// 0x0000(0x0004) (CPF_Edit)
	float                                              DamageSpread;                                     		// 0x0004(0x0004) (CPF_Edit)
	float                                              ImpactDamage;                                     		// 0x0008(0x0004) (CPF_Edit)
	float                                              ImpactResistance;                                 		// 0x000C(0x0004) (CPF_Edit)
	int                                                DefaultImpactDamageDepth;                         		// 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// 0x002C
struct FNxDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                		// 0x0000(0x0004) (CPF_Edit)
	float                                              DebrisLifetimeMax;                                		// 0x0004(0x0004) (CPF_Edit)
	float                                              DebrisMaxSeparationMin;                           		// 0x0008(0x0004) (CPF_Edit)
	float                                              DebrisMaxSeparationMax;                           		// 0x000C(0x0004) (CPF_Edit)
	struct FBox                                        ValidBounds;                                      		// 0x0010(0x001C) (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// 0x0018
struct FNxDestructibleAdvancedParameters
{
	float                                              DamageCap;                                        		// 0x0000(0x0004) (CPF_Edit)
	float                                              ImpactVelocityThreshold;                          		// 0x0004(0x0004) (CPF_Edit)
	float                                              MaxChunkSpeed;                                    		// 0x0008(0x0004) (CPF_Edit)
	float                                              MassScaleExponent;                                		// 0x000C(0x0004) (CPF_Edit)
	float                                              MassScale;                                        		// 0x0010(0x0004) (CPF_Edit)
	float                                              FractureImpulseScale;                             		// 0x0014(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x0004
struct FNxDestructibleParametersFlag
{
	unsigned long                                      ACCUMULATE_DAMAGE : 1;                            		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      ASSET_DEFINED_SUPPORT : 1;                        		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      WORLD_SUPPORT : 1;                                		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      DEBRIS_TIMEOUT : 1;                               		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      DEBRIS_MAX_SEPARATION : 1;                        		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      CRUMBLE_SMALLEST_CHUNKS : 1;                      		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      ACCURATE_RAYCASTS : 1;                            		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      USE_VALID_BOUNDS : 1;                             		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      FORM_EXTENDED_STRUCTURES : 1;                     		// 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x0005
struct FNxDestructibleDepthParameters
{
	unsigned long                                      TAKE_IMPACT_DAMAGE : 1;                           		// 0x0000(0x0004) (CPF_Deprecated)
	unsigned long                                      IGNORE_POSE_UPDATES : 1;                          		// 0x0000(0x0004) (CPF_Deprecated)
	unsigned long                                      IGNORE_RAYCAST_CALLBACKS : 1;                     		// 0x0000(0x0004) (CPF_Deprecated)
	unsigned long                                      IGNORE_CONTACT_CALLBACKS : 1;                     		// 0x0000(0x0004) (CPF_Deprecated)
	unsigned long                                      USER_FLAG_1 : 1;                                  		// 0x0000(0x0004) (CPF_Deprecated)
	unsigned long                                      USER_FLAG_2 : 1;                                  		// 0x0000(0x0004) (CPF_Deprecated)
	unsigned long                                      USER_FLAG_3 : 1;                                  		// 0x0000(0x0004) (CPF_Deprecated)
	unsigned long                                      USER_FLAG_4 : 1;                                  		// 0x0000(0x0004) (CPF_Deprecated)
	TEnumAsByte<enum class EImpactDamageOverride>      ImpactDamageOverride;                             		// 0x0004(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x00EC
struct FNxDestructibleParameters
{
	struct FNxDestructibleDamageParameters             DamageParameters;                                 		// 0x0000(0x0014) (CPF_Edit)
	struct FNxDestructibleDebrisParameters             DebrisParameters;                                 		// 0x0014(0x002C) (CPF_Edit)
	struct FNxDestructibleAdvancedParameters           AdvancedParameters;                               		// 0x0040(0x0018) (CPF_Edit)
	float                                              DamageThreshold;                                  		// 0x0058(0x0004) (CPF_Deprecated)
	float                                              DamageToRadius;                                   		// 0x005C(0x0004) (CPF_Deprecated)
	float                                              DamageCap;                                        		// 0x0060(0x0004) (CPF_Deprecated)
	float                                              ForceToDamage;                                    		// 0x0064(0x0004) (CPF_Deprecated)
	float                                              ImpactVelocityThreshold;                          		// 0x0068(0x0004) (CPF_Deprecated)
	float                                              MaterialStrength;                                 		// 0x006C(0x0004) (CPF_Deprecated)
	float                                              DamageToPercentDeformation;                       		// 0x0070(0x0004) (CPF_Deprecated)
	float                                              DeformationPercentLimit;                          		// 0x0074(0x0004) (CPF_Deprecated)
	unsigned long                                      bFormExtendedStructures : 1;                      		// 0x0078(0x0004) (CPF_Deprecated)
	int                                                SupportDepth;                                     		// 0x007C(0x0004) (CPF_Edit)
	int                                                MinimumFractureDepth;                             		// 0x0080(0x0004) (CPF_Edit)
	int                                                DebrisDepth;                                      		// 0x0084(0x0004) (CPF_Edit)
	int                                                EssentialDepth;                                   		// 0x0088(0x0004) (CPF_Edit)
	float                                              DebrisLifetimeMin;                                		// 0x008C(0x0004) (CPF_Deprecated)
	float                                              DebrisLifetimeMax;                                		// 0x0090(0x0004) (CPF_Deprecated)
	float                                              DebrisMaxSeparationMin;                           		// 0x0094(0x0004) (CPF_Deprecated)
	float                                              DebrisMaxSeparationMax;                           		// 0x0098(0x0004) (CPF_Deprecated)
	struct FBox                                        ValidBounds;                                      		// 0x009C(0x001C) (CPF_Deprecated)
	float                                              MaxChunkSpeed;                                    		// 0x00B8(0x0004) (CPF_Deprecated)
	float                                              MassScaleExponent;                                		// 0x00BC(0x0004) (CPF_Deprecated)
	struct FNxDestructibleParametersFlag               Flags;                                            		// 0x00C0(0x0004) (CPF_Edit)
	float                                              GrbVolumeLimit;                                   		// 0x00C4(0x0004) (CPF_Deprecated)
	float                                              GrbParticleSpacing;                               		// 0x00C8(0x0004) (CPF_Deprecated)
	float                                              FractureImpulseScale;                             		// 0x00CC(0x0004) (CPF_Deprecated)
	TArray<struct FNxDestructibleDepthParameters>      DepthParameters;                                  		// 0x00D0(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	int                                                DynamicChunksDominanceGroup;                      		// 0x00DC(0x0004) (CPF_Edit)
	unsigned long                                      UseDynamicChunksGroupsMask : 1;                   		// 0x00E0(0x0004) (CPF_Edit)
	TEnumAsByte<enum class ERBCollisionChannel>        DynamicChunksChannel;                             		// 0x00E4(0x0001) (CPF_Edit, CPF_Const)
	unsigned char                                      UnknownData00[0x3];                               		// 0x00E5(0x0003) MISSED OFFSET
	struct FRBCollisionChannelContainer                DynamicChunksCollideWithChannels;                 		// 0x00E8(0x0004) (CPF_Edit, CPF_Const)
};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// 0x0034
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                        		// 0x0000(0x0004) (CPF_Edit)
	TArray<class UAnimSet*>                            PreviewAnimSets;                                  		// 0x0004(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FName                                       AnimSeqName;                                      		// 0x0010(0x0008) (CPF_Edit)
	struct FVector                                     Location;                                         		// 0x0018(0x000C) (CPF_EditConst)
	struct FRotator                                    Rotation;                                         		// 0x0024(0x000C) (CPF_EditConst)
	class APawn*                                       PawnInst;                                         		// 0x0030(0x0004) (CPF_Transient)
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004)
	unsigned long                                      Value : 1;                                        		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                             		// 0x0000(0x0004)
	float                                              TransitionTime;                                   		// 0x0004(0x0004)
	struct FName                                       TargetCamGroup;                                   		// 0x0008(0x0008) (CPF_Edit)
	int                                                ShotNumber;                                       		// 0x0010(0x0004)
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004)
	struct FName                                       EventName;                                        		// 0x0004(0x0008) (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x001C
struct FFaceFXTrackKey
{
	float                                              StartTime;                                        		// 0x0000(0x0004)
	struct FString                                     FaceFXGroupName;                                  		// 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     FaceFXSeqName;                                    		// 0x0010(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0008
struct FFaceFXSoundCueKey
{
	class USoundCue*                                   FaceFXSoundCue;                                   		// 0x0000(0x0004) (CPF_Const)
	class UAkEvent*                                    FaceFXAkEvent;                                    		// 0x0004(0x0004) (CPF_Const)
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                        		// 0x0000(0x0004)
	struct FName                                       AnimSeqName;                                      		// 0x0004(0x0008)
	float                                              AnimStartOffset;                                  		// 0x000C(0x0004)
	float                                              AnimEndOffset;                                    		// 0x0010(0x0004)
	float                                              AnimPlayRate;                                     		// 0x0014(0x0004)
	unsigned long                                      bLooping : 1;                                     		// 0x0018(0x0004)
	unsigned long                                      bReverse : 1;                                     		// 0x0018(0x0004)
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x0008
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                        		// 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	int                                                MaterialIndex;                                    		// 0x0004(0x0004)
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x0004
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                           		// 0x0000(0x0004)
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x001C
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                   		// 0x0000(0x0004) (CPF_Edit)
	TArray<struct FPrimitiveMaterialRef>               AffectedMaterialRefs;                             		// 0x0004(0x000C) (CPF_Component, CPF_NeedCtorLink)
	TArray<struct FPostProcessMaterialRef>             AffectedPPChainMaterialRefs;                      		// 0x0010(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                        		// 0x0000(0x0008)
	float                                              Time;                                             		// 0x0008(0x0004)
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x000C
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                           		// 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x0005
struct FHeadTrackingKey
{
	float                                              Time;                                             		// 0x0000(0x0004)
	TEnumAsByte<enum class EHeadTrackingAction>        Action;                                           		// 0x0004(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackNotify.NotifyTrackKey
// 0x0008
struct FNotifyTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004)
	class UAnimNotify*                                 Notify;                                           		// 0x0004(0x0004)
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004)
	float                                              Duration;                                         		// 0x0004(0x0004) (CPF_Edit)
	int                                                ClipIDNumber;                                     		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004)
	TEnumAsByte<enum class ETrackToggleAction>         ToggleAction;                                     		// 0x0004(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0010
struct FSoundTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004)
	float                                              Volume;                                           		// 0x0004(0x0004)
	float                                              Pitch;                                            		// 0x0008(0x0004)
	class USoundCue*                                   Sound;                                            		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004)
	TEnumAsByte<enum class EVisibilityTrackAction>     Action;                                           		// 0x0004(0x0001) (CPF_Edit)
	TEnumAsByte<enum class EVisibilityTrackCondition>  ActiveCondition;                                  		// 0x0005(0x0001)
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x0004
struct FRenderingPerformanceOverrides
{
	unsigned long                                      bAllowAmbientOcclusion : 1;                       		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bAllowDominantWholeSceneDynamicShadows : 1;       		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bAllowMotionBlurSkinning : 1;                     		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bAllowTemporalAA : 1;                             		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bAllowLightShafts : 1;                            		// 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0018
struct FFloatMaterialParamMICData
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                             		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<float>                                      MICResetFloats;                                   		// 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0018
struct FVectorMaterialParamMICData
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                             		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FVector>                             MICResetVectors;                                  		// 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x0020
struct FExpressionOutput
{
	struct FString                                     OutputName;                                       		// 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                Mask;                                             		// 0x000C(0x0004)
	int                                                MaskR;                                            		// 0x0010(0x0004)
	int                                                MaskG;                                            		// 0x0014(0x0004)
	int                                                MaskB;                                            		// 0x0018(0x0004)
	int                                                MaskA;                                            		// 0x001C(0x0004)
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x002C
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                       		// 0x0000(0x0004)
	int                                                OutputIndex;                                      		// 0x0004(0x0004)
	struct FString                                     InputName;                                        		// 0x0008(0x000C) (CPF_NeedCtorLink)
	int                                                Mask;                                             		// 0x0014(0x0004)
	int                                                MaskR;                                            		// 0x0018(0x0004)
	int                                                MaskG;                                            		// 0x001C(0x0004)
	int                                                MaskB;                                            		// 0x0020(0x0004)
	int                                                MaskA;                                            		// 0x0024(0x0004)
	int                                                GCC64_Padding;                                    		// 0x0028(0x0004)
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0038
struct FCustomInput
{
	struct FString                                     InputName;                                        		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FExpressionInput                            Input;                                            		// 0x000C(0x002C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// 0x006C
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                        		// 0x0000(0x0008) (CPF_Edit)
	TEnumAsByte<enum class ELandscapeLayerBlendType>   BlendType;                                        		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	struct FExpressionInput                            LayerInput;                                       		// 0x000C(0x002C) (CPF_NeedCtorLink)
	struct FExpressionInput                            HeightInput;                                      		// 0x0038(0x002C) (CPF_NeedCtorLink)
	float                                              PreviewWeight;                                    		// 0x0064(0x0004) (CPF_Edit)
	struct FPointer                                    InstanceOverride;                                 		// 0x0068(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x0040
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                  		// 0x0000(0x0004) (CPF_Transient)
	struct FGuid                                       ExpressionInputId;                                		// 0x0004(0x0010)
	struct FExpressionInput                            Input;                                            		// 0x0014(0x002C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x0034
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                 		// 0x0000(0x0004) (CPF_Transient)
	struct FGuid                                       ExpressionOutputId;                               		// 0x0004(0x0010)
	struct FExpressionOutput                           Output;                                           		// 0x0014(0x0020) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x0020
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit)
	class UFont*                                       FontValue;                                        		// 0x0008(0x0004) (CPF_Edit)
	int                                                FontPage;                                         		// 0x000C(0x0004) (CPF_Edit)
	struct FGuid                                       ExpressionGUID;                                   		// 0x0010(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit)
	float                                              ParameterValue;                                   		// 0x0008(0x0004) (CPF_Edit)
	struct FGuid                                       ExpressionGUID;                                   		// 0x000C(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x001C
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit)
	class UTexture*                                    ParameterValue;                                   		// 0x0008(0x0004) (CPF_Edit)
	struct FGuid                                       ExpressionGUID;                                   		// 0x000C(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit)
	struct FLinearColor                                ParameterValue;                                   		// 0x0008(0x0010) (CPF_Edit)
	struct FGuid                                       ExpressionGUID;                                   		// 0x0018(0x0010)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                   		// 0x0000(0x0010)
	float                                              StartTime;                                        		// 0x0010(0x0004)
	struct FName                                       ParameterName;                                    		// 0x0014(0x0008) (CPF_Edit)
	unsigned long                                      bLoop : 1;                                        		// 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bAutoActivate : 1;                                		// 0x001C(0x0004) (CPF_Edit)
	float                                              CycleTime;                                        		// 0x0020(0x0004) (CPF_Edit)
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0024(0x0004) (CPF_Edit)
	float                                              OffsetTime;                                       		// 0x0028(0x0004) (CPF_Edit)
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x002C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x0008 (0x0038 - 0x0030)
struct FFontParameterValueOverTime : public FParameterValueOverTime
{
	class UFont*                                       FontValue;                                        		// 0x0030(0x0004) (CPF_Edit)
	int                                                FontPage;                                         		// 0x0034(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0014 (0x0044 - 0x0030)
struct FScalarParameterValueOverTime : public FParameterValueOverTime
{
	float                                              ParameterValue;                                   		// 0x0030(0x0004) (CPF_Edit)
	struct FInterpCurveFloat                           ParameterValueCurve;                              		// 0x0034(0x0010) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0004 (0x0034 - 0x0030)
struct FTextureParameterValueOverTime : public FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                   		// 0x0030(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0020 (0x0050 - 0x0030)
struct FVectorParameterValueOverTime : public FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0030(0x0010) (CPF_Edit)
	struct FInterpCurveVector                          ParameterValueCurve;                              		// 0x0040(0x0010) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.LinearColorParameterValueOverTime
// 0x0020 (0x0050 - 0x0030)
struct FLinearColorParameterValueOverTime : public FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0030(0x0010) (CPF_Edit)
	struct FInterpCurveLinearColor                     ParameterValueCurve;                              		// 0x0040(0x0010) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x003C
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                         		// 0x0000(0x003C) (CPF_Const, CPF_Native, CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x003C
struct FParticleSysParam
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_Edit)
	TEnumAsByte<enum class EParticleSysParamType>      ParamType;                                        		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                           		// 0x000C(0x0004) (CPF_Edit)
	float                                              Scalar_Low;                                       		// 0x0010(0x0004) (CPF_Edit)
	struct FVector                                     Vector;                                           		// 0x0014(0x000C) (CPF_Edit)
	struct FVector                                     Vector_Low;                                       		// 0x0020(0x000C) (CPF_Edit)
	struct FColor                                      Color;                                            		// 0x002C(0x0004) (CPF_Edit)
	class AActor*                                      Actor;                                            		// 0x0030(0x0004) (CPF_Edit)
	class UMaterialInterface*                          Material;                                         		// 0x0034(0x0004) (CPF_Edit)
	class UStaticMesh*                                 Mesh;                                             		// 0x0038(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	unsigned long                                      bOpaque : 1;                                      		// 0x0000(0x0004)
	unsigned long                                      bTranslucent : 1;                                 		// 0x0000(0x0004)
	unsigned long                                      bDistortion : 1;                                  		// 0x0000(0x0004)
	unsigned long                                      bOneLayerDistortionRelevance : 1;                 		// 0x0000(0x0004)
	unsigned long                                      bLit : 1;                                         		// 0x0000(0x0004)
	unsigned long                                      bUsesSceneColor : 1;                              		// 0x0000(0x0004)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int                                                Type;                                             		// 0x0000(0x0004)
	struct FName                                       EventName;                                        		// 0x0004(0x0008)
	float                                              EmitterTime;                                      		// 0x000C(0x0004)
	struct FVector                                     Location;                                         		// 0x0010(0x000C)
	struct FVector                                     Direction;                                        		// 0x001C(0x000C)
	struct FVector                                     Velocity;                                         		// 0x0028(0x000C)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000 (0x0034 - 0x0034)
struct FParticleEventSpawnData : public FParticleEventData
{

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004 (0x0038 - 0x0034)
struct FParticleEventDeathData : public FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034(0x0004)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020 (0x0054 - 0x0034)
struct FParticleEventCollideData : public FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034(0x0004)
	struct FVector                                     Normal;                                           		// 0x0038(0x000C)
	float                                              Time;                                             		// 0x0044(0x0004)
	int                                                Item;                                             		// 0x0048(0x0004)
	struct FName                                       BoneName;                                         		// 0x004C(0x0008)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010 (0x0044 - 0x0034)
struct FParticleEventKismetData : public FParticleEventData
{
	unsigned long                                      UsePSysCompLocation : 1;                          		// 0x0034(0x0004)
	struct FVector                                     Normal;                                           		// 0x0038(0x000C)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventAttractorCollideData
// 0x0000 (0x0054 - 0x0054)
struct FParticleEventAttractorCollideData : public FParticleEventCollideData
{

};

// ScriptStruct Engine.ParticleModuleAttractorBoneSocket.AttractLocationBoneSocketInfo
// 0x0014
struct FAttractLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                   		// 0x0000(0x0008) (CPF_Edit)
	struct FVector                                     Offset;                                           		// 0x0008(0x000C) (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned long                                      bModify : 1;                                      		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bScale : 1;                                       		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bLock : 1;                                        		// 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleCollision.ParticleAttractorCollisionAction
// 0x0010
struct FParticleAttractorCollisionAction
{
	TEnumAsByte<enum class ParticleAttractorActionType> Type;                                             		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	struct FString                                     EventName;                                        		// 0x0004(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x0018
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit)
	unsigned long                                      bGetSeedFromInstance : 1;                         		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bInstanceSeedIsIndex : 1;                         		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bResetSeedOnEmitterLooping : 1;                   		// 0x0008(0x0004) (CPF_Edit)
	TArray<int>                                        RandomSeeds;                                      		// 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<enum class EParticleEventType>         Type;                                             		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                        		// 0x0004(0x0004) (CPF_Edit)
	int                                                LowFreq;                                          		// 0x0008(0x0004) (CPF_Edit)
	int                                                ParticleFrequency;                                		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      FirstTimeOnly : 1;                                		// 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      LastTimeOnly : 1;                                 		// 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      UseReflectedImpactVector : 1;                     		// 0x0010(0x0004) (CPF_Edit)
	struct FName                                       CustomName;                                       		// 0x0014(0x0008) (CPF_Edit)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                 		// 0x001C(0x000C) (CPF_Edit, CPF_NeedCtorLink, CPF_EditInline)
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                   		// 0x0000(0x0008) (CPF_Edit)
	struct FVector                                     Offset;                                           		// 0x0008(0x000C) (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned long                                      bProcessDuringSpawn : 1;                          		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bProcessDuringUpdate : 1;                         		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bUseEmitterTime : 1;                              		// 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0030
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bUseEmitterTime : 1;                              		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bSpawnTimeOnly : 1;                               		// 0x0008(0x0004) (CPF_Edit)
	TEnumAsByte<enum class EEmitterDynamicParameterValue> ValueMethod;                                      		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x000D(0x0003) MISSED OFFSET
	unsigned long                                      bScaleVelocityByParamValue : 1;                   		// 0x0010(0x0004) (CPF_Edit)
	struct FRawDistributionFloat                       ParamValue;                                       		// 0x0014(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                            		// 0x0000(0x0004) (CPF_Edit)
	int                                                CountLow;                                         		// 0x0004(0x0004) (CPF_Edit)
	float                                              Time;                                             		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                    		// 0x0000(0x0004) (CPF_Edit)
	float                                              WeightForSpawnLod;                                		// 0x0004(0x0004) (CPF_Edit)
	float                                              SpawnLodRateVsLifeBias;                           		// 0x0008(0x0004) (CPF_Edit)
	float                                              RelativeFadeoutTime;                              		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x000C
struct FParticleEmitterReplayFrame
{
	int                                                EmitterType;                                      		// 0x0000(0x0004) (CPF_Const, CPF_Native)
	int                                                OriginalEmitterIndex;                             		// 0x0004(0x0004) (CPF_Const, CPF_Native)
	struct FPointer                                    FrameState;                                       		// 0x0008(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x000C
struct FParticleSystemReplayFrame
{
	TArray<struct FParticleEmitterReplayFrame>         Emitters;                                         		// 0x0000(0x000C) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                         		// 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                       		// 0x0010(0x0010)
	struct FVector                                     LinVel;                                           		// 0x0020(0x000C)
	struct FVector                                     AngVel;                                           		// 0x002C(0x000C)
	unsigned char                                      bNewData;                                         		// 0x0038(0x0001)
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x001C
struct FRootMotionCurve
{
	struct FName                                       AnimName;                                         		// 0x0000(0x0008) (CPF_Edit)
	struct FInterpCurveVector                          Curve;                                            		// 0x0008(0x0010) (CPF_Edit, CPF_NeedCtorLink)
	float                                              MaxCurveTime;                                     		// 0x0018(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x004C
struct FVehicleState
{
	struct FRigidBodyState                             RBState;                                          		// 0x0000(0x0040)
	unsigned char                                      ServerBrake;                                      		// 0x0040(0x0001)
	unsigned char                                      ServerGas;                                        		// 0x0041(0x0001)
	unsigned char                                      ServerSteering;                                   		// 0x0042(0x0001)
	unsigned char                                      ServerRise;                                       		// 0x0043(0x0001)
	unsigned long                                      bServerHandbrake : 1;                             		// 0x0044(0x0004)
	int                                                ServerView;                                       		// 0x0048(0x0004)
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x0010
struct FDamageParameters
{
	TEnumAsByte<enum class EDamageParameterOverrideMode> OverrideMode;                                     		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              BaseDamage;                                       		// 0x0004(0x0004) (CPF_Edit)
	float                                              Radius;                                           		// 0x0008(0x0004) (CPF_Edit)
	float                                              Momentum;                                         		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x0018
struct FDamagePair
{
	struct FName                                       DamageCauserName;                                 		// 0x0000(0x0008) (CPF_Edit)
	struct FDamageParameters                           Params;                                           		// 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.RB_BodyInstance.BulletBodyData
// 0x0008
struct FBulletBodyData
{
	int                                                SceneIndex;                                       		// 0x0000(0x0004)
	struct FPointer                                    Body;                                             		// 0x0004(0x0004)
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	unsigned char                                      bLimited;                                         		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              LimitSize;                                        		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x0030
struct FSeqOpInputLink
{
	struct FString                                     LinkDesc;                                         		// 0x0000(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bHasImpulse : 1;                                  		// 0x000C(0x0004)
	int                                                QueuedActivations;                                		// 0x0010(0x0004)
	unsigned long                                      bDisabled : 1;                                    		// 0x0014(0x0004)
	unsigned long                                      bDisabledPIE : 1;                                 		// 0x0014(0x0004)
	class USequenceOp*                                 LinkedOp;                                         		// 0x0018(0x0004)
	int                                                DrawY;                                            		// 0x001C(0x0004)
	unsigned long                                      bHidden : 1;                                      		// 0x0020(0x0004)
	float                                              ActivateDelay;                                    		// 0x0024(0x0004)
	unsigned long                                      bMoving : 1;                                      		// 0x0028(0x0004) (CPF_Transient)
	unsigned long                                      bClampedMax : 1;                                  		// 0x0028(0x0004)
	unsigned long                                      bClampedMin : 1;                                  		// 0x0028(0x0004)
	int                                                OverrideDelta;                                    		// 0x002C(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x0008
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                         		// 0x0000(0x0004)
	int                                                InputLinkIdx;                                     		// 0x0004(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0038
struct FSeqOpOutputLink
{
	TArray<struct FSeqOpOutputInputLink>               Links;                                            		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LinkDesc;                                         		// 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bHasImpulse : 1;                                  		// 0x0018(0x0004)
	unsigned long                                      bDisabled : 1;                                    		// 0x0018(0x0004)
	unsigned long                                      bDisabledPIE : 1;                                 		// 0x0018(0x0004)
	class USequenceOp*                                 LinkedOp;                                         		// 0x001C(0x0004)
	float                                              ActivateDelay;                                    		// 0x0020(0x0004)
	int                                                DrawY;                                            		// 0x0024(0x0004)
	unsigned long                                      bHidden : 1;                                      		// 0x0028(0x0004)
	unsigned long                                      bMoving : 1;                                      		// 0x0028(0x0004) (CPF_Transient)
	unsigned long                                      bClampedMax : 1;                                  		// 0x0028(0x0004)
	unsigned long                                      bClampedMin : 1;                                  		// 0x0028(0x0004)
	int                                                OverrideDelta;                                    		// 0x002C(0x0004)
	float                                              PIEActivationTime;                                		// 0x0030(0x0004) (CPF_Transient)
	unsigned long                                      bIsActivated : 1;                                 		// 0x0034(0x0004) (CPF_Transient, CPF_NoImport)
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0048
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                     		// 0x0000(0x0004)
	TArray<class USequenceVariable*>                   LinkedVariables;                                  		// 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LinkDesc;                                         		// 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FName                                       LinkVar;                                          		// 0x001C(0x0008)
	struct FName                                       PropertyName;                                     		// 0x0024(0x0008)
	unsigned long                                      bWriteable : 1;                                   		// 0x002C(0x0004)
	unsigned long                                      bSequenceNeverReadsOnlyWritesToThisVar : 1;       		// 0x002C(0x0004)
	unsigned long                                      bModifiesLinkedObject : 1;                        		// 0x002C(0x0004)
	unsigned long                                      bHidden : 1;                                      		// 0x002C(0x0004)
	int                                                MinVars;                                          		// 0x0030(0x0004)
	int                                                MaxVars;                                          		// 0x0034(0x0004)
	int                                                DrawX;                                            		// 0x0038(0x0004)
	class UProperty*                                   CachedProperty;                                   		// 0x003C(0x0004) (CPF_Const, CPF_Transient)
	unsigned long                                      bAllowAnyType : 1;                                		// 0x0040(0x0004)
	unsigned long                                      bMoving : 1;                                      		// 0x0040(0x0004) (CPF_Transient)
	unsigned long                                      bClampedMax : 1;                                  		// 0x0040(0x0004)
	unsigned long                                      bClampedMin : 1;                                  		// 0x0040(0x0004)
	int                                                OverrideDelta;                                    		// 0x0044(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0028
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                     		// 0x0000(0x0004)
	TArray<class USequenceEvent*>                      LinkedEvents;                                     		// 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LinkDesc;                                         		// 0x0010(0x000C) (CPF_NeedCtorLink)
	int                                                DrawX;                                            		// 0x001C(0x0004)
	unsigned long                                      bHidden : 1;                                      		// 0x0020(0x0004)
	unsigned long                                      bMoving : 1;                                      		// 0x0020(0x0004) (CPF_Transient)
	unsigned long                                      bClampedMax : 1;                                  		// 0x0020(0x0004)
	unsigned long                                      bClampedMin : 1;                                  		// 0x0020(0x0004)
	int                                                OverrideDelta;                                    		// 0x0024(0x0004)
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0010
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                      		// 0x0000(0x0004)
	class USequenceOp*                                 Op;                                               		// 0x0004(0x0004)
	int                                                InputIdx;                                         		// 0x0008(0x0004)
	float                                              RemainingDelay;                                   		// 0x000C(0x0004)
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x001C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                   		// 0x0000(0x0004)
	class AActor*                                      InOriginator;                                     		// 0x0004(0x0004)
	class AActor*                                      InInstigator;                                     		// 0x0008(0x0004)
	TArray<int>                                        ActivateIndices;                                  		// 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bPushTop : 1;                                     		// 0x0018(0x0004)
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C)
	float                                              TimeStamp;                                        		// 0x000C(0x0004)
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x000C
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                            		// 0x0000(0x0004) (CPF_Const)
	struct FName                                       LevelName;                                        		// 0x0004(0x0008) (CPF_Edit, CPF_Const)
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0004
struct FTextureGroupContainer
{
	unsigned long                                      TEXTUREGROUP_World : 1;                           		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_WorldNormalMap : 1;                  		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_WorldSpecular : 1;                   		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Character : 1;                       		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_CharacterNormalMap : 1;              		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_CharacterSpecular : 1;               		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Weapon : 1;                          		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_WeaponNormalMap : 1;                 		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_WeaponSpecular : 1;                  		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Vehicle : 1;                         		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_VehicleNormalMap : 1;                		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_VehicleSpecular : 1;                 		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Cinematic : 1;                       		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Effects : 1;                         		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_EffectsNotFiltered : 1;              		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Skybox : 1;                          		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_UI : 1;                              		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Lightmap : 1;                        		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_RenderTarget : 1;                    		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_MobileFlattened : 1;                 		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_ProcBuilding_Face : 1;               		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_ProcBuilding_LightMap : 1;           		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Shadowmap : 1;                       		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_ColorLookupTable : 1;                		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Terrain_Heightmap : 1;               		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Terrain_Weightmap : 1;               		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_ImageBasedReflection : 1;            		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      TEXTUREGROUP_Bokeh : 1;                           		// 0x0000(0x0004) (CPF_Edit, CPF_Const)
};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// 0x0008
struct FSwitchRange
{
	int                                                Min;                                              		// 0x0000(0x0004) (CPF_Edit)
	int                                                Max;                                              		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                        		// 0x0000(0x0004) (CPF_Edit)
	TEnumAsByte<enum class EViewTargetBlendFunction>   BlendFunction;                                    		// 0x0004(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                         		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bLockOutgoing : 1;                                		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                        		// 0x0000(0x0008) (CPF_Edit)
	unsigned char                                      bFallThru;                                        		// 0x0008(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x0008
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                      		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bFallThru : 1;                                    		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bDefaultValue : 1;                                		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0010
struct FAnimSetBakeAndPruneStatus
{
	struct FString                                     AnimSetName;                                      		// 0x0000(0x000C) (CPF_Edit, CPF_EditConst, CPF_NeedCtorLink)
	unsigned long                                      bReferencedButUnused : 1;                         		// 0x000C(0x0004) (CPF_Edit, CPF_EditConst)
	unsigned long                                      bSkipBakeAndPrune : 1;                            		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bSkipCooking : 1;                                 		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
// 0x0010
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                             		// 0x0000(0x0004) (CPF_Edit)
	float                                              PitchScale;                                       		// 0x0004(0x0004) (CPF_Edit)
	float                                              VolumeScale;                                      		// 0x0008(0x0004) (CPF_Edit)
	float                                              Weight;                                           		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x004C
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                              		// 0x0000(0x0004) (CPF_Edit)
	float                                              FadeInDistanceEnd;                                		// 0x0004(0x0004) (CPF_Edit)
	float                                              FadeOutDistanceStart;                             		// 0x0008(0x0004) (CPF_Edit)
	float                                              FadeOutDistanceEnd;                               		// 0x000C(0x0004) (CPF_Edit)
	float                                              Volume;                                           		// 0x0010(0x0004) (CPF_Edit)
	struct FRawDistributionFloat                       FadeInDistance;                                   		// 0x0014(0x001C) (CPF_Component, CPF_NeedCtorLink, CPF_Deprecated)
	struct FRawDistributionFloat                       FadeOutDistance;                                  		// 0x0030(0x001C) (CPF_Component, CPF_NeedCtorLink, CPF_Deprecated)
};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x0010
struct FSubtitleCue
{
	struct FString                                     Text;                                             		// 0x0000(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	float                                              Time;                                             		// 0x000C(0x0004) (CPF_Edit, CPF_Const, CPF_Localized)
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x001C
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                      		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FSubtitleCue>                        Subtitles;                                        		// 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bMature : 1;                                      		// 0x0018(0x0004)
	unsigned long                                      bManualWordWrap : 1;                              		// 0x0018(0x0004)
	unsigned long                                      bSingleLine : 1;                                  		// 0x0018(0x0004)
};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// 0x0020
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                     		// 0x0000(0x0004)
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                     		// 0x0004(0x0004)
	class ALandscapeProxy*                             Owner;                                            		// 0x0008(0x0004)
	int                                                DebugColorChannel;                                		// 0x000C(0x0004) (CPF_Transient)
	unsigned long                                      bSelected : 1;                                    		// 0x0010(0x0004) (CPF_Transient)
	struct FString                                     SourceFilePath;                                   		// 0x0014(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// 0x002C
struct FLandscapeLayerInfo
{
	struct FName                                       LayerName;                                        		// 0x0000(0x0008) (CPF_Edit)
	float                                              Hardness;                                         		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bNoWeightBlend : 1;                               		// 0x000C(0x0004)
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0010(0x0004) (CPF_Edit)
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                     		// 0x0014(0x0004)
	unsigned long                                      bSelected : 1;                                    		// 0x0018(0x0004) (CPF_Transient)
	int                                                DebugColorChannel;                                		// 0x001C(0x0004) (CPF_Transient)
	struct FString                                     LayerSourceFile;                                  		// 0x0020(0x000C) (CPF_Transient, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{

};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{

};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0030
struct FTerrainLayer
{
	struct FString                                     Name;                                             		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UTerrainLayerSetup*                          Setup;                                            		// 0x000C(0x0004) (CPF_Edit)
	int                                                AlphaMapIndex;                                    		// 0x0010(0x0004)
	unsigned long                                      Highlighted : 1;                                  		// 0x0014(0x0004) (CPF_Edit)
	unsigned long                                      WireframeHighlighted : 1;                         		// 0x0014(0x0004) (CPF_Edit)
	unsigned long                                      Hidden : 1;                                       		// 0x0014(0x0004) (CPF_Edit)
	struct FColor                                      HighlightColor;                                   		// 0x0018(0x0004) (CPF_Edit)
	struct FColor                                      WireframeColor;                                   		// 0x001C(0x0004) (CPF_Edit)
	int                                                MinX;                                             		// 0x0020(0x0004)
	int                                                MinY;                                             		// 0x0024(0x0004)
	int                                                MaxX;                                             		// 0x0028(0x0004)
	int                                                MaxY;                                             		// 0x002C(0x0004)
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0014
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	float                                              X;                                                		// 0x0004(0x0004)
	float                                              Y;                                                		// 0x0008(0x0004)
	float                                              Scale;                                            		// 0x000C(0x0004)
	int                                                Yaw;                                              		// 0x0010(0x0004)
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x0024
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                          		// 0x0000(0x0004) (CPF_Edit, CPF_EditInline)
	float                                              MinScale;                                         		// 0x0004(0x0004) (CPF_Edit)
	float                                              MaxScale;                                         		// 0x0008(0x0004) (CPF_Edit)
	float                                              Density;                                          		// 0x000C(0x0004) (CPF_Edit)
	float                                              SlopeRotationBlend;                               		// 0x0010(0x0004) (CPF_Edit)
	int                                                RandSeed;                                         		// 0x0014(0x0004) (CPF_Edit)
	TArray<struct FTerrainDecorationInstance>          Instances;                                        		// 0x0018(0x000C) (CPF_Component, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x001C
struct FTerrainDecoLayer
{
	struct FString                                     Name;                                             		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FTerrainDecoration>                  Decorations;                                      		// 0x000C(0x000C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	int                                                AlphaMapIndex;                                    		// 0x0018(0x0004)
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{

};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x000C
struct FCachedTerrainMaterialArray
{
	TArray<struct FPointer>                            CachedMaterials;                                  		// 0x0000(0x000C) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int                                                X;                                                		// 0x0000(0x0004)
	int                                                Y;                                                		// 0x0004(0x0004)
	int                                                Weight;                                           		// 0x0008(0x0004)
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x000A
struct FWeightmapLayerAllocationInfo
{
	struct FName                                       LayerName;                                        		// 0x0000(0x0008)
	unsigned char                                      WeightmapTextureIndex;                            		// 0x0008(0x0001)
	unsigned char                                      WeightmapTextureChannel;                          		// 0x0009(0x0001)
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0004
struct FLightMapRef
{
	struct FPointer                                    Reference;                                        		// 0x0000(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.TerrainComponent.TerrainPatchBounds
// 0x000C
struct FTerrainPatchBounds
{
	float                                              MinHeight;                                        		// 0x0000(0x0004)
	float                                              MaxHeight;                                        		// 0x0004(0x0004)
	float                                              MaxDisplacement;                                  		// 0x0008(0x0004)
};

// ScriptStruct Engine.TerrainComponent.TerrainMaterialMask
// 0x000C
struct FTerrainMaterialMask
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.TerrainComponent.TerrainMaterialMask.BitMask
	int                                                NumBits;                                          		// 0x0008(0x0004)
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x000C
struct FTerrainBVTree
{
	TArray<int>                                        Nodes;                                            		// 0x0000(0x000C) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	unsigned long                                      Enabled : 1;                                      		// 0x0000(0x0004) (CPF_Edit)
	float                                              Base;                                             		// 0x0004(0x0004) (CPF_Edit)
	float                                              NoiseScale;                                       		// 0x0008(0x0004) (CPF_Edit)
	float                                              NoiseAmount;                                      		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0054
struct FTerrainFilteredMaterial
{
	unsigned long                                      UseNoise : 1;                                     		// 0x0000(0x0004) (CPF_Edit)
	float                                              NoiseScale;                                       		// 0x0004(0x0004) (CPF_Edit)
	float                                              NoisePercent;                                     		// 0x0008(0x0004) (CPF_Edit)
	struct FFilterLimit                                MinHeight;                                        		// 0x000C(0x0010) (CPF_Edit)
	struct FFilterLimit                                MaxHeight;                                        		// 0x001C(0x0010) (CPF_Edit)
	struct FFilterLimit                                MinSlope;                                         		// 0x002C(0x0010) (CPF_Edit)
	struct FFilterLimit                                MaxSlope;                                         		// 0x003C(0x0010) (CPF_Edit)
	float                                              Alpha;                                            		// 0x004C(0x0004) (CPF_Edit)
	class UTerrainMaterial*                            Material;                                         		// 0x0050(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0010
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                      		// 0x0000(0x0004) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	TArray<class UUIDataStore*>                        DataStores;                                       		// 0x0004(0x000C) (CPF_Const, CPF_Transient, CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0018
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                          		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Desc;                                             		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x001C
struct FAutoCompleteNode
{
	int                                                IndexChar;                                        		// 0x0000(0x0004)
	TArray<int>                                        AutoCompleteListIndices;                          		// 0x0004(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	TArray<struct FPointer>                            ChildNodes;                                       		// 0x0010(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Input.KeyBind
// 0x0018
struct FKeyBind
{
	struct FName                                       Name;                                             		// 0x0000(0x0008)
	struct FString                                     Command;                                          		// 0x0008(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      Control : 1;                                      		// 0x0014(0x0004)
	unsigned long                                      Shift : 1;                                        		// 0x0014(0x0004)
	unsigned long                                      Alt : 1;                                          		// 0x0014(0x0004)
	unsigned long                                      bIgnoreCtrl : 1;                                  		// 0x0014(0x0004)
	unsigned long                                      bIgnoreShift : 1;                                 		// 0x0014(0x0004)
	unsigned long                                      bIgnoreAlt : 1;                                   		// 0x0014(0x0004)
};

// ScriptStruct Engine.Input.TouchTracker
// 0x0018
struct FTouchTracker
{
	int                                                Handle;                                           		// 0x0000(0x0004)
	int                                                TouchpadIndex;                                    		// 0x0004(0x0004)
	struct FVector2D                                   Location;                                         		// 0x0008(0x0008)
	TEnumAsByte<enum class EInputEvent>                EventType;                                        		// 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	unsigned long                                      bTrapInput : 1;                                   		// 0x0014(0x0004)
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x000C
struct FSoundEventMapping
{
	struct FName                                       SoundEventName;                                   		// 0x0000(0x0008) (CPF_Edit)
	class USoundCue*                                   SoundToPlay;                                      		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x004C
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                                  		// 0x0000(0x0030)
	struct FString                                     SendingPlayerNick;                                		// 0x0030(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bIsFriendInvite : 1;                              		// 0x003C(0x0004)
	unsigned long                                      bIsGameInvite : 1;                                		// 0x003C(0x0004)
	unsigned long                                      bWasAccepted : 1;                                 		// 0x003C(0x0004)
	unsigned long                                      bWasDenied : 1;                                   		// 0x003C(0x0004)
	struct FString                                     Message;                                          		// 0x0040(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x0058
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000(0x0030) (CPF_Const)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0030(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.OnlineFriend.SessionId
	struct FString                                     NickName;                                         		// 0x0038(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     PresenceInfo;                                     		// 0x0044(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TEnumAsByte<enum class EOnlineFriendState>         FriendState;                                      		// 0x0050(0x0001) (CPF_Const)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0051(0x0003) MISSED OFFSET
	unsigned long                                      bIsOnline : 1;                                    		// 0x0054(0x0004) (CPF_Const)
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0054(0x0004) (CPF_Const)
	unsigned long                                      bIsPlayingThisGame : 1;                           		// 0x0054(0x0004) (CPF_Const)
	unsigned long                                      bIsJoinable : 1;                                  		// 0x0054(0x0004) (CPF_Const)
	unsigned long                                      bHasVoiceSupport : 1;                             		// 0x0054(0x0004) (CPF_Const)
	unsigned long                                      bHaveInvited : 1;                                 		// 0x0054(0x0004)
	unsigned long                                      bHasInvitedYou : 1;                               		// 0x0054(0x0004) (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x0060
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000(0x0030) (CPF_Const)
	struct FString                                     NickName;                                         		// 0x0030(0x000C) (CPF_Const, CPF_NeedCtorLink)
	unsigned char                                      LocalUserNum;                                     		// 0x003C(0x0001) (CPF_Const)
	TEnumAsByte<enum class ENATType>                   NatType;                                          		// 0x003D(0x0001) (CPF_Const)
	unsigned char                                      UnknownData00[0x2];                               		// 0x003E(0x0002) MISSED OFFSET
	int                                                TitleId;                                          		// 0x0040(0x0004) (CPF_Const)
	unsigned long                                      bIsLocal : 1;                                     		// 0x0044(0x0004) (CPF_Const)
	unsigned long                                      bIsInPartyVoice : 1;                              		// 0x0044(0x0004) (CPF_Const)
	unsigned long                                      bIsTalking : 1;                                   		// 0x0044(0x0004) (CPF_Const)
	unsigned long                                      bIsInGameSession : 1;                             		// 0x0044(0x0004) (CPF_Const)
	unsigned long                                      bIsPlayingThisGame : 1;                           		// 0x0044(0x0004) (CPF_Const)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0048(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.OnlinePartyMember.SessionId
	int                                                Data1;                                            		// 0x0050(0x0004) (CPF_Const)
	int                                                Data2;                                            		// 0x0054(0x0004) (CPF_Const)
	int                                                Data3;                                            		// 0x0058(0x0004) (CPF_Const)
	int                                                Data4;                                            		// 0x005C(0x0004) (CPF_Const)
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x0008
struct FPlayerStorageArrayProvider
{
	int                                                PlayerStorageId;                                  		// 0x0000(0x0004)
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                         		// 0x0004(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementReward
// 0x0025
struct FAchievementReward
{
	struct FString                                     RewardName;                                       		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     Data;                                             		// 0x0018(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TEnumAsByte<enum class EAchievementRewardType>     RewardType;                                       		// 0x0024(0x0001) (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementMediaAsset
// 0x001C
struct FAchievementMediaAsset
{
	struct FString                                     AssetName;                                        		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TEnumAsByte<enum class EAchievementMediaAssetType> AssetType;                                        		// 0x000C(0x0001) (CPF_Const)
	unsigned char                                      UnknownData00[0x3];                               		// 0x000D(0x0003) MISSED OFFSET
	struct FString                                     AssetURL;                                         		// 0x0010(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementTitleAssociation
// 0x0010
struct FAchievementTitleAssociation
{
	struct FString                                     LocalizedTitleName;                               		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	int                                                TitleId;                                          		// 0x000C(0x0004) (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x00C0
struct FAchievementDetails
{
	int                                                Id;                                               		// 0x0000(0x0004) (CPF_Const)
	struct FString                                     StringId;                                         		// 0x0004(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     AchievementName;                                  		// 0x0010(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x001C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     HowTo;                                            		// 0x0028(0x000C) (CPF_Const, CPF_NeedCtorLink)
	class USurface*                                    Image;                                            		// 0x0034(0x0004)
	unsigned char                                      MonthEarned;                                      		// 0x0038(0x0001) (CPF_Const)
	unsigned char                                      DayEarned;                                        		// 0x0039(0x0001) (CPF_Const)
	unsigned char                                      YearEarned;                                       		// 0x003A(0x0001) (CPF_Const)
	unsigned char                                      DayOfWeekEarned;                                  		// 0x003B(0x0001) (CPF_Const)
	int                                                GamerPoints;                                      		// 0x003C(0x0004) (CPF_Const)
	unsigned long                                      bIsSecret : 1;                                    		// 0x0040(0x0004) (CPF_Const)
	unsigned long                                      bWasAchievedOnline : 1;                           		// 0x0040(0x0004) (CPF_Const)
	unsigned long                                      bWasAchievedOffline : 1;                          		// 0x0040(0x0004) (CPF_Const)
	TEnumAsByte<enum class EAchievementUnlockType>     UnlockType;                                       		// 0x0044(0x0001) (CPF_Const)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0045(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x8];                               		// 0x0045(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.AchievementDetails.ChallengeWindowBegin
	unsigned char                                      UnknownData02[0x8];                               		// 0x0050(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.AchievementDetails.ChallengeWindowEnd
	struct FString                                     DeepLink;                                         		// 0x0058(0x000C) (CPF_Const, CPF_NeedCtorLink)
	unsigned char                                      UnknownData03[0x8];                               		// 0x0064(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.AchievementDetails.EstimatedUnlockTime
	unsigned long                                      bIsRevoked : 1;                                   		// 0x006C(0x0004) (CPF_Const)
	TEnumAsByte<enum class EAchievementParticipationType> ParticipationType;                                		// 0x0070(0x0001) (CPF_Const)
	unsigned char                                      UnknownData04[0x3];                               		// 0x0071(0x0003) MISSED OFFSET
	TArray<struct FString>                             PlatformsAvailableOn;                             		// 0x0074(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TEnumAsByte<enum class EAchievementProgressState>  ProgressState;                                    		// 0x0080(0x0001) (CPF_Const)
	unsigned char                                      UnknownData05[0x3];                               		// 0x0081(0x0003) MISSED OFFSET
	TArray<struct FAchievementReward>                  Rewards;                                          		// 0x0084(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FAchievementMediaAsset>              MediaAssets;                                      		// 0x0090(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ProductID;                                        		// 0x009C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ServiceConfigurationID;                           		// 0x00A8(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FAchievementTitleAssociation>        TitleAssociations;                                		// 0x00B4(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// 0x0018
struct FDynamicResourceProviderDefinition
{
	struct FName                                       ProviderTag;                                      		// 0x0000(0x0008) (CPF_Config)
	struct FString                                     ProviderClassName;                                		// 0x0008(0x000C) (CPF_Config, CPF_NeedCtorLink)
	class UClass*                                      ProviderClass;                                    		// 0x0014(0x0004) (CPF_Transient)
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x001C
struct FGameResourceDataProvider
{
	struct FName                                       ProviderTag;                                      		// 0x0000(0x0008) (CPF_Config)
	struct FString                                     ProviderClassName;                                		// 0x0008(0x000C) (CPF_Config, CPF_NeedCtorLink)
	unsigned long                                      bExpandProviders : 1;                             		// 0x0014(0x0004) (CPF_Config)
	class UClass*                                      ProviderClass;                                    		// 0x0018(0x0004) (CPF_Transient)
};

// ScriptStruct Engine.UIDataStore_Registry.RegistryKeyValuePair
// 0x0018
struct FRegistryKeyValuePair
{
	struct FString                                     Key;                                              		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// 0x001C
struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;                                  		// 0x0000(0x0004)
	class UClass*                                      DefaultGameSettingsClass;                         		// 0x0004(0x0004)
	class UClass*                                      SearchResultsProviderClass;                       		// 0x0008(0x0004)
	class UUIDataProvider_Settings*                    DesiredSettingsProvider;                          		// 0x000C(0x0004)
	class UOnlineGameSearch*                           Search;                                           		// 0x0010(0x0004)
	struct FName                                       SearchName;                                       		// 0x0014(0x0008)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x0014
struct FPlayerNickMetaData
{
	struct FName                                       PlayerNickName;                                   		// 0x0000(0x0008) (CPF_Const)
	struct FString                                     PlayerNickColumnName;                             		// 0x0008(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x0014
struct FRankMetaData
{
	struct FName                                       RankName;                                         		// 0x0000(0x0008) (CPF_Const)
	struct FString                                     RankColumnName;                                   		// 0x0008(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// 0x0014
struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;                                		// 0x0000(0x0004)
	class UUIDataProvider_Settings*                    Provider;                                         		// 0x0004(0x0004)
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0008(0x0004)
	struct FName                                       SettingsName;                                     		// 0x000C(0x0008)
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                     		// 0x0000(0x0008)
	unsigned char                                      ModifierKeyFlags;                                 		// 0x0008(0x0001)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x0018
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                     		// 0x0000(0x000C) (CPF_Config)
	struct FString                                     ButtonFontMarkupString;                           		// 0x000C(0x000C) (CPF_Config, CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x0080
struct FUIDataStoreInputAlias
{
	struct FName                                       AliasName;                                        		// 0x0000(0x0008) (CPF_Config)
	struct FUIInputKeyData                             PlatformInputKeys[0x5];                           		// 0x0008(0x0018) (CPF_Config, CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x001C
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                        		// 0x0000(0x0008)
	struct FName                                       Set;                                              		// 0x0008(0x0008)
	struct FString                                     MappedText;                                       		// 0x0010(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                     		// 0x0000(0x0004) (CPF_Edit)
	float                                              MinValue;                                         		// 0x0004(0x0004) (CPF_Edit)
	float                                              MaxValue;                                         		// 0x0008(0x0004) (CPF_Edit)
	float                                              NudgeValue;                                       		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bIntRange : 1;                                    		// 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x0024
struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;                                             		// 0x0000(0x0010) (CPF_Const)
	class UShadowMap1D*                                BranchShadowMap;                                  		// 0x0010(0x0004) (CPF_Const)
	class UShadowMap1D*                                FrondShadowMap;                                   		// 0x0014(0x0004) (CPF_Const)
	class UShadowMap1D*                                LeafMeshShadowMap;                                		// 0x0018(0x0004) (CPF_Const)
	class UShadowMap1D*                                LeafCardShadowMap;                                		// 0x001C(0x0004) (CPF_Const)
	class UShadowMap1D*                                BillboardShadowMap;                               		// 0x0020(0x0004) (CPF_Const)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x000C
struct FLensFlareElementMaterials
{
	TArray<class UMaterialInterface*>                  ElementMaterials;                                 		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x0144
struct FLensFlareElement
{
	struct FName                                       ElementName;                                      		// 0x0000(0x0008) (CPF_Edit)
	float                                              RayDistance;                                      		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bIsEnabled : 1;                                   		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bUseSourceDistance : 1;                           		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bNormalizeRadialDistance : 1;                     		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bModulateColorBySource : 1;                       		// 0x000C(0x0004) (CPF_Edit)
	struct FVector                                     Size;                                             		// 0x0010(0x000C) (CPF_Edit)
	TArray<class UMaterialInterface*>                  LFMaterials;                                      		// 0x001C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FRawDistributionFloat                       LFMaterialIndex;                                  		// 0x0028(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Scaling;                                          		// 0x0044(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionVector                      AxisScaling;                                      		// 0x0060(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Rotation;                                         		// 0x007C(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	unsigned long                                      bOrientTowardsSource : 1;                         		// 0x0098(0x0004) (CPF_Edit)
	struct FRawDistributionVector                      Color;                                            		// 0x009C(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Alpha;                                            		// 0x00B8(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionVector                      Offset;                                           		// 0x00D4(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Scale;                                    		// 0x00F0(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Color;                                    		// 0x010C(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DistMap_Alpha;                                    		// 0x0128(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x001C
struct FSourceTexture2DRegion
{
	int                                                OffsetX;                                          		// 0x0000(0x0004)
	int                                                OffsetY;                                          		// 0x0004(0x0004)
	int                                                SizeX;                                            		// 0x0008(0x0004)
	int                                                SizeY;                                            		// 0x000C(0x0004)
	int                                                DestOffsetX;                                      		// 0x0010(0x0004)
	int                                                DestOffsetY;                                      		// 0x0014(0x0004)
	class UTexture2D*                                  Texture2D;                                        		// 0x0018(0x0004)
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0040
struct FListener
{
	class APortalVolume*                               PortalVolume;                                     		// 0x0000(0x0004) (CPF_Const)
	struct FVector                                     Location;                                         		// 0x0004(0x000C)
	struct FVector                                     Up;                                               		// 0x0010(0x000C)
	struct FVector                                     Right;                                            		// 0x001C(0x000C)
	struct FVector                                     Front;                                            		// 0x0028(0x000C)
	struct FVector                                     Velocity;                                         		// 0x0034(0x000C)
};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x0020
struct FSoundClassProperties
{
	float                                              Volume;                                           		// 0x0000(0x0004) (CPF_Edit)
	float                                              Pitch;                                            		// 0x0004(0x0004) (CPF_Edit)
	float                                              StereoBleed;                                      		// 0x0008(0x0004) (CPF_Edit)
	float                                              LFEBleed;                                         		// 0x000C(0x0004) (CPF_Edit)
	float                                              VoiceCenterChannelVolume;                         		// 0x0010(0x0004) (CPF_Edit)
	float                                              RadioFilterVolume;                                		// 0x0014(0x0004) (CPF_Edit)
	float                                              RadioFilterVolumeThreshold;                       		// 0x0018(0x0004) (CPF_Edit)
	unsigned long                                      bApplyEffects : 1;                                		// 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bAlwaysPlay : 1;                                  		// 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bIsUISound : 1;                                   		// 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bIsMusic : 1;                                     		// 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bReverb : 1;                                      		// 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bCenterChannelOnly : 1;                           		// 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bApplyAmbientVolumes : 1;                         		// 0x001C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	struct FDouble                                     RootTime;                                         		// 0x0000(0x0008) (CPF_Native, CPF_Transient)
	float                                              HFFrequency;                                      		// 0x0008(0x0004) (CPF_Edit)
	float                                              HFGain;                                           		// 0x000C(0x0004) (CPF_Edit)
	float                                              MFCutoffFrequency;                                		// 0x0010(0x0004) (CPF_Edit)
	float                                              MFBandwidth;                                      		// 0x0014(0x0004) (CPF_Edit)
	float                                              MFGain;                                           		// 0x0018(0x0004) (CPF_Edit)
	float                                              LFFrequency;                                      		// 0x001C(0x0004) (CPF_Edit)
	float                                              LFGain;                                           		// 0x0020(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x001C
struct FSoundClassAdjuster
{
	TEnumAsByte<enum class ESoundClassName>            SoundClassName;                                   		// 0x0000(0x0001) (CPF_Edit, CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SoundClass;                                       		// 0x0004(0x0008) (CPF_Edit, CPF_EditConst)
	float                                              VolumeAdjuster;                                   		// 0x000C(0x0004) (CPF_Edit)
	float                                              PitchAdjuster;                                    		// 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      bApplyToChildren : 1;                             		// 0x0014(0x0004) (CPF_Edit)
	float                                              VoiceCenterChannelVolumeAdjuster;                 		// 0x0018(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	struct FName                                       Desc;                                             		// 0x0000(0x0008)
	float                                              Radius;                                           		// 0x0008(0x0004)
	float                                              Height;                                           		// 0x000C(0x0004)
	float                                              CrouchHeight;                                     		// 0x0010(0x0004)
	unsigned char                                      PathColor;                                        		// 0x0014(0x0001)
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                            		// 0x0000(0x0004) (CPF_Edit)
	float                                              IndirectLightingSaturation;                       		// 0x0004(0x0004) (CPF_Edit)
	float                                              ShadowExponent;                                   		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                 		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                     		// 0x0000(0x0040)
	struct FMatrix                                     LightToWorld;                                     		// 0x0040(0x0040)
	struct FBox                                        LightSpaceImportanceBounds;                       		// 0x0080(0x001C)
	int                                                ShadowMapSizeX;                                   		// 0x009C(0x0004)
	int                                                ShadowMapSizeY;                                   		// 0x00A0(0x0004)
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceRadius;                                		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x0008
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                           		// 0x0000(0x0004)
	float                                              Weight;                                           		// 0x0004(0x0004)
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0030
struct FAttachment
{
	class UActorComponent*                             Component;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FName                                       BoneName;                                         		// 0x0004(0x0008) (CPF_Edit)
	struct FVector                                     RelativeLocation;                                 		// 0x000C(0x000C) (CPF_Edit)
	struct FRotator                                    RelativeRotation;                                 		// 0x0018(0x000C) (CPF_Edit)
	struct FVector                                     RelativeScale;                                    		// 0x0024(0x000C) (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	struct FName                                       Bones[0x2];                                       		// 0x0000(0x0008)
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x0018
struct FSkelMeshComponentLODInfo
{
	TArray<unsigned long>                              HiddenMaterials;                                  		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	unsigned long                                      bNeedsInstanceWeightUpdate : 1;                   		// 0x000C(0x0004) (CPF_Const)
	unsigned long                                      bAlwaysUseInstanceWeights : 1;                    		// 0x000C(0x0004) (CPF_Const)
	TEnumAsByte<enum class EInstanceWeightUsage>       InstanceWeightUsage;                              		// 0x0010(0x0001) (CPF_Const, CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	int                                                InstanceWeightIdx;                                		// 0x0014(0x0004) (CPF_Const, CPF_Transient)
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// 0x000C
struct FApexClothingLodInfo
{
	TArray<int>                                        ClothingSectionInfo;                              		// 0x0000(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// 0x0014
struct FApexClothingAssetInfo
{
	TArray<struct FApexClothingLodInfo>                ClothingLodInfo;                                  		// 0x0000(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	struct FName                                       ClothingAssetName;                                		// 0x000C(0x0008)
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                      		// 0x0000(0x0004) (CPF_Edit)
	TEnumAsByte<enum class EAxis>                      BoneFlipAxis;                                     		// 0x0004(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	TEnumAsByte<enum class TriangleSortOption>         TriangleSorting;                                  		// 0x0000(0x0001) (CPF_Edit)
	TEnumAsByte<enum class TriangleSortAxis>           CustomLeftRightAxis;                              		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0002(0x0002) MISSED OFFSET
	struct FName                                       CustomLeftRightBoneName;                          		// 0x0004(0x0008) (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x003C
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                    		// 0x0000(0x0004) (CPF_Edit)
	float                                              LODHysteresis;                                    		// 0x0004(0x0004) (CPF_Edit)
	TArray<int>                                        LODMaterialMap;                                   		// 0x0008(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	TArray<unsigned long>                              bEnableShadowCasting;                             		// 0x0014(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	TArray<TEnumAsByte<enum class TriangleSortOption>> TriangleSorting;                                  		// 0x0020(0x000C) (CPF_NeedCtorLink, CPF_Deprecated)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                             		// 0x002C(0x000C) (CPF_Edit, CPF_EditFixedSize, CPF_NeedCtorLink)
	unsigned long                                      bDisableCompressions : 1;                         		// 0x0038(0x0004) (CPF_Edit)
	unsigned long                                      bHasBeenSimplified : 1;                           		// 0x0038(0x0004)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODDistanceInfo
// 0x0008
struct FSkeletalMeshLODDistanceInfo
{
	float                                              DisplayFactor;                                    		// 0x0000(0x0004) (CPF_Edit)
	float                                              LODHysteresis;                                    		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// 0x0028
struct FSkeletalMeshOptimizationSettings
{
	float                                              MaxDeviationPercentage;                           		// 0x0000(0x0004)
	TEnumAsByte<enum class SkeletalMeshOptimizationImportance> SilhouetteImportance;                             		// 0x0004(0x0001)
	TEnumAsByte<enum class SkeletalMeshOptimizationImportance> TextureImportance;                                		// 0x0005(0x0001)
	TEnumAsByte<enum class SkeletalMeshOptimizationImportance> ShadingImportance;                                		// 0x0006(0x0001)
	TEnumAsByte<enum class SkeletalMeshOptimizationImportance> SkinningImportance;                               		// 0x0007(0x0001)
	TEnumAsByte<enum class SkeletalMeshOptimizationNormalMode> NormalMode;                                       		// 0x0008(0x0001) (CPF_Deprecated)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              BoneReductionRatio;                               		// 0x000C(0x0004)
	int                                                MaxBonesPerVertex;                                		// 0x0010(0x0004)
	TEnumAsByte<enum class SkeletalMeshOptimizationType> ReductionMethod;                                  		// 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0015(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                         		// 0x0018(0x0004)
	float                                              WeldingThreshold;                                 		// 0x001C(0x0004)
	unsigned long                                      bRecalcNormals : 1;                               		// 0x0020(0x0004)
	float                                              NormalsThreshold;                                 		// 0x0024(0x0004)
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x0018
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008) (CPF_Edit)
	TEnumAsByte<enum class ClothBoneType>              BoneType;                                         		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	TArray<int>                                        AttachedVertexIndices;                            		// 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int                                                Index;                                            		// 0x0000(0x0004)
	struct FVector                                     Bary;                                             		// 0x0004(0x000C)
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x0018
struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008) (CPF_Edit)
	TEnumAsByte<enum class SoftBodyBoneType>           BoneType;                                         		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	TArray<int>                                        AttachedVertexIndices;                            		// 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0008
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                                  		// 0x0000(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class ASplineActor*                                ConnectTo;                                        		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ProcBuilding.PBMeshCompInfo
// 0x0008
struct FPBMeshCompInfo
{
	class UStaticMeshComponent*                        MeshComp;                                         		// 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	int                                                TopLevelScopeIndex;                               		// 0x0004(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBFracMeshCompInfo
// 0x0008
struct FPBFracMeshCompInfo
{
	class UFracturedStaticMeshComponent*               FracMeshComp;                                     		// 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	int                                                TopLevelScopeIndex;                               		// 0x0004(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBFaceUVInfo
// 0x0010
struct FPBFaceUVInfo
{
	struct FVector2D                                   Offset;                                           		// 0x0000(0x0008)
	struct FVector2D                                   Size;                                             		// 0x0008(0x0008)
};

// ScriptStruct Engine.ProcBuilding.PBScope2D
// 0x0048
struct FPBScope2D
{
	struct FMatrix                                     ScopeFrame;                                       		// 0x0000(0x0040)
	float                                              DimX;                                             		// 0x0040(0x0004)
	float                                              DimZ;                                             		// 0x0044(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBScopeProcessInfo
// 0x0014
struct FPBScopeProcessInfo
{
	class AProcBuilding*                               OwningBuilding;                                   		// 0x0000(0x0004)
	class UProcBuildingRuleset*                        Ruleset;                                          		// 0x0004(0x0004)
	struct FName                                       RulesetVariation;                                 		// 0x0008(0x0008)
	unsigned long                                      bGenerateLODPoly : 1;                             		// 0x0010(0x0004)
	unsigned long                                      bPartOfNonRect : 1;                               		// 0x0010(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBEdgeInfo
// 0x002C
struct FPBEdgeInfo
{
	struct FVector                                     EdgeEnd;                                          		// 0x0000(0x000C)
	struct FVector                                     EdgeStart;                                        		// 0x000C(0x000C)
	int                                                ScopeAIndex;                                      		// 0x0018(0x0004)
	TEnumAsByte<enum class EScopeEdge>                 ScopeAEdge;                                       		// 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x001D(0x0003) MISSED OFFSET
	int                                                ScopeBIndex;                                      		// 0x0020(0x0004)
	TEnumAsByte<enum class EScopeEdge>                 ScopeBEdge;                                       		// 0x0024(0x0001)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0025(0x0003) MISSED OFFSET
	float                                              EdgeAngle;                                        		// 0x0028(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBMaterialParam
// 0x0018
struct FPBMaterialParam
{
	struct FName                                       ParamName;                                        		// 0x0000(0x0008) (CPF_Edit)
	struct FLinearColor                                Color;                                            		// 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.PBRuleNodeBase.PBRuleLink
// 0x0010
struct FPBRuleLink
{
	class UPBRuleNodeBase*                             NextRule;                                         		// 0x0000(0x0004) (CPF_Edit, CPF_ExportObject, CPF_NeedCtorLink, CPF_EditInline)
	struct FName                                       LinkName;                                         		// 0x0004(0x0008) (CPF_Edit)
	int                                                DrawY;                                            		// 0x000C(0x0004)
};

// ScriptStruct Engine.PBRuleNodeCorner.RBCornerAngleInfo
// 0x0008
struct FRBCornerAngleInfo
{
	float                                              Angle;                                            		// 0x0000(0x0004) (CPF_Edit)
	float                                              CornerSize;                                       		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.PBRuleNodeEdgeAngle.RBEdgeAngleInfo
// 0x0004
struct FRBEdgeAngleInfo
{
	float                                              Angle;                                            		// 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMatOverrides
// 0x000C
struct FBuildingMatOverrides
{
	TArray<class UMaterialInterface*>                  MaterialOptions;                                  		// 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMeshInfo
// 0x0038
struct FBuildingMeshInfo
{
	class UStaticMesh*                                 Mesh;                                             		// 0x0000(0x0004) (CPF_Edit)
	float                                              DimX;                                             		// 0x0004(0x0004) (CPF_Edit)
	float                                              DimZ;                                             		// 0x0008(0x0004) (CPF_Edit)
	float                                              Chance;                                           		// 0x000C(0x0004) (CPF_Edit)
	class UDistributionVector*                         Translation;                                      		// 0x0010(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UDistributionVector*                         Rotation;                                         		// 0x0014(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	unsigned long                                      bMeshScaleTranslation : 1;                        		// 0x0018(0x0004) (CPF_Edit)
	unsigned long                                      bOverrideMeshLightMapRes : 1;                     		// 0x0018(0x0004) (CPF_Edit)
	int                                                OverriddenMeshLightMapRes;                        		// 0x001C(0x0004) (CPF_Edit)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                		// 0x0020(0x000C) (CPF_NeedCtorLink)
	TArray<struct FBuildingMatOverrides>               SectionOverrides;                                 		// 0x002C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.PBRuleNodeSplit.RBSplitInfo
// 0x0014
struct FRBSplitInfo
{
	unsigned long                                      bFixSize : 1;                                     		// 0x0000(0x0004) (CPF_Edit)
	float                                              FixedSize;                                        		// 0x0004(0x0004) (CPF_Edit)
	float                                              ExpandRatio;                                      		// 0x0008(0x0004) (CPF_Edit)
	struct FName                                       SplitName;                                        		// 0x000C(0x0008) (CPF_Edit)
};

// ScriptStruct Engine.ProcBuildingRuleset.PBVariationInfo
// 0x000C
struct FPBVariationInfo
{
	struct FName                                       VariationName;                                    		// 0x0000(0x0008) (CPF_Edit)
	unsigned long                                      bMeshOnTopOfFacePoly : 1;                         		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ProcBuildingRuleset.PBParamSwatch
// 0x0014
struct FPBParamSwatch
{
	struct FName                                       SwatchName;                                       		// 0x0000(0x0008) (CPF_Edit)
	TArray<struct FPBMaterialParam>                    Params;                                           		// 0x0008(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int                                                NumberOfMatchesPlayed;                            		// 0x0000(0x0004)
	int                                                NumMapListCyclesDone;                             		// 0x0004(0x0004)
};

// ScriptStruct Engine.PlayerReplicationInfo.PRIRemoteUserData
// 0x000C
struct FPRIRemoteUserData
{
	struct FString                                     UserId;                                           		// 0x0000(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                        		// 0x0000(0x0004)
	struct FTPOV                                       POV;                                              		// 0x0004(0x001C)
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x002C
struct FTViewTarget
{
	class AActor*                                      Target;                                           		// 0x0000(0x0004) (CPF_Edit)
	class AController*                                 Controller;                                       		// 0x0004(0x0004) (CPF_Edit)
	struct FTPOV                                       POV;                                              		// 0x0008(0x001C) (CPF_Edit)
	float                                              AspectRatio;                                      		// 0x0024(0x0004) (CPF_Edit)
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0028(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x0090
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                      		// 0x0000(0x0004)
	struct FName                                       SourceShakeName;                                  		// 0x0004(0x0008)
	float                                              OscillatorTimeRemaining;                          		// 0x000C(0x0004)
	unsigned long                                      bBlendingIn : 1;                                  		// 0x0010(0x0004)
	float                                              CurrentBlendInTime;                               		// 0x0014(0x0004)
	unsigned long                                      bBlendingOut : 1;                                 		// 0x0018(0x0004)
	float                                              CurrentBlendOutTime;                              		// 0x001C(0x0004)
	struct FVector                                     LocSinOffset;                                     		// 0x0020(0x000C)
	struct FVector                                     RotSinOffset;                                     		// 0x002C(0x000C)
	float                                              FOVSinOffset;                                     		// 0x0038(0x0004)
	float                                              Scale;                                            		// 0x003C(0x0004)
	class UCameraAnimInst*                             AnimInst;                                         		// 0x0040(0x0004)
	TEnumAsByte<enum class ECameraAnimPlaySpace>       PlaySpace;                                        		// 0x0044(0x0001)
	unsigned char                                      UnknownData00[0xB];                               		// 0x0045(0x000B) MISSED OFFSET
	struct FMatrix                                     UserPlaySpaceMatrix;                              		// 0x0050(0x0040)
};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x0009
struct FFOscillator
{
	float                                              Amplitude;                                        		// 0x0000(0x0004) (CPF_Edit)
	float                                              Frequency;                                        		// 0x0004(0x0004) (CPF_Edit)
	TEnumAsByte<enum class EInitialOscillatorOffset>   InitialOffset;                                    		// 0x0008(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                            		// 0x0000(0x000C) (CPF_Edit)
	struct FFOscillator                                Yaw;                                              		// 0x000C(0x000C) (CPF_Edit)
	struct FFOscillator                                Roll;                                             		// 0x0018(0x000C) (CPF_Edit)
};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                		// 0x0000(0x000C) (CPF_Edit)
	struct FFOscillator                                Y;                                                		// 0x000C(0x000C) (CPF_Edit)
	struct FFOscillator                                Z;                                                		// 0x0018(0x000C) (CPF_Edit)
};

// ScriptStruct Engine.AppNotificationsBase.NotificationMessageInfo
// 0x0018
struct FNotificationMessageInfo
{
	struct FString                                     Key;                                              		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AppNotificationsBase.NotificationInfo
// 0x0020
struct FNotificationInfo
{
	unsigned long                                      bIsLocal : 1;                                     		// 0x0000(0x0004)
	struct FString                                     MessageBody;                                      		// 0x0004(0x000C) (CPF_NeedCtorLink)
	int                                                BadgeNumber;                                      		// 0x0010(0x0004)
	TArray<struct FNotificationMessageInfo>            MessageInfo;                                      		// 0x0014(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AppNotificationsBase.LaunchNotificationInfo
// 0x0024
struct FLaunchNotificationInfo
{
	unsigned long                                      bWasLaunchedViaNotification : 1;                  		// 0x0000(0x0004)
	struct FNotificationInfo                           Notification;                                     		// 0x0004(0x0020) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.FacebookIntegration.FacebookFriend
// 0x0018
struct FFacebookFriend
{
	struct FString                                     Name;                                             		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Id;                                               		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                         		// 0x0000(0x0008) (CPF_AlwaysInit)
	int                                                NumChannels;                                      		// 0x0008(0x0004) (CPF_AlwaysInit)
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x003C
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                  		// 0x0000(0x000C)
	struct FVector                                     ContactNormal;                                    		// 0x000C(0x000C)
	float                                              ContactPenetration;                               		// 0x0018(0x0004)
	struct FVector                                     ContactVelocity[0x2];                             		// 0x001C(0x000C)
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                		// 0x0034(0x0004)
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0024
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                     		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FVector                                     TotalNormalForceVector;                           		// 0x000C(0x000C)
	struct FVector                                     TotalFrictionForceVector;                         		// 0x0018(0x000C)
};

// ScriptStruct Engine.Actor.NavReference
// 0x0014
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                              		// 0x0000(0x0004) (CPF_Edit)
	struct FGuid                                       Guid;                                             		// 0x0004(0x0010) (CPF_Edit, CPF_Const, CPF_EditConst)
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x001C
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                         		// 0x0000(0x0004) (CPF_AlwaysInit)
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0004(0x0004) (CPF_AlwaysInit)
	int                                                Item;                                             		// 0x0008(0x0004) (CPF_AlwaysInit)
	int                                                LevelIndex;                                       		// 0x000C(0x0004) (CPF_AlwaysInit)
	struct FName                                       BoneName;                                         		// 0x0010(0x0008) (CPF_AlwaysInit)
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0018(0x0004) (CPF_ExportObject, CPF_Component, CPF_AlwaysInit, CPF_EditInline)
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0050
struct FImpactInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000(0x0004) (CPF_AlwaysInit)
	struct FVector                                     HitLocation;                                      		// 0x0004(0x000C) (CPF_AlwaysInit)
	struct FVector                                     HitNormal;                                        		// 0x0010(0x000C) (CPF_AlwaysInit)
	struct FVector                                     RayDir;                                           		// 0x001C(0x000C) (CPF_AlwaysInit)
	struct FVector                                     StartTrace;                                       		// 0x0028(0x000C) (CPF_AlwaysInit)
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0034(0x001C) (CPF_Component, CPF_AlwaysInit)
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0014
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                         		// 0x0000(0x0008) (CPF_AlwaysInit)
	TArray<float>                                      ChannelWeights;                                   		// 0x0008(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0018
struct FKeyValuePair
{
	struct FString                                     Key;                                              		// 0x0000(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x000C(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x002C
struct FPlayerResponseLine
{
	int                                                PlayerNum;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_AlwaysInit)
	int                                                PlayerID;                                         		// 0x0004(0x0004) (CPF_Edit, CPF_AlwaysInit)
	struct FString                                     PlayerName;                                       		// 0x0008(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
	int                                                Ping;                                             		// 0x0014(0x0004) (CPF_Edit, CPF_AlwaysInit)
	int                                                Score;                                            		// 0x0018(0x0004) (CPF_Edit, CPF_AlwaysInit)
	int                                                StatsID;                                          		// 0x001C(0x0004) (CPF_Edit, CPF_AlwaysInit)
	TArray<struct FKeyValuePair>                       PlayerInfo;                                       		// 0x0020(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0060
struct FServerResponseLine
{
	int                                                ServerID;                                         		// 0x0000(0x0004) (CPF_Edit, CPF_AlwaysInit)
	struct FString                                     IP;                                               		// 0x0004(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
	int                                                Port;                                             		// 0x0010(0x0004) (CPF_Edit, CPF_AlwaysInit)
	int                                                QueryPort;                                        		// 0x0014(0x0004) (CPF_Edit, CPF_AlwaysInit)
	struct FString                                     ServerName;                                       		// 0x0018(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     MapName;                                          		// 0x0024(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     GameType;                                         		// 0x0030(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
	int                                                CurrentPlayers;                                   		// 0x003C(0x0004) (CPF_Edit, CPF_AlwaysInit)
	int                                                MaxPlayers;                                       		// 0x0040(0x0004) (CPF_Edit, CPF_AlwaysInit)
	int                                                Ping;                                             		// 0x0044(0x0004) (CPF_Edit, CPF_AlwaysInit)
	TArray<struct FKeyValuePair>                       ServerInfo;                                       		// 0x0048(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
	TArray<struct FPlayerResponseLine>                 PlayerInfo;                                       		// 0x0054(0x000C) (CPF_Edit, CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.UniqueLobbyId
// 0x0009
struct FUniqueLobbyId
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.UniqueLobbyId.Uid
	TEnumAsByte<enum class OnlinePlatform>             Platform;                                         		// 0x0008(0x0001)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageFlags
// 0x0004
struct FSocialPostImageFlags
{
	unsigned long                                      bIsUserGeneratedImage : 1;                        		// 0x0000(0x0004)
	unsigned long                                      bIsGameGeneratedImage : 1;                        		// 0x0000(0x0004)
	unsigned long                                      bIsAchievementImage : 1;                          		// 0x0000(0x0004)
	unsigned long                                      bIsMediaImage : 1;                                		// 0x0000(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageInfo
// 0x0034
struct FSocialPostImageInfo
{
	struct FSocialPostImageFlags                       Flags;                                            		// 0x0000(0x0004)
	struct FString                                     MessageText;                                      		// 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     TitleText;                                        		// 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PictureCaption;                                   		// 0x001C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PictureDescription;                               		// 0x0028(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostLinkInfo
// 0x0018 (0x004C - 0x0034)
struct FSocialPostLinkInfo : public FSocialPostImageInfo
{
	struct FString                                     TitleURL;                                         		// 0x0034(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PictureURL;                                       		// 0x0040(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.DownloadedWorkshopData
// 0x0094
struct FDownloadedWorkshopData
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.DownloadedWorkshopData.ItemID
	struct FString                                     Title;                                            		// 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     AuthorName;                                       		// 0x0014(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FUniqueNetId                                AuthorNetID;                                      		// 0x0020(0x0030)
	class UTexture2DDynamic*                           Preview;                                          		// 0x0050(0x0004) (CPF_DataBinding)
	class UTexture*                                    Avatar;                                           		// 0x0054(0x0004) (CPF_DataBinding)
	struct FString                                     Description;                                      		// 0x0058(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     PreviewURL;                                       		// 0x0064(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     ItemPath;                                         		// 0x0070(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Filename;                                         		// 0x007C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     FullPath;                                         		// 0x0088(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostPrivileges
// 0x0004
struct FSocialPostPrivileges
{
	unsigned long                                      bCanPostImage : 1;                                		// 0x0000(0x0004) (CPF_Const)
	unsigned long                                      bCanPostLink : 1;                                 		// 0x0000(0x0004) (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.SessionMemberInfo
// 0x0031
struct FSessionMemberInfo
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000(0x0030)
	TEnumAsByte<enum class ESessionMemberStatus>       MemberStatus;                                     		// 0x0030(0x0001)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceInventoryItem
// 0x0054
struct FMarketplaceInventoryItem
{
	struct FString                                     ProductID;                                        		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TEnumAsByte<enum class EMediaItemType>             MediaItemType;                                    		// 0x000C(0x0001) (CPF_Const)
	TEnumAsByte<enum class EInventoryItemState>        ItemState;                                        		// 0x000D(0x0001) (CPF_Const)
	unsigned char                                      UnknownData00[0x2];                               		// 0x000E(0x0002) MISSED OFFSET
	int                                                ConsumableBalance;                                		// 0x0010(0x0004) (CPF_Const)
	int                                                TitleId;                                          		// 0x0014(0x0004) (CPF_Const)
	TArray<struct FString>                             ContainerIds;                                     		// 0x0018(0x000C) (CPF_Const, CPF_NeedCtorLink)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0024(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.MarketplaceInventoryItem.StartDate
	unsigned char                                      UnknownData02[0x8];                               		// 0x002C(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.MarketplaceInventoryItem.EndDate
	unsigned char                                      UnknownData03[0x8];                               		// 0x0034(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.MarketplaceInventoryItem.RightsObtainedDate
	struct FString                                     URL;                                              		// 0x003C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ConsumableUrl;                                    		// 0x0048(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductImage
// 0x0038
struct FMarketplaceProductImage
{
	struct FString                                     Id;                                               		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	int                                                Height;                                           		// 0x000C(0x0004) (CPF_Const)
	int                                                Width;                                            		// 0x0010(0x0004) (CPF_Const)
	struct FString                                     Purpose;                                          		// 0x0014(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FString>                             Purposes;                                         		// 0x0020(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ResizeURL;                                        		// 0x002C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductAvailability
// 0x0078
struct FMarketplaceProductAvailability
{
	TArray<struct FString>                             AcceptablePaymentInstrumentTypes;                 		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ContentId;                                        		// 0x0018(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     CurrencyCode;                                     		// 0x0024(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     DisplayListPrice;                                 		// 0x0030(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     DisplayPrice;                                     		// 0x003C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     DistributionType;                                 		// 0x0048(0x000C) (CPF_Const, CPF_NeedCtorLink)
	unsigned long                                      bIsPurchasable : 1;                               		// 0x0054(0x0004) (CPF_Const)
	float                                              ListPrice;                                        		// 0x0058(0x0004) (CPF_Const)
	float                                              Price;                                            		// 0x005C(0x0004) (CPF_Const)
	struct FString                                     PromotionalText;                                  		// 0x0060(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     SignedOffer;                                      		// 0x006C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductDetails
// 0x0068
struct FMarketplaceProductDetails
{
	struct FString                                     StandardId;                                       		// 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TEnumAsByte<enum class EMediaItemType>             MediaItemType;                                    		// 0x000C(0x0001) (CPF_Const)
	unsigned char                                      UnknownData00[0x3];                               		// 0x000D(0x0003) MISSED OFFSET
	struct FString                                     ProductName;                                      		// 0x0010(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ProductID;                                        		// 0x001C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0028(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.MarketplaceProductDetails.ReleaseDate
	struct FString                                     SandboxId;                                        		// 0x0030(0x000C) (CPF_Const, CPF_NeedCtorLink)
	int                                                TitleId;                                          		// 0x003C(0x0004) (CPF_Const)
	TArray<struct FMarketplaceProductImage>            Images;                                           		// 0x0040(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TEnumAsByte<enum class EOnlineEnumerationReadState> DetailsReadState;                                 		// 0x004C(0x0001)
	unsigned char                                      UnknownData02[0x3];                               		// 0x004D(0x0003) MISSED OFFSET
	TArray<struct FMarketplaceProductAvailability>     Availabilities;                                   		// 0x0050(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ProductDescription;                               		// 0x005C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0028
struct FCommunityContentMetadata
{
	int                                                ContentType;                                      		// 0x0000(0x0004)
	TArray<struct FSettingsProperty>                   MetadataItems;                                    		// 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     RemotePath;                                       		// 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FString                                     DisplayName;                                      		// 0x001C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0068
struct FCommunityContentFile
{
	int                                                ContentId;                                        		// 0x0000(0x0004)
	struct FString                                     RemoteContentPath;                                		// 0x0004(0x000C) (CPF_NeedCtorLink)
	int                                                FileId;                                           		// 0x0010(0x0004)
	int                                                ContentType;                                      		// 0x0014(0x0004)
	int                                                FileSize;                                         		// 0x0018(0x0004)
	struct FUniqueNetId                                Owner;                                            		// 0x001C(0x0030)
	int                                                DownloadCount;                                    		// 0x004C(0x0004)
	float                                              AverageRating;                                    		// 0x0050(0x0004)
	int                                                RatingCount;                                      		// 0x0054(0x0004)
	int                                                LastRatingGiven;                                  		// 0x0058(0x0004)
	struct FString                                     LocalFilePath;                                    		// 0x005C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x001C
struct FTitleFile
{
	struct FString                                     Filename;                                         		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<enum class EOnlineEnumerationReadState> AsyncState;                                       		// 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x000D(0x0003) MISSED OFFSET
	TArray<unsigned char>                              Data;                                             		// 0x0010(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.EmsFile
// 0x0028
struct FEmsFile
{
	struct FString                                     Hash;                                             		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018(0x000C) (CPF_NeedCtorLink)
	int                                                FileSize;                                         		// 0x0024(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0038
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                         		// 0x0000(0x0030)
	float                                              LastNotificationTime;                             		// 0x0030(0x0004)
	unsigned long                                      bWasTalking : 1;                                  		// 0x0034(0x0004)
	unsigned long                                      bIsTalking : 1;                                   		// 0x0034(0x0004)
	unsigned long                                      bIsRegistered : 1;                                		// 0x0034(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x0034
struct FLocalTalker
{
	struct FUniqueNetId                                TalkerId;                                         		// 0x0000(0x0030)
	unsigned long                                      bHasVoice : 1;                                    		// 0x0030(0x0004)
	unsigned long                                      bHasNetworkedVoice : 1;                           		// 0x0030(0x0004)
	unsigned long                                      bIsRecognizingSpeech : 1;                         		// 0x0030(0x0004)
	unsigned long                                      bWasTalking : 1;                                  		// 0x0030(0x0004)
	unsigned long                                      bIsTalking : 1;                                   		// 0x0030(0x0004)
	unsigned long                                      bIsRegistered : 1;                                		// 0x0030(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0038
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000(0x0030)
	int                                                TeamID;                                           		// 0x0030(0x0004)
	int                                                Score;                                            		// 0x0034(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x0014
struct FSpeechRecognizedWord
{
	int                                                WordId;                                           		// 0x0000(0x0004)
	struct FString                                     WordText;                                         		// 0x0004(0x000C) (CPF_NeedCtorLink)
	float                                              Confidence;                                       		// 0x0010(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004 (0x0050 - 0x004C)
struct FOnlineCrossTitleContent : public FOnlineContent
{
	int                                                TitleId;                                          		// 0x004C(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineProfile
// 0x005C
struct FOnlineProfile
{
	struct FString                                     UserId;                                           		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<enum class EOnlineAccountTier>         AccountTier;                                      		// 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x000D(0x0003) MISSED OFFSET
	int                                                Gamerscore;                                       		// 0x0010(0x0004)
	struct FString                                     ApplicationDisplayName;                           		// 0x0014(0x000C) (CPF_NeedCtorLink)
	struct FString                                     GameDisplayName;                                  		// 0x0020(0x000C) (CPF_NeedCtorLink)
	struct FString                                     DisplayPictureURL;                                		// 0x002C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ApplicationDisplayPictureResizeURL;               		// 0x0038(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PublicGamerPictureURL;                            		// 0x0044(0x000C) (CPF_NeedCtorLink)
	struct FString                                     GameDisplayPictureResizeURL;                      		// 0x0050(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x0034
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000(0x0030)
	unsigned long                                      bIsFriend : 1;                                    		// 0x0030(0x0004)
};

// ScriptStruct Engine.OnlineAuthInterface.BaseAuthSession
// 0x0048
struct FBaseAuthSession
{
	struct FIpAddr                                     EndPointIP;                                       		// 0x0000(0x0014) (CPF_Const)
	int                                                EndPointPort;                                     		// 0x0014(0x0004) (CPF_Const)
	struct FUniqueNetId                                EndPointUID;                                      		// 0x0018(0x0030) (CPF_Const)
};

// ScriptStruct Engine.AccessControl.PendingClientAuth
// 0x003C
struct FPendingClientAuth
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000(0x0004)
	struct FUniqueNetId                                ClientUID;                                        		// 0x0004(0x0030)
	float                                              AuthTimestamp;                                    		// 0x0034(0x0004)
	int                                                AuthRetryCount;                                   		// 0x0038(0x0004)
};

// ScriptStruct Engine.AccessControl.ServerAuthRetry
// 0x0034
struct FServerAuthRetry
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000(0x0030)
	int                                                AuthRetryCount;                                   		// 0x0030(0x0004)
};

// ScriptStruct Engine.OnlineAuthInterface.AuthSession
// 0x0008 (0x0050 - 0x0048)
struct FAuthSession : public FBaseAuthSession
{
	TEnumAsByte<enum class EAuthStatus>                AuthStatus;                                       		// 0x0048(0x0001) (CPF_Const)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0049(0x0003) MISSED OFFSET
	int                                                AuthTicketUID;                                    		// 0x004C(0x0004) (CPF_Const)
};

// ScriptStruct Engine.OnlineAuthInterface.LocalAuthSession
// 0x0004 (0x004C - 0x0048)
struct FLocalAuthSession : public FBaseAuthSession
{
	int                                                SessionUID;                                       		// 0x0048(0x0004) (CPF_Const)
};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x0002
struct FManualCoverTypeInfo
{
	unsigned char                                      SlotIndex;                                        		// 0x0000(0x0001)
	TEnumAsByte<enum class ECoverType>                 ManualCoverType;                                  		// 0x0001(0x0001)
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x0034
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000(0x0004)
	TArray<unsigned char>                              SlotsEnabled;                                     		// 0x0004(0x000C) (CPF_NeedCtorLink)
	TArray<unsigned char>                              SlotsDisabled;                                    		// 0x0010(0x000C) (CPF_NeedCtorLink)
	TArray<unsigned char>                              SlotsAdjusted;                                    		// 0x001C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FManualCoverTypeInfo>                SlotsCoverTypeChanged;                            		// 0x0028(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.NavigationPoint.CheckpointRecord
// 0x0004
struct ANavigationPoint_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                    		// 0x0000(0x0004)
	unsigned long                                      bBlocked : 1;                                     		// 0x0000(0x0004)
};

// ScriptStruct Engine.AudioDevice.AudioClassInfo
// 0x0010
struct FAudioClassInfo
{
	int                                                NumResident;                                      		// 0x0000(0x0004) (CPF_Const)
	int                                                SizeResident;                                     		// 0x0004(0x0004) (CPF_Const)
	int                                                NumRealTime;                                      		// 0x0008(0x0004) (CPF_Const)
	int                                                SizeRealTime;                                     		// 0x000C(0x0004) (CPF_Const)
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int                                                NodePosX;                                         		// 0x0000(0x0004) (CPF_Const, CPF_Native)
	int                                                NodePosY;                                         		// 0x0004(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.AmbientSoundSimpleToggleable.CheckpointRecord
// 0x0004
struct AAmbientSoundSimpleToggleable_FCheckpointRecord
{
	unsigned long                                      bCurrentlyPlaying : 1;                            		// 0x0000(0x0004)
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                         		// 0x0000(0x0008)
	TEnumAsByte<enum class EPlatformInterfaceDataType> Type;                                             		// 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                         		// 0x000C(0x0004)
	float                                              FloatValue;                                       		// 0x0010(0x0004)
	struct FString                                     StringValue;                                      		// 0x0014(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     StringValue2;                                     		// 0x0020(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	class UObject*                                     ObjectValue;                                      		// 0x002C(0x0004)
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// 0x0034
struct FPlatformInterfaceDelegateResult
{
	unsigned long                                      bSuccessful : 1;                                  		// 0x0000(0x0004)
	struct FPlatformInterfaceData                      Data;                                             		// 0x0004(0x0030) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnalyticEventsBase.EventStringParam
// 0x0018
struct FEventStringParam
{
	struct FString                                     ParamName;                                        		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ParamValue;                                       		// 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0030
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                       		// 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<float>                                      Times;                                            		// 0x000C(0x000C) (CPF_NeedCtorLink)
	float                                              Mins[0x3];                                        		// 0x0018(0x0004)
	float                                              Ranges[0x3];                                      		// 0x0024(0x0004)
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	unsigned long                                      bDebugMode : 1;                                   		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bStatsEnabled : 1;                                		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bGatherBSPSurfacesAcrossComponents : 1;           		// 0x0000(0x0004) (CPF_Edit)
	float                                              CoplanarTolerance;                                		// 0x0004(0x0004) (CPF_Edit)
	unsigned long                                      bUseDeterministicLighting : 1;                    		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bUseImmediateImport : 1;                          		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bImmediateProcessMappings : 1;                    		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bSortMappings : 1;                                		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bDumpBinaryFiles : 1;                             		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bDebugMaterials : 1;                              		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bPadMappings : 1;                                 		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bDebugPaddings : 1;                               		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bOnlyCalcDebugTexelMappings : 1;                  		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bUseRandomColors : 1;                             		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bColorBordersGreen : 1;                           		// 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bColorByExecutionTime : 1;                        		// 0x0008(0x0004) (CPF_Edit)
	float                                              ExecutionTimeDivisor;                             		// 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bInitialized : 1;                                 		// 0x0010(0x0004)
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned long                                      bDistributionEnabled : 1;                         		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bForceContentExport : 1;                          		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bInitialized : 1;                                 		// 0x0000(0x0004)
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0014
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                          		// 0x0000(0x0004) (CPF_Edit)
	float                                              U;                                                		// 0x0004(0x0004) (CPF_Edit)
	float                                              V;                                                		// 0x0008(0x0004) (CPF_Edit)
	float                                              UL;                                               		// 0x000C(0x0004) (CPF_Edit)
	float                                              VL;                                               		// 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x003C
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                             		// 0x0000(0x0034) (CPF_Native)
	int                                                SizeX;                                            		// 0x0034(0x0004) (CPF_Native)
	int                                                SizeY;                                            		// 0x0038(0x0004) (CPF_Native)
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned long                                      bEnableGlow : 1;                                  		// 0x0000(0x0004)
	struct FLinearColor                                GlowColor;                                        		// 0x0004(0x0010)
	struct FVector2D                                   GlowOuterRadius;                                  		// 0x0014(0x0008)
	struct FVector2D                                   GlowInnerRadius;                                  		// 0x001C(0x0008)
};

// ScriptStruct Engine.Canvas.MobileDistanceFieldParams
// 0x0054
struct FMobileDistanceFieldParams
{
	float                                              Gamma;                                            		// 0x0000(0x0004)
	float                                              AlphaRefVal;                                      		// 0x0004(0x0004)
	float                                              SmoothWidth;                                      		// 0x0008(0x0004)
	unsigned long                                      EnableShadow : 1;                                 		// 0x000C(0x0004)
	struct FVector2D                                   ShadowDirection;                                  		// 0x0010(0x0008)
	struct FLinearColor                                ShadowColor;                                      		// 0x0018(0x0010)
	float                                              ShadowSmoothWidth;                                		// 0x0028(0x0004)
	struct FDepthFieldGlowInfo                         GlowInfo;                                         		// 0x002C(0x0024) (CPF_Native)
	int                                                BlendMode;                                        		// 0x0050(0x0004)
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned long                                      bClipText : 1;                                    		// 0x0000(0x0004)
	unsigned long                                      bEnableShadow : 1;                                		// 0x0000(0x0004)
	struct FDepthFieldGlowInfo                         GlowInfo;                                         		// 0x0004(0x0024)
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                           		// 0x0000(0x0008) (CPF_Edit)
	struct FVector2D                                   V0_UV;                                            		// 0x0008(0x0008) (CPF_Edit)
	struct FVector2D                                   V1_Pos;                                           		// 0x0010(0x0008) (CPF_Edit)
	struct FVector2D                                   V1_UV;                                            		// 0x0018(0x0008) (CPF_Edit)
	struct FVector2D                                   V2_Pos;                                           		// 0x0020(0x0008) (CPF_Edit)
	struct FVector2D                                   V2_UV;                                            		// 0x0028(0x0008) (CPF_Edit)
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                            		// 0x0000(0x0004) (CPF_AlwaysInit)
	float                                              DrawY;                                            		// 0x0004(0x0004) (CPF_AlwaysInit)
	float                                              DrawXL;                                           		// 0x0008(0x0004) (CPF_AlwaysInit)
	float                                              DrawYL;                                           		// 0x000C(0x0004) (CPF_AlwaysInit)
	struct FVector2D                                   Scaling;                                          		// 0x0010(0x0008) (CPF_AlwaysInit)
	class UFont*                                       DrawFont;                                         		// 0x0018(0x0004) (CPF_AlwaysInit)
	struct FVector2D                                   SpacingAdjust;                                    		// 0x001C(0x0008) (CPF_AlwaysInit)
	float                                              ViewportHeight;                                   		// 0x0024(0x0004) (CPF_AlwaysInit)
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0014
struct FWrappedStringElement
{
	struct FString                                     Value;                                            		// 0x0000(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FVector2D                                   LineExtent;                                       		// 0x000C(0x0008) (CPF_AlwaysInit)
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                                		// 0x0000(0x0004) (CPF_Edit)
	float                                              V;                                                		// 0x0004(0x0004) (CPF_Edit)
	float                                              UL;                                               		// 0x0008(0x0004) (CPF_Edit)
	float                                              VL;                                               		// 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x0024
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                     		// 0x0000(0x0008) (CPF_Edit)
	TEnumAsByte<enum class EInputEvent>                InputKeyState;                                    		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	TArray<struct FSeqOpOutputInputLink>               TriggeredOps;                                     		// 0x000C(0x000C) (CPF_NeedCtorLink)
	TArray<class USequenceOp*>                         ActionsToExecute;                                 		// 0x0018(0x000C) (CPF_NeedCtorLink, CPF_Deprecated)
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int                                                PlayerIndex;                                      		// 0x0000(0x0004) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	int                                                ControllerId;                                     		// 0x0004(0x0004) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	struct FName                                       InputKeyName;                                     		// 0x0008(0x0008) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	TEnumAsByte<enum class EInputEvent>                EventType;                                        		// 0x0010(0x0001) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	float                                              InputDelta;                                       		// 0x0014(0x0004) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	float                                              DeltaTime;                                        		// 0x0018(0x0004) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	unsigned long                                      bAltPressed : 1;                                  		// 0x001C(0x0004) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	unsigned long                                      bCtrlPressed : 1;                                 		// 0x001C(0x0004) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
	unsigned long                                      bShiftPressed : 1;                                		// 0x001C(0x0004) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008 (0x0028 - 0x0020)
struct FSubscribedInputEventParameters : public FInputEventParameters
{
	struct FName                                       InputAliasName;                                   		// 0x0020(0x0008) (CPF_Const, CPF_Transient, CPF_AlwaysInit)
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0034
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000(0x0004)
	int                                                LtSlotIdx;                                        		// 0x0004(0x0004)
	int                                                RtSlotIdx;                                        		// 0x0008(0x0004)
	float                                              LtToRtPct;                                        		// 0x000C(0x0004)
	struct FVector                                     Location;                                         		// 0x0010(0x000C)
	struct FVector                                     Normal;                                           		// 0x001C(0x000C)
	struct FVector                                     Tangent;                                          		// 0x0028(0x000C)
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	TEnumAsByte<enum class ECoverType>                 SrcType;                                          		// 0x0000(0x0001)
	TEnumAsByte<enum class ECoverAction>               SrcAction;                                        		// 0x0001(0x0001)
	TEnumAsByte<enum class ECoverType>                 DestType;                                         		// 0x0002(0x0001)
	TEnumAsByte<enum class ECoverAction>               DestAction;                                       		// 0x0003(0x0001)
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0004 (0x0018 - 0x0014)
struct FCoverReference : public FActorReference
{
	int                                                SlotIdx;                                          		// 0x0014(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x0019
struct FExposedLink
{
	struct FCoverReference                             TargetActor;                                      		// 0x0000(0x0018) (CPF_Edit, CPF_Const, CPF_EditConst)
	unsigned char                                      ExposedScale;                                     		// 0x0018(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// 0x0004
struct APhysicsVolume_FCheckpointRecord
{
	unsigned long                                      bPainCausing : 1;                                 		// 0x0000(0x0004)
	unsigned long                                      bActive : 1;                                      		// 0x0000(0x0004)
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// 0x001C
struct ADynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C)
	struct FRotator                                    Rotation;                                         		// 0x000C(0x000C)
	unsigned long                                      bCollideActors : 1;                               		// 0x0018(0x0004)
	unsigned long                                      bBlockActors : 1;                                 		// 0x0018(0x0004)
	unsigned long                                      bNeedsReplication : 1;                            		// 0x0018(0x0004)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x003C
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                                		// 0x0000(0x003C) (CPF_Const, CPF_Native, CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{

};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x0004
struct AEmitter_FCheckpointRecord
{
	unsigned long                                      bIsActive : 1;                                    		// 0x0000(0x0004)
};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                         		// 0x0000(0x000C)
	struct FVector                                     Velocity;                                         		// 0x000C(0x000C)
	float                                              Radius;                                           		// 0x0018(0x0004)
	int                                                Priority;                                         		// 0x001C(0x0004)
};

// ScriptStruct Engine.FogVolumeDensityInfo.CheckpointRecord
// 0x0004
struct AFogVolumeDensityInfo_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000(0x0004)
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x0010
struct FFragmentGroup
{
	TArray<int>                                        FragmentIndices;                                  		// 0x0000(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bGroupIsRooted : 1;                               		// 0x000C(0x0004)
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x0018
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int                                                ListIdx;                                          		// 0x0000(0x0004)
	class UNavMeshPathGoalEvaluator*                   List[0x5];                                        		// 0x0004(0x0004)
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                     		// 0x0000(0x0004)
	unsigned long                                      bEnableChanceOfPhysicsChunkOverride : 1;          		// 0x0004(0x0004)
	unsigned long                                      bLimitExplosionChunkSize : 1;                     		// 0x0004(0x0004)
	float                                              MaxExplosionChunkSize;                            		// 0x0008(0x0004)
	unsigned long                                      bLimitDamageChunkSize : 1;                        		// 0x000C(0x0004)
	float                                              MaxDamageChunkSize;                               		// 0x0010(0x0004)
	int                                                MaxNumFacturedChunksToSpawnInAFrame;              		// 0x0014(0x0004)
	float                                              FractureExplosionVelScale;                        		// 0x0018(0x0004)
};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x0018
struct FNavMeshPathConstraintCacheDatum
{
	int                                                ListIdx;                                          		// 0x0000(0x0004)
	class UNavMeshPathConstraint*                      List[0x5];                                        		// 0x0004(0x0004)
};

// ScriptStruct Engine.FracturedStaticMeshActor.CheckpointRecord
// 0x0010
struct AFracturedStaticMeshActor_FCheckpointRecord
{
	unsigned long                                      bIsShutdown : 1;                                  		// 0x0000(0x0004)
	TArray<unsigned char>                              FragmentVis;                                      		// 0x0004(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x0018
struct FActorToLookAt
{
	class AActor*                                      Actor;                                            		// 0x0000(0x0004)
	float                                              Rating;                                           		// 0x0004(0x0004)
	float                                              EnteredTime;                                      		// 0x0008(0x0004)
	float                                              LastKnownDistance;                                		// 0x000C(0x0004)
	float                                              StartTimeBeingLookedAt;                           		// 0x0010(0x0004)
	unsigned long                                      CurrentlyBeingLookedAt : 1;                       		// 0x0014(0x0004)
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C)
	struct FRotator                                    Rotation;                                         		// 0x000C(0x000C)
	TEnumAsByte<enum class ECollisionType>             CollisionType;                                    		// 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0019(0x0003) MISSED OFFSET
	unsigned long                                      bHidden : 1;                                      		// 0x001C(0x0004)
	unsigned long                                      bIsShutdown : 1;                                  		// 0x001C(0x0004)
	unsigned long                                      bNeedsPositionReplication : 1;                    		// 0x001C(0x0004)
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0010
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                            		// 0x0000(0x0004)
	class UInterpTrack*                                Track;                                            		// 0x0004(0x0004)
	int                                                KeyIndex;                                         		// 0x0008(0x0004)
	float                                              UnsnappedPosition;                                		// 0x000C(0x0004)
};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x0010
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                		// 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// 0x0044
struct FGizmoSelectData
{
	float                                              Ratio;                                            		// 0x0000(0x0004)
	float                                              HeightData;                                       		// 0x0004(0x0004)
	unsigned char                                      UnknownData00[0x3C];                              		// 0x0008(0x003C) UNKNOWN PROPERTY: MapProperty Engine.LandscapeGizmoActiveActor.GizmoSelectData.WeightDataMap
};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// 0x0030
struct FLandscapeAddCollision
{
	struct FVector                                     Corners[0x4];                                     		// 0x0000(0x000C)
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0010
struct FLensFlareElementCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                      		// 0x000C(0x0004) (CPF_AlwaysInit)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{

};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int                                                X;                                                		// 0x0000(0x0004)
	int                                                Y;                                                		// 0x0004(0x0004)
	int                                                Z;                                                		// 0x0008(0x0004)
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                    		// 0x0000(0x0004)
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x001C
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                             		// 0x0000(0x0004) (CPF_Native)
	struct FVector                                     P1;                                               		// 0x0004(0x000C)
	struct FVector                                     P2;                                               		// 0x0010(0x000C)
};

// ScriptStruct Engine.NavMeshObstacle.CheckpointRecord
// 0x0004
struct ANavMeshObstacle_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000(0x0004)
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyMetaData
// 0x0018
struct FLobbyMetaData
{
	struct FString                                     Key;                                              		// 0x0000(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x000C(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.BasicLobbyInfo
// 0x0018
struct FBasicLobbyInfo
{
	struct FUniqueLobbyId                              LobbyUID;                                         		// 0x0000(0x000C) (CPF_Const)
	TArray<struct FLobbyMetaData>                      LobbySettings;                                    		// 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyMember
// 0x0048
struct FLobbyMember
{
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0000(0x0030) (CPF_Const)
	TArray<struct FLobbyMetaData>                      PlayerSettings;                                   		// 0x0030(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     OnlineName;                                       		// 0x003C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.ActiveLobbyInfo
// 0x000C (0x0024 - 0x0018)
struct FActiveLobbyInfo : public FBasicLobbyInfo
{
	TArray<struct FLobbyMember>                        Members;                                          		// 0x0018(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineLobbySettings.LobbyFilter
// 0x0020
struct FLobbyFilter
{
	struct FString                                     Key;                                              		// 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x000C(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<enum class EOnlineGameSearchComparisonType> Operator;                                         		// 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0019(0x0003) MISSED OFFSET
	unsigned long                                      bNumeric : 1;                                     		// 0x001C(0x0004)
};

// ScriptStruct Engine.OnlineLobbySettings.LobbySortFilter
// 0x0010
struct FLobbySortFilter
{
	struct FString                                     Key;                                              		// 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                TargetValue;                                      		// 0x000C(0x0004)
};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// 0x000C
struct FMMStats_Timer
{
	unsigned long                                      bInProgress : 1;                                  		// 0x0000(0x0004)
	struct FDouble                                     MSecs;                                            		// 0x0004(0x0008)
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x003C
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000(0x0030)
	TArray<struct FUniqueNetId>                        PartyMembers;                                     		// 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// 0x0038
struct FCurrentPlayerMet
{
	int                                                TeamNum;                                          		// 0x0000(0x0004)
	int                                                Skill;                                            		// 0x0004(0x0004)
	struct FUniqueNetId                                NetId;                                            		// 0x0008(0x0030)
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0010
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                      		// 0x000C(0x0004) (CPF_AlwaysInit)
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                       		// 0x0000(0x0008) (CPF_Edit)
	float                                              TargetPercentage;                                 		// 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.ProcBuilding.PBMemUsageInfo
// 0x0024
struct FPBMemUsageInfo
{
	class AProcBuilding*                               Building;                                         		// 0x0000(0x0004)
	class UProcBuildingRuleset*                        Ruleset;                                          		// 0x0004(0x0004)
	int                                                NumStaticMeshComponent;                           		// 0x0008(0x0004)
	int                                                NumInstancedStaticMeshComponents;                 		// 0x000C(0x0004)
	int                                                NumInstancedTris;                                 		// 0x0010(0x0004)
	int                                                LightmapMemBytes;                                 		// 0x0014(0x0004)
	int                                                ShadowmapMemBytes;                                		// 0x0018(0x0004)
	int                                                LODDiffuseMemBytes;                               		// 0x001C(0x0004)
	int                                                LODLightingMemBytes;                              		// 0x0020(0x0004)
};

// ScriptStruct Engine.PointLightToggleable.CheckpointRecord
// 0x0004
struct APointLightToggleable_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000(0x0004)
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C)
	struct FRotator                                    Rotation;                                         		// 0x000C(0x000C)
};

// ScriptStruct Engine.WorldAttractor.WorldAttractorData
// 0x0020
struct FWorldAttractorData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000(0x0004)
	struct FVector                                     Location;                                         		// 0x0004(0x000C)
	TEnumAsByte<enum class EWorldAttractorFalloffType> FalloffType;                                      		// 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	float                                              FalloffExponent;                                  		// 0x0014(0x0004)
	float                                              Range;                                            		// 0x0018(0x0004)
	float                                              Strength;                                         		// 0x001C(0x0004)
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008) (CPF_Edit)
	struct FName                                       SourceBoneName;                                   		// 0x0008(0x0008) (CPF_Edit)
	TEnumAsByte<enum class EAxis>                      BoneFlipAxis;                                     		// 0x0010(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x001C
struct ASkeletalMeshActor_FCheckpointRecord
{
	unsigned long                                      bReplicated : 1;                                  		// 0x0000(0x0004)
	unsigned long                                      bHidden : 1;                                      		// 0x0000(0x0004)
	unsigned long                                      bSavedPosition : 1;                               		// 0x0000(0x0004)
	struct FVector                                     Location;                                         		// 0x0004(0x000C)
	struct FRotator                                    Rotation;                                         		// 0x0010(0x000C)
};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	int                                                NodePosX;                                         		// 0x0000(0x0004) (CPF_Const, CPF_Native)
	int                                                NodePosY;                                         		// 0x0004(0x0004) (CPF_Const, CPF_Native)
};

// ScriptStruct Engine.SpotLightToggleable.CheckpointRecord
// 0x0004
struct ASpotLightToggleable_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000(0x0004)
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{

};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	unsigned long                                      bCollideActors : 1;                               		// 0x0000(0x0004)
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x0008
struct FLevelStreamingData
{
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bShouldBlockOnLoad : 1;                           		// 0x0000(0x0004) (CPF_Edit)
	class ULevelStreaming*                             Level;                                            		// 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.DateTime.DateTimeData
// 0x0018
struct FDateTimeData
{
	int                                                Years;                                            		// 0x0000(0x0004)
	int                                                Months;                                           		// 0x0004(0x0004)
	int                                                Days;                                             		// 0x0008(0x0004)
	int                                                Hours;                                            		// 0x000C(0x0004)
	int                                                Minutes;                                          		// 0x0010(0x0004)
	int                                                Seconds;                                          		// 0x0014(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
