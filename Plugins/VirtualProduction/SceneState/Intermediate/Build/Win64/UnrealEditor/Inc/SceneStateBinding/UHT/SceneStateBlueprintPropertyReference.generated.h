// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateBlueprintPropertyReference.h"

#ifdef SCENESTATEBINDING_SceneStateBlueprintPropertyReference_generated_h
#error "SceneStateBlueprintPropertyReference.generated.h already included, missing '#pragma once' in SceneStateBlueprintPropertyReference.h"
#endif
#define SCENESTATEBINDING_SceneStateBlueprintPropertyReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSceneStateBlueprintPropertyReference *****************************
struct Z_Construct_UScriptStruct_FSceneStateBlueprintPropertyReference_Statics;
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBlueprintPropertyReference_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSceneStateBlueprintPropertyReference_Statics; \
	SCENESTATEBINDING_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneStatePropertyReference Super;


struct FSceneStateBlueprintPropertyReference;
// ********** End ScriptStruct FSceneStateBlueprintPropertyReference *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBlueprintPropertyReference_h

// ********** Begin Enum ESceneStatePropertyReferenceType ******************************************
#define FOREACH_ENUM_ESCENESTATEPROPERTYREFERENCETYPE(op) \
	op(ESceneStatePropertyReferenceType::None) \
	op(ESceneStatePropertyReferenceType::Bool) \
	op(ESceneStatePropertyReferenceType::Byte) \
	op(ESceneStatePropertyReferenceType::Int32) \
	op(ESceneStatePropertyReferenceType::Int64) \
	op(ESceneStatePropertyReferenceType::Float) \
	op(ESceneStatePropertyReferenceType::Double) \
	op(ESceneStatePropertyReferenceType::Name) \
	op(ESceneStatePropertyReferenceType::String) \
	op(ESceneStatePropertyReferenceType::Text) \
	op(ESceneStatePropertyReferenceType::Enum) \
	op(ESceneStatePropertyReferenceType::Struct) \
	op(ESceneStatePropertyReferenceType::Object) \
	op(ESceneStatePropertyReferenceType::SoftObject) \
	op(ESceneStatePropertyReferenceType::Class) \
	op(ESceneStatePropertyReferenceType::SoftClass) 

enum class ESceneStatePropertyReferenceType : uint8;
template<> struct TIsUEnumClass<ESceneStatePropertyReferenceType> { enum { Value = true }; };
template<> SCENESTATEBINDING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneStatePropertyReferenceType>();
// ********** End Enum ESceneStatePropertyReferenceType ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
