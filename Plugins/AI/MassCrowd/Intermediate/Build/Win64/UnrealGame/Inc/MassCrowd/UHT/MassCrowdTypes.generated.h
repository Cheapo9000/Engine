// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdTypes.h"

#ifdef MASSCROWD_MassCrowdTypes_generated_h
#error "MassCrowdTypes.generated.h already included, missing '#pragma once' in MassCrowdTypes.h"
#endif
#define MASSCROWD_MassCrowdTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCrowdTrackingLaneData ********************************************
struct Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics;
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct();


struct FCrowdTrackingLaneData;
// ********** End ScriptStruct FCrowdTrackingLaneData **********************************************

// ********** Begin ScriptStruct FCrowdWaitSlot ****************************************************
struct Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics;
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct();


struct FCrowdWaitSlot;
// ********** End ScriptStruct FCrowdWaitSlot ******************************************************

// ********** Begin ScriptStruct FCrowdWaitAreaData ************************************************
struct Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics;
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct();


struct FCrowdWaitAreaData;
// ********** End ScriptStruct FCrowdWaitAreaData **************************************************

// ********** Begin ScriptStruct FCrowdBranchingLaneData *******************************************
struct Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics;
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct();


struct FCrowdBranchingLaneData;
// ********** End ScriptStruct FCrowdBranchingLaneData *********************************************

// ********** Begin ScriptStruct FZoneGraphCrowdLaneData *******************************************
struct Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics;
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct();


struct FZoneGraphCrowdLaneData;
// ********** End ScriptStruct FZoneGraphCrowdLaneData *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h

// ********** Begin Enum ECrowdLaneState ***********************************************************
#define FOREACH_ENUM_ECROWDLANESTATE(op) \
	op(ECrowdLaneState::Opened) \
	op(ECrowdLaneState::Closed) 

enum class ECrowdLaneState : uint8;
template<> struct TIsUEnumClass<ECrowdLaneState> { enum { Value = true }; };
template<> MASSCROWD_NON_ATTRIBUTED_API UEnum* StaticEnum<ECrowdLaneState>();
// ********** End Enum ECrowdLaneState *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
