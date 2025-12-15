// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DataTable.h"

#ifdef ENGINE_DataTable_generated_h
#error "DataTable.generated.h already included, missing '#pragma once' in DataTable.h"
#endif
#define ENGINE_DataTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTableRowBase *****************************************************
struct Z_Construct_UScriptStruct_FTableRowBase_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTableRowBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTableRowBase;
// ********** End ScriptStruct FTableRowBase *******************************************************

// ********** Begin Class UDataTable ***************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_82_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDataTable, ENGINE_API)


struct Z_Construct_UClass_UDataTable_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUDataTable(); \
	friend struct ::Z_Construct_UClass_UDataTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataTable_NoRegister) \
	DECLARE_SERIALIZER(UDataTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_82_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataTable(UDataTable&&) = delete; \
	UDataTable(const UDataTable&) = delete; \
	ENGINE_API virtual ~UDataTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_78_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_82_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataTable;

// ********** End Class UDataTable *****************************************************************

// ********** Begin ScriptStruct FDataTableRowHandle ***********************************************
struct Z_Construct_UScriptStruct_FDataTableRowHandle_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_397_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataTableRowHandle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDataTableRowHandle;
// ********** End ScriptStruct FDataTableRowHandle *************************************************

// ********** Begin ScriptStruct FDataTableCategoryHandle ******************************************
struct Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_470_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDataTableCategoryHandle;
// ********** End ScriptStruct FDataTableCategoryHandle ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
