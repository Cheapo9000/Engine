// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TedsAlertColumns.h"

#ifdef TEDSALERTS_TedsAlertColumns_generated_h
#error "TedsAlertColumns.generated.h already included, missing '#pragma once' in TedsAlertColumns.h"
#endif
#define TEDSALERTS_TedsAlertColumns_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTedsAlertColumn **************************************************
struct Z_Construct_UScriptStruct_FTedsAlertColumn_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAlerts_Public_TedsAlertColumns_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTedsAlertColumn_Statics; \
	TEDSALERTS_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageColumn Super;


struct FTedsAlertColumn;
// ********** End ScriptStruct FTedsAlertColumn ****************************************************

// ********** Begin ScriptStruct FTedsChildAlertColumn *********************************************
struct Z_Construct_UScriptStruct_FTedsChildAlertColumn_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAlerts_Public_TedsAlertColumns_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTedsChildAlertColumn_Statics; \
	TEDSALERTS_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageColumn Super;


struct FTedsChildAlertColumn;
// ********** End ScriptStruct FTedsChildAlertColumn ***********************************************

// ********** Begin ScriptStruct FTedsAlertActionColumn ********************************************
struct Z_Construct_UScriptStruct_FTedsAlertActionColumn_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAlerts_Public_TedsAlertColumns_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTedsAlertActionColumn_Statics; \
	TEDSALERTS_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageColumn Super;


struct FTedsAlertActionColumn;
// ********** End ScriptStruct FTedsAlertActionColumn **********************************************

// ********** Begin ScriptStruct FTedsAlertChainTag ************************************************
struct Z_Construct_UScriptStruct_FTedsAlertChainTag_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAlerts_Public_TedsAlertColumns_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTedsAlertChainTag_Statics; \
	TEDSALERTS_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super;


struct FTedsAlertChainTag;
// ********** End ScriptStruct FTedsAlertChainTag **************************************************

// ********** Begin ScriptStruct FTedsUnsortedAlertChainTag ****************************************
struct Z_Construct_UScriptStruct_FTedsUnsortedAlertChainTag_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAlerts_Public_TedsAlertColumns_h_100_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTedsUnsortedAlertChainTag_Statics; \
	TEDSALERTS_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super;


struct FTedsUnsortedAlertChainTag;
// ********** End ScriptStruct FTedsUnsortedAlertChainTag ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAlerts_Public_TedsAlertColumns_h

// ********** Begin Enum FTedsAlertColumnType ******************************************************
#define FOREACH_ENUM_FTEDSALERTCOLUMNTYPE(op) \
	op(FTedsAlertColumnType::Warning) \
	op(FTedsAlertColumnType::Error) 

enum class FTedsAlertColumnType : uint8;
template<> struct TIsUEnumClass<FTedsAlertColumnType> { enum { Value = true }; };
template<> TEDSALERTS_NON_ATTRIBUTED_API UEnum* StaticEnum<FTedsAlertColumnType>();
// ********** End Enum FTedsAlertColumnType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
