// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/EditorDynamicMeshUtilityFunctions.h"

#ifdef GEOMETRYSCRIPTINGEDITOR_EditorDynamicMeshUtilityFunctions_generated_h
#error "EditorDynamicMeshUtilityFunctions.generated.h already included, missing '#pragma once' in EditorDynamicMeshUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGEDITOR_EditorDynamicMeshUtilityFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
struct FDynamicMeshChangeContainer;

// ********** Begin ScriptStruct FDynamicMeshChangeContainer ***************************************
struct Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics; \
	GEOMETRYSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FDynamicMeshChangeContainer;
// ********** End ScriptStruct FDynamicMeshChangeContainer *****************************************

// ********** Begin Class UGeometryScriptLibrary_EditorDynamicMeshFunctions ************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFetchDebugMesh); \
	DECLARE_FUNCTION(execStashDebugMesh); \
	DECLARE_FUNCTION(execEmitTrackedMeshChange); \
	DECLARE_FUNCTION(execBeginTrackedMeshChange);


struct Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics;
GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_EditorDynamicMeshFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGEDITOR_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_EditorDynamicMeshFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingEditor"), Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_EditorDynamicMeshFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGEDITOR_API UGeometryScriptLibrary_EditorDynamicMeshFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_EditorDynamicMeshFunctions(UGeometryScriptLibrary_EditorDynamicMeshFunctions&&) = delete; \
	UGeometryScriptLibrary_EditorDynamicMeshFunctions(const UGeometryScriptLibrary_EditorDynamicMeshFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGEDITOR_API, UGeometryScriptLibrary_EditorDynamicMeshFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_EditorDynamicMeshFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_EditorDynamicMeshFunctions) \
	GEOMETRYSCRIPTINGEDITOR_API virtual ~UGeometryScriptLibrary_EditorDynamicMeshFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_43_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_EditorDynamicMeshFunctions;

// ********** End Class UGeometryScriptLibrary_EditorDynamicMeshFunctions **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
