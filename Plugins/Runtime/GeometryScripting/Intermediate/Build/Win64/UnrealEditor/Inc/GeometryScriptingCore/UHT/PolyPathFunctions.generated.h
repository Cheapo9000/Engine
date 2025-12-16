// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/PolyPathFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_PolyPathFunctions_generated_h
#error "PolyPathFunctions.generated.h already included, missing '#pragma once' in PolyPathFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_PolyPathFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
enum class EGeometryScriptAxis : uint8;
struct FGeometryScriptPolyPath;
struct FGeometryScriptSplineSamplingOptions;

// ********** Begin ScriptStruct FGeometryScriptSplineSamplingOptions ******************************
struct Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSplineSamplingOptions;
// ********** End ScriptStruct FGeometryScriptSplineSamplingOptions ********************************

// ********** Begin Class UGeometryScriptLibrary_PolyPathFunctions *********************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_ArrayOfVector2DToGeometryScriptPolyPath); \
	DECLARE_FUNCTION(execConv_ArrayToGeometryScriptPolyPath); \
	DECLARE_FUNCTION(execConv_GeometryScriptPolyPathToArrayOfVector2D); \
	DECLARE_FUNCTION(execConv_GeometryScriptPolyPathToArray); \
	DECLARE_FUNCTION(execConvertArrayOfVector2DToPolyPath); \
	DECLARE_FUNCTION(execConvertPolyPathToArrayOfVector2D); \
	DECLARE_FUNCTION(execConvertArrayToPolyPath); \
	DECLARE_FUNCTION(execConvertPolyPathToArray); \
	DECLARE_FUNCTION(execSampleSplineToTransforms); \
	DECLARE_FUNCTION(execConvertSplineToPolyPath); \
	DECLARE_FUNCTION(execCreateArcPath2D); \
	DECLARE_FUNCTION(execCreateCirclePath2D); \
	DECLARE_FUNCTION(execCreateArcPath3D); \
	DECLARE_FUNCTION(execCreateCirclePath3D); \
	DECLARE_FUNCTION(execFlattenTo2DOnAxis); \
	DECLARE_FUNCTION(execGetNearestVertexIndex); \
	DECLARE_FUNCTION(execGetPolyPathArcLength); \
	DECLARE_FUNCTION(execGetPolyPathTangent); \
	DECLARE_FUNCTION(execGetPolyPathVertex); \
	DECLARE_FUNCTION(execGetPolyPathLastIndex); \
	DECLARE_FUNCTION(execGetPolyPathNumVertices);


struct Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_PolyPathFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_PolyPathFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_PolyPathFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_PolyPathFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_PolyPathFunctions(UGeometryScriptLibrary_PolyPathFunctions&&) = delete; \
	UGeometryScriptLibrary_PolyPathFunctions(const UGeometryScriptLibrary_PolyPathFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_PolyPathFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_PolyPathFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_PolyPathFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_PolyPathFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_67_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_PolyPathFunctions;

// ********** End Class UGeometryScriptLibrary_PolyPathFunctions ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h

// ********** Begin Enum EGeometryScriptSampleSpacing **********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTSAMPLESPACING(op) \
	op(EGeometryScriptSampleSpacing::UniformDistance) \
	op(EGeometryScriptSampleSpacing::UniformTime) \
	op(EGeometryScriptSampleSpacing::ErrorTolerance) 

enum class EGeometryScriptSampleSpacing : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSampleSpacing> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptSampleSpacing>();
// ********** End Enum EGeometryScriptSampleSpacing ************************************************

// ********** Begin Enum EGeometryScriptEvaluateSplineRange ****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTEVALUATESPLINERANGE(op) \
	op(EGeometryScriptEvaluateSplineRange::FullSpline) \
	op(EGeometryScriptEvaluateSplineRange::DistanceRange) \
	op(EGeometryScriptEvaluateSplineRange::TimeRange_ConstantSpeed) \
	op(EGeometryScriptEvaluateSplineRange::TimeRange_VariableSpeed) 

enum class EGeometryScriptEvaluateSplineRange : uint8;
template<> struct TIsUEnumClass<EGeometryScriptEvaluateSplineRange> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptEvaluateSplineRange>();
// ********** End Enum EGeometryScriptEvaluateSplineRange ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
