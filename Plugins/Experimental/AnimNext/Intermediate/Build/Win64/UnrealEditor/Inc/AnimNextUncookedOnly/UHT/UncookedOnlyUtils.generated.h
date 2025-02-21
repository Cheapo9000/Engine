// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UncookedOnlyUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTUNCOOKEDONLY_UncookedOnlyUtils_generated_h
#error "UncookedOnlyUtils.generated.h already included, missing '#pragma once' in UncookedOnlyUtils.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_UncookedOnlyUtils_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_UncookedOnlyUtils_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextAssetRegistryExportedVariable_Statics; \
	ANIMNEXTUNCOOKEDONLY_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTUNCOOKEDONLY_API UScriptStruct* StaticStruct<struct FAnimNextAssetRegistryExportedVariable>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_UncookedOnlyUtils_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextAssetRegistryExports_Statics; \
	ANIMNEXTUNCOOKEDONLY_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTUNCOOKEDONLY_API UScriptStruct* StaticStruct<struct FAnimNextAssetRegistryExports>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_UncookedOnlyUtils_h


#define FOREACH_ENUM_EANIMNEXTEXPORTEDVARIABLEFLAGS(op) \
	op(EAnimNextExportedVariableFlags::NoFlags) \
	op(EAnimNextExportedVariableFlags::Public) \
	op(EAnimNextExportedVariableFlags::Read) \
	op(EAnimNextExportedVariableFlags::Write) \
	op(EAnimNextExportedVariableFlags::Declared) \
	op(EAnimNextExportedVariableFlags::Max) 

enum class EAnimNextExportedVariableFlags : uint32;
template<> struct TIsUEnumClass<EAnimNextExportedVariableFlags> { enum { Value = true }; };
template<> ANIMNEXTUNCOOKEDONLY_API UEnum* StaticEnum<EAnimNextExportedVariableFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
