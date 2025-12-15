// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/BlueprintDependencies.h"

#ifdef KISMET_BlueprintDependencies_generated_h
#error "BlueprintDependencies.generated.h already included, missing '#pragma once' in BlueprintDependencies.h"
#endif
#define KISMET_BlueprintDependencies_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintDependency **********************************************
struct Z_Construct_UScriptStruct_FBlueprintDependency_Statics;
#define FID_Engine_Source_Editor_Kismet_Internal_Blueprints_BlueprintDependencies_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintDependency_Statics; \
	KISMET_API static class UScriptStruct* StaticStruct();


struct FBlueprintDependency;
// ********** End ScriptStruct FBlueprintDependency ************************************************

// ********** Begin ScriptStruct FBlueprintDependencies ********************************************
struct Z_Construct_UScriptStruct_FBlueprintDependencies_Statics;
#define FID_Engine_Source_Editor_Kismet_Internal_Blueprints_BlueprintDependencies_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintDependencies_Statics; \
	KISMET_API static class UScriptStruct* StaticStruct();


struct FBlueprintDependencies;
// ********** End ScriptStruct FBlueprintDependencies **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Internal_Blueprints_BlueprintDependencies_h

// ********** Begin Enum EBPDependencyType *********************************************************
#define FOREACH_ENUM_EBPDEPENDENCYTYPE(op) \
	op(EBPDependencyType::Asset) \
	op(EBPDependencyType::Struct) \
	op(EBPDependencyType::Class) 

enum class EBPDependencyType;
template<> struct TIsUEnumClass<EBPDependencyType> { enum { Value = true }; };
template<> KISMET_NON_ATTRIBUTED_API UEnum* StaticEnum<EBPDependencyType>();
// ********** End Enum EBPDependencyType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
