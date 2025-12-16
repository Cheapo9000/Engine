// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorSkeletalMeshLibrary.h"

#ifdef EDITORSCRIPTINGUTILITIES_EditorSkeletalMeshLibrary_generated_h
#error "EditorSkeletalMeshLibrary.generated.h already included, missing '#pragma once' in EditorSkeletalMeshLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorSkeletalMeshLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsAsset;
class USkeletalMesh;
class UTexture2D;
struct FSkeletalMeshBuildSettings;

// ********** Begin Class UDEPRECATED_EditorSkeletalMeshLibrary ************************************
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePhysicsAsset); \
	DECLARE_FUNCTION(execStripLODGeometry); \
	DECLARE_FUNCTION(execRemoveLODs); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execGetLODCount); \
	DECLARE_FUNCTION(execRenameSocket); \
	DECLARE_FUNCTION(execGetNumVerts); \
	DECLARE_FUNCTION(execRegenerateLOD);


struct Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics;
EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_NoRegister();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_EditorSkeletalMeshLibrary(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORSCRIPTINGUTILITIES_API UClass* ::Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_EditorSkeletalMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_EditorSkeletalMeshLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORSCRIPTINGUTILITIES_API UDEPRECATED_EditorSkeletalMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_EditorSkeletalMeshLibrary(UDEPRECATED_EditorSkeletalMeshLibrary&&) = delete; \
	UDEPRECATED_EditorSkeletalMeshLibrary(const UDEPRECATED_EditorSkeletalMeshLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORSCRIPTINGUTILITIES_API, UDEPRECATED_EditorSkeletalMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_EditorSkeletalMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_EditorSkeletalMeshLibrary) \
	EDITORSCRIPTINGUTILITIES_API virtual ~UDEPRECATED_EditorSkeletalMeshLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_21_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_EditorSkeletalMeshLibrary;

// ********** End Class UDEPRECATED_EditorSkeletalMeshLibrary **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
