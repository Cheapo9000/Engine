// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_LookAt.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_LookAt_generated_h
#error "AnimNode_LookAt.generated.h already included, missing '#pragma once' in AnimNode_LookAt.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_LookAt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_LookAt **************************************************
struct Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


struct FAnimNode_LookAt;
// ********** End ScriptStruct FAnimNode_LookAt ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h

// ********** Begin Enum EInterpolationBlend *******************************************************
#define FOREACH_ENUM_EINTERPOLATIONBLEND(op) \
	op(EInterpolationBlend::Linear) \
	op(EInterpolationBlend::Cubic) \
	op(EInterpolationBlend::Sinusoidal) \
	op(EInterpolationBlend::EaseInOutExponent2) \
	op(EInterpolationBlend::EaseInOutExponent3) \
	op(EInterpolationBlend::EaseInOutExponent4) \
	op(EInterpolationBlend::EaseInOutExponent5) 

namespace EInterpolationBlend { enum Type : int; }
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterpolationBlend::Type>();
// ********** End Enum EInterpolationBlend *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
