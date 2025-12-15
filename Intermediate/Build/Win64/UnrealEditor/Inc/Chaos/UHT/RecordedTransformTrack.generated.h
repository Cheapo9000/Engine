// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/RecordedTransformTrack.h"

#ifdef CHAOS_RecordedTransformTrack_generated_h
#error "RecordedTransformTrack.generated.h already included, missing '#pragma once' in RecordedTransformTrack.h"
#endif
#define CHAOS_RecordedTransformTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSolverCollisionData **********************************************
struct Z_Construct_UScriptStruct_FSolverCollisionData_Statics;
#define FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSolverCollisionData_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


struct FSolverCollisionData;
// ********** End ScriptStruct FSolverCollisionData ************************************************

// ********** Begin ScriptStruct FSolverBreakingData ***********************************************
struct Z_Construct_UScriptStruct_FSolverBreakingData_Statics;
#define FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSolverBreakingData_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


struct FSolverBreakingData;
// ********** End ScriptStruct FSolverBreakingData *************************************************

// ********** Begin ScriptStruct FSolverTrailingData ***********************************************
struct Z_Construct_UScriptStruct_FSolverTrailingData_Statics;
#define FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSolverTrailingData_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


struct FSolverTrailingData;
// ********** End ScriptStruct FSolverTrailingData *************************************************

// ********** Begin ScriptStruct FRecordedFrame ****************************************************
struct Z_Construct_UScriptStruct_FRecordedFrame_Statics;
#define FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_208_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRecordedFrame_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


struct FRecordedFrame;
// ********** End ScriptStruct FRecordedFrame ******************************************************

// ********** Begin ScriptStruct FRecordedTransformTrack *******************************************
struct Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics;
#define FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_274_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


struct FRecordedTransformTrack;
// ********** End ScriptStruct FRecordedTransformTrack *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h

// ********** Begin Enum EGeometryCollectionCacheType **********************************************
#define FOREACH_ENUM_EGEOMETRYCOLLECTIONCACHETYPE(op) \
	op(EGeometryCollectionCacheType::None) \
	op(EGeometryCollectionCacheType::Record) \
	op(EGeometryCollectionCacheType::Play) \
	op(EGeometryCollectionCacheType::RecordAndPlay) 

enum class EGeometryCollectionCacheType : uint8;
template<> struct TIsUEnumClass<EGeometryCollectionCacheType> { enum { Value = true }; };
template<> CHAOS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryCollectionCacheType>();
// ********** End Enum EGeometryCollectionCacheType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
