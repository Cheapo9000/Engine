// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterTerrainComponent.h"

#ifdef WATER_WaterTerrainComponent_generated_h
#error "WaterTerrainComponent.generated.h already included, missing '#pragma once' in WaterTerrainComponent.h"
#endif
#define WATER_WaterTerrainComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterTerrainComponent ***************************************************
struct Z_Construct_UClass_UWaterTerrainComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterTerrainComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterTerrainComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterTerrainComponent(); \
	friend struct ::Z_Construct_UClass_UWaterTerrainComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterTerrainComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterTerrainComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterTerrainComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterTerrainComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterTerrainComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterTerrainComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterTerrainComponent(UWaterTerrainComponent&&) = delete; \
	UWaterTerrainComponent(const UWaterTerrainComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterTerrainComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterTerrainComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterTerrainComponent) \
	WATER_API virtual ~UWaterTerrainComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterTerrainComponent_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterTerrainComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterTerrainComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterTerrainComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterTerrainComponent;

// ********** End Class UWaterTerrainComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterTerrainComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
