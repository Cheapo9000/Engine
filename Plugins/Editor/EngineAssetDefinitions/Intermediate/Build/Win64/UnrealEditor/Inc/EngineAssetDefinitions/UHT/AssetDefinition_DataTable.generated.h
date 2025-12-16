// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Table/AssetDefinition_DataTable.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_DataTable_generated_h
#error "AssetDefinition_DataTable.generated.h already included, missing '#pragma once' in AssetDefinition_DataTable.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_DataTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_DataTable ***********************************************
struct Z_Construct_UClass_UAssetDefinition_DataTable_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_DataTable_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Table_AssetDefinition_DataTable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_DataTable(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_DataTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_DataTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_DataTable, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_DataTable_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_DataTable)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Table_AssetDefinition_DataTable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINEASSETDEFINITIONS_API UAssetDefinition_DataTable(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_DataTable(UAssetDefinition_DataTable&&) = delete; \
	UAssetDefinition_DataTable(const UAssetDefinition_DataTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINEASSETDEFINITIONS_API, UAssetDefinition_DataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_DataTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_DataTable) \
	ENGINEASSETDEFINITIONS_API virtual ~UAssetDefinition_DataTable();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Table_AssetDefinition_DataTable_h_12_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Table_AssetDefinition_DataTable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Table_AssetDefinition_DataTable_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Table_AssetDefinition_DataTable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_DataTable;

// ********** End Class UAssetDefinition_DataTable *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Table_AssetDefinition_DataTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
