// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_ActorFolder.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_ActorFolder_generated_h
#error "AssetDefinition_ActorFolder.generated.h already included, missing '#pragma once' in AssetDefinition_ActorFolder.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_ActorFolder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_ActorFolder *********************************************
struct Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ActorFolder_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_ActorFolder(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_ActorFolder_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_ActorFolder, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_ActorFolder_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_ActorFolder)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_ActorFolder(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_ActorFolder(UAssetDefinition_ActorFolder&&) = delete; \
	UAssetDefinition_ActorFolder(const UAssetDefinition_ActorFolder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_ActorFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_ActorFolder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_ActorFolder) \
	NO_API virtual ~UAssetDefinition_ActorFolder();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_12_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_ActorFolder;

// ********** End Class UAssetDefinition_ActorFolder ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
