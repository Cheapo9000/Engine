// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageMonitorUtils.h"

#ifdef STAGEMONITORCOMMON_StageMonitorUtils_generated_h
#error "StageMonitorUtils.generated.h already included, missing '#pragma once' in StageMonitorUtils.h"
#endif
#define STAGEMONITORCOMMON_StageMonitorUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFramePerformanceProviderMessage **********************************
struct Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics;
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderPeriodicMessage Super;


struct FFramePerformanceProviderMessage;
// ********** End ScriptStruct FFramePerformanceProviderMessage ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h

// ********** Begin Enum EStageMonitorNodeStatus ***************************************************
#define FOREACH_ENUM_ESTAGEMONITORNODESTATUS(op) \
	op(EStageMonitorNodeStatus::Unknown) \
	op(EStageMonitorNodeStatus::LoadingMap) \
	op(EStageMonitorNodeStatus::Ready) \
	op(EStageMonitorNodeStatus::HotReload) \
	op(EStageMonitorNodeStatus::AssetCompiling) 

enum class EStageMonitorNodeStatus;
template<> struct TIsUEnumClass<EStageMonitorNodeStatus> { enum { Value = true }; };
template<> STAGEMONITORCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EStageMonitorNodeStatus>();
// ********** End Enum EStageMonitorNodeStatus *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
