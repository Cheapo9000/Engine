// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMBlueprintPin.h"

#ifdef MODELVIEWVIEWMODELBLUEPRINT_MVVMBlueprintPin_generated_h
#error "MVVMBlueprintPin.generated.h already included, missing '#pragma once' in MVVMBlueprintPin.h"
#endif
#define MODELVIEWVIEWMODELBLUEPRINT_MVVMBlueprintPin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMVVMBlueprintPinId ***********************************************
struct Z_Construct_UScriptStruct_FMVVMBlueprintPinId_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintPin_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMBlueprintPinId_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


struct FMVVMBlueprintPinId;
// ********** End ScriptStruct FMVVMBlueprintPinId *************************************************

// ********** Begin ScriptStruct FMVVMBlueprintPin *************************************************
struct Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintPin_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMBlueprintPin_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


struct FMVVMBlueprintPin;
// ********** End ScriptStruct FMVVMBlueprintPin ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintPin_h

// ********** Begin Enum EMVVMBlueprintPinStatus ***************************************************
#define FOREACH_ENUM_EMVVMBLUEPRINTPINSTATUS(op) \
	op(EMVVMBlueprintPinStatus::Valid) \
	op(EMVVMBlueprintPinStatus::Orphaned) 

enum class EMVVMBlueprintPinStatus : uint8;
template<> struct TIsUEnumClass<EMVVMBlueprintPinStatus> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMVVMBlueprintPinStatus>();
// ********** End Enum EMVVMBlueprintPinStatus *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
