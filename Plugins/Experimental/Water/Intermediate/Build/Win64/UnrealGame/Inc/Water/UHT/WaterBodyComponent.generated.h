// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyComponent.h"

#ifdef WATER_WaterBodyComponent_generated_h
#error "WaterBodyComponent.generated.h already included, missing '#pragma once' in WaterBodyComponent.h"
#endif
#define WATER_WaterBodyComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBody;
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class AWaterZone;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPrimitiveComponent;
class UWaterSplineComponent;
class UWaterWavesBase;

// ********** Begin ScriptStruct FUnderwaterPostProcessSettings ************************************
struct Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


struct FUnderwaterPostProcessSettings;
// ********** End ScriptStruct FUnderwaterPostProcessSettings **************************************

// ********** Begin Class UWaterBodyComponent ******************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execSetWaterZoneOverride); \
	DECLARE_FUNCTION(execGetMaxWaveHeight); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execSetAudioIntensityAtSplineInputKey); \
	DECLARE_FUNCTION(execSetWaterVelocityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetAudioIntensityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterVelocityVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterVelocityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterSurfaceInfoAtLocation); \
	DECLARE_FUNCTION(execSetWaterAndUnderWaterPostProcessMaterial); \
	DECLARE_FUNCTION(execSetUnderwaterPostProcessMaterial); \
	DECLARE_FUNCTION(execGetWaterInfoMaterialInstance); \
	DECLARE_FUNCTION(execGetUnderwaterPostProcessMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterLODMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterStaticMeshMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execSetWaterStaticMeshMaterial); \
	DECLARE_FUNCTION(execSetWaterInfoMaterial); \
	DECLARE_FUNCTION(execSetWaterMaterial); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterial); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterial); \
	DECLARE_FUNCTION(execGetWaterMaterial); \
	DECLARE_FUNCTION(execGetWaterWaves); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetWaterBodyActor); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetStandardRenderableComponents); \
	DECLARE_FUNCTION(execGetCollisionComponents);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSetWaterBodyStaticMeshEnabled);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_ACCESSORS \
static void GetWaterMeshOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetWaterMeshOverride_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWaterBodyComponent, WATER_API)


struct Z_Construct_UClass_UWaterBodyComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyComponent(); \
	friend struct ::Z_Construct_UClass_UWaterBodyComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBodyComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBodyComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterBodyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterBodyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyComponent(UWaterBodyComponent&&) = delete; \
	UWaterBodyComponent(const UWaterBodyComponent&) = delete; \
	WATER_API virtual ~UWaterBodyComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_112_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyComponent;

// ********** End Class UWaterBodyComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
