// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_PoseSnapshot.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_PoseSnapshot_generated_h
#error "AnimNode_PoseSnapshot.generated.h already included, missing '#pragma once' in AnimNode_PoseSnapshot.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_PoseSnapshot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_PoseSnapshot ********************************************
struct Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_PoseSnapshot;
// ********** End ScriptStruct FAnimNode_PoseSnapshot **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h

// ********** Begin Enum ESnapshotSourceMode *******************************************************
#define FOREACH_ENUM_ESNAPSHOTSOURCEMODE(op) \
	op(ESnapshotSourceMode::NamedSnapshot) \
	op(ESnapshotSourceMode::SnapshotPin) 

enum class ESnapshotSourceMode : uint8;
template<> struct TIsUEnumClass<ESnapshotSourceMode> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ESnapshotSourceMode>();
// ********** End Enum ESnapshotSourceMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
