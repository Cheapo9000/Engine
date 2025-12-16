// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSelectionQueryFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshSelectionQueryFunctions_generated_h
#error "MeshSelectionQueryFunctions.generated.h already included, missing '#pragma once' in MeshSelectionQueryFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSelectionQueryFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptPolyPath;

// ********** Begin Class UGeometryScriptLibrary_MeshSelectionQueryFunctions ***********************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMeshSelectionBoundaryLoops); \
	DECLARE_FUNCTION(execGetMeshSelectionBoundingBox);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionQueryFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshSelectionQueryFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSelectionQueryFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshSelectionQueryFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshSelectionQueryFunctions(UGeometryScriptLibrary_MeshSelectionQueryFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshSelectionQueryFunctions(const UGeometryScriptLibrary_MeshSelectionQueryFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshSelectionQueryFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSelectionQueryFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSelectionQueryFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshSelectionQueryFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshSelectionQueryFunctions;

// ********** End Class UGeometryScriptLibrary_MeshSelectionQueryFunctions *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
