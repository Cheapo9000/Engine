// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/StaticLightingData/MapBuildDataActor.h"

#ifdef ENGINE_MapBuildDataActor_generated_h
#error "MapBuildDataActor.generated.h already included, missing '#pragma once' in MapBuildDataActor.h"
#endif
#define ENGINE_MapBuildDataActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMapBuildDataActor *******************************************************
struct Z_Construct_UClass_AMapBuildDataActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_AMapBuildDataActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMapBuildDataActor(); \
	friend struct ::Z_Construct_UClass_AMapBuildDataActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AMapBuildDataActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMapBuildDataActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AMapBuildDataActor_NoRegister) \
	DECLARE_SERIALIZER(AMapBuildDataActor)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AMapBuildDataActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapBuildDataActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AMapBuildDataActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapBuildDataActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMapBuildDataActor(AMapBuildDataActor&&) = delete; \
	AMapBuildDataActor(const AMapBuildDataActor&) = delete; \
	ENGINE_API virtual ~AMapBuildDataActor();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMapBuildDataActor;

// ********** End Class AMapBuildDataActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
