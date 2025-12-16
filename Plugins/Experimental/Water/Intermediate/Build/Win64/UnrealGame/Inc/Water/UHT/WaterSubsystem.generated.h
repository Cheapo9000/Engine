// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterSubsystem.h"

#ifdef WATER_WaterSubsystem_generated_h
#error "WaterSubsystem.generated.h already included, missing '#pragma once' in WaterSubsystem.h"
#endif
#define WATER_WaterSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnCameraUnderwaterStateChanged ***************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_21_DELEGATE \
WATER_API void FOnCameraUnderwaterStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraUnderwaterStateChanged, bool bIsUnderWater, float DepthUnderwater);


// ********** End Delegate FOnCameraUnderwaterStateChanged *****************************************

// ********** Begin Delegate FOnWaterScalabilityChanged ********************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_22_DELEGATE \
WATER_API void FOnWaterScalabilityChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWaterScalabilityChanged);


// ********** End Delegate FOnWaterScalabilityChanged **********************************************

// ********** Begin Class UWaterSubsystem **********************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanTotalHeight); \
	DECLARE_FUNCTION(execGetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanBaseHeight); \
	DECLARE_FUNCTION(execPrintToWaterLog); \
	DECLARE_FUNCTION(execGetCameraUnderwaterDepth); \
	DECLARE_FUNCTION(execGetSmoothedWorldTimeSeconds); \
	DECLARE_FUNCTION(execGetWaterTimeSeconds); \
	DECLARE_FUNCTION(execIsWaterRenderingEnabled); \
	DECLARE_FUNCTION(execGetShallowWaterSimulationRenderTargetSize); \
	DECLARE_FUNCTION(execGetShallowWaterMaxImpulseForces); \
	DECLARE_FUNCTION(execGetShallowWaterMaxDynamicForces); \
	DECLARE_FUNCTION(execGetUnderwaterPreciseTraceDistance); \
	DECLARE_FUNCTION(execGetUnderwaterCollisionTraceDistance); \
	DECLARE_FUNCTION(execIsUnderwaterPostProcessEnabled); \
	DECLARE_FUNCTION(execIsShallowWaterSimulationEnabled);


struct Z_Construct_UClass_UWaterSubsystem_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterSubsystem(); \
	friend struct ::Z_Construct_UClass_UWaterSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWaterSubsystem)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterSubsystem(UWaterSubsystem&&) = delete; \
	UWaterSubsystem(const UWaterSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterSubsystem) \
	WATER_API virtual ~UWaterSubsystem();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_76_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterSubsystem;

// ********** End Class UWaterSubsystem ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
