// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AssetDefinition_AnimationAsset.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_AnimationAsset_generated_h
#error "AssetDefinition_AnimationAsset.generated.h already included, missing '#pragma once' in AssetDefinition_AnimationAsset.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_AnimationAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_AnimationAsset ******************************************
struct Z_Construct_UClass_UAssetDefinition_AnimationAsset_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimationAsset_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimationAsset_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_AnimationAsset(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_AnimationAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_AnimationAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_AnimationAsset, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_AnimationAsset_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_AnimationAsset)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimationAsset_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_AnimationAsset(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_AnimationAsset(UAssetDefinition_AnimationAsset&&) = delete; \
	UAssetDefinition_AnimationAsset(const UAssetDefinition_AnimationAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_AnimationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_AnimationAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_AnimationAsset) \
	NO_API virtual ~UAssetDefinition_AnimationAsset();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimationAsset_h_10_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimationAsset_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimationAsset_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimationAsset_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_AnimationAsset;

// ********** End Class UAssetDefinition_AnimationAsset ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimationAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
