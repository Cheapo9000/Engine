// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateBindingDataHandle.h"

#ifdef SCENESTATEBINDING_SceneStateBindingDataHandle_generated_h
#error "SceneStateBindingDataHandle.generated.h already included, missing '#pragma once' in SceneStateBindingDataHandle.h"
#endif
#define SCENESTATEBINDING_SceneStateBindingDataHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSceneStateBindingDataHandle **************************************
struct Z_Construct_UScriptStruct_FSceneStateBindingDataHandle_Statics;
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingDataHandle_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSceneStateBindingDataHandle_Statics; \
	SCENESTATEBINDING_API static class UScriptStruct* StaticStruct();


struct FSceneStateBindingDataHandle;
// ********** End ScriptStruct FSceneStateBindingDataHandle ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingDataHandle_h

// ********** Begin Enum ESceneStateDataType *******************************************************
#define FOREACH_ENUM_ESCENESTATEDATATYPE(op) \
	op(ESceneStateDataType::Root) \
	op(ESceneStateDataType::Task) \
	op(ESceneStateDataType::EventHandler) \
	op(ESceneStateDataType::TaskExtension) \
	op(ESceneStateDataType::StateMachine) \
	op(ESceneStateDataType::Transition) \
	op(ESceneStateDataType::Function) 

enum class ESceneStateDataType : uint8;
template<> struct TIsUEnumClass<ESceneStateDataType> { enum { Value = true }; };
template<> SCENESTATEBINDING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneStateDataType>();
// ********** End Enum ESceneStateDataType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
