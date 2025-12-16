// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMBlueprintFunctionReference.h"

#ifdef MODELVIEWVIEWMODELBLUEPRINT_MVVMBlueprintFunctionReference_generated_h
#error "MVVMBlueprintFunctionReference.generated.h already included, missing '#pragma once' in MVVMBlueprintFunctionReference.h"
#endif
#define MODELVIEWVIEWMODELBLUEPRINT_MVVMBlueprintFunctionReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMVVMBlueprintFunctionReference ***********************************
struct Z_Construct_UScriptStruct_FMVVMBlueprintFunctionReference_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintFunctionReference_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMBlueprintFunctionReference_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


struct FMVVMBlueprintFunctionReference;
// ********** End ScriptStruct FMVVMBlueprintFunctionReference *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintFunctionReference_h

// ********** Begin Enum EMVVMBlueprintFunctionReferenceType ***************************************
#define FOREACH_ENUM_EMVVMBLUEPRINTFUNCTIONREFERENCETYPE(op) \
	op(EMVVMBlueprintFunctionReferenceType::None) \
	op(EMVVMBlueprintFunctionReferenceType::Function) \
	op(EMVVMBlueprintFunctionReferenceType::Node) 

enum class EMVVMBlueprintFunctionReferenceType : uint8;
template<> struct TIsUEnumClass<EMVVMBlueprintFunctionReferenceType> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMVVMBlueprintFunctionReferenceType>();
// ********** End Enum EMVVMBlueprintFunctionReferenceType *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
