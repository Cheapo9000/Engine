// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/PCGGraphCustomization.h"

#ifdef PCG_PCGGraphCustomization_generated_h
#error "PCGGraphCustomization.generated.h already included, missing '#pragma once' in PCGGraphCustomization.h"
#endif
#define PCG_PCGGraphCustomization_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGGraphEditorCustomization **************************************
struct Z_Construct_UScriptStruct_FPCGGraphEditorCustomization_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Editor_PCGGraphCustomization_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGGraphEditorCustomization_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGGraphEditorCustomization;
// ********** End ScriptStruct FPCGGraphEditorCustomization ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Editor_PCGGraphCustomization_h

// ********** Begin Enum EPCGGraphEditorFiltering **************************************************
#define FOREACH_ENUM_EPCGGRAPHEDITORFILTERING(op) \
	op(EPCGGraphEditorFiltering::Allow) \
	op(EPCGGraphEditorFiltering::Disallow) 

enum class EPCGGraphEditorFiltering;
template<> struct TIsUEnumClass<EPCGGraphEditorFiltering> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGGraphEditorFiltering>();
// ********** End Enum EPCGGraphEditorFiltering ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
