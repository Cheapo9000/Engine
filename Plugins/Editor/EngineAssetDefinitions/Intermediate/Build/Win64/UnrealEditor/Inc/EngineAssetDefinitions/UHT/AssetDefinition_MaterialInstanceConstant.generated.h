// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Material/AssetDefinition_MaterialInstanceConstant.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_MaterialInstanceConstant_generated_h
#error "AssetDefinition_MaterialInstanceConstant.generated.h already included, missing '#pragma once' in AssetDefinition_MaterialInstanceConstant.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_MaterialInstanceConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_MaterialInstanceConstant ********************************
struct Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_MaterialInstanceConstant(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_MaterialInstanceConstant, UAssetDefinition_MaterialInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_MaterialInstanceConstant)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_MaterialInstanceConstant(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_MaterialInstanceConstant(UAssetDefinition_MaterialInstanceConstant&&) = delete; \
	UAssetDefinition_MaterialInstanceConstant(const UAssetDefinition_MaterialInstanceConstant&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_MaterialInstanceConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_MaterialInstanceConstant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_MaterialInstanceConstant) \
	NO_API virtual ~UAssetDefinition_MaterialInstanceConstant();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_15_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_MaterialInstanceConstant;

// ********** End Class UAssetDefinition_MaterialInstanceConstant **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
