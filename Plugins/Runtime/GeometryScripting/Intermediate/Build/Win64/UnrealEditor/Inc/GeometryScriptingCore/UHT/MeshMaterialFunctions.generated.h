// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshMaterialFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshMaterialFunctions_generated_h
#error "MeshMaterialFunctions.generated.h already included, missing '#pragma once' in MeshMaterialFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshMaterialFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;
struct FGeometryScriptGroupLayer;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;

// ********** Begin Class UGeometryScriptLibrary_MeshMaterialFunctions *****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCompactMaterialIDs); \
	DECLARE_FUNCTION(execDeleteTrianglesByMaterialID); \
	DECLARE_FUNCTION(execSetPolygroupMaterialID); \
	DECLARE_FUNCTION(execSetMaterialIDForMeshSelection); \
	DECLARE_FUNCTION(execSetMaterialIDOnTriangles); \
	DECLARE_FUNCTION(execSetAllTriangleMaterialIDs); \
	DECLARE_FUNCTION(execSetTriangleMaterialID); \
	DECLARE_FUNCTION(execGetTrianglesByMaterialID); \
	DECLARE_FUNCTION(execGetAllTriangleMaterialIDs); \
	DECLARE_FUNCTION(execGetMaterialIDsOfTriangles); \
	DECLARE_FUNCTION(execGetTriangleMaterialID); \
	DECLARE_FUNCTION(execRemapAndCombineMaterials); \
	DECLARE_FUNCTION(execRemapToNewMaterialIDsByMaterial); \
	DECLARE_FUNCTION(execRemapMaterialIDs); \
	DECLARE_FUNCTION(execClearMaterialIDs); \
	DECLARE_FUNCTION(execEnableMaterialIDs); \
	DECLARE_FUNCTION(execGetMaxMaterialID);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshMaterialFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshMaterialFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshMaterialFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshMaterialFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshMaterialFunctions(UGeometryScriptLibrary_MeshMaterialFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshMaterialFunctions(const UGeometryScriptLibrary_MeshMaterialFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshMaterialFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshMaterialFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshMaterialFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshMaterialFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshMaterialFunctions;

// ********** End Class UGeometryScriptLibrary_MeshMaterialFunctions *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
