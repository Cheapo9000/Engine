// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithBlueprintLibrary.h"

#ifdef DATASMITHIMPORTER_DatasmithBlueprintLibrary_generated_h
#error "DatasmithBlueprintLibrary.generated.h already included, missing '#pragma once' in DatasmithBlueprintLibrary.h"
#endif
#define DATASMITHIMPORTER_DatasmithBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDatasmithImportOptions;
class UDatasmithSceneElement;
class UObject;
struct FDatasmithImportFactoryCreateFileResult;

// ********** Begin ScriptStruct FDatasmithImportFactoryCreateFileResult ***************************
struct Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDatasmithImportFactoryCreateFileResult;
// ********** End ScriptStruct FDatasmithImportFactoryCreateFileResult *****************************

// ********** Begin Class UDatasmithSceneElement ***************************************************
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyScene); \
	DECLARE_FUNCTION(execGetImportOptions); \
	DECLARE_FUNCTION(execGetAllOptions); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execReimportScene); \
	DECLARE_FUNCTION(execImportScenes); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execTranslateScene); \
	DECLARE_FUNCTION(execGetExistingDatasmithScene); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromCADFiles); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromSourceUri); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromFile);


struct Z_Construct_UClass_UDatasmithSceneElement_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithSceneElement_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithSceneElement(); \
	friend struct ::Z_Construct_UClass_UDatasmithSceneElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithSceneElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithSceneElement, UDatasmithSceneElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithSceneElement_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithSceneElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithSceneElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithSceneElement(UDatasmithSceneElement&&) = delete; \
	UDatasmithSceneElement(const UDatasmithSceneElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithSceneElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithSceneElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithSceneElement) \
	NO_API virtual ~UDatasmithSceneElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_45_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithSceneElement;

// ********** End Class UDatasmithSceneElement *****************************************************

// ********** Begin Class UDatasmithStaticMeshBlueprintLibrary *************************************
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupStaticLighting); \
	DECLARE_FUNCTION(execComputeLightmapResolution);


struct Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithStaticMeshBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithStaticMeshBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithStaticMeshBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithStaticMeshBlueprintLibrary(UDatasmithStaticMeshBlueprintLibrary&&) = delete; \
	UDatasmithStaticMeshBlueprintLibrary(const UDatasmithStaticMeshBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHIMPORTER_API, UDatasmithStaticMeshBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithStaticMeshBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithStaticMeshBlueprintLibrary) \
	DATASMITHIMPORTER_API virtual ~UDatasmithStaticMeshBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_149_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithStaticMeshBlueprintLibrary;

// ********** End Class UDatasmithStaticMeshBlueprintLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
