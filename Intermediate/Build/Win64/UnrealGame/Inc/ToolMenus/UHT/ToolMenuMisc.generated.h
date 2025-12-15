// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuMisc.h"

#ifdef TOOLMENUS_ToolMenuMisc_generated_h
#error "ToolMenuMisc.generated.h already included, missing '#pragma once' in ToolMenuMisc.h"
#endif
#define TOOLMENUS_ToolMenuMisc_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FToolMenuStringCommand ********************************************
struct Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FToolMenuStringCommand;
// ********** End ScriptStruct FToolMenuStringCommand **********************************************

// ********** Begin ScriptStruct FToolMenuInsert ***************************************************
struct Z_Construct_UScriptStruct_FToolMenuInsert_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolMenuInsert_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FToolMenuInsert;
// ********** End ScriptStruct FToolMenuInsert *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h

// ********** Begin Enum EToolMenuStringCommandType ************************************************
#define FOREACH_ENUM_ETOOLMENUSTRINGCOMMANDTYPE(op) \
	op(EToolMenuStringCommandType::Command) \
	op(EToolMenuStringCommandType::Python) \
	op(EToolMenuStringCommandType::Custom) 

enum class EToolMenuStringCommandType : uint8;
template<> struct TIsUEnumClass<EToolMenuStringCommandType> { enum { Value = true }; };
template<> TOOLMENUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolMenuStringCommandType>();
// ********** End Enum EToolMenuStringCommandType **************************************************

// ********** Begin Enum EToolMenuInsertType *******************************************************
#define FOREACH_ENUM_ETOOLMENUINSERTTYPE(op) \
	op(EToolMenuInsertType::Default) \
	op(EToolMenuInsertType::Before) \
	op(EToolMenuInsertType::After) \
	op(EToolMenuInsertType::First) \
	op(EToolMenuInsertType::Last) 

enum class EToolMenuInsertType : uint8;
template<> struct TIsUEnumClass<EToolMenuInsertType> { enum { Value = true }; };
template<> TOOLMENUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolMenuInsertType>();
// ********** End Enum EToolMenuInsertType *********************************************************

// ********** Begin Enum EToolMenuInsertFallback ***************************************************
#define FOREACH_ENUM_ETOOLMENUINSERTFALLBACK(op) \
	op(EToolMenuInsertFallback::None) \
	op(EToolMenuInsertFallback::Insert) \
	op(EToolMenuInsertFallback::Log) 

enum class EToolMenuInsertFallback : uint8;
template<> struct TIsUEnumClass<EToolMenuInsertFallback> { enum { Value = true }; };
template<> TOOLMENUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolMenuInsertFallback>();
// ********** End Enum EToolMenuInsertFallback *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
