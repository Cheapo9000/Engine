// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/PointSetFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_PointSetFunctions_generated_h
#error "PointSetFunctions.generated.h already included, missing '#pragma once' in PointSetFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_PointSetFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryScriptDebug;
enum class EGeometryScriptCoordinateSpace : uint8;
struct FGeometryScriptIndexList;
struct FGeometryScriptPointClusteringOptions;
struct FGeometryScriptPointFlatteningOptions;
struct FGeometryScriptPointPriorityOptions;

// ********** Begin ScriptStruct FGeometryScriptPointClusteringOptions *****************************
struct Z_Construct_UScriptStruct_FGeometryScriptPointClusteringOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPointClusteringOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPointClusteringOptions;
// ********** End ScriptStruct FGeometryScriptPointClusteringOptions *******************************

// ********** Begin ScriptStruct FGeometryScriptPointPriorityOptions *******************************
struct Z_Construct_UScriptStruct_FGeometryScriptPointPriorityOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPointPriorityOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPointPriorityOptions;
// ********** End ScriptStruct FGeometryScriptPointPriorityOptions *********************************

// ********** Begin ScriptStruct FGeometryScriptPointFlatteningOptions *****************************
struct Z_Construct_UScriptStruct_FGeometryScriptPointFlatteningOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPointFlatteningOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPointFlatteningOptions;
// ********** End ScriptStruct FGeometryScriptPointFlatteningOptions *******************************

// ********** Begin Class UGeometryScriptLibrary_PointSetSamplingFunctions *************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPointsFromIndexList); \
	DECLARE_FUNCTION(execMakeBoundingBoxFromPoints); \
	DECLARE_FUNCTION(execUnflattenPoints); \
	DECLARE_FUNCTION(execFlattenPoints); \
	DECLARE_FUNCTION(execOffsetTransforms); \
	DECLARE_FUNCTION(execTransformsToPoints); \
	DECLARE_FUNCTION(execDownsamplePoints); \
	DECLARE_FUNCTION(execKMeansClusterToArrays); \
	DECLARE_FUNCTION(execKMeansClusterToIDs);


struct Z_Construct_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_PointSetSamplingFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_PointSetSamplingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_PointSetSamplingFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_PointSetSamplingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_PointSetSamplingFunctions(UGeometryScriptLibrary_PointSetSamplingFunctions&&) = delete; \
	UGeometryScriptLibrary_PointSetSamplingFunctions(const UGeometryScriptLibrary_PointSetSamplingFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_PointSetSamplingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_PointSetSamplingFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_PointSetSamplingFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_PointSetSamplingFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_81_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_PointSetSamplingFunctions;

// ********** End Class UGeometryScriptLibrary_PointSetSamplingFunctions ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h

// ********** Begin Enum EGeometryScriptInitKMeansMethod *******************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTINITKMEANSMETHOD(op) \
	op(EGeometryScriptInitKMeansMethod::Random) \
	op(EGeometryScriptInitKMeansMethod::UniformSpacing) 

enum class EGeometryScriptInitKMeansMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptInitKMeansMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptInitKMeansMethod>();
// ********** End Enum EGeometryScriptInitKMeansMethod *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
