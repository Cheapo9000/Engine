// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atmosphere/AtmosphericFogComponent.h"

#ifdef ENGINE_AtmosphericFogComponent_generated_h
#error "AtmosphericFogComponent.generated.h already included, missing '#pragma once' in AtmosphericFogComponent.h"
#endif
#define ENGINE_AtmosphericFogComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UAtmosphericFogComponent *************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetPrecomputeParams); \
	DECLARE_FUNCTION(execDisableGroundScattering); \
	DECLARE_FUNCTION(execDisableSunDisk); \
	DECLARE_FUNCTION(execSetDistanceOffset); \
	DECLARE_FUNCTION(execSetStartDistance); \
	DECLARE_FUNCTION(execSetAltitudeScale); \
	DECLARE_FUNCTION(execSetDistanceScale); \
	DECLARE_FUNCTION(execSetDensityOffset); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetFogMultiplier); \
	DECLARE_FUNCTION(execSetSunMultiplier); \
	DECLARE_FUNCTION(execSetDefaultLightColor); \
	DECLARE_FUNCTION(execSetDefaultBrightness);


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtmosphericFogComponent, ENGINE_API)


struct Z_Construct_UClass_UAtmosphericFogComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAtmosphericFogComponent(); \
	friend struct ::Z_Construct_UClass_UAtmosphericFogComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAtmosphericFogComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAtmosphericFogComponent, USkyAtmosphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAtmosphericFogComponent_NoRegister) \
	DECLARE_SERIALIZER(UAtmosphericFogComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtmosphericFogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAtmosphericFogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtmosphericFogComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAtmosphericFogComponent(UAtmosphericFogComponent&&) = delete; \
	UAtmosphericFogComponent(const UAtmosphericFogComponent&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAtmosphericFogComponent;

// ********** End Class UAtmosphericFogComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
