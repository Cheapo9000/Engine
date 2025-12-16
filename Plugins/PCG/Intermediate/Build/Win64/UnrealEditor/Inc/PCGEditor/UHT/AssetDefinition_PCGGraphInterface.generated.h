// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinitions/AssetDefinition_PCGGraphInterface.h"

#ifdef PCGEDITOR_AssetDefinition_PCGGraphInterface_generated_h
#error "AssetDefinition_PCGGraphInterface.generated.h already included, missing '#pragma once' in AssetDefinition_PCGGraphInterface.h"
#endif
#define PCGEDITOR_AssetDefinition_PCGGraphInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_PCGGraphInterface ***************************************
struct Z_Construct_UClass_UAssetDefinition_PCGGraphInterface_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_PCGGraphInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraphInterface_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_PCGGraphInterface(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_PCGGraphInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_PCGGraphInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_PCGGraphInterface, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UAssetDefinition_PCGGraphInterface_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_PCGGraphInterface)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraphInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_PCGGraphInterface(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_PCGGraphInterface(UAssetDefinition_PCGGraphInterface&&) = delete; \
	UAssetDefinition_PCGGraphInterface(const UAssetDefinition_PCGGraphInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_PCGGraphInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_PCGGraphInterface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_PCGGraphInterface) \
	NO_API virtual ~UAssetDefinition_PCGGraphInterface();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraphInterface_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraphInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraphInterface_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraphInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_PCGGraphInterface;

// ********** End Class UAssetDefinition_PCGGraphInterface *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_AssetDefinitions_AssetDefinition_PCGGraphInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
