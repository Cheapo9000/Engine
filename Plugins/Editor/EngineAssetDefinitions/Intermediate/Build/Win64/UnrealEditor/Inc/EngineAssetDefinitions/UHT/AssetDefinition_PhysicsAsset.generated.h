// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_PhysicsAsset.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_PhysicsAsset_generated_h
#error "AssetDefinition_PhysicsAsset.generated.h already included, missing '#pragma once' in AssetDefinition_PhysicsAsset.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_PhysicsAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_PhysicsAsset ********************************************
struct Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_PhysicsAsset_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_PhysicsAsset(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_PhysicsAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_PhysicsAsset, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_PhysicsAsset_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_PhysicsAsset)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_PhysicsAsset(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_PhysicsAsset(UAssetDefinition_PhysicsAsset&&) = delete; \
	UAssetDefinition_PhysicsAsset(const UAssetDefinition_PhysicsAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_PhysicsAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_PhysicsAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_PhysicsAsset) \
	NO_API virtual ~UAssetDefinition_PhysicsAsset();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_10_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_PhysicsAsset;

// ********** End Class UAssetDefinition_PhysicsAsset **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
