// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationWarpingTypes.h"

#ifdef ANIMATIONWARPINGRUNTIME_AnimationWarpingTypes_generated_h
#error "AnimationWarpingTypes.generated.h already included, missing '#pragma once' in AnimationWarpingTypes.h"
#endif
#define ANIMATIONWARPINGRUNTIME_AnimationWarpingTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingTypes_h

// ********** Begin Enum EOffsetRootBoneMode *******************************************************
#define FOREACH_ENUM_EOFFSETROOTBONEMODE(op) \
	op(EOffsetRootBoneMode::Accumulate) \
	op(EOffsetRootBoneMode::Interpolate) \
	op(EOffsetRootBoneMode::LockOffsetAndConsumeAnimation) \
	op(EOffsetRootBoneMode::LockOffsetIncreaseAndConsumeAnimation) \
	op(EOffsetRootBoneMode::LockOffsetAndIgnoreAnimation) \
	op(EOffsetRootBoneMode::Release) 

enum class EOffsetRootBoneMode : uint8;
template<> struct TIsUEnumClass<EOffsetRootBoneMode> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EOffsetRootBoneMode>();
// ********** End Enum EOffsetRootBoneMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
