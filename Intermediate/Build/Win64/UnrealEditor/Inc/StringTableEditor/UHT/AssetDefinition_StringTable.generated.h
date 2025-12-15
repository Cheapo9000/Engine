// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_StringTable.h"

#ifdef STRINGTABLEEDITOR_AssetDefinition_StringTable_generated_h
#error "AssetDefinition_StringTable.generated.h already included, missing '#pragma once' in AssetDefinition_StringTable.h"
#endif
#define STRINGTABLEEDITOR_AssetDefinition_StringTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_StringTable *********************************************
struct Z_Construct_UClass_UAssetDefinition_StringTable_Statics;
STRINGTABLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_StringTable_NoRegister();

#define FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_StringTable(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_StringTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STRINGTABLEEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_StringTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_StringTable, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StringTableEditor"), Z_Construct_UClass_UAssetDefinition_StringTable_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_StringTable)


#define FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_StringTable(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_StringTable(UAssetDefinition_StringTable&&) = delete; \
	UAssetDefinition_StringTable(const UAssetDefinition_StringTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_StringTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_StringTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_StringTable) \
	NO_API virtual ~UAssetDefinition_StringTable();


#define FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_11_PROLOG
#define FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_StringTable;

// ********** End Class UAssetDefinition_StringTable ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
