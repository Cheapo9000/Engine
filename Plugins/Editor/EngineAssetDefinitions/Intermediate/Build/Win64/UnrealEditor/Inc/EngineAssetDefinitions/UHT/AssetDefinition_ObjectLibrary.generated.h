// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_ObjectLibrary.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_ObjectLibrary_generated_h
#error "AssetDefinition_ObjectLibrary.generated.h already included, missing '#pragma once' in AssetDefinition_ObjectLibrary.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_ObjectLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_ObjectLibrary *******************************************
struct Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ObjectLibrary_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_ObjectLibrary(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_ObjectLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_ObjectLibrary, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_ObjectLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_ObjectLibrary)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_ObjectLibrary(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_ObjectLibrary(UAssetDefinition_ObjectLibrary&&) = delete; \
	UAssetDefinition_ObjectLibrary(const UAssetDefinition_ObjectLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_ObjectLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_ObjectLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_ObjectLibrary) \
	NO_API virtual ~UAssetDefinition_ObjectLibrary();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_ObjectLibrary;

// ********** End Class UAssetDefinition_ObjectLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
