// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanTakeData.h"

#ifdef METAHUMANCAPTURESOURCE_MetaHumanTakeData_generated_h
#error "MetaHumanTakeData.generated.h already included, missing '#pragma once' in MetaHumanTakeData.h"
#endif
#define METAHUMANCAPTURESOURCE_MetaHumanTakeData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanTakeInfo ************************************************
struct Z_Construct_UScriptStruct_FMetaHumanTakeInfo_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanTakeData_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanTakeInfo_Statics; \
	METAHUMANCAPTURESOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanTakeInfo;
// ********** End ScriptStruct FMetaHumanTakeInfo **************************************************

// ********** Begin ScriptStruct FMetaHumanTakeView ************************************************
struct Z_Construct_UScriptStruct_FMetaHumanTakeView_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanTakeData_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanTakeView_Statics; \
	METAHUMANCAPTURESOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanTakeView;
// ********** End ScriptStruct FMetaHumanTakeView **************************************************

// ********** Begin ScriptStruct FMetaHumanTake ****************************************************
struct Z_Construct_UScriptStruct_FMetaHumanTake_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanTakeData_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanTake_Statics; \
	METAHUMANCAPTURESOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanTake;
// ********** End ScriptStruct FMetaHumanTake ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanTakeData_h

// ********** Begin Enum ETakeIngestMode ***********************************************************
#define FOREACH_ENUM_ETAKEINGESTMODE(op) \
	op(ETakeIngestMode::Async) \
	op(ETakeIngestMode::Blocking) 

enum class ETakeIngestMode : uint8;
template<> struct TIsUEnumClass<ETakeIngestMode> { enum { Value = true }; };
template<> METAHUMANCAPTURESOURCE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETakeIngestMode>();
// ********** End Enum ETakeIngestMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
