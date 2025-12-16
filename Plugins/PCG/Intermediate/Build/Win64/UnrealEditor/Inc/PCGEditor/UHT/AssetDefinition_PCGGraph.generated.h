// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinitions/AssetDefinition_PCGGraph.h"

#ifdef PCGEDITOR_AssetDefinition_PCGGraph_generated_h
#error "AssetDefinition_PCGGraph.generated.h already included, missing '#pragma once' in AssetDefinition_PCGGraph.h"
#endif
#define PCGEDITOR_AssetDefinition_PCGGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_PCGGraph ************************************************
struct Z_Construct_UClass_UAssetDefinition_PCGGraph_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_PCGGraph_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraph_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_PCGGraph(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_PCGGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_PCGGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_PCGGraph, UAssetDefinition_PCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UAssetDefinition_PCGGraph_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_PCGGraph)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraph_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_PCGGraph(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_PCGGraph(UAssetDefinition_PCGGraph&&) = delete; \
	UAssetDefinition_PCGGraph(const UAssetDefinition_PCGGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_PCGGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_PCGGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_PCGGraph) \
	NO_API virtual ~UAssetDefinition_PCGGraph();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraph_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraph_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraph_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraph_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_PCGGraph;

// ********** End Class UAssetDefinition_PCGGraph **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
