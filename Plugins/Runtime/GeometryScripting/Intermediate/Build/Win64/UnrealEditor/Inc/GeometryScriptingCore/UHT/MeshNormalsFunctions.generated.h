// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshNormalsFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshNormalsFunctions_generated_h
#error "MeshNormalsFunctions.generated.h already included, missing '#pragma once' in MeshNormalsFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshNormalsFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptCalculateNormalsOptions;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptSplitNormalsOptions;
struct FGeometryScriptTangentsOptions;
struct FGeometryScriptTriangle;
struct FGeometryScriptVectorList;

// ********** Begin ScriptStruct FGeometryScriptCalculateNormalsOptions ****************************
struct Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCalculateNormalsOptions;
// ********** End ScriptStruct FGeometryScriptCalculateNormalsOptions ******************************

// ********** Begin ScriptStruct FGeometryScriptSplitNormalsOptions ********************************
struct Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSplitNormalsOptions;
// ********** End ScriptStruct FGeometryScriptSplitNormalsOptions **********************************

// ********** Begin ScriptStruct FGeometryScriptTangentsOptions ************************************
struct Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptTangentsOptions;
// ********** End ScriptStruct FGeometryScriptTangentsOptions **************************************

// ********** Begin Class UGeometryScriptLibrary_MeshNormalsFunctions ******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateVertexNormal); \
	DECLARE_FUNCTION(execGetMeshPerVertexTangents); \
	DECLARE_FUNCTION(execSetMeshPerVertexTangents); \
	DECLARE_FUNCTION(execComputeTangents); \
	DECLARE_FUNCTION(execDiscardTangents); \
	DECLARE_FUNCTION(execGetMeshHasTangents); \
	DECLARE_FUNCTION(execGetMeshPerVertexNormals); \
	DECLARE_FUNCTION(execSetMeshPerVertexNormals); \
	DECLARE_FUNCTION(execSetMeshTriangleNormals); \
	DECLARE_FUNCTION(execSetSplitNormalsAlongSelectedEdges); \
	DECLARE_FUNCTION(execComputeSplitNormals); \
	DECLARE_FUNCTION(execRecomputeNormalsForMeshSelection); \
	DECLARE_FUNCTION(execRecomputeNormals); \
	DECLARE_FUNCTION(execSetPerFaceNormals); \
	DECLARE_FUNCTION(execSetPerVertexNormals); \
	DECLARE_FUNCTION(execAutoRepairNormals); \
	DECLARE_FUNCTION(execFlipTriangleSelectionNormals); \
	DECLARE_FUNCTION(execFlipNormals);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshNormalsFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshNormalsFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshNormalsFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshNormalsFunctions(UGeometryScriptLibrary_MeshNormalsFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshNormalsFunctions(const UGeometryScriptLibrary_MeshNormalsFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshNormalsFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshNormalsFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshNormalsFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshNormalsFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_72_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshNormalsFunctions;

// ********** End Class UGeometryScriptLibrary_MeshNormalsFunctions ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h

// ********** Begin Enum EGeometryScriptTangentTypes ***********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTTANGENTTYPES(op) \
	op(EGeometryScriptTangentTypes::FastMikkT) \
	op(EGeometryScriptTangentTypes::PerTriangle) \
	op(EGeometryScriptTangentTypes::StandardMikkT) 

enum class EGeometryScriptTangentTypes : uint8;
template<> struct TIsUEnumClass<EGeometryScriptTangentTypes> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptTangentTypes>();
// ********** End Enum EGeometryScriptTangentTypes *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
