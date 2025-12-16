// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyLakeActor.h"

#ifdef WATER_WaterBodyLakeActor_generated_h
#error "WaterBodyLakeActor.generated.h already included, missing '#pragma once' in WaterBodyLakeActor.h"
#endif
#define WATER_WaterBodyLakeActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_LakeGenerator ************************************************
struct Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics;
WATER_API UClass* Z_Construct_UClass_UDEPRECATED_LakeGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_LakeGenerator(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UDEPRECATED_LakeGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_LakeGenerator, UDEPRECATED_WaterBodyGenerator, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UDEPRECATED_LakeGenerator_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_LakeGenerator)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UDEPRECATED_LakeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_LakeGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UDEPRECATED_LakeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_LakeGenerator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_LakeGenerator(UDEPRECATED_LakeGenerator&&) = delete; \
	UDEPRECATED_LakeGenerator(const UDEPRECATED_LakeGenerator&) = delete; \
	WATER_API virtual ~UDEPRECATED_LakeGenerator();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_LakeGenerator;

// ********** End Class UDEPRECATED_LakeGenerator **************************************************

// ********** Begin Class AWaterBodyLake ***********************************************************
struct Z_Construct_UClass_AWaterBodyLake_Statics;
WATER_API UClass* Z_Construct_UClass_AWaterBodyLake_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBodyLake(); \
	friend struct ::Z_Construct_UClass_AWaterBodyLake_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_AWaterBodyLake_NoRegister(); \
public: \
	DECLARE_CLASS2(AWaterBodyLake, AWaterBody, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_AWaterBodyLake_NoRegister) \
	DECLARE_SERIALIZER(AWaterBodyLake)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API AWaterBodyLake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyLake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, AWaterBodyLake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyLake); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWaterBodyLake(AWaterBodyLake&&) = delete; \
	AWaterBodyLake(const AWaterBodyLake&) = delete; \
	WATER_API virtual ~AWaterBodyLake();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_32_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_35_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWaterBodyLake;

// ********** End Class AWaterBodyLake *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
