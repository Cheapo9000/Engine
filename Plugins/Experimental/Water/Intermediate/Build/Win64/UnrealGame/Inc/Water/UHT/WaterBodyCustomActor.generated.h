// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyCustomActor.h"

#ifdef WATER_WaterBodyCustomActor_generated_h
#error "WaterBodyCustomActor.generated.h already included, missing '#pragma once' in WaterBodyCustomActor.h"
#endif
#define WATER_WaterBodyCustomActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_CustomMeshGenerator ******************************************
struct Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics;
WATER_API UClass* Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_CustomMeshGenerator(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_CustomMeshGenerator, UDEPRECATED_WaterBodyGenerator, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_CustomMeshGenerator)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UDEPRECATED_CustomMeshGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_CustomMeshGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UDEPRECATED_CustomMeshGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_CustomMeshGenerator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_CustomMeshGenerator(UDEPRECATED_CustomMeshGenerator&&) = delete; \
	UDEPRECATED_CustomMeshGenerator(const UDEPRECATED_CustomMeshGenerator&) = delete; \
	WATER_API virtual ~UDEPRECATED_CustomMeshGenerator();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_CustomMeshGenerator;

// ********** End Class UDEPRECATED_CustomMeshGenerator ********************************************

// ********** Begin Class AWaterBodyCustom *********************************************************
struct Z_Construct_UClass_AWaterBodyCustom_Statics;
WATER_API UClass* Z_Construct_UClass_AWaterBodyCustom_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBodyCustom(); \
	friend struct ::Z_Construct_UClass_AWaterBodyCustom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_AWaterBodyCustom_NoRegister(); \
public: \
	DECLARE_CLASS2(AWaterBodyCustom, AWaterBody, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_AWaterBodyCustom_NoRegister) \
	DECLARE_SERIALIZER(AWaterBodyCustom)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API AWaterBodyCustom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyCustom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, AWaterBodyCustom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyCustom); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWaterBodyCustom(AWaterBodyCustom&&) = delete; \
	AWaterBodyCustom(const AWaterBodyCustom&) = delete; \
	WATER_API virtual ~AWaterBodyCustom();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_30_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWaterBodyCustom;

// ********** End Class AWaterBodyCustom ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
