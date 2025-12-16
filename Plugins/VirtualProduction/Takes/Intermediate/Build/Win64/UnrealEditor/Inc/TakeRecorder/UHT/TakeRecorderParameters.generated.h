// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorderParameters.h"

#ifdef TAKERECORDER_TakeRecorderParameters_generated_h
#error "TakeRecorderParameters.generated.h already included, missing '#pragma once' in TakeRecorderParameters.h"
#endif
#define TAKERECORDER_TakeRecorderParameters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTakeRecorderUserParameters ***************************************
struct Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics; \
	TAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FTakeRecorderUserParameters;
// ********** End ScriptStruct FTakeRecorderUserParameters *****************************************

// ********** Begin ScriptStruct FTakeRecorderProjectParameters ************************************
struct Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics; \
	TAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FTakeRecorderProjectParameters;
// ********** End ScriptStruct FTakeRecorderProjectParameters **************************************

// ********** Begin ScriptStruct FTakeRecorderParameters *******************************************
struct Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_168_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics; \
	TAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FTakeRecorderParameters;
// ********** End ScriptStruct FTakeRecorderParameters *********************************************

// ********** Begin ScriptStruct FTakeRecorderSequenceParameters ***********************************
struct Z_Construct_UScriptStruct_FTakeRecorderSequenceParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_202_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTakeRecorderSequenceParameters_Statics; \
	TAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FTakeRecorderSequenceParameters;
// ********** End ScriptStruct FTakeRecorderSequenceParameters *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h

// ********** Begin Enum ETakeRecorderMode *********************************************************
#define FOREACH_ENUM_ETAKERECORDERMODE(op) \
	op(ETakeRecorderMode::RecordNewSequence) \
	op(ETakeRecorderMode::RecordIntoSequence) 

enum class ETakeRecorderMode : uint8;
template<> struct TIsUEnumClass<ETakeRecorderMode> { enum { Value = true }; };
template<> TAKERECORDER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETakeRecorderMode>();
// ********** End Enum ETakeRecorderMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
