// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshBasicEditFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshBasicEditFunctions_generated_h
#error "MeshBasicEditFunctions.generated.h already included, missing '#pragma once' in MeshBasicEditFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshBasicEditFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;
struct FGeometryScriptAppendMeshOptions;
struct FGeometryScriptIndexList;
struct FGeometryScriptMergeVertexOptions;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptSimpleMeshBuffers;
struct FGeometryScriptTriangleList;
struct FGeometryScriptVectorList;

// ********** Begin ScriptStruct FGeometryScriptSimpleMeshBuffers **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSimpleMeshBuffers;
// ********** End ScriptStruct FGeometryScriptSimpleMeshBuffers ************************************

// ********** Begin ScriptStruct FGeometryScriptAppendMeshOptions **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptAppendMeshOptions;
// ********** End ScriptStruct FGeometryScriptAppendMeshOptions ************************************

// ********** Begin ScriptStruct FGeometryScriptMergeVertexOptions *********************************
struct Z_Construct_UScriptStruct_FGeometryScriptMergeVertexOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMergeVertexOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMergeVertexOptions;
// ********** End ScriptStruct FGeometryScriptMergeVertexOptions ***********************************

// ********** Begin Class UGeometryScriptLibrary_MeshBasicEditFunctions ****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAppendBuffersToMesh); \
	DECLARE_FUNCTION(execAppendMeshRepeatedWithMaterials); \
	DECLARE_FUNCTION(execAppendMeshRepeated); \
	DECLARE_FUNCTION(execAppendMeshTransformedWithMaterials); \
	DECLARE_FUNCTION(execAppendMeshTransformed); \
	DECLARE_FUNCTION(execAppendMeshWithMaterials); \
	DECLARE_FUNCTION(execAppendMesh); \
	DECLARE_FUNCTION(execMergeMeshVerticesInSelections); \
	DECLARE_FUNCTION(execMergeMeshVertexPair); \
	DECLARE_FUNCTION(execDeleteSelectedTrianglesFromMesh); \
	DECLARE_FUNCTION(execDeleteTrianglesFromMesh); \
	DECLARE_FUNCTION(execDeleteTriangleFromMesh); \
	DECLARE_FUNCTION(execAddTrianglesToMesh); \
	DECLARE_FUNCTION(execAddTriangleToMesh); \
	DECLARE_FUNCTION(execDeleteVerticesFromMesh); \
	DECLARE_FUNCTION(execDeleteVertexFromMesh); \
	DECLARE_FUNCTION(execAddVerticesToMesh); \
	DECLARE_FUNCTION(execAddVertexToMesh); \
	DECLARE_FUNCTION(execSetAllMeshVertexPositions); \
	DECLARE_FUNCTION(execSetVertexPosition); \
	DECLARE_FUNCTION(execDiscardMeshAttributes);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBasicEditFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshBasicEditFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBasicEditFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshBasicEditFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshBasicEditFunctions(UGeometryScriptLibrary_MeshBasicEditFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshBasicEditFunctions(const UGeometryScriptLibrary_MeshBasicEditFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshBasicEditFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBasicEditFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBasicEditFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshBasicEditFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_112_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshBasicEditFunctions;

// ********** End Class UGeometryScriptLibrary_MeshBasicEditFunctions ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h

// ********** Begin Enum EGeometryScriptCombineAttributesMode **************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTCOMBINEATTRIBUTESMODE(op) \
	op(EGeometryScriptCombineAttributesMode::EnableAllMatching) \
	op(EGeometryScriptCombineAttributesMode::UseTarget) \
	op(EGeometryScriptCombineAttributesMode::UseSource) 

enum class EGeometryScriptCombineAttributesMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptCombineAttributesMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptCombineAttributesMode>();
// ********** End Enum EGeometryScriptCombineAttributesMode ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
