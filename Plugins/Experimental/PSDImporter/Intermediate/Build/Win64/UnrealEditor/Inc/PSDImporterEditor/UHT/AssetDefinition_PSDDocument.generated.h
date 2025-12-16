// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_PSDDocument.h"

#ifdef PSDIMPORTEREDITOR_AssetDefinition_PSDDocument_generated_h
#error "AssetDefinition_PSDDocument.generated.h already included, missing '#pragma once' in AssetDefinition_PSDDocument.h"
#endif
#define PSDIMPORTEREDITOR_AssetDefinition_PSDDocument_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_PSDDocument *********************************************
struct Z_Construct_UClass_UAssetDefinition_PSDDocument_Statics;
PSDIMPORTEREDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_PSDDocument_NoRegister();

#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_AssetDefinition_PSDDocument_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_PSDDocument(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_PSDDocument_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PSDIMPORTEREDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_PSDDocument_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_PSDDocument, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PSDImporterEditor"), Z_Construct_UClass_UAssetDefinition_PSDDocument_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_PSDDocument)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_AssetDefinition_PSDDocument_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_PSDDocument(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_PSDDocument(UAssetDefinition_PSDDocument&&) = delete; \
	UAssetDefinition_PSDDocument(const UAssetDefinition_PSDDocument&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_PSDDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_PSDDocument); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_PSDDocument) \
	NO_API virtual ~UAssetDefinition_PSDDocument();


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_AssetDefinition_PSDDocument_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_AssetDefinition_PSDDocument_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_AssetDefinition_PSDDocument_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_AssetDefinition_PSDDocument_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_PSDDocument;

// ********** End Class UAssetDefinition_PSDDocument ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_AssetDefinition_PSDDocument_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
