// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyCustomComponent.h"

#ifdef WATER_WaterBodyCustomComponent_generated_h
#error "WaterBodyCustomComponent.generated.h already included, missing '#pragma once' in WaterBodyCustomComponent.h"
#endif
#define WATER_WaterBodyCustomComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBodyCustomComponent ************************************************
struct Z_Construct_UClass_UWaterBodyCustomComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBodyCustomComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyCustomComponent(); \
	friend struct ::Z_Construct_UClass_UWaterBodyCustomComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBodyCustomComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyCustomComponent, UWaterBodyComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBodyCustomComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyCustomComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterBodyCustomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyCustomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterBodyCustomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyCustomComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyCustomComponent(UWaterBodyCustomComponent&&) = delete; \
	UWaterBodyCustomComponent(const UWaterBodyCustomComponent&) = delete; \
	WATER_API virtual ~UWaterBodyCustomComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomComponent_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomComponent_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyCustomComponent;

// ********** End Class UWaterBodyCustomComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
