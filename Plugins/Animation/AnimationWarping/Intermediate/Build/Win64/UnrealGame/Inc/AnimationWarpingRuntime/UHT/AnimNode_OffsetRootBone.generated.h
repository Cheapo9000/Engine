// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_OffsetRootBone.h"

#ifdef ANIMATIONWARPINGRUNTIME_AnimNode_OffsetRootBone_generated_h
#error "AnimNode_OffsetRootBone.generated.h already included, missing '#pragma once' in AnimNode_OffsetRootBone.h"
#endif
#define ANIMATIONWARPINGRUNTIME_AnimNode_OffsetRootBone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_OffsetRootBone ******************************************
struct Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics;
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_OffsetRootBone;
// ********** End ScriptStruct FAnimNode_OffsetRootBone ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h

// ********** Begin Enum EOffsetRootBone_CollisionTestingMode **************************************
#define FOREACH_ENUM_EOFFSETROOTBONE_COLLISIONTESTINGMODE(op) \
	op(EOffsetRootBone_CollisionTestingMode::Disabled) \
	op(EOffsetRootBone_CollisionTestingMode::ShrinkMaxTranslation) \
	op(EOffsetRootBone_CollisionTestingMode::PlanarCollision) 

enum class EOffsetRootBone_CollisionTestingMode : uint8;
template<> struct TIsUEnumClass<EOffsetRootBone_CollisionTestingMode> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EOffsetRootBone_CollisionTestingMode>();
// ********** End Enum EOffsetRootBone_CollisionTestingMode ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
