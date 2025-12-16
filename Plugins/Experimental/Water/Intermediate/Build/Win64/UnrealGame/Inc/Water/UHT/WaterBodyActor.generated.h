// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyActor.h"

#ifdef WATER_WaterBodyActor_generated_h
#error "WaterBodyActor.generated.h already included, missing '#pragma once' in WaterBodyActor.h"
#endif
#define WATER_WaterBodyActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UWaterBodyComponent;
class UWaterSplineComponent;
class UWaterWavesBase;
enum class EWaterBodyType : uint8;

// ********** Begin Class UDEPRECATED_WaterBodyGenerator *******************************************
struct Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics;
WATER_API UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_WaterBodyGenerator(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_WaterBodyGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_WaterBodyGenerator) \
	DECLARE_WITHIN(AWaterBody)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UDEPRECATED_WaterBodyGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_WaterBodyGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UDEPRECATED_WaterBodyGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_WaterBodyGenerator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_WaterBodyGenerator(UDEPRECATED_WaterBodyGenerator&&) = delete; \
	UDEPRECATED_WaterBodyGenerator(const UDEPRECATED_WaterBodyGenerator&) = delete; \
	WATER_API virtual ~UDEPRECATED_WaterBodyGenerator();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_WaterBodyGenerator;

// ********** End Class UDEPRECATED_WaterBodyGenerator *********************************************

// ********** Begin Class AWaterBody ***************************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execGetAudioIntensityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterVelocityVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterVelocityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execSetWaterMaterial); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterBodyComponent); \
	DECLARE_FUNCTION(execSetWaterWaves); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetWaterBodyType);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBody, WATER_API)


struct Z_Construct_UClass_AWaterBody_Statics;
WATER_API UClass* Z_Construct_UClass_AWaterBody_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBody(); \
	friend struct ::Z_Construct_UClass_AWaterBody_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_AWaterBody_NoRegister(); \
public: \
	DECLARE_CLASS2(AWaterBody, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_AWaterBody_NoRegister) \
	DECLARE_SERIALIZER(AWaterBody) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBody*>(this); }


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API AWaterBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, AWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBody); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWaterBody(AWaterBody&&) = delete; \
	AWaterBody(const AWaterBody&) = delete; \
	WATER_API virtual ~AWaterBody();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWaterBody;

// ********** End Class AWaterBody *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
