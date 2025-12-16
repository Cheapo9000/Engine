// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageEditorBlueprintLibrary.h"

#ifdef USDSTAGEEDITOR_USDStageEditorBlueprintLibrary_generated_h
#error "USDStageEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in USDStageEditorBlueprintLibrary.h"
#endif
#define USDSTAGEEDITOR_USDStageEditorBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUsdStageActor;
class UUsdStageImportOptions;

// ********** Begin Class UUsdStageEditorBlueprintLibrary ******************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportSelectedLayers); \
	DECLARE_FUNCTION(execActionsImport); \
	DECLARE_FUNCTION(execFileClose); \
	DECLARE_FUNCTION(execFileReset); \
	DECLARE_FUNCTION(execFileReload); \
	DECLARE_FUNCTION(execFileExportFlattenedLayerStack); \
	DECLARE_FUNCTION(execFileExportFlattenedStage); \
	DECLARE_FUNCTION(execFileExportAllLayers); \
	DECLARE_FUNCTION(execFileSave); \
	DECLARE_FUNCTION(execFileOpen); \
	DECLARE_FUNCTION(execFileNew); \
	DECLARE_FUNCTION(execSetSelectedPropertyMetadataNames); \
	DECLARE_FUNCTION(execGetSelectedPropertyMetadataNames); \
	DECLARE_FUNCTION(execSetSelectedPropertyNames); \
	DECLARE_FUNCTION(execGetSelectedPropertyNames); \
	DECLARE_FUNCTION(execSetSelectedPrimPaths); \
	DECLARE_FUNCTION(execGetSelectedPrimPaths); \
	DECLARE_FUNCTION(execSetSelectedLayerIdentifiers); \
	DECLARE_FUNCTION(execGetSelectedLayerIdentifiers); \
	DECLARE_FUNCTION(execSetAttachedStageActor); \
	DECLARE_FUNCTION(execGetAttachedStageActor); \
	DECLARE_FUNCTION(execIsStageEditorOpened); \
	DECLARE_FUNCTION(execCloseStageEditor); \
	DECLARE_FUNCTION(execOpenStageEditor);


struct Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics;
USDSTAGEEDITOR_API UClass* Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdStageEditorBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGEEDITOR_API UClass* ::Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdStageEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDStageEditor"), Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUsdStageEditorBlueprintLibrary)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDSTAGEEDITOR_API UUsdStageEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdStageEditorBlueprintLibrary(UUsdStageEditorBlueprintLibrary&&) = delete; \
	UUsdStageEditorBlueprintLibrary(const UUsdStageEditorBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDSTAGEEDITOR_API, UUsdStageEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdStageEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdStageEditorBlueprintLibrary) \
	USDSTAGEEDITOR_API virtual ~UUsdStageEditorBlueprintLibrary();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdStageEditorBlueprintLibrary;

// ********** End Class UUsdStageEditorBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
