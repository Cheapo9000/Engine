// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AssetMappingTable.h"

#ifdef ENGINE_AssetMappingTable_generated_h
#error "AssetMappingTable.generated.h already included, missing '#pragma once' in AssetMappingTable.h"
#endif
#define ENGINE_AssetMappingTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAssetMapping *****************************************************
struct Z_Construct_UScriptStruct_FAssetMapping_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAssetMapping;
// ********** End ScriptStruct FAssetMapping *******************************************************

// ********** Begin Class UAssetMappingTable *******************************************************
struct Z_Construct_UClass_UAssetMappingTable_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUAssetMappingTable(); \
	friend struct ::Z_Construct_UClass_UAssetMappingTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAssetMappingTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetMappingTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAssetMappingTable_NoRegister) \
	DECLARE_SERIALIZER(UAssetMappingTable)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAssetMappingTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetMappingTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAssetMappingTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetMappingTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetMappingTable(UAssetMappingTable&&) = delete; \
	UAssetMappingTable(const UAssetMappingTable&) = delete; \
	ENGINE_API virtual ~UAssetMappingTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_59_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetMappingTable;

// ********** End Class UAssetMappingTable *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
