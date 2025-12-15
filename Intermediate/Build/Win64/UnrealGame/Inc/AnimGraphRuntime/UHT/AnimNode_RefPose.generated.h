// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_RefPose.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_RefPose_generated_h
#error "AnimNode_RefPose.generated.h already included, missing '#pragma once' in AnimNode_RefPose.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_RefPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_RefPose *************************************************
struct Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_RefPose;
// ********** End ScriptStruct FAnimNode_RefPose ***************************************************

// ********** Begin ScriptStruct FAnimNode_MeshSpaceRefPose ****************************************
struct Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_MeshSpaceRefPose;
// ********** End ScriptStruct FAnimNode_MeshSpaceRefPose ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h

// ********** Begin Enum ERefPoseType **************************************************************
#define FOREACH_ENUM_EREFPOSETYPE(op) \
	op(EIT_LocalSpace) \
	op(EIT_Additive) 

enum ERefPoseType : int;
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERefPoseType>();
// ********** End Enum ERefPoseType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
