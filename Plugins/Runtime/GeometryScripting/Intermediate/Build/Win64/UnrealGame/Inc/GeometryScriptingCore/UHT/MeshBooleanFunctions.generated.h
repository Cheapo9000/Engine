// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshBooleanFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshBooleanFunctions_generated_h
#error "MeshBooleanFunctions.generated.h already included, missing '#pragma once' in MeshBooleanFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshBooleanFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptBooleanOperation : uint8;
struct FGeometryScriptMeshBooleanOptions;
struct FGeometryScriptMeshIsoCurveOptions;
struct FGeometryScriptMeshMirrorOptions;
struct FGeometryScriptMeshPlaneCutOptions;
struct FGeometryScriptMeshPlaneSliceOptions;
struct FGeometryScriptMeshSelfUnionOptions;
struct FGeometryScriptScalarList;

// ********** Begin ScriptStruct FGeometryScriptMeshBooleanOptions *********************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshBooleanOptions;
// ********** End ScriptStruct FGeometryScriptMeshBooleanOptions ***********************************

// ********** Begin ScriptStruct FGeometryScriptMeshSelfUnionOptions *******************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshSelfUnionOptions;
// ********** End ScriptStruct FGeometryScriptMeshSelfUnionOptions *********************************

// ********** Begin ScriptStruct FGeometryScriptMeshPlaneCutOptions ********************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshPlaneCutOptions;
// ********** End ScriptStruct FGeometryScriptMeshPlaneCutOptions **********************************

// ********** Begin ScriptStruct FGeometryScriptMeshPlaneSliceOptions ******************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshPlaneSliceOptions;
// ********** End ScriptStruct FGeometryScriptMeshPlaneSliceOptions ********************************

// ********** Begin ScriptStruct FGeometryScriptMeshMirrorOptions **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshMirrorOptions;
// ********** End ScriptStruct FGeometryScriptMeshMirrorOptions ************************************

// ********** Begin ScriptStruct FGeometryScriptMeshIsoCurveOptions ********************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshIsoCurveOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshIsoCurveOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshIsoCurveOptions;
// ********** End ScriptStruct FGeometryScriptMeshIsoCurveOptions **********************************

// ********** Begin Class UGeometryScriptLibrary_MeshBooleanFunctions ******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyMeshIsoCurves); \
	DECLARE_FUNCTION(execApplyMeshMirror); \
	DECLARE_FUNCTION(execApplyMeshPlaneSlice); \
	DECLARE_FUNCTION(execApplyMeshPlaneCut); \
	DECLARE_FUNCTION(execApplyMeshSelfUnion); \
	DECLARE_FUNCTION(execApplyMeshBoolean);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBooleanFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshBooleanFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBooleanFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_164_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshBooleanFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshBooleanFunctions(UGeometryScriptLibrary_MeshBooleanFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshBooleanFunctions(const UGeometryScriptLibrary_MeshBooleanFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshBooleanFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBooleanFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBooleanFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshBooleanFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_161_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_164_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_164_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshBooleanFunctions;

// ********** End Class UGeometryScriptLibrary_MeshBooleanFunctions ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h

// ********** Begin Enum EGeometryScriptBooleanOperation *******************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBOOLEANOPERATION(op) \
	op(EGeometryScriptBooleanOperation::Union) \
	op(EGeometryScriptBooleanOperation::Intersection) \
	op(EGeometryScriptBooleanOperation::Subtract) \
	op(EGeometryScriptBooleanOperation::TrimInside) \
	op(EGeometryScriptBooleanOperation::TrimOutside) \
	op(EGeometryScriptBooleanOperation::NewPolyGroupInside) \
	op(EGeometryScriptBooleanOperation::NewPolyGroupOutside) 

enum class EGeometryScriptBooleanOperation : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBooleanOperation> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBooleanOperation>();
// ********** End Enum EGeometryScriptBooleanOperation *********************************************

// ********** Begin Enum EGeometryScriptBooleanOutputSpace *****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBOOLEANOUTPUTSPACE(op) \
	op(EGeometryScriptBooleanOutputSpace::TargetTransformSpace) \
	op(EGeometryScriptBooleanOutputSpace::ToolTransformSpace) \
	op(EGeometryScriptBooleanOutputSpace::SharedTransformSpace) 

enum class EGeometryScriptBooleanOutputSpace : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBooleanOutputSpace> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBooleanOutputSpace>();
// ********** End Enum EGeometryScriptBooleanOutputSpace *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
