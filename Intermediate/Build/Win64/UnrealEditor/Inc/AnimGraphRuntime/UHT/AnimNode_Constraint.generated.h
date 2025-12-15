// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_Constraint.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_Constraint_generated_h
#error "AnimNode_Constraint.generated.h already included, missing '#pragma once' in AnimNode_Constraint.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_Constraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConstraint *******************************************************
struct Z_Construct_UScriptStruct_FConstraint_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraint_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FConstraint;
// ********** End ScriptStruct FConstraint *********************************************************

// ********** Begin ScriptStruct FAnimNode_Constraint **********************************************
struct Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


struct FAnimNode_Constraint;
// ********** End ScriptStruct FAnimNode_Constraint ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h

// ********** Begin Enum EConstraintOffsetOption ***************************************************
#define FOREACH_ENUM_ECONSTRAINTOFFSETOPTION(op) \
	op(EConstraintOffsetOption::None) \
	op(EConstraintOffsetOption::Offset_RefPose) 

enum class EConstraintOffsetOption : uint8;
template<> struct TIsUEnumClass<EConstraintOffsetOption> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EConstraintOffsetOption>();
// ********** End Enum EConstraintOffsetOption *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
