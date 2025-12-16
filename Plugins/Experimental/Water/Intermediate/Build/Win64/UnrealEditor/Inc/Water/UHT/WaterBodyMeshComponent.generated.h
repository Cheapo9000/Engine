// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyMeshComponent.h"

#ifdef WATER_WaterBodyMeshComponent_generated_h
#error "WaterBodyMeshComponent.generated.h already included, missing '#pragma once' in WaterBodyMeshComponent.h"
#endif
#define WATER_WaterBodyMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBodyMeshComponent **************************************************
struct Z_Construct_UClass_UWaterBodyMeshComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBodyMeshComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyMeshComponent(); \
	friend struct ::Z_Construct_UClass_UWaterBodyMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBodyMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBodyMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyMeshComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterBodyMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterBodyMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyMeshComponent(UWaterBodyMeshComponent&&) = delete; \
	UWaterBodyMeshComponent(const UWaterBodyMeshComponent&) = delete; \
	WATER_API virtual ~UWaterBodyMeshComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyMeshComponent;

// ********** End Class UWaterBodyMeshComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
