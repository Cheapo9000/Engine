// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Material/AssetDefinition_Material.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_Material_generated_h
#error "AssetDefinition_Material.generated.h already included, missing '#pragma once' in AssetDefinition_Material.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_Material_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_Material ************************************************
struct Z_Construct_UClass_UAssetDefinition_Material_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Material_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_Material(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_Material_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_Material_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_Material, UAssetDefinition_MaterialInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_Material_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_Material)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_Material(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_Material(UAssetDefinition_Material&&) = delete; \
	UAssetDefinition_Material(const UAssetDefinition_Material&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_Material); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_Material); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_Material) \
	NO_API virtual ~UAssetDefinition_Material();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_12_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_Material;

// ********** End Class UAssetDefinition_Material **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
