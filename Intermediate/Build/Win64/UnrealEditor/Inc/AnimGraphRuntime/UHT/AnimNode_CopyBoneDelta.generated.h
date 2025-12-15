// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_CopyBoneDelta.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_CopyBoneDelta_generated_h
#error "AnimNode_CopyBoneDelta.generated.h already included, missing '#pragma once' in AnimNode_CopyBoneDelta.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_CopyBoneDelta_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_CopyBoneDelta *******************************************
struct Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


struct FAnimNode_CopyBoneDelta;
// ********** End ScriptStruct FAnimNode_CopyBoneDelta *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h

// ********** Begin Enum CopyBoneDeltaMode *********************************************************
#define FOREACH_ENUM_COPYBONEDELTAMODE(op) \
	op(CopyBoneDeltaMode::Accumulate) \
	op(CopyBoneDeltaMode::Copy) 

enum class CopyBoneDeltaMode : uint8;
template<> struct TIsUEnumClass<CopyBoneDeltaMode> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<CopyBoneDeltaMode>();
// ********** End Enum CopyBoneDeltaMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
