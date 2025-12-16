// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectColumn.h"

#ifdef CHOOSER_ObjectColumn_generated_h
#error "ObjectColumn.generated.h already included, missing '#pragma once' in ObjectColumn.h"
#endif
#define CHOOSER_ObjectColumn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FObjectContextProperty ********************************************
struct Z_Construct_UScriptStruct_FObjectContextProperty_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectColumn_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectContextProperty_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterObjectBase Super;


struct FObjectContextProperty;
// ********** End ScriptStruct FObjectContextProperty **********************************************

// ********** Begin ScriptStruct FChooserObjectRowData *********************************************
struct Z_Construct_UScriptStruct_FChooserObjectRowData_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectColumn_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserObjectRowData_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


struct FChooserObjectRowData;
// ********** End ScriptStruct FChooserObjectRowData ***********************************************

// ********** Begin ScriptStruct FObjectColumn *****************************************************
struct Z_Construct_UScriptStruct_FObjectColumn_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectColumn_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectColumn_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserColumnBase Super;


struct FObjectColumn;
// ********** End ScriptStruct FObjectColumn *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectColumn_h

// ********** Begin Enum EObjectColumnCellValueComparison ******************************************
#define FOREACH_ENUM_EOBJECTCOLUMNCELLVALUECOMPARISON(op) \
	op(EObjectColumnCellValueComparison::MatchEqual) \
	op(EObjectColumnCellValueComparison::MatchNotEqual) \
	op(EObjectColumnCellValueComparison::MatchAny) \
	op(EObjectColumnCellValueComparison::Modulus) 

enum class EObjectColumnCellValueComparison;
template<> struct TIsUEnumClass<EObjectColumnCellValueComparison> { enum { Value = true }; };
template<> CHOOSER_NON_ATTRIBUTED_API UEnum* StaticEnum<EObjectColumnCellValueComparison>();
// ********** End Enum EObjectColumnCellValueComparison ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
