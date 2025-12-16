// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSpatialFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshSpatialFunctions_generated_h
#error "MeshSpatialFunctions.generated.h already included, missing '#pragma once' in MeshSpatialFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSpatialFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptContainmentOutcomePins : uint8;
enum class EGeometryScriptMeshSelectionType : uint8;
enum class EGeometryScriptSearchOutcomePins : uint8;
struct FGeometryScriptDynamicMeshBVH;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptRayHitResult;
struct FGeometryScriptSpatialQueryOptions;
struct FGeometryScriptTrianglePoint;

// ********** Begin ScriptStruct FGeometryScriptSpatialQueryOptions ********************************
struct Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSpatialQueryOptions;
// ********** End ScriptStruct FGeometryScriptSpatialQueryOptions **********************************

// ********** Begin ScriptStruct FGeometryScriptRayHitResult ***************************************
struct Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptRayHitResult;
// ********** End ScriptStruct FGeometryScriptRayHitResult *****************************************

// ********** Begin Class UGeometryScriptLibrary_MeshSpatial ***************************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectMeshElementsInBoxWithBVH); \
	DECLARE_FUNCTION(execIsPointInsideMesh); \
	DECLARE_FUNCTION(execFindNearestRayIntersectionWithMesh); \
	DECLARE_FUNCTION(execFindNearestPointOnMesh); \
	DECLARE_FUNCTION(execRebuildBVHForMesh); \
	DECLARE_FUNCTION(execIsBVHValidForMesh); \
	DECLARE_FUNCTION(execBuildBVHForMesh); \
	DECLARE_FUNCTION(execResetBVH);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshSpatial, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSpatial)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshSpatial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshSpatial(UGeometryScriptLibrary_MeshSpatial&&) = delete; \
	UGeometryScriptLibrary_MeshSpatial(const UGeometryScriptLibrary_MeshSpatial&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshSpatial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSpatial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSpatial) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshSpatial();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_59_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshSpatial;

// ********** End Class UGeometryScriptLibrary_MeshSpatial *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
