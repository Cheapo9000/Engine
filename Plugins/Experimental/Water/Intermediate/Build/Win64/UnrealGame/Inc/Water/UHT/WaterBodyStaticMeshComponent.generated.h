// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyStaticMeshComponent.h"

#ifdef WATER_WaterBodyStaticMeshComponent_generated_h
#error "WaterBodyStaticMeshComponent.generated.h already included, missing '#pragma once' in WaterBodyStaticMeshComponent.h"
#endif
#define WATER_WaterBodyStaticMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBodyStaticMeshComponent ********************************************
struct Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBodyStaticMeshComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterBodyStaticMeshComponent(); \
	friend struct ::Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBodyStaticMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyStaticMeshComponent, UWaterBodyMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBodyStaticMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyStaticMeshComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterBodyStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyStaticMeshComponent(UWaterBodyStaticMeshComponent&&) = delete; \
	UWaterBodyStaticMeshComponent(const UWaterBodyStaticMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterBodyStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyStaticMeshComponent) \
	WATER_API virtual ~UWaterBodyStaticMeshComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyStaticMeshComponent;

// ********** End Class UWaterBodyStaticMeshComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
