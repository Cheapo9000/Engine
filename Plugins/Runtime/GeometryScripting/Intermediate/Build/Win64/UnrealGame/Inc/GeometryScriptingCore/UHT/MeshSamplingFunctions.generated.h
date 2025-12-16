// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSamplingFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshSamplingFunctions_generated_h
#error "MeshSamplingFunctions.generated.h already included, missing '#pragma once' in MeshSamplingFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSamplingFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshPointSamplingOptions;
struct FGeometryScriptNonUniformPointSamplingOptions;
struct FGeometryScriptRenderCaptureCamera;
struct FGeometryScriptRenderCaptureCamerasForBoxOptions;
struct FGeometryScriptScalarList;

// ********** Begin ScriptStruct FGeometryScriptMeshPointSamplingOptions ***************************
struct Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMeshPointSamplingOptions;
// ********** End ScriptStruct FGeometryScriptMeshPointSamplingOptions *****************************

// ********** Begin ScriptStruct FGeometryScriptNonUniformPointSamplingOptions *********************
struct Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptNonUniformPointSamplingOptions;
// ********** End ScriptStruct FGeometryScriptNonUniformPointSamplingOptions ***********************

// ********** Begin Class UGeometryScriptLibrary_MeshSamplingFunctions *****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComputeRenderCapturePointSampling); \
	DECLARE_FUNCTION(execComputeRenderCaptureCamerasForBox); \
	DECLARE_FUNCTION(execComputeVertexWeightedPointSampling); \
	DECLARE_FUNCTION(execComputeNonUniformPointSampling); \
	DECLARE_FUNCTION(execComputePointSampling); \
	DECLARE_FUNCTION(execComputeUniformRandomPointSampling);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshSamplingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSamplingFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshSamplingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshSamplingFunctions(UGeometryScriptLibrary_MeshSamplingFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshSamplingFunctions(const UGeometryScriptLibrary_MeshSamplingFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshSamplingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSamplingFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSamplingFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshSamplingFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_108_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshSamplingFunctions;

// ********** End Class UGeometryScriptLibrary_MeshSamplingFunctions *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h

// ********** Begin Enum EGeometryScriptSamplingWeightMode *****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTSAMPLINGWEIGHTMODE(op) \
	op(EGeometryScriptSamplingWeightMode::WeightToRadius) \
	op(EGeometryScriptSamplingWeightMode::FilledWeightToRadius) \
	op(EGeometryScriptSamplingWeightMode::WeightedRandom) 

enum class EGeometryScriptSamplingWeightMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSamplingWeightMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptSamplingWeightMode>();
// ********** End Enum EGeometryScriptSamplingWeightMode *******************************************

// ********** Begin Enum EGeometryScriptSamplingDistributionMode ***********************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTSAMPLINGDISTRIBUTIONMODE(op) \
	op(EGeometryScriptSamplingDistributionMode::Uniform) \
	op(EGeometryScriptSamplingDistributionMode::Smaller) \
	op(EGeometryScriptSamplingDistributionMode::Larger) 

enum class EGeometryScriptSamplingDistributionMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSamplingDistributionMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptSamplingDistributionMode>();
// ********** End Enum EGeometryScriptSamplingDistributionMode *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
