// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMBlueprintViewModelContext.h"

#ifdef MODELVIEWVIEWMODELBLUEPRINT_MVVMBlueprintViewModelContext_generated_h
#error "MVVMBlueprintViewModelContext.generated.h already included, missing '#pragma once' in MVVMBlueprintViewModelContext.h"
#endif
#define MODELVIEWVIEWMODELBLUEPRINT_MVVMBlueprintViewModelContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMVVMBlueprintViewModelContext ************************************
struct Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


struct FMVVMBlueprintViewModelContext;
// ********** End ScriptStruct FMVVMBlueprintViewModelContext **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h

// ********** Begin Enum EMVVMBlueprintViewModelContextCreationType ********************************
#define FOREACH_ENUM_EMVVMBLUEPRINTVIEWMODELCONTEXTCREATIONTYPE(op) \
	op(EMVVMBlueprintViewModelContextCreationType::Manual) \
	op(EMVVMBlueprintViewModelContextCreationType::CreateInstance) \
	op(EMVVMBlueprintViewModelContextCreationType::GlobalViewModelCollection) \
	op(EMVVMBlueprintViewModelContextCreationType::PropertyPath) \
	op(EMVVMBlueprintViewModelContextCreationType::Resolver) 

enum class EMVVMBlueprintViewModelContextCreationType : uint8;
template<> struct TIsUEnumClass<EMVVMBlueprintViewModelContextCreationType> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMVVMBlueprintViewModelContextCreationType>();
// ********** End Enum EMVVMBlueprintViewModelContextCreationType **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
