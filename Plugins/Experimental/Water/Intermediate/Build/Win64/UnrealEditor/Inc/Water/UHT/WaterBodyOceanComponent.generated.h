// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyOceanComponent.h"

#ifdef WATER_WaterBodyOceanComponent_generated_h
#error "WaterBodyOceanComponent.generated.h already included, missing '#pragma once' in WaterBodyOceanComponent.h"
#endif
#define WATER_WaterBodyOceanComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBodyOceanComponent *************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_18_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execFillWaterZoneWithOcean);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_18_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UWaterBodyOceanComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyOceanComponent(); \
	friend struct ::Z_Construct_UClass_UWaterBodyOceanComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyOceanComponent, UWaterBodyComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyOceanComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterBodyOceanComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyOceanComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterBodyOceanComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyOceanComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyOceanComponent(UWaterBodyOceanComponent&&) = delete; \
	UWaterBodyOceanComponent(const UWaterBodyOceanComponent&) = delete; \
	WATER_API virtual ~UWaterBodyOceanComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_18_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyOceanComponent;

// ********** End Class UWaterBodyOceanComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
