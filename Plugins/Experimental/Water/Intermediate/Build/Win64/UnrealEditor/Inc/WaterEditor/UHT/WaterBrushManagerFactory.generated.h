// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBrushManagerFactory.h"

#ifdef WATEREDITOR_WaterBrushManagerFactory_generated_h
#error "WaterBrushManagerFactory.generated.h already included, missing '#pragma once' in WaterBrushManagerFactory.h"
#endif
#define WATEREDITOR_WaterBrushManagerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBrushManagerFactory ************************************************
struct Z_Construct_UClass_UWaterBrushManagerFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBrushManagerFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManagerFactory_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBrushManagerFactory(); \
	friend struct ::Z_Construct_UClass_UWaterBrushManagerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterBrushManagerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBrushManagerFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterBrushManagerFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterBrushManagerFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManagerFactory_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATEREDITOR_API UWaterBrushManagerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBrushManagerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterBrushManagerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBrushManagerFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBrushManagerFactory(UWaterBrushManagerFactory&&) = delete; \
	UWaterBrushManagerFactory(const UWaterBrushManagerFactory&) = delete; \
	WATEREDITOR_API virtual ~UWaterBrushManagerFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManagerFactory_h_7_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManagerFactory_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManagerFactory_h_10_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManagerFactory_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBrushManagerFactory;

// ********** End Class UWaterBrushManagerFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManagerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
