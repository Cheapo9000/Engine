// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/ChaosFleshSetFleshBonePositionTargetBindingNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHNODES_ChaosFleshSetFleshBonePositionTargetBindingNode_generated_h
#error "ChaosFleshSetFleshBonePositionTargetBindingNode.generated.h already included, missing '#pragma once' in ChaosFleshSetFleshBonePositionTargetBindingNode.h"
#endif
#define CHAOSFLESHNODES_ChaosFleshSetFleshBonePositionTargetBindingNode_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshSetFleshBonePositionTargetBindingNode_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FSetFleshBonePositionTargetBindingDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshSetFleshBonePositionTargetBindingNode_h


#define FOREACH_ENUM_ESKELETALBINDINGMODE(op) \
	op(ESkeletalBindingMode::Dataflow_SkeletalBinding_Kinematic) \
	op(ESkeletalBindingMode::Dataflow_SkeletalBinding_PositionTarget) \
	op(ESkeletalBindingMode::Chaos_Max) 

enum class ESkeletalBindingMode : uint8;
template<> struct TIsUEnumClass<ESkeletalBindingMode> { enum { Value = true }; };
template<> CHAOSFLESHNODES_API UEnum* StaticEnum<ESkeletalBindingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
