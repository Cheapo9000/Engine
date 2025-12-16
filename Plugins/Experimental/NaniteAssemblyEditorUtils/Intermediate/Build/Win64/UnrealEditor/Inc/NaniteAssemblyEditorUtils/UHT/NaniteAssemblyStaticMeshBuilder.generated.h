// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NaniteAssemblyStaticMeshBuilder.h"

#ifdef NANITEASSEMBLYEDITORUTILS_NaniteAssemblyStaticMeshBuilder_generated_h
#error "NaniteAssemblyStaticMeshBuilder.generated.h already included, missing '#pragma once' in NaniteAssemblyStaticMeshBuilder.h"
#endif
#define NANITEASSEMBLYEDITORUTILS_NaniteAssemblyStaticMeshBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNaniteAssemblyStaticMeshBuilder;
class USceneComponent;
class UStaticMesh;
class UStaticMeshComponent;
struct FNaniteAssemblyCreateNewParameters;
struct FNaniteAssemblyMaterialMergeOptions;

// ********** Begin Class UNaniteAssemblyStaticMeshBuilder *****************************************
#define FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAssemblyPartsFromComponent); \
	DECLARE_FUNCTION(execAddAssemblyPart); \
	DECLARE_FUNCTION(execAddAssemblyParts); \
	DECLARE_FUNCTION(execFinishAssemblyBuild); \
	DECLARE_FUNCTION(execBeginEditStaticMeshAssemblyBuild); \
	DECLARE_FUNCTION(execBeginNewStaticMeshAssemblyBuild);


struct Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_Statics;
NANITEASSEMBLYEDITORUTILS_API UClass* Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNaniteAssemblyStaticMeshBuilder(); \
	friend struct ::Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NANITEASSEMBLYEDITORUTILS_API UClass* ::Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UNaniteAssemblyStaticMeshBuilder, UNaniteAssemblyBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NaniteAssemblyEditorUtils"), Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_NoRegister) \
	DECLARE_SERIALIZER(UNaniteAssemblyStaticMeshBuilder)


#define FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNaniteAssemblyStaticMeshBuilder(UNaniteAssemblyStaticMeshBuilder&&) = delete; \
	UNaniteAssemblyStaticMeshBuilder(const UNaniteAssemblyStaticMeshBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNaniteAssemblyStaticMeshBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaniteAssemblyStaticMeshBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaniteAssemblyStaticMeshBuilder) \
	NO_API virtual ~UNaniteAssemblyStaticMeshBuilder();


#define FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNaniteAssemblyStaticMeshBuilder;

// ********** End Class UNaniteAssemblyStaticMeshBuilder *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NaniteAssemblyEditorUtils_Source_NaniteAssemblyEditorUtils_Public_NaniteAssemblyStaticMeshBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
