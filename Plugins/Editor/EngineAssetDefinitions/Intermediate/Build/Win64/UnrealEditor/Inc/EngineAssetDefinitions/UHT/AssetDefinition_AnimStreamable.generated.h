// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AssetDefinition_AnimStreamable.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_AnimStreamable_generated_h
#error "AssetDefinition_AnimStreamable.generated.h already included, missing '#pragma once' in AssetDefinition_AnimStreamable.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_AnimStreamable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_AnimStreamable ******************************************
struct Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimStreamable_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_AnimStreamable(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_AnimStreamable_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_AnimStreamable, UAssetDefinition_AnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_AnimStreamable_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_AnimStreamable)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_AnimStreamable(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_AnimStreamable(UAssetDefinition_AnimStreamable&&) = delete; \
	UAssetDefinition_AnimStreamable(const UAssetDefinition_AnimStreamable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_AnimStreamable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_AnimStreamable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_AnimStreamable) \
	NO_API virtual ~UAssetDefinition_AnimStreamable();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_12_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_AnimStreamable;

// ********** End Class UAssetDefinition_AnimStreamable ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
