// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSimplifyFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshSimplifyFunctions_generated_h
#error "MeshSimplifyFunctions.generated.h already included, missing '#pragma once' in MeshSimplifyFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSimplifyFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptClusterSimplifyMeshOptions;
struct FGeometryScriptGroupLayer;
struct FGeometryScriptPlanarSimplifyOptions;
struct FGeometryScriptPolygroupSimplifyOptions;
struct FGeometryScriptSimplifyMeshOptions;

// ********** Begin ScriptStruct FGeometryScriptPlanarSimplifyOptions ******************************
struct Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPlanarSimplifyOptions;
// ********** End ScriptStruct FGeometryScriptPlanarSimplifyOptions ********************************

// ********** Begin ScriptStruct FGeometryScriptPolygroupSimplifyOptions ***************************
struct Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPolygroupSimplifyOptions;
// ********** End ScriptStruct FGeometryScriptPolygroupSimplifyOptions *****************************

// ********** Begin ScriptStruct FGeometryScriptSimplifyMeshOptions ********************************
struct Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSimplifyMeshOptions;
// ********** End ScriptStruct FGeometryScriptSimplifyMeshOptions **********************************

// ********** Begin ScriptStruct FGeometryScriptClusterSimplifyEdgeConstraintOptions ***************
struct Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptClusterSimplifyEdgeConstraintOptions;
// ********** End ScriptStruct FGeometryScriptClusterSimplifyEdgeConstraintOptions *****************

// ********** Begin ScriptStruct FGeometryScriptClusterSimplifyMeshOptions *************************
struct Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptClusterSimplifyMeshOptions;
// ********** End ScriptStruct FGeometryScriptClusterSimplifyMeshOptions ***************************

// ********** Begin Class UGeometryScriptLibrary_MeshSimplifyFunctions *****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyClusterSimplifyToEdgeLength); \
	DECLARE_FUNCTION(execApplySimplifyToEdgeLength); \
	DECLARE_FUNCTION(execApplySimplifyToTolerance); \
	DECLARE_FUNCTION(execApplyEditorSimplifyToVertexCount); \
	DECLARE_FUNCTION(execApplyEditorSimplifyToTriangleCount); \
	DECLARE_FUNCTION(execApplySimplifyToVertexCount); \
	DECLARE_FUNCTION(execApplySimplifyToTriangleCount); \
	DECLARE_FUNCTION(execApplySimplifyToPolygroupTopology); \
	DECLARE_FUNCTION(execApplySimplifyToPlanar);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshSimplifyFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSimplifyFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshSimplifyFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshSimplifyFunctions(UGeometryScriptLibrary_MeshSimplifyFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshSimplifyFunctions(const UGeometryScriptLibrary_MeshSimplifyFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshSimplifyFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSimplifyFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSimplifyFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshSimplifyFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_140_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshSimplifyFunctions;

// ********** End Class UGeometryScriptLibrary_MeshSimplifyFunctions *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h

// ********** Begin Enum EGeometryScriptRemoveMeshSimplificationType *******************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTREMOVEMESHSIMPLIFICATIONTYPE(op) \
	op(EGeometryScriptRemoveMeshSimplificationType::StandardQEM) \
	op(EGeometryScriptRemoveMeshSimplificationType::VolumePreserving) \
	op(EGeometryScriptRemoveMeshSimplificationType::AttributeAware) 

enum class EGeometryScriptRemoveMeshSimplificationType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRemoveMeshSimplificationType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptRemoveMeshSimplificationType>();
// ********** End Enum EGeometryScriptRemoveMeshSimplificationType *********************************

// ********** Begin Enum EGeometryScriptClusterSimplifyConstraintLevel *****************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTCLUSTERSIMPLIFYCONSTRAINTLEVEL(op) \
	op(EGeometryScriptClusterSimplifyConstraintLevel::Fixed) \
	op(EGeometryScriptClusterSimplifyConstraintLevel::Constrained) \
	op(EGeometryScriptClusterSimplifyConstraintLevel::Free) 

enum class EGeometryScriptClusterSimplifyConstraintLevel : uint8;
template<> struct TIsUEnumClass<EGeometryScriptClusterSimplifyConstraintLevel> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptClusterSimplifyConstraintLevel>();
// ********** End Enum EGeometryScriptClusterSimplifyConstraintLevel *******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
