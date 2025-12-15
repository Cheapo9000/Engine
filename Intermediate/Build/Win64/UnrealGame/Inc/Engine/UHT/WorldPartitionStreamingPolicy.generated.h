// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionStreamingPolicy.h"

#ifdef ENGINE_WorldPartitionStreamingPolicy_generated_h
#error "WorldPartitionStreamingPolicy.generated.h already included, missing '#pragma once' in WorldPartitionStreamingPolicy.h"
#endif
#define ENGINE_WorldPartitionStreamingPolicy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActivatedCells ***************************************************
struct Z_Construct_UScriptStruct_FActivatedCells_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActivatedCells_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FActivatedCells;
// ********** End ScriptStruct FActivatedCells *****************************************************

// ********** Begin ScriptStruct FWorldPartitionUpdateStreamingTargetState *************************
struct Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingTargetState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingTargetState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionUpdateStreamingTargetState;
// ********** End ScriptStruct FWorldPartitionUpdateStreamingTargetState ***************************

// ********** Begin ScriptStruct FWorldPartitionUpdateStreamingCurrentState ************************
struct Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionUpdateStreamingCurrentState;
// ********** End ScriptStruct FWorldPartitionUpdateStreamingCurrentState **************************

// ********** Begin Class UWorldPartitionStreamingPolicy *******************************************
struct Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionStreamingPolicy(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionStreamingPolicy, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionStreamingPolicy) \
	DECLARE_WITHIN(UWorldPartition)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionStreamingPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionStreamingPolicy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionStreamingPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionStreamingPolicy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionStreamingPolicy(UWorldPartitionStreamingPolicy&&) = delete; \
	UWorldPartitionStreamingPolicy(const UWorldPartitionStreamingPolicy&) = delete; \
	NO_API virtual ~UWorldPartitionStreamingPolicy();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_92_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_95_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionStreamingPolicy;

// ********** End Class UWorldPartitionStreamingPolicy *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
