// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_StaticMesh.h"

#ifdef ENGINEASSETDEFINITIONS_AssetDefinition_StaticMesh_generated_h
#error "AssetDefinition_StaticMesh.generated.h already included, missing '#pragma once' in AssetDefinition_StaticMesh.h"
#endif
#define ENGINEASSETDEFINITIONS_AssetDefinition_StaticMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_StaticMesh **********************************************
struct Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics;
ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_StaticMesh_NoRegister();

#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_StaticMesh(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEASSETDEFINITIONS_API UClass* ::Z_Construct_UClass_UAssetDefinition_StaticMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_StaticMesh, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineAssetDefinitions"), Z_Construct_UClass_UAssetDefinition_StaticMesh_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_StaticMesh)


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_StaticMesh(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_StaticMesh(UAssetDefinition_StaticMesh&&) = delete; \
	UAssetDefinition_StaticMesh(const UAssetDefinition_StaticMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_StaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_StaticMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_StaticMesh) \
	NO_API virtual ~UAssetDefinition_StaticMesh();


#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_10_PROLOG
#define FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_StaticMesh;

// ********** End Class UAssetDefinition_StaticMesh ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
