// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_RetargetPoseFromMesh.h"

#ifdef IKRIG_AnimNode_RetargetPoseFromMesh_generated_h
#error "AnimNode_RetargetPoseFromMesh.generated.h already included, missing '#pragma once' in AnimNode_RetargetPoseFromMesh.h"
#endif
#define IKRIG_AnimNode_RetargetPoseFromMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_RetargetPoseFromMesh ************************************
struct Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_RetargetPoseFromMesh;
// ********** End ScriptStruct FAnimNode_RetargetPoseFromMesh **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h

// ********** Begin Enum ERetargetSourceMode *******************************************************
#define FOREACH_ENUM_ERETARGETSOURCEMODE(op) \
	op(ERetargetSourceMode::ParentSkeletalMeshComponent) \
	op(ERetargetSourceMode::CustomSkeletalMeshComponent) \
	op(ERetargetSourceMode::SourcePosePin) 

enum class ERetargetSourceMode : uint8;
template<> struct TIsUEnumClass<ERetargetSourceMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERetargetSourceMode>();
// ********** End Enum ERetargetSourceMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
