// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeEditorScriptLibrary.h"

#ifdef INTERCHANGEEDITOR_InterchangeEditorScriptLibrary_generated_h
#error "InterchangeEditorScriptLibrary.generated.h already included, missing '#pragma once' in InterchangeEditorScriptLibrary.h"
#endif
#define INTERCHANGEEDITOR_InterchangeEditorScriptLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALevelInstance;
class UInterchangeSceneImportAsset;
class UWorld;

// ********** Begin Class UInterchangeEditorScriptLibrary ******************************************
#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLevelInstanceGetEditableActors); \
	DECLARE_FUNCTION(execLevelInstanceCommit); \
	DECLARE_FUNCTION(execLevelInstanceEnterEditMode); \
	DECLARE_FUNCTION(execCanResetWorld); \
	DECLARE_FUNCTION(execCanResetActor); \
	DECLARE_FUNCTION(execResetActors); \
	DECLARE_FUNCTION(execResetSceneImportAsset); \
	DECLARE_FUNCTION(execResetLevelAsset);


struct Z_Construct_UClass_UInterchangeEditorScriptLibrary_Statics;
INTERCHANGEEDITOR_API UClass* Z_Construct_UClass_UInterchangeEditorScriptLibrary_NoRegister();

#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeEditorScriptLibrary(); \
	friend struct ::Z_Construct_UClass_UInterchangeEditorScriptLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEEDITOR_API UClass* ::Z_Construct_UClass_UInterchangeEditorScriptLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeEditorScriptLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEditor"), Z_Construct_UClass_UInterchangeEditorScriptLibrary_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeEditorScriptLibrary)


#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEEDITOR_API UInterchangeEditorScriptLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeEditorScriptLibrary(UInterchangeEditorScriptLibrary&&) = delete; \
	UInterchangeEditorScriptLibrary(const UInterchangeEditorScriptLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEEDITOR_API, UInterchangeEditorScriptLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeEditorScriptLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeEditorScriptLibrary) \
	INTERCHANGEEDITOR_API virtual ~UInterchangeEditorScriptLibrary();


#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeEditorScriptLibrary;

// ********** End Class UInterchangeEditorScriptLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeEditorScriptLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
