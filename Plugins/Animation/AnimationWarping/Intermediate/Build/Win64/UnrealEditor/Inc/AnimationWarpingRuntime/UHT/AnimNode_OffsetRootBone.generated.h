// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_OffsetRootBone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONWARPINGRUNTIME_AnimNode_OffsetRootBone_generated_h
#error "AnimNode_OffsetRootBone.generated.h already included, missing '#pragma once' in AnimNode_OffsetRootBone.h"
#endif
#define ANIMATIONWARPINGRUNTIME_AnimNode_OffsetRootBone_generated_h

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_OffsetRootBone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h


#define FOREACH_ENUM_EOFFSETROOTBONEMODE(op) \
	op(EOffsetRootBoneMode::Accumulate) \
	op(EOffsetRootBoneMode::Interpolate) \
	op(EOffsetRootBoneMode::LockOffsetAndConsumeAnimation) \
	op(EOffsetRootBoneMode::LockOffsetIncreaseAndConsumeAnimation) \
	op(EOffsetRootBoneMode::LockOffsetAndIgnoreAnimation) \
	op(EOffsetRootBoneMode::Release) 

enum class EOffsetRootBoneMode : uint8;
template<> struct TIsUEnumClass<EOffsetRootBoneMode> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EOffsetRootBoneMode>();

#define FOREACH_ENUM_EOFFSETROOTBONE_COLLISIONTESTINGMODE(op) \
	op(EOffsetRootBone_CollisionTestingMode::Disabled) \
	op(EOffsetRootBone_CollisionTestingMode::ShrinkMaxTranslation) \
	op(EOffsetRootBone_CollisionTestingMode::PlanarCollision) 

enum class EOffsetRootBone_CollisionTestingMode : uint8;
template<> struct TIsUEnumClass<EOffsetRootBone_CollisionTestingMode> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EOffsetRootBone_CollisionTestingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
