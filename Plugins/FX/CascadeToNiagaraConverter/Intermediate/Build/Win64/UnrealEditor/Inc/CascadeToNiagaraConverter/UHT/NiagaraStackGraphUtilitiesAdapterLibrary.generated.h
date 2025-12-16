// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraStackGraphUtilitiesAdapterLibrary.h"

#ifdef CASCADETONIAGARACONVERTER_NiagaraStackGraphUtilitiesAdapterLibrary_generated_h
#error "NiagaraStackGraphUtilitiesAdapterLibrary.generated.h already included, missing '#pragma once' in NiagaraStackGraphUtilitiesAdapterLibrary.h"
#endif
#define CASCADETONIAGARACONVERTER_NiagaraStackGraphUtilitiesAdapterLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDistribution;
class UDistributionFloatConstant;
class UDistributionFloatConstantCurve;
class UDistributionFloatParameterBase;
class UDistributionFloatUniform;
class UDistributionFloatUniformCurve;
class UDistributionVectorConstant;
class UDistributionVectorConstantCurve;
class UDistributionVectorParameterBase;
class UDistributionVectorUniform;
class UDistributionVectorUniformCurve;
class UMaterialInterface;
class UNiagaraClipboardFunctionInput;
class UNiagaraComponentRendererProperties;
class UNiagaraDataInterface;
class UNiagaraDataInterfaceCurve;
class UNiagaraDataInterfaceSkeletalMesh;
class UNiagaraDataInterfaceVector2DCurve;
class UNiagaraDataInterfaceVector4Curve;
class UNiagaraDataInterfaceVectorCurve;
class UNiagaraEmitter;
class UNiagaraEmitterConversionContext;
class UNiagaraLightRendererProperties;
class UNiagaraMeshRendererProperties;
class UNiagaraNodeFunctionCall;
class UNiagaraRendererProperties;
class UNiagaraRibbonRendererProperties;
class UNiagaraScriptConversionContext;
class UNiagaraScriptConversionContextInput;
class UNiagaraSystem;
class UNiagaraSystemConversionContext;
class UObject;
class UParticleEmitter;
class UParticleLODLevel;
class UParticleModule;
class UParticleModuleAcceleration;
class UParticleModuleAccelerationConstant;
class UParticleModuleAccelerationDrag;
class UParticleModuleAccelerationDragScaleOverLife;
class UParticleModuleAccelerationOverLifetime;
class UParticleModuleAttractorLine;
class UParticleModuleAttractorParticle;
class UParticleModuleAttractorPoint;
class UParticleModuleBeamNoise;
class UParticleModuleBeamSource;
class UParticleModuleBeamTarget;
class UParticleModuleCameraOffset;
class UParticleModuleCollision;
class UParticleModuleColor;
class UParticleModuleColorOverLife;
class UParticleModuleColorScaleOverLife;
class UParticleModuleKillBox;
class UParticleModuleLifetime;
class UParticleModuleLight;
class UParticleModuleLocation;
class UParticleModuleLocationBoneSocket;
class UParticleModuleLocationDirect;
class UParticleModuleLocationPrimitiveCylinder;
class UParticleModuleLocationPrimitiveSphere;
class UParticleModuleLocationSkelVertSurface;
class UParticleModuleLocationWorldOffset;
class UParticleModuleMeshMaterial;
class UParticleModuleMeshRotation;
class UParticleModuleMeshRotationRate;
class UParticleModuleMeshRotationRateMultiplyLife;
class UParticleModuleMeshRotationRateOverLife;
class UParticleModuleOrbit;
class UParticleModuleOrientationAxisLock;
class UParticleModuleParameterDynamic;
class UParticleModulePivotOffset;
class UParticleModuleRequired;
class UParticleModuleRotation;
class UParticleModuleRotationOverLifetime;
class UParticleModuleRotationRate;
class UParticleModuleRotationRateMultiplyLife;
class UParticleModuleSize;
class UParticleModuleSizeMultiplyLife;
class UParticleModuleSizeScale;
class UParticleModuleSizeScaleBySpeed;
class UParticleModuleSpawn;
class UParticleModuleSpawnPerUnit;
class UParticleModuleSubUV;
class UParticleModuleSubUVMovie;
class UParticleModuleTrailSource;
class UParticleModuleTypeDataBase;
class UParticleModuleTypeDataBeam2;
class UParticleModuleTypeDataGpu;
class UParticleModuleTypeDataMesh;
class UParticleModuleTypeDataRibbon;
class UParticleModuleVectorFieldLocal;
class UParticleModuleVectorFieldRotationRate;
class UParticleModuleVelocity;
class UParticleModuleVelocityCone;
class UParticleModuleVelocityInheritParent;
class UParticleModuleVelocityOverLifetime;
class UParticleSystem;
class USkeletalMesh;
class UStaticMesh;
class USubUVAnimation;
class UTexture2D;
class UUserDefinedStruct;
class UVectorField;
enum class EDistributionType : uint8;
enum class EDistributionValueType : uint8;
enum class ENiagaraMessageSeverity : uint8;
enum class ENiagaraRendererSourceDataMode : uint8;
enum class ENiagaraScriptInputType : uint8;
enum class ENiagaraSimTarget : uint8;
enum class EScriptExecutionCategory : uint8;
struct FAssetData;
struct FCreateScriptContextArgs;
struct FEmitterDynamicParameterBP;
struct FInterpCurveFloat;
struct FInterpCurveTwoVectors;
struct FInterpCurveVector;
struct FInterpCurveVector2D;
struct FLightingChannels;
struct FLinearColor;
struct FLocationBoneSocketInfoBP;
struct FNiagaraEventHandlerAddAction;
struct FNiagaraTypeDefinition;
struct FOrbitOptionsBP;
struct FParticleBurstBlueprint;
struct FRichCurveKeyBP;

// ********** Begin ScriptStruct FEmitterDynamicParameterBP ****************************************
struct Z_Construct_UScriptStruct_FEmitterDynamicParameterBP_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_234_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEmitterDynamicParameterBP_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FEmitterDynamicParameterBP;
// ********** End ScriptStruct FEmitterDynamicParameterBP ******************************************

// ********** Begin ScriptStruct FOrbitOptionsBP ***************************************************
struct Z_Construct_UScriptStruct_FOrbitOptionsBP_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_293_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOrbitOptionsBP_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FOrbitOptionsBP;
// ********** End ScriptStruct FOrbitOptionsBP *****************************************************

// ********** Begin ScriptStruct FParticleBurstBlueprint *******************************************
struct Z_Construct_UScriptStruct_FParticleBurstBlueprint_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_332_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleBurstBlueprint_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FParticleBurstBlueprint;
// ********** End ScriptStruct FParticleBurstBlueprint *********************************************

// ********** Begin ScriptStruct FRichCurveKeyBP ***************************************************
struct Z_Construct_UScriptStruct_FRichCurveKeyBP_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_363_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRichCurveKeyBP_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct(); \
	typedef FRichCurveKey Super;


struct FRichCurveKeyBP;
// ********** End ScriptStruct FRichCurveKeyBP *****************************************************

// ********** Begin ScriptStruct FLocationBoneSocketInfoBP *****************************************
struct Z_Construct_UScriptStruct_FLocationBoneSocketInfoBP_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_379_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLocationBoneSocketInfoBP_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct(); \
	typedef FLocationBoneSocketInfo Super;


struct FLocationBoneSocketInfoBP;
// ********** End ScriptStruct FLocationBoneSocketInfoBP *******************************************

// ********** Begin ScriptStruct FNiagaraAddEventGeneratorOptions **********************************
struct Z_Construct_UScriptStruct_FNiagaraAddEventGeneratorOptions_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_393_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraAddEventGeneratorOptions_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FNiagaraAddEventGeneratorOptions;
// ********** End ScriptStruct FNiagaraAddEventGeneratorOptions ************************************

// ********** Begin ScriptStruct FNiagaraEventHandlerAddAction *************************************
struct Z_Construct_UScriptStruct_FNiagaraEventHandlerAddAction_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_409_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraEventHandlerAddAction_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FNiagaraEventHandlerAddAction;
// ********** End ScriptStruct FNiagaraEventHandlerAddAction ***************************************

// ********** Begin ScriptStruct FStackEntryID *****************************************************
struct Z_Construct_UScriptStruct_FStackEntryID_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_465_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStackEntryID_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FStackEntryID;
// ********** End ScriptStruct FStackEntryID *******************************************************

// ********** Begin ScriptStruct FStackEntryAddAction **********************************************
struct Z_Construct_UScriptStruct_FStackEntryAddAction_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_494_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStackEntryAddAction_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FStackEntryAddAction;
// ********** End ScriptStruct FStackEntryAddAction ************************************************

// ********** Begin ScriptStruct FNiagaraScriptVersion *********************************************
struct Z_Construct_UScriptStruct_FNiagaraScriptVersion_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_535_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraScriptVersion_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FNiagaraScriptVersion;
// ********** End ScriptStruct FNiagaraScriptVersion ***********************************************

// ********** Begin ScriptStruct FCreateScriptContextArgs ******************************************
struct Z_Construct_UScriptStruct_FCreateScriptContextArgs_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_555_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateScriptContextArgs_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FCreateScriptContextArgs;
// ********** End ScriptStruct FCreateScriptContextArgs ********************************************

// ********** Begin ScriptStruct FGenericConverterMessage ******************************************
struct Z_Construct_UScriptStruct_FGenericConverterMessage_Statics;
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_587_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGenericConverterMessage_Statics; \
	CASCADETONIAGARACONVERTER_API static class UScriptStruct* StaticStruct();


struct FGenericConverterMessage;
// ********** End ScriptStruct FGenericConverterMessage ********************************************

// ********** Begin Class UNiagaraSystemConversionContext ******************************************
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_612_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinalize); \
	DECLARE_FUNCTION(execSetWarmupTickDelta); \
	DECLARE_FUNCTION(execSetWarmupTime); \
	DECLARE_FUNCTION(execAddTemplateEmitter); \
	DECLARE_FUNCTION(execAddEmptyEmitter); \
	DECLARE_FUNCTION(execCleanup);


struct Z_Construct_UClass_UNiagaraSystemConversionContext_Statics;
CASCADETONIAGARACONVERTER_API UClass* Z_Construct_UClass_UNiagaraSystemConversionContext_NoRegister();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_612_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSystemConversionContext(); \
	friend struct ::Z_Construct_UClass_UNiagaraSystemConversionContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASCADETONIAGARACONVERTER_API UClass* ::Z_Construct_UClass_UNiagaraSystemConversionContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSystemConversionContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), Z_Construct_UClass_UNiagaraSystemConversionContext_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSystemConversionContext)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_612_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSystemConversionContext(UNiagaraSystemConversionContext&&) = delete; \
	UNiagaraSystemConversionContext(const UNiagaraSystemConversionContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSystemConversionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystemConversionContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSystemConversionContext) \
	NO_API virtual ~UNiagaraSystemConversionContext();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_609_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_612_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_612_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_612_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_612_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSystemConversionContext;

// ********** End Class UNiagaraSystemConversionContext ********************************************

// ********** Begin Delegate FOnPasteScript ********************************************************
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_675_DELEGATE \
static CASCADETONIAGARACONVERTER_API void FOnPasteScript_DelegateWrapper(const FScriptDelegate& OnPasteScript, int32 ScriptIdx);


// ********** End Delegate FOnPasteScript **********************************************************

// ********** Begin Class UNiagaraEmitterConversionContext *****************************************
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_673_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPastedFunctionCallNode); \
	DECLARE_FUNCTION(execRemoveModuleScriptsForAssets); \
	DECLARE_FUNCTION(execSetRendererBinding); \
	DECLARE_FUNCTION(execAddEventHandler); \
	DECLARE_FUNCTION(execSetDetailBitMask); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetLocalSpace); \
	DECLARE_FUNCTION(execSetSimTarget); \
	DECLARE_FUNCTION(execGetEmitter); \
	DECLARE_FUNCTION(execFinalize); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execGetAllRenderers); \
	DECLARE_FUNCTION(execFindRenderer); \
	DECLARE_FUNCTION(execAddRenderer); \
	DECLARE_FUNCTION(execSetParameterDirectly); \
	DECLARE_FUNCTION(execAddModuleEventScript); \
	DECLARE_FUNCTION(execAddModuleScript); \
	DECLARE_FUNCTION(execFindModuleScript); \
	DECLARE_FUNCTION(execFindOrAddModuleEventScript); \
	DECLARE_FUNCTION(execFindOrAddModuleScript); \
	DECLARE_FUNCTION(execCleanup);


struct Z_Construct_UClass_UNiagaraEmitterConversionContext_Statics;
CASCADETONIAGARACONVERTER_API UClass* Z_Construct_UClass_UNiagaraEmitterConversionContext_NoRegister();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_673_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEmitterConversionContext(); \
	friend struct ::Z_Construct_UClass_UNiagaraEmitterConversionContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASCADETONIAGARACONVERTER_API UClass* ::Z_Construct_UClass_UNiagaraEmitterConversionContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraEmitterConversionContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), Z_Construct_UClass_UNiagaraEmitterConversionContext_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraEmitterConversionContext)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_673_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraEmitterConversionContext(UNiagaraEmitterConversionContext&&) = delete; \
	UNiagaraEmitterConversionContext(const UNiagaraEmitterConversionContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEmitterConversionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitterConversionContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraEmitterConversionContext) \
	NO_API virtual ~UNiagaraEmitterConversionContext();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_670_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_673_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_673_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_673_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_673_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraEmitterConversionContext;

// ********** End Class UNiagaraEmitterConversionContext *******************************************

// ********** Begin Class UNiagaraScriptConversionContext ******************************************
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_844_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModuleEnabled); \
	DECLARE_FUNCTION(execSetModuleEnabled); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execSetParameter);


struct Z_Construct_UClass_UNiagaraScriptConversionContext_Statics;
CASCADETONIAGARACONVERTER_API UClass* Z_Construct_UClass_UNiagaraScriptConversionContext_NoRegister();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_844_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScriptConversionContext(); \
	friend struct ::Z_Construct_UClass_UNiagaraScriptConversionContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASCADETONIAGARACONVERTER_API UClass* ::Z_Construct_UClass_UNiagaraScriptConversionContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraScriptConversionContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), Z_Construct_UClass_UNiagaraScriptConversionContext_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraScriptConversionContext)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_844_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraScriptConversionContext(UNiagaraScriptConversionContext&&) = delete; \
	UNiagaraScriptConversionContext(const UNiagaraScriptConversionContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraScriptConversionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptConversionContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraScriptConversionContext) \
	NO_API virtual ~UNiagaraScriptConversionContext();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_841_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_844_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_844_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_844_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_844_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraScriptConversionContext;

// ********** End Class UNiagaraScriptConversionContext ********************************************

// ********** Begin Class UNiagaraScriptConversionContextInput *************************************
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_916_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInit);


struct Z_Construct_UClass_UNiagaraScriptConversionContextInput_Statics;
CASCADETONIAGARACONVERTER_API UClass* Z_Construct_UClass_UNiagaraScriptConversionContextInput_NoRegister();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_916_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScriptConversionContextInput(); \
	friend struct ::Z_Construct_UClass_UNiagaraScriptConversionContextInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASCADETONIAGARACONVERTER_API UClass* ::Z_Construct_UClass_UNiagaraScriptConversionContextInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraScriptConversionContextInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), Z_Construct_UClass_UNiagaraScriptConversionContextInput_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraScriptConversionContextInput)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_916_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraScriptConversionContextInput(UNiagaraScriptConversionContextInput&&) = delete; \
	UNiagaraScriptConversionContextInput(const UNiagaraScriptConversionContextInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraScriptConversionContextInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptConversionContextInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraScriptConversionContextInput) \
	NO_API virtual ~UNiagaraScriptConversionContextInput();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_913_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_916_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_916_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_916_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_916_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraScriptConversionContextInput;

// ********** End Class UNiagaraScriptConversionContextInput ***************************************

// ********** Begin Class UFXConverterUtilitiesLibrary *********************************************
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_947_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execKeysFromInterpCurveTwoVectors); \
	DECLARE_FUNCTION(execKeysFromInterpCurveVector2D); \
	DECLARE_FUNCTION(execKeysFromInterpCurveVector); \
	DECLARE_FUNCTION(execKeysFromInterpCurveFloat); \
	DECLARE_FUNCTION(execGetVectorDistributionParameterValues); \
	DECLARE_FUNCTION(execGetFloatDistributionParameterValues); \
	DECLARE_FUNCTION(execGetVectorDistributionUniformCurveValues); \
	DECLARE_FUNCTION(execGetFloatDistributionUniformCurveValues); \
	DECLARE_FUNCTION(execGetVectorDistributionConstCurveValues); \
	DECLARE_FUNCTION(execGetFloatDistributionConstCurveValues); \
	DECLARE_FUNCTION(execGetVectorDistributionUniformValues); \
	DECLARE_FUNCTION(execGetFloatDistributionUniformValues); \
	DECLARE_FUNCTION(execGetVectorDistributionConstValues); \
	DECLARE_FUNCTION(execGetFloatDistributionConstValues); \
	DECLARE_FUNCTION(execGetDistributionType); \
	DECLARE_FUNCTION(execGetDistributionLockedAxes); \
	DECLARE_FUNCTION(execGetDistributionMinMaxValues); \
	DECLARE_FUNCTION(execSetMeshRendererMaterialOverridesFromCascade); \
	DECLARE_FUNCTION(execGetParticleModuleBeamNoiseProps); \
	DECLARE_FUNCTION(execGetParticleModuleBeamTargetProps); \
	DECLARE_FUNCTION(execGetParticleModuleBeamSourceProps); \
	DECLARE_FUNCTION(execGetParticleModuleMeshMaterialProps); \
	DECLARE_FUNCTION(execGetParticleModuleLightProps); \
	DECLARE_FUNCTION(execGetParticleModuleKillBoxProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationSkelVertSurfaceProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationWorldOffsetProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationBoneSocketProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationDirectProps); \
	DECLARE_FUNCTION(execGetParticleModuleAttractorLineProps); \
	DECLARE_FUNCTION(execGetParticleModuleAttractorPointProps); \
	DECLARE_FUNCTION(execGetParticleModuleAttractorParticleProps); \
	DECLARE_FUNCTION(execGetParticleModuleTrailSourceProps); \
	DECLARE_FUNCTION(execGetParticleModuleAccelerationOverLifetimeProps); \
	DECLARE_FUNCTION(execGetParticleModuleAccelerationProps); \
	DECLARE_FUNCTION(execGetParticleModuleAccelerationDragScaleOverLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleAccelerationDragProps); \
	DECLARE_FUNCTION(execGetParticleModuleParameterDynamicProps); \
	DECLARE_FUNCTION(execGetParticleModuleSubUVMovieProps); \
	DECLARE_FUNCTION(execGetParticleModuleCameraOffsetProps); \
	DECLARE_FUNCTION(execGetParticleModuleSubUVProps); \
	DECLARE_FUNCTION(execGetParticleModulePivotOffsetProps); \
	DECLARE_FUNCTION(execGetParticleModuleMeshRotationRateOverLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleMeshRotationRateMultiplyLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleRotationOverLifetimeProps); \
	DECLARE_FUNCTION(execGetParticleModuleMeshRotationRateProps); \
	DECLARE_FUNCTION(execGetParticleModuleRotationRateMultiplyLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleRotationRateProps); \
	DECLARE_FUNCTION(execGetParticleModuleRotationProps); \
	DECLARE_FUNCTION(execGetParticleModuleColorScaleOverLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleSizeMultiplyLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleOrbitProps); \
	DECLARE_FUNCTION(execGetParticleModuleVectorFieldRotationRateProps); \
	DECLARE_FUNCTION(execGetParticleModuleVectorFieldLocalProps); \
	DECLARE_FUNCTION(execGetParticleModuleSizeScaleBySpeedProps); \
	DECLARE_FUNCTION(execGetParticleModuleSizeScaleProps); \
	DECLARE_FUNCTION(execGetParticleModuleCollisionProps); \
	DECLARE_FUNCTION(execGetParticleModuleMeshRotationProps); \
	DECLARE_FUNCTION(execGetParticleModuleVelocityInheritParentProps); \
	DECLARE_FUNCTION(execGetParticleModuleOrientationAxisLockProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationPrimitiveCylinderProps); \
	DECLARE_FUNCTION(execGetParticleModuleLocationPrimitiveSphereProps); \
	DECLARE_FUNCTION(execGetParticleModuleConstantAccelerationProps); \
	DECLARE_FUNCTION(execGetParticleModuleVelocityOverLifetimeProps); \
	DECLARE_FUNCTION(execGetParticleModuleVelocityConeProps); \
	DECLARE_FUNCTION(execGetParticleModuleVelocityProps); \
	DECLARE_FUNCTION(execGetParticleModuleSizeProps); \
	DECLARE_FUNCTION(execGetParticleModuleLifetimeProps); \
	DECLARE_FUNCTION(execGetParticleModuleColorOverLifeProps); \
	DECLARE_FUNCTION(execGetParticleModuleColorProps); \
	DECLARE_FUNCTION(execGetParticleModuleRequiredPerEmitterProps); \
	DECLARE_FUNCTION(execGetParticleModuleRequiredPerModuleProps); \
	DECLARE_FUNCTION(execGetParticleModuleRequiredPerRendererProps); \
	DECLARE_FUNCTION(execGetParticleModuleSpawnPerUnitProps); \
	DECLARE_FUNCTION(execGetParticleModuleSpawnProps); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataRibbonProps); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataRibbonClass); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataMeshProps); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataBeam2Props); \
	DECLARE_FUNCTION(execGetParticleModuleTypeDataGpuProps); \
	DECLARE_FUNCTION(execCreateSystemConversionContext); \
	DECLARE_FUNCTION(execCreateVec4CurveDI); \
	DECLARE_FUNCTION(execCreateVec3CurveDI); \
	DECLARE_FUNCTION(execCreateVec2CurveDI); \
	DECLARE_FUNCTION(execCreateFloatCurveDI); \
	DECLARE_FUNCTION(execCreateSkeletalMeshDataInterface); \
	DECLARE_FUNCTION(execCreateComponentRendererProperties); \
	DECLARE_FUNCTION(execCreateLightRendererProperties); \
	DECLARE_FUNCTION(execCreateMeshRendererProperties); \
	DECLARE_FUNCTION(execCreateRibbonRendererProperties); \
	DECLARE_FUNCTION(execCreateScriptInputBool); \
	DECLARE_FUNCTION(execCreateScriptInputDI); \
	DECLARE_FUNCTION(execCreateScriptInputDynamic); \
	DECLARE_FUNCTION(execCreateScriptInputInt); \
	DECLARE_FUNCTION(execCreateScriptInputEnum); \
	DECLARE_FUNCTION(execCreateScriptInputStruct); \
	DECLARE_FUNCTION(execCreateScriptInputVector); \
	DECLARE_FUNCTION(execCreateScriptInputVec4); \
	DECLARE_FUNCTION(execCreateScriptInputVec2); \
	DECLARE_FUNCTION(execCreateScriptInputQuat); \
	DECLARE_FUNCTION(execCreateScriptInputMatrix); \
	DECLARE_FUNCTION(execCreateScriptInputLinearColor); \
	DECLARE_FUNCTION(execCreateScriptInputFloat); \
	DECLARE_FUNCTION(execCreateScriptInputLinkedParameterEx); \
	DECLARE_FUNCTION(execCreateScriptInputLinkedParameter); \
	DECLARE_FUNCTION(execCreateScriptInputLinkedEnum); \
	DECLARE_FUNCTION(execCreateAssetData); \
	DECLARE_FUNCTION(execCreateScriptContext); \
	DECLARE_FUNCTION(execGetCascadeEmitterRenderMode); \
	DECLARE_FUNCTION(execGetCascadeEmitterName); \
	DECLARE_FUNCTION(execGetParticleModuleIsEnabled); \
	DECLARE_FUNCTION(execGetLodLevelTypeDataModule); \
	DECLARE_FUNCTION(execGetLodLevelRequiredModule); \
	DECLARE_FUNCTION(execGetLodLevelSpawnModule); \
	DECLARE_FUNCTION(execGetLodLevelModules); \
	DECLARE_FUNCTION(execGetLodLevelIsEnabled); \
	DECLARE_FUNCTION(execGetCascadeEmitterLodLevel); \
	DECLARE_FUNCTION(execGetWarmupTime); \
	DECLARE_FUNCTION(execGetCascadeSystemEmitters); \
	DECLARE_FUNCTION(execGetLongPackagePath);


struct Z_Construct_UClass_UFXConverterUtilitiesLibrary_Statics;
CASCADETONIAGARACONVERTER_API UClass* Z_Construct_UClass_UFXConverterUtilitiesLibrary_NoRegister();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_947_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFXConverterUtilitiesLibrary(); \
	friend struct ::Z_Construct_UClass_UFXConverterUtilitiesLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASCADETONIAGARACONVERTER_API UClass* ::Z_Construct_UClass_UFXConverterUtilitiesLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UFXConverterUtilitiesLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), Z_Construct_UClass_UFXConverterUtilitiesLibrary_NoRegister) \
	DECLARE_SERIALIZER(UFXConverterUtilitiesLibrary)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_947_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFXConverterUtilitiesLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFXConverterUtilitiesLibrary(UFXConverterUtilitiesLibrary&&) = delete; \
	UFXConverterUtilitiesLibrary(const UFXConverterUtilitiesLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFXConverterUtilitiesLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXConverterUtilitiesLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXConverterUtilitiesLibrary) \
	NO_API virtual ~UFXConverterUtilitiesLibrary();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_944_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_947_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_947_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_947_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_947_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFXConverterUtilitiesLibrary;

// ********** End Class UFXConverterUtilitiesLibrary ***********************************************

// ********** Begin Class UConvertCascadeToNiagaraResults ******************************************
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1684_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInit);


struct Z_Construct_UClass_UConvertCascadeToNiagaraResults_Statics;
CASCADETONIAGARACONVERTER_API UClass* Z_Construct_UClass_UConvertCascadeToNiagaraResults_NoRegister();

#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1684_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConvertCascadeToNiagaraResults(); \
	friend struct ::Z_Construct_UClass_UConvertCascadeToNiagaraResults_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASCADETONIAGARACONVERTER_API UClass* ::Z_Construct_UClass_UConvertCascadeToNiagaraResults_NoRegister(); \
public: \
	DECLARE_CLASS2(UConvertCascadeToNiagaraResults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CascadeToNiagaraConverter"), Z_Construct_UClass_UConvertCascadeToNiagaraResults_NoRegister) \
	DECLARE_SERIALIZER(UConvertCascadeToNiagaraResults)


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1684_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConvertCascadeToNiagaraResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConvertCascadeToNiagaraResults(UConvertCascadeToNiagaraResults&&) = delete; \
	UConvertCascadeToNiagaraResults(const UConvertCascadeToNiagaraResults&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConvertCascadeToNiagaraResults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConvertCascadeToNiagaraResults); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConvertCascadeToNiagaraResults) \
	NO_API virtual ~UConvertCascadeToNiagaraResults();


#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1681_PROLOG
#define FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1684_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1684_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1684_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h_1684_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConvertCascadeToNiagaraResults;

// ********** End Class UConvertCascadeToNiagaraResults ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_CascadeToNiagaraConverter_Source_CascadeToNiagaraConverter_Public_NiagaraStackGraphUtilitiesAdapterLibrary_h

// ********** Begin Enum EScriptExecutionCategory **************************************************
#define FOREACH_ENUM_ESCRIPTEXECUTIONCATEGORY(op) \
	op(EScriptExecutionCategory::EmitterSpawn) \
	op(EScriptExecutionCategory::EmitterUpdate) \
	op(EScriptExecutionCategory::ParticleSpawn) \
	op(EScriptExecutionCategory::ParticleUpdate) \
	op(EScriptExecutionCategory::ParticleEvent) \
	op(EScriptExecutionCategory::NONE) 

enum class EScriptExecutionCategory : uint8;
template<> struct TIsUEnumClass<EScriptExecutionCategory> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptExecutionCategory>();
// ********** End Enum EScriptExecutionCategory ****************************************************

// ********** Begin Enum EDistributionType *********************************************************
#define FOREACH_ENUM_EDISTRIBUTIONTYPE(op) \
	op(EDistributionType::Const) \
	op(EDistributionType::ConstCurve) \
	op(EDistributionType::Uniform) \
	op(EDistributionType::UniformCurve) \
	op(EDistributionType::Parameter) \
	op(EDistributionType::NONE) 

enum class EDistributionType : uint8;
template<> struct TIsUEnumClass<EDistributionType> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistributionType>();
// ********** End Enum EDistributionType ***********************************************************

// ********** Begin Enum EDistributionValueType ****************************************************
#define FOREACH_ENUM_EDISTRIBUTIONVALUETYPE(op) \
	op(EDistributionValueType::Float) \
	op(EDistributionValueType::Vector) \
	op(EDistributionValueType::NONE) 

enum class EDistributionValueType : uint8;
template<> struct TIsUEnumClass<EDistributionValueType> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistributionValueType>();
// ********** End Enum EDistributionValueType ******************************************************

// ********** Begin Enum ECascadeRendererType ******************************************************
#define FOREACH_ENUM_ECASCADERENDERERTYPE(op) \
	op(ECascadeRendererType::Sprite) \
	op(ECascadeRendererType::Mesh) \
	op(ECascadeRendererType::Ribbon) \
	op(ECascadeRendererType::Beam) \
	op(ECascadeRendererType::AnimTrail) \
	op(ECascadeRendererType::NONE) 

enum class ECascadeRendererType : uint8;
template<> struct TIsUEnumClass<ECascadeRendererType> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ECascadeRendererType>();
// ********** End Enum ECascadeRendererType ********************************************************

// ********** Begin Enum ENiagaraScriptInputType ***************************************************
#define FOREACH_ENUM_ENIAGARASCRIPTINPUTTYPE(op) \
	op(ENiagaraScriptInputType::Int) \
	op(ENiagaraScriptInputType::Float) \
	op(ENiagaraScriptInputType::Vec2) \
	op(ENiagaraScriptInputType::Vec3) \
	op(ENiagaraScriptInputType::Vec4) \
	op(ENiagaraScriptInputType::LinearColor) \
	op(ENiagaraScriptInputType::Matrix) \
	op(ENiagaraScriptInputType::Quaternion) \
	op(ENiagaraScriptInputType::Struct) \
	op(ENiagaraScriptInputType::Enum) \
	op(ENiagaraScriptInputType::DataInterface) \
	op(ENiagaraScriptInputType::Bool) \
	op(ENiagaraScriptInputType::Position) \
	op(ENiagaraScriptInputType::NONE) 

enum class ENiagaraScriptInputType : uint8;
template<> struct TIsUEnumClass<ENiagaraScriptInputType> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraScriptInputType>();
// ********** End Enum ENiagaraScriptInputType *****************************************************

// ********** Begin Enum ERibbonConversionMode *****************************************************
#define FOREACH_ENUM_ERIBBONCONVERSIONMODE(op) \
	op(ERibbonConversionMode::Event) \
	op(ERibbonConversionMode::DirectRead) \
	op(ERibbonConversionMode::NONE) 

enum class ERibbonConversionMode : uint8;
template<> struct TIsUEnumClass<ERibbonConversionMode> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERibbonConversionMode>();
// ********** End Enum ERibbonConversionMode *******************************************************

// ********** Begin Enum EStackEntryAddActionMode **************************************************
#define FOREACH_ENUM_ESTACKENTRYADDACTIONMODE(op) \
	op(EStackEntryAddActionMode::Module) \
	op(EStackEntryAddActionMode::SetParameter) \
	op(EStackEntryAddActionMode::NONE) 

enum class EStackEntryAddActionMode : uint8;
template<> struct TIsUEnumClass<EStackEntryAddActionMode> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EStackEntryAddActionMode>();
// ********** End Enum EStackEntryAddActionMode ****************************************************

// ********** Begin Enum ENiagaraEventHandlerAddMode ***********************************************
#define FOREACH_ENUM_ENIAGARAEVENTHANDLERADDMODE(op) \
	op(ENiagaraEventHandlerAddMode::AddEvent) \
	op(ENiagaraEventHandlerAddMode::AddEventAndEventGenerator) \
	op(ENiagaraEventHandlerAddMode::NONE) 

enum class ENiagaraEventHandlerAddMode : uint8;
template<> struct TIsUEnumClass<ENiagaraEventHandlerAddMode> { enum { Value = true }; };
template<> CASCADETONIAGARACONVERTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraEventHandlerAddMode>();
// ********** End Enum ENiagaraEventHandlerAddMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
