// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointWeightMap.h"

#ifdef CLOTHINGSYSTEMRUNTIMECOMMON_PointWeightMap_generated_h
#error "PointWeightMap.generated.h already included, missing '#pragma once' in PointWeightMap.h"
#endif
#define CLOTHINGSYSTEMRUNTIMECOMMON_PointWeightMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPointWeightMap ***************************************************
struct Z_Construct_UScriptStruct_FPointWeightMap_Statics;
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPointWeightMap_Statics; \
	CLOTHINGSYSTEMRUNTIMECOMMON_API static class UScriptStruct* StaticStruct();


struct FPointWeightMap;
// ********** End ScriptStruct FPointWeightMap *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h

// ********** Begin Enum EWeightMapTargetCommon ****************************************************
#define FOREACH_ENUM_EWEIGHTMAPTARGETCOMMON(op) \
	op(EWeightMapTargetCommon::None) \
	op(EWeightMapTargetCommon::MaxDistance) \
	op(EWeightMapTargetCommon::BackstopDistance) \
	op(EWeightMapTargetCommon::BackstopRadius) \
	op(EWeightMapTargetCommon::AnimDriveStiffness) \
	op(EWeightMapTargetCommon::AnimDriveDamping_DEPRECATED) \
	op(EWeightMapTargetCommon::FirstUserTarget) \
	op(EWeightMapTargetCommon::LastUserTarget) \
	op(EWeightMapTargetCommon::TetherEndsMask) 

enum class EWeightMapTargetCommon : uint8;
template<> struct TIsUEnumClass<EWeightMapTargetCommon> { enum { Value = true }; };
template<> CLOTHINGSYSTEMRUNTIMECOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeightMapTargetCommon>();
// ********** End Enum EWeightMapTargetCommon ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
