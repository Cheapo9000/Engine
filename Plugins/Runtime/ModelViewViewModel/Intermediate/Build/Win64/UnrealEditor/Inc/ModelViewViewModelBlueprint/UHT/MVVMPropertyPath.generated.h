// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMPropertyPath.h"

#ifdef MODELVIEWVIEWMODELBLUEPRINT_MVVMPropertyPath_generated_h
#error "MVVMPropertyPath.generated.h already included, missing '#pragma once' in MVVMPropertyPath.h"
#endif
#define MODELVIEWVIEWMODELBLUEPRINT_MVVMPropertyPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMVVMBlueprintFieldPath *******************************************
struct Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMPropertyPath_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


struct FMVVMBlueprintFieldPath;
// ********** End ScriptStruct FMVVMBlueprintFieldPath *********************************************

// ********** Begin ScriptStruct FMVVMBlueprintPropertyPath ****************************************
struct Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMPropertyPath_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


struct FMVVMBlueprintPropertyPath;
// ********** End ScriptStruct FMVVMBlueprintPropertyPath ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMPropertyPath_h

// ********** Begin Enum EMVVMBlueprintFieldPathSource *********************************************
#define FOREACH_ENUM_EMVVMBLUEPRINTFIELDPATHSOURCE(op) \
	op(EMVVMBlueprintFieldPathSource::None) \
	op(EMVVMBlueprintFieldPathSource::Widget) \
	op(EMVVMBlueprintFieldPathSource::ViewModel) \
	op(EMVVMBlueprintFieldPathSource::SelfContext) 

enum class EMVVMBlueprintFieldPathSource : uint8;
template<> struct TIsUEnumClass<EMVVMBlueprintFieldPathSource> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMVVMBlueprintFieldPathSource>();
// ********** End Enum EMVVMBlueprintFieldPathSource ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
