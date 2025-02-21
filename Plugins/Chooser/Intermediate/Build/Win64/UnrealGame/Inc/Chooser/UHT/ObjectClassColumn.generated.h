// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectClassColumn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_ObjectClassColumn_generated_h
#error "ObjectClassColumn.generated.h already included, missing '#pragma once' in ObjectClassColumn.h"
#endif
#define CHOOSER_ObjectClassColumn_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectClassColumn_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserObjectClassRowData_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserObjectClassRowData>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectClassColumn_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectClassColumn_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChooserColumnBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FObjectClassColumn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectClassColumn_h


#define FOREACH_ENUM_EOBJECTCLASSCOLUMNCELLVALUECOMPARISON(op) \
	op(EObjectClassColumnCellValueComparison::Equal) \
	op(EObjectClassColumnCellValueComparison::NotEqual) \
	op(EObjectClassColumnCellValueComparison::SubClassOf) \
	op(EObjectClassColumnCellValueComparison::NotSubClassOf) \
	op(EObjectClassColumnCellValueComparison::Any) 

enum class EObjectClassColumnCellValueComparison;
template<> struct TIsUEnumClass<EObjectClassColumnCellValueComparison> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EObjectClassColumnCellValueComparison>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
