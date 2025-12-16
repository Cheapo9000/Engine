// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AssetDefinition_AnimBlueprint.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_AnimBlueprint_generated_h
#error "AssetDefinition_AnimBlueprint.generated.h already included, missing '#pragma once' in AssetDefinition_AnimBlueprint.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_AnimBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_AnimBlueprint *******************************************
struct Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimBlueprint_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_AnimBlueprint(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_AnimBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_AnimBlueprint, UAssetDefinition_Blueprint, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_AnimBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_AnimBlueprint)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_AnimBlueprint(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_AnimBlueprint(UAssetDefinition_AnimBlueprint&&) = delete; \
	UAssetDefinition_AnimBlueprint(const UAssetDefinition_AnimBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_AnimBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_AnimBlueprint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_AnimBlueprint) \
	NO_API virtual ~UAssetDefinition_AnimBlueprint();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_14_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_AnimBlueprint;

// ********** End Class UAssetDefinition_AnimBlueprint *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
