// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_World.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_World_generated_h
#error "AssetDefinition_World.generated.h already included, missing '#pragma once' in AssetDefinition_World.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_World_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_World ***************************************************
struct Z_Construct_UClass_UAssetDefinition_World_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_World_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_World_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_World(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_World_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_World_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_World, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_World_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_World)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_World_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINEASSETDEFINITIONS_API UAssetDefinition_World(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_World(UAssetDefinition_World&&) = delete; \
	UAssetDefinition_World(const UAssetDefinition_World&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINEASSETDEFINITIONS_API, UAssetDefinition_World); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_World); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_World) \
	ENGINEASSETDEFINITIONS_API virtual ~UAssetDefinition_World();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_World_h_19_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_World_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_World_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_World_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_World;

// ********** End Class UAssetDefinition_World *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_World_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
