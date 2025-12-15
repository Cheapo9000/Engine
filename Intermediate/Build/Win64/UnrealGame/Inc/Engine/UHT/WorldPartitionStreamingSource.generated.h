// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionStreamingSource.h"

#ifdef ENGINE_WorldPartitionStreamingSource_generated_h
#error "WorldPartitionStreamingSource.generated.h already included, missing '#pragma once' in WorldPartitionStreamingSource.h"
#endif
#define ENGINE_WorldPartitionStreamingSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStreamingSourceShape *********************************************
struct Z_Construct_UScriptStruct_FStreamingSourceShape_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStreamingSourceShape_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStreamingSourceShape;
// ********** End ScriptStruct FStreamingSourceShape ***********************************************

// ********** Begin ScriptStruct FWorldPartitionStreamingQuerySource *******************************
struct Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionStreamingQuerySource;
// ********** End ScriptStruct FWorldPartitionStreamingQuerySource *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h

// ********** Begin Enum EStreamingSourceTargetBehavior ********************************************
#define FOREACH_ENUM_ESTREAMINGSOURCETARGETBEHAVIOR(op) \
	op(EStreamingSourceTargetBehavior::Include) \
	op(EStreamingSourceTargetBehavior::Exclude) 

enum class EStreamingSourceTargetBehavior : uint8;
template<> struct TIsUEnumClass<EStreamingSourceTargetBehavior> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStreamingSourceTargetBehavior>();
// ********** End Enum EStreamingSourceTargetBehavior **********************************************

// ********** Begin Enum EStreamingSourceTargetState ***********************************************
#define FOREACH_ENUM_ESTREAMINGSOURCETARGETSTATE(op) \
	op(EStreamingSourceTargetState::Loaded) \
	op(EStreamingSourceTargetState::Activated) 

enum class EStreamingSourceTargetState : uint8;
template<> struct TIsUEnumClass<EStreamingSourceTargetState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStreamingSourceTargetState>();
// ********** End Enum EStreamingSourceTargetState *************************************************

// ********** Begin Enum EStreamingSourcePriority **************************************************
#define FOREACH_ENUM_ESTREAMINGSOURCEPRIORITY(op) \
	op(EStreamingSourcePriority::Highest) \
	op(EStreamingSourcePriority::High) \
	op(EStreamingSourcePriority::Normal) \
	op(EStreamingSourcePriority::Low) \
	op(EStreamingSourcePriority::Lowest) \
	op(EStreamingSourcePriority::Default) 

enum class EStreamingSourcePriority : uint8;
template<> struct TIsUEnumClass<EStreamingSourcePriority> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStreamingSourcePriority>();
// ********** End Enum EStreamingSourcePriority ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
