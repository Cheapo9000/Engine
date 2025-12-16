// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_TextureCube.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_TextureCube_generated_h
#error "AssetDefinition_TextureCube.generated.h already included, missing '#pragma once' in AssetDefinition_TextureCube.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_TextureCube_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_TextureCube *********************************************
struct Z_Construct_UClass_UAssetDefinition_TextureCube_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureCube_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_TextureCube(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_TextureCube_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_TextureCube_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_TextureCube, UAssetDefinition_Texture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_TextureCube_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_TextureCube)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINEASSETDEFINITIONS_API UAssetDefinition_TextureCube(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_TextureCube(UAssetDefinition_TextureCube&&) = delete; \
	UAssetDefinition_TextureCube(const UAssetDefinition_TextureCube&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINEASSETDEFINITIONS_API, UAssetDefinition_TextureCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_TextureCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_TextureCube) \
	ENGINEASSETDEFINITIONS_API virtual ~UAssetDefinition_TextureCube();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_10_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_TextureCube;

// ********** End Class UAssetDefinition_TextureCube ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
