// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/ChaosFleshSetFleshBonePositionTargetBindingNode.h"

#ifdef CHAOSFLESHNODES_ChaosFleshSetFleshBonePositionTargetBindingNode_generated_h
#error "ChaosFleshSetFleshBonePositionTargetBindingNode.generated.h already included, missing '#pragma once' in ChaosFleshSetFleshBonePositionTargetBindingNode.h"
#endif
#define CHAOSFLESHNODES_ChaosFleshSetFleshBonePositionTargetBindingNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSetFleshBonePositionTargetBindingDataflowNode ********************
struct Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshSetFleshBonePositionTargetBindingNode_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FSetFleshBonePositionTargetBindingDataflowNode;
// ********** End ScriptStruct FSetFleshBonePositionTargetBindingDataflowNode **********************

// ********** Begin ScriptStruct FSetFleshBonePositionTargetBindingDataflowNode_v2 *****************
struct Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_v2_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshSetFleshBonePositionTargetBindingNode_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_v2_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FSetFleshBonePositionTargetBindingDataflowNode_v2;
// ********** End ScriptStruct FSetFleshBonePositionTargetBindingDataflowNode_v2 *******************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshSetFleshBonePositionTargetBindingNode_h

// ********** Begin Enum ESkeletalBindingMode ******************************************************
#define FOREACH_ENUM_ESKELETALBINDINGMODE(op) \
	op(ESkeletalBindingMode::Dataflow_SkeletalBinding_Kinematic) \
	op(ESkeletalBindingMode::Dataflow_SkeletalBinding_PositionTarget) \
	op(ESkeletalBindingMode::Chaos_Max) 

enum class ESkeletalBindingMode : uint8;
template<> struct TIsUEnumClass<ESkeletalBindingMode> { enum { Value = true }; };
template<> CHAOSFLESHNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkeletalBindingMode>();
// ********** End Enum ESkeletalBindingMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
