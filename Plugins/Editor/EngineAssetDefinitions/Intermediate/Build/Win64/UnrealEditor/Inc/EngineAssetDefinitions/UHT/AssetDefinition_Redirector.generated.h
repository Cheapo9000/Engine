// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_Redirector.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_Redirector_generated_h
#error "AssetDefinition_Redirector.generated.h already included, missing '#pragma once' in AssetDefinition_Redirector.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_Redirector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_Redirector **********************************************
struct Z_Construct_UClass_UAssetDefinition_Redirector_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Redirector_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_Redirector(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_Redirector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_Redirector_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_Redirector, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_Redirector_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_Redirector)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINEASSETDEFINITIONS_API UAssetDefinition_Redirector(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_Redirector(UAssetDefinition_Redirector&&) = delete; \
	UAssetDefinition_Redirector(const UAssetDefinition_Redirector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINEASSETDEFINITIONS_API, UAssetDefinition_Redirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_Redirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_Redirector) \
	ENGINEASSETDEFINITIONS_API virtual ~UAssetDefinition_Redirector();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_14_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_Redirector;

// ********** End Class UAssetDefinition_Redirector ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
