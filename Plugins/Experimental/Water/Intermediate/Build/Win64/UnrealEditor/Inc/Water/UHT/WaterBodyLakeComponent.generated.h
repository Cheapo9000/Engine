// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyLakeComponent.h"

#ifdef WATER_WaterBodyLakeComponent_generated_h
#error "WaterBodyLakeComponent.generated.h already included, missing '#pragma once' in WaterBodyLakeComponent.h"
#endif
#define WATER_WaterBodyLakeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBodyLakeComponent **************************************************
struct Z_Construct_UClass_UWaterBodyLakeComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBodyLakeComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyLakeComponent(); \
	friend struct ::Z_Construct_UClass_UWaterBodyLakeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBodyLakeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyLakeComponent, UWaterBodyComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBodyLakeComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyLakeComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterBodyLakeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyLakeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterBodyLakeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyLakeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyLakeComponent(UWaterBodyLakeComponent&&) = delete; \
	UWaterBodyLakeComponent(const UWaterBodyLakeComponent&) = delete; \
	WATER_API virtual ~UWaterBodyLakeComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyLakeComponent;

// ********** End Class UWaterBodyLakeComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
