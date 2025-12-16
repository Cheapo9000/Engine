// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyHLODBuilder.h"

#ifdef WATER_WaterBodyHLODBuilder_generated_h
#error "WaterBodyHLODBuilder.generated.h already included, missing '#pragma once' in WaterBodyHLODBuilder.h"
#endif
#define WATER_WaterBodyHLODBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBodyHLODBuilder ****************************************************
struct Z_Construct_UClass_UWaterBodyHLODBuilder_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBodyHLODBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyHLODBuilder(); \
	friend struct ::Z_Construct_UClass_UWaterBodyHLODBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBodyHLODBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyHLODBuilder, UHLODBuilder, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBodyHLODBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyHLODBuilder)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterBodyHLODBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyHLODBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBodyHLODBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyHLODBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyHLODBuilder(UWaterBodyHLODBuilder&&) = delete; \
	UWaterBodyHLODBuilder(const UWaterBodyHLODBuilder&) = delete; \
	NO_API virtual ~UWaterBodyHLODBuilder();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_12_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyHLODBuilder;

// ********** End Class UWaterBodyHLODBuilder ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
