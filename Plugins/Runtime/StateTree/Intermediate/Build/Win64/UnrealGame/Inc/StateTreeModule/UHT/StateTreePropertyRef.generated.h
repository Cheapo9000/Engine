// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreePropertyRef.h"

#ifdef STATETREEMODULE_StateTreePropertyRef_generated_h
#error "StateTreePropertyRef.generated.h already included, missing '#pragma once' in StateTreePropertyRef.h"
#endif
#define STATETREEMODULE_StateTreePropertyRef_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateTreePropertyRef *********************************************
struct Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_137_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreePropertyRef_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreePropertyRef;
// ********** End ScriptStruct FStateTreePropertyRef ***********************************************

// ********** Begin ScriptStruct FStateTreeBlueprintPropertyRef ************************************
struct Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h_384_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreePropertyRef Super;


struct FStateTreeBlueprintPropertyRef;
// ********** End ScriptStruct FStateTreeBlueprintPropertyRef **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyRef_h

// ********** Begin Enum EStateTreePropertyRefType *************************************************
#define FOREACH_ENUM_ESTATETREEPROPERTYREFTYPE(op) \
	op(EStateTreePropertyRefType::None) \
	op(EStateTreePropertyRefType::Bool) \
	op(EStateTreePropertyRefType::Byte) \
	op(EStateTreePropertyRefType::Int32) \
	op(EStateTreePropertyRefType::Int64) \
	op(EStateTreePropertyRefType::Float) \
	op(EStateTreePropertyRefType::Double) \
	op(EStateTreePropertyRefType::Name) \
	op(EStateTreePropertyRefType::String) \
	op(EStateTreePropertyRefType::Text) \
	op(EStateTreePropertyRefType::Enum) \
	op(EStateTreePropertyRefType::Struct) \
	op(EStateTreePropertyRefType::Object) \
	op(EStateTreePropertyRefType::SoftObject) \
	op(EStateTreePropertyRefType::Class) \
	op(EStateTreePropertyRefType::SoftClass) 

enum class EStateTreePropertyRefType : uint8;
template<> struct TIsUEnumClass<EStateTreePropertyRefType> { enum { Value = true }; };
template<> STATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreePropertyRefType>();
// ********** End Enum EStateTreePropertyRefType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
