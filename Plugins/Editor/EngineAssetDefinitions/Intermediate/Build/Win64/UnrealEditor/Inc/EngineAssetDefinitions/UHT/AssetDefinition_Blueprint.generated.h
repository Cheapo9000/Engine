// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Script/AssetDefinition_Blueprint.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_Blueprint_generated_h
#error "AssetDefinition_Blueprint.generated.h already included, missing '#pragma once' in AssetDefinition_Blueprint.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_Blueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_Blueprint ***********************************************
struct Z_Construct_UClass_UAssetDefinition_Blueprint_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Blueprint_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_Blueprint(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_Blueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_Blueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_Blueprint, UAssetDefinition_ClassTypeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_Blueprint_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_Blueprint)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINEASSETDEFINITIONS_API UAssetDefinition_Blueprint(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_Blueprint(UAssetDefinition_Blueprint&&) = delete; \
	UAssetDefinition_Blueprint(const UAssetDefinition_Blueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINEASSETDEFINITIONS_API, UAssetDefinition_Blueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_Blueprint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_Blueprint) \
	ENGINEASSETDEFINITIONS_API virtual ~UAssetDefinition_Blueprint();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_15_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_Blueprint;

// ********** End Class UAssetDefinition_Blueprint *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
