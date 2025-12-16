// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterSplineComponent.h"

#ifdef WATER_WaterSplineComponent_generated_h
#error "WaterSplineComponent.generated.h already included, missing '#pragma once' in WaterSplineComponent.h"
#endif
#define WATER_WaterSplineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterSplineComponent ****************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execK2_SynchronizeAndBroadcastDataChange);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWaterSplineComponent, WATER_API)


struct Z_Construct_UClass_UWaterSplineComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterSplineComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUWaterSplineComponent(); \
	friend struct ::Z_Construct_UClass_UWaterSplineComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterSplineComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterSplineComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterSplineComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSplineComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterSplineComponent(UWaterSplineComponent&&) = delete; \
	UWaterSplineComponent(const UWaterSplineComponent&) = delete; \
	WATER_API virtual ~UWaterSplineComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterSplineComponent;

// ********** End Class UWaterSplineComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
