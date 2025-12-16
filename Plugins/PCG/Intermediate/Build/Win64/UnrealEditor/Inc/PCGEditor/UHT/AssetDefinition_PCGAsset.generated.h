// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinitions/AssetDefinition_PCGAsset.h"

#ifdef PCGEDITOR_AssetDefinition_PCGAsset_generated_h
#error "AssetDefinition_PCGAsset.generated.h already included, missing '#pragma once' in AssetDefinition_PCGAsset.h"
#endif
#define PCGEDITOR_AssetDefinition_PCGAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_PCGAsset ************************************************
struct Z_Construct_UClass_UAssetDefinition_PCGAsset_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_PCGAsset_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGAsset_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_PCGAsset(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_PCGAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_PCGAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_PCGAsset, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UAssetDefinition_PCGAsset_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_PCGAsset)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGAsset_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_PCGAsset(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_PCGAsset(UAssetDefinition_PCGAsset&&) = delete; \
	UAssetDefinition_PCGAsset(const UAssetDefinition_PCGAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_PCGAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_PCGAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_PCGAsset) \
	NO_API virtual ~UAssetDefinition_PCGAsset();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGAsset_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGAsset_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGAsset_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGAsset_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_PCGAsset;

// ********** End Class UAssetDefinition_PCGAsset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
