// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterSplineMetadata.h"

#ifdef WATER_WaterSplineMetadata_generated_h
#error "WaterSplineMetadata.generated.h already included, missing '#pragma once' in WaterSplineMetadata.h"
#endif
#define WATER_WaterSplineMetadata_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWaterSplineCurveDefaults *****************************************
struct Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


struct FWaterSplineCurveDefaults;
// ********** End ScriptStruct FWaterSplineCurveDefaults *******************************************

// ********** Begin Class UWaterSplineMetadata *****************************************************
struct Z_Construct_UClass_UWaterSplineMetadata_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterSplineMetadata_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUWaterSplineMetadata(); \
	friend struct ::Z_Construct_UClass_UWaterSplineMetadata_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterSplineMetadata_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterSplineMetadata, USplineMetadata, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterSplineMetadata_NoRegister) \
	DECLARE_SERIALIZER(UWaterSplineMetadata)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterSplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSplineMetadata) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterSplineMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSplineMetadata); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterSplineMetadata(UWaterSplineMetadata&&) = delete; \
	UWaterSplineMetadata(const UWaterSplineMetadata&) = delete; \
	WATER_API virtual ~UWaterSplineMetadata();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_57_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_60_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterSplineMetadata;

// ********** End Class UWaterSplineMetadata *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
