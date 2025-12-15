// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODSourceActors.h"

#ifdef ENGINE_HLODSourceActors_generated_h
#error "HLODSourceActors.generated.h already included, missing '#pragma once' in HLODSourceActors.h"
#endif
#define ENGINE_HLODSourceActors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionHLODSourceActors ******************************************
struct Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionHLODSourceActors(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionHLODSourceActors, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionHLODSourceActors)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionHLODSourceActors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionHLODSourceActors) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionHLODSourceActors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionHLODSourceActors); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionHLODSourceActors(UWorldPartitionHLODSourceActors&&) = delete; \
	UWorldPartitionHLODSourceActors(const UWorldPartitionHLODSourceActors&) = delete; \
	ENGINE_API virtual ~UWorldPartitionHLODSourceActors();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionHLODSourceActors;

// ********** End Class UWorldPartitionHLODSourceActors ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
