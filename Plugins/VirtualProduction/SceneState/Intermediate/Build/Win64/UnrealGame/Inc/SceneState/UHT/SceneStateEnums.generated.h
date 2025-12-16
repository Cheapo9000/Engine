// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateEnums.h"

#ifdef SCENESTATE_SceneStateEnums_generated_h
#error "SceneStateEnums.generated.h already included, missing '#pragma once' in SceneStateEnums.h"
#endif
#define SCENESTATE_SceneStateEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneState_Public_SceneStateEnums_h

// ********** Begin Enum ESceneStateTaskFlags ******************************************************
#define FOREACH_ENUM_ESCENESTATETASKFLAGS(op) \
	op(ESceneStateTaskFlags::None) \
	op(ESceneStateTaskFlags::Ticks) \
	op(ESceneStateTaskFlags::HasBindingExtension) 

enum class ESceneStateTaskFlags : uint8;
template<> struct TIsUEnumClass<ESceneStateTaskFlags> { enum { Value = true }; };
template<> SCENESTATE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneStateTaskFlags>();
// ********** End Enum ESceneStateTaskFlags ********************************************************

// ********** Begin Enum ESceneStateMachineRunMode *************************************************
#define FOREACH_ENUM_ESCENESTATEMACHINERUNMODE(op) \
	op(ESceneStateMachineRunMode::Auto) \
	op(ESceneStateMachineRunMode::Manual) 

enum class ESceneStateMachineRunMode : uint8;
template<> struct TIsUEnumClass<ESceneStateMachineRunMode> { enum { Value = true }; };
template<> SCENESTATE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneStateMachineRunMode>();
// ********** End Enum ESceneStateMachineRunMode ***************************************************

// ********** Begin Enum ESceneStateTaskStopReason *************************************************
#define FOREACH_ENUM_ESCENESTATETASKSTOPREASON(op) \
	op(ESceneStateTaskStopReason::State) \
	op(ESceneStateTaskStopReason::Finished) 

enum class ESceneStateTaskStopReason : uint8;
template<> struct TIsUEnumClass<ESceneStateTaskStopReason> { enum { Value = true }; };
template<> SCENESTATE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneStateTaskStopReason>();
// ********** End Enum ESceneStateTaskStopReason ***************************************************

// ********** Begin Enum ESceneStateTransitionEvaluationFlags **************************************
#define FOREACH_ENUM_ESCENESTATETRANSITIONEVALUATIONFLAGS(op) \
	op(ESceneStateTransitionEvaluationFlags::None) \
	op(ESceneStateTransitionEvaluationFlags::WaitForTasksToFinish) \
	op(ESceneStateTransitionEvaluationFlags::EvaluationEventAlwaysTrue) 

enum class ESceneStateTransitionEvaluationFlags : uint8;
template<> struct TIsUEnumClass<ESceneStateTransitionEvaluationFlags> { enum { Value = true }; };
template<> SCENESTATE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneStateTransitionEvaluationFlags>();
// ********** End Enum ESceneStateTransitionEvaluationFlags ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
