// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AssetDefinition_PoseAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_PoseAsset_generated_h
#error "AssetDefinition_PoseAsset.generated.h already included, missing '#pragma once' in AssetDefinition_PoseAsset.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_PoseAsset_generated_h

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_PoseAsset(); \
	friend struct Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition_PoseAsset, UAssetDefinition_AnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), NO_API) \
	DECLARE_SERIALIZER(UAssetDefinition_PoseAsset)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_PoseAsset(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetDefinition_PoseAsset(UAssetDefinition_PoseAsset&&); \
	UAssetDefinition_PoseAsset(const UAssetDefinition_PoseAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_PoseAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_PoseAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_PoseAsset) \
	NO_API virtual ~UAssetDefinition_PoseAsset();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_12_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<class UAssetDefinition_PoseAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
