// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshPrimitiveFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshPrimitiveFunctions_generated_h
#error "MeshPrimitiveFunctions.generated.h already included, missing '#pragma once' in MeshPrimitiveFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshPrimitiveFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptPrimitiveOriginMode : uint8;
struct FGeometryScriptConstrainedDelaunayTriangulationOptions;
struct FGeometryScriptGeneralPolygonList;
struct FGeometryScriptPolygonsTriangulationOptions;
struct FGeometryScriptPrimitiveOptions;
struct FGeometryScriptRevolveOptions;
struct FGeometryScriptSimpleCollision;
struct FGeometryScriptSimpleCollisionTriangulationOptions;
struct FGeometryScriptSphereCovering;
struct FGeometryScriptVoronoiOptions;
struct FOrientedBox;

// ********** Begin ScriptStruct FGeometryScriptPrimitiveOptions ***********************************
struct Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPrimitiveOptions;
// ********** End ScriptStruct FGeometryScriptPrimitiveOptions *************************************

// ********** Begin ScriptStruct FGeometryScriptRevolveOptions *************************************
struct Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptRevolveOptions;
// ********** End ScriptStruct FGeometryScriptRevolveOptions ***************************************

// ********** Begin ScriptStruct FGeometryScriptVoronoiOptions *************************************
struct Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptVoronoiOptions;
// ********** End ScriptStruct FGeometryScriptVoronoiOptions ***************************************

// ********** Begin ScriptStruct FGeometryScriptConstrainedDelaunayTriangulationOptions ************
struct Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptConstrainedDelaunayTriangulationOptions;
// ********** End ScriptStruct FGeometryScriptConstrainedDelaunayTriangulationOptions **************

// ********** Begin ScriptStruct FGeometryScriptPolygonsTriangulationOptions ***********************
struct Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPolygonsTriangulationOptions;
// ********** End ScriptStruct FGeometryScriptPolygonsTriangulationOptions *************************

// ********** Begin Class UGeometryScriptLibrary_MeshPrimitiveFunctions ****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAppendRoundRectangle_Compatibility_5_0); \
	DECLARE_FUNCTION(execAppendRectangle_Compatibility_5_0); \
	DECLARE_FUNCTION(execAppendSphereCovering); \
	DECLARE_FUNCTION(execAppendSimpleCollisionShapes); \
	DECLARE_FUNCTION(execAppendPolygonListTriangulation); \
	DECLARE_FUNCTION(execCreateConstrainedEdgesChain); \
	DECLARE_FUNCTION(execCreateConstrainedEdgesLoop); \
	DECLARE_FUNCTION(execAppendDelaunayTriangulation2D); \
	DECLARE_FUNCTION(execAppendVoronoiDiagram2D); \
	DECLARE_FUNCTION(execAppendCurvedStairs); \
	DECLARE_FUNCTION(execAppendLinearStairs); \
	DECLARE_FUNCTION(execAppendTriangulatedPolygon3D); \
	DECLARE_FUNCTION(execAppendTriangulatedPolygon); \
	DECLARE_FUNCTION(execAppendDisc); \
	DECLARE_FUNCTION(execAppendRoundRectangleXY); \
	DECLARE_FUNCTION(execAppendRectangleXY); \
	DECLARE_FUNCTION(execAppendSweepPolygon); \
	DECLARE_FUNCTION(execAppendSimpleSweptPolygon); \
	DECLARE_FUNCTION(execAppendSimpleExtrudePolygon); \
	DECLARE_FUNCTION(execAppendSweepPolyline); \
	DECLARE_FUNCTION(execAppendRevolvePath); \
	DECLARE_FUNCTION(execAppendSpiralRevolvePolygon); \
	DECLARE_FUNCTION(execAppendRevolvePolygon); \
	DECLARE_FUNCTION(execAppendTorus); \
	DECLARE_FUNCTION(execAppendCone); \
	DECLARE_FUNCTION(execAppendCylinder); \
	DECLARE_FUNCTION(execAppendCapsuleWithCollision); \
	DECLARE_FUNCTION(execAppendCapsule); \
	DECLARE_FUNCTION(execAppendSphereBoxWithCollision); \
	DECLARE_FUNCTION(execAppendSphereBox); \
	DECLARE_FUNCTION(execAppendSphereLatLongWithCollision); \
	DECLARE_FUNCTION(execAppendSphereLatLong); \
	DECLARE_FUNCTION(execAppendBoundingBoxWithCollision); \
	DECLARE_FUNCTION(execAppendOrientedBoxWithCollision); \
	DECLARE_FUNCTION(execAppendOrientedBox); \
	DECLARE_FUNCTION(execAppendBoundingBox); \
	DECLARE_FUNCTION(execAppendBoxWithCollision); \
	DECLARE_FUNCTION(execAppendBox);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshPrimitiveFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshPrimitiveFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshPrimitiveFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshPrimitiveFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshPrimitiveFunctions(UGeometryScriptLibrary_MeshPrimitiveFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshPrimitiveFunctions(const UGeometryScriptLibrary_MeshPrimitiveFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshPrimitiveFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshPrimitiveFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshPrimitiveFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshPrimitiveFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_157_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_160_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshPrimitiveFunctions;

// ********** End Class UGeometryScriptLibrary_MeshPrimitiveFunctions ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h

// ********** Begin Enum EGeometryScriptPrimitivePolygroupMode *************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTPRIMITIVEPOLYGROUPMODE(op) \
	op(EGeometryScriptPrimitivePolygroupMode::SingleGroup) \
	op(EGeometryScriptPrimitivePolygroupMode::PerFace) \
	op(EGeometryScriptPrimitivePolygroupMode::PerQuad) 

enum class EGeometryScriptPrimitivePolygroupMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPrimitivePolygroupMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptPrimitivePolygroupMode>();
// ********** End Enum EGeometryScriptPrimitivePolygroupMode ***************************************

// ********** Begin Enum EGeometryScriptPrimitiveOriginMode ****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTPRIMITIVEORIGINMODE(op) \
	op(EGeometryScriptPrimitiveOriginMode::Center) \
	op(EGeometryScriptPrimitiveOriginMode::Base) 

enum class EGeometryScriptPrimitiveOriginMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPrimitiveOriginMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptPrimitiveOriginMode>();
// ********** End Enum EGeometryScriptPrimitiveOriginMode ******************************************

// ********** Begin Enum EGeometryScriptPrimitiveUVMode ********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTPRIMITIVEUVMODE(op) \
	op(EGeometryScriptPrimitiveUVMode::Uniform) \
	op(EGeometryScriptPrimitiveUVMode::ScaleToFill) 

enum class EGeometryScriptPrimitiveUVMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPrimitiveUVMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptPrimitiveUVMode>();
// ********** End Enum EGeometryScriptPrimitiveUVMode **********************************************

// ********** Begin Enum EGeometryScriptPolygonFillMode ********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTPOLYGONFILLMODE(op) \
	op(EGeometryScriptPolygonFillMode::All) \
	op(EGeometryScriptPolygonFillMode::Solid) \
	op(EGeometryScriptPolygonFillMode::PositiveWinding) \
	op(EGeometryScriptPolygonFillMode::NonZeroWinding) \
	op(EGeometryScriptPolygonFillMode::NegativeWinding) \
	op(EGeometryScriptPolygonFillMode::OddWinding) 

enum class EGeometryScriptPolygonFillMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPolygonFillMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptPolygonFillMode>();
// ********** End Enum EGeometryScriptPolygonFillMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
