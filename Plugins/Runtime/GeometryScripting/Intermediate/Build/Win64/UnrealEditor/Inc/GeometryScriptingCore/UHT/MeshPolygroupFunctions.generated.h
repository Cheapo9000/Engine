// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshPolygroupFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshPolygroupFunctions_generated_h
#error "MeshPolygroupFunctions.generated.h already included, missing '#pragma once' in MeshPolygroupFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshPolygroupFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptSearchOutcomePins : uint8;
struct FGeometryScriptGroupLayer;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;

// ********** Begin Class UGeometryScriptLibrary_MeshPolygroupFunctions ****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPolygroupForMeshSelection); \
	DECLARE_FUNCTION(execGetTrianglesInPolygroup); \
	DECLARE_FUNCTION(execGetPolyGroupUVCentroid); \
	DECLARE_FUNCTION(execGetPolyGroupUVBoundingBox); \
	DECLARE_FUNCTION(execGetPolyGroupBoundingBox); \
	DECLARE_FUNCTION(execGetPolygroupIDsInMesh); \
	DECLARE_FUNCTION(execGetAllTrianglePolygroupIDs); \
	DECLARE_FUNCTION(execDeleteTrianglesInPolygroup); \
	DECLARE_FUNCTION(execGetTrianglePolygroupID); \
	DECLARE_FUNCTION(execComputePolygroupsFromPolygonDetection); \
	DECLARE_FUNCTION(execComputePolygroupsFromAngleThreshold); \
	DECLARE_FUNCTION(execConvertComponentsToPolygroups); \
	DECLARE_FUNCTION(execConvertUVIslandsToPolygroups); \
	DECLARE_FUNCTION(execCopyPolygroupsLayer); \
	DECLARE_FUNCTION(execClearPolygroups); \
	DECLARE_FUNCTION(execFindExtendedPolygroupLayerByName); \
	DECLARE_FUNCTION(execAddNamedPolygroupLayer); \
	DECLARE_FUNCTION(execSetNumExtendedPolygroupLayers); \
	DECLARE_FUNCTION(execEnablePolygroups);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshPolygroupFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshPolygroupFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshPolygroupFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshPolygroupFunctions(UGeometryScriptLibrary_MeshPolygroupFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshPolygroupFunctions(const UGeometryScriptLibrary_MeshPolygroupFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshPolygroupFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshPolygroupFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshPolygroupFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshPolygroupFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshPolygroupFunctions;

// ********** End Class UGeometryScriptLibrary_MeshPolygroupFunctions ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
