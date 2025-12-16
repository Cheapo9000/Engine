// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transition/SceneStateTransitionTarget.h"

#ifdef SCENESTATE_SceneStateTransitionTarget_generated_h
#error "SceneStateTransitionTarget.generated.h already included, missing '#pragma once' in SceneStateTransitionTarget.h"
#endif
#define SCENESTATE_SceneStateTransitionTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSceneStateTransitionTarget ***************************************
struct Z_Construct_UScriptStruct_FSceneStateTransitionTarget_Statics;
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Transition_SceneStateTransitionTarget_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSceneStateTransitionTarget_Statics; \
	SCENESTATE_API static class UScriptStruct* StaticStruct();


struct FSceneStateTransitionTarget;
// ********** End ScriptStruct FSceneStateTransitionTarget *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_Transition_SceneStateTransitionTarget_h

// ********** Begin Enum ESceneStateTransitionTargetType *******************************************
#define FOREACH_ENUM_ESCENESTATETRANSITIONTARGETTYPE(op) \
	op(ESceneStateTransitionTargetType::State) \
	op(ESceneStateTransitionTargetType::Exit) \
	op(ESceneStateTransitionTargetType::Conduit) 

enum class ESceneStateTransitionTargetType : uint8;
template<> struct TIsUEnumClass<ESceneStateTransitionTargetType> { enum { Value = true }; };
template<> SCENESTATE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneStateTransitionTargetType>();
// ********** End Enum ESceneStateTransitionTargetType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
