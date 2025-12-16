// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshComparisonFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshComparisonFunctions_generated_h
#error "MeshComparisonFunctions.generated.h already included, missing '#pragma once' in MeshComparisonFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshComparisonFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptIsSameMeshOptions;
struct FGeometryScriptMeasureMeshDistanceOptions;
struct FGeometryScriptMeshDifferenceInfo;

// ********** Begin ScriptStruct FGeometryScriptIsSameMeshOptions **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptIsSameMeshOptions;
// ********** End ScriptStruct FGeometryScriptIsSameMeshOptions ************************************

// ********** Begin ScriptStruct FGeometryScriptMeasureMeshDistanceOptions *************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeasureMeshDistanceOptions;
// ********** End ScriptStruct FGeometryScriptMeasureMeshDistanceOptions ***************************

// ********** Begin ScriptStruct FGeometryScriptMeshDifferenceInfo *********************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshDifferenceInfo_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshDifferenceInfo_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshDifferenceInfo;
// ********** End ScriptStruct FGeometryScriptMeshDifferenceInfo ***********************************

// ********** Begin Class UGeometryScriptLibrary_MeshComparisonFunctions ***************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsIntersectingMesh); \
	DECLARE_FUNCTION(execMeasureDistancesBetweenMeshes); \
	DECLARE_FUNCTION(execIsSameMeshAs);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshComparisonFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshComparisonFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshComparisonFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshComparisonFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshComparisonFunctions(UGeometryScriptLibrary_MeshComparisonFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshComparisonFunctions(const UGeometryScriptLibrary_MeshComparisonFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshComparisonFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshComparisonFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshComparisonFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshComparisonFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_97_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshComparisonFunctions;

// ********** End Class UGeometryScriptLibrary_MeshComparisonFunctions *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h

// ********** Begin Enum EGeometryScriptMeshDifferenceReason ***************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTMESHDIFFERENCEREASON(op) \
	op(EGeometryScriptMeshDifferenceReason::Unknown) \
	op(EGeometryScriptMeshDifferenceReason::VertexCount) \
	op(EGeometryScriptMeshDifferenceReason::TriangleCount) \
	op(EGeometryScriptMeshDifferenceReason::EdgeCount) \
	op(EGeometryScriptMeshDifferenceReason::Vertex) \
	op(EGeometryScriptMeshDifferenceReason::Triangle) \
	op(EGeometryScriptMeshDifferenceReason::Edge) \
	op(EGeometryScriptMeshDifferenceReason::Connectivity) \
	op(EGeometryScriptMeshDifferenceReason::Normal) \
	op(EGeometryScriptMeshDifferenceReason::Color) \
	op(EGeometryScriptMeshDifferenceReason::UV) \
	op(EGeometryScriptMeshDifferenceReason::Group) \
	op(EGeometryScriptMeshDifferenceReason::Attribute) 

enum class EGeometryScriptMeshDifferenceReason : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMeshDifferenceReason> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptMeshDifferenceReason>();
// ********** End Enum EGeometryScriptMeshDifferenceReason *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
