// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_DataLayer.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_DataLayer_generated_h
#error "AssetDefinition_DataLayer.generated.h already included, missing '#pragma once' in AssetDefinition_DataLayer.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_DataLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_DataLayer ***********************************************
struct Z_Construct_UClass_UAssetDefinition_DataLayer_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_DataLayer_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_DataLayer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_DataLayer(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_DataLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_DataLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_DataLayer, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_DataLayer_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_DataLayer)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_DataLayer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_DataLayer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_DataLayer(UAssetDefinition_DataLayer&&) = delete; \
	UAssetDefinition_DataLayer(const UAssetDefinition_DataLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_DataLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_DataLayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_DataLayer) \
	NO_API virtual ~UAssetDefinition_DataLayer();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_DataLayer_h_11_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_DataLayer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_DataLayer_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_DataLayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_DataLayer;

// ********** End Class UAssetDefinition_DataLayer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_DataLayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
