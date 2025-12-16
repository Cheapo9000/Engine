// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyRiverComponent.h"

#ifdef WATER_WaterBodyRiverComponent_generated_h
#error "WaterBodyRiverComponent.generated.h already included, missing '#pragma once' in WaterBodyRiverComponent.h"
#endif
#define WATER_WaterBodyRiverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;

// ********** Begin Class UWaterBodyRiverComponent *************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetRiverDepthAtSplineInputKey); \
	DECLARE_FUNCTION(execSetRiverWidthAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRiverDepthAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRiverWidthAtSplineInputKey); \
	DECLARE_FUNCTION(execSetLakeAndOceanTransitionMaterials); \
	DECLARE_FUNCTION(execSetOceanTransitionMaterial); \
	DECLARE_FUNCTION(execSetLakeTransitionMaterial);


struct Z_Construct_UClass_UWaterBodyRiverComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBodyRiverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyRiverComponent(); \
	friend struct ::Z_Construct_UClass_UWaterBodyRiverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBodyRiverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyRiverComponent, UWaterBodyComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBodyRiverComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyRiverComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterBodyRiverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyRiverComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterBodyRiverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyRiverComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyRiverComponent(UWaterBodyRiverComponent&&) = delete; \
	UWaterBodyRiverComponent(const UWaterBodyRiverComponent&) = delete; \
	WATER_API virtual ~UWaterBodyRiverComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyRiverComponent;

// ********** End Class UWaterBodyRiverComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
