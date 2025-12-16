// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AssetDefinition_AnimMontage.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_AnimMontage_generated_h
#error "AssetDefinition_AnimMontage.generated.h already included, missing '#pragma once' in AssetDefinition_AnimMontage.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_AnimMontage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_AnimMontage *********************************************
struct Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimMontage_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_AnimMontage(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_AnimMontage_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_AnimMontage, UAssetDefinition_AnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_AnimMontage_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_AnimMontage)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_AnimMontage(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_AnimMontage(UAssetDefinition_AnimMontage&&) = delete; \
	UAssetDefinition_AnimMontage(const UAssetDefinition_AnimMontage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_AnimMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_AnimMontage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_AnimMontage) \
	NO_API virtual ~UAssetDefinition_AnimMontage();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_12_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_AnimMontage;

// ********** End Class UAssetDefinition_AnimMontage ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
