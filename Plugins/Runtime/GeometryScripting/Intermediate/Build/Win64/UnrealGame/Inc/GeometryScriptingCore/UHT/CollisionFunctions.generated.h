// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/CollisionFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_CollisionFunctions_generated_h
#error "CollisionFunctions.generated.h already included, missing '#pragma once' in CollisionFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_CollisionFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshComponent;
class UGeometryScriptDebug;
class UPrimitiveComponent;
class UStaticMesh;
struct FComputeNegativeSpaceOptions;
struct FGeometryScriptCollisionFromMeshOptions;
struct FGeometryScriptConvexHullApproximationOptions;
struct FGeometryScriptConvexHullSimplificationOptions;
struct FGeometryScriptDynamicMeshBVH;
struct FGeometryScriptMergeSimpleCollisionOptions;
struct FGeometryScriptSetSimpleCollisionOptions;
struct FGeometryScriptSetStaticMeshCollisionOptions;
struct FGeometryScriptSimpleCollision;
struct FGeometryScriptSphereCovering;
struct FGeometryScriptTransformCollisionOptions;
struct FNavigableConvexDecompositionOptions;

// ********** Begin ScriptStruct FGeometryScriptCollisionFromMeshOptions ***************************
struct Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCollisionFromMeshOptions;
// ********** End ScriptStruct FGeometryScriptCollisionFromMeshOptions *****************************

// ********** Begin ScriptStruct FGeometryScriptSetSimpleCollisionOptions **************************
struct Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSetSimpleCollisionOptions;
// ********** End ScriptStruct FGeometryScriptSetSimpleCollisionOptions ****************************

// ********** Begin ScriptStruct FGeometryScriptSetStaticMeshCollisionOptions **********************
struct Z_Construct_UScriptStruct_FGeometryScriptSetStaticMeshCollisionOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSetStaticMeshCollisionOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSetStaticMeshCollisionOptions;
// ********** End ScriptStruct FGeometryScriptSetStaticMeshCollisionOptions ************************

// ********** Begin ScriptStruct FNegativeSpaceDirectionalToleranceScale ***************************
struct Z_Construct_UScriptStruct_FNegativeSpaceDirectionalToleranceScale_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNegativeSpaceDirectionalToleranceScale_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FNegativeSpaceDirectionalToleranceScale;
// ********** End ScriptStruct FNegativeSpaceDirectionalToleranceScale *****************************

// ********** Begin ScriptStruct FComputeNegativeSpaceOptions **************************************
struct Z_Construct_UScriptStruct_FComputeNegativeSpaceOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_157_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComputeNegativeSpaceOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FComputeNegativeSpaceOptions;
// ********** End ScriptStruct FComputeNegativeSpaceOptions ****************************************

// ********** Begin ScriptStruct FNavigableConvexDecompositionOptions ******************************
struct Z_Construct_UScriptStruct_FNavigableConvexDecompositionOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_205_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigableConvexDecompositionOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FNavigableConvexDecompositionOptions;
// ********** End ScriptStruct FNavigableConvexDecompositionOptions ********************************

// ********** Begin ScriptStruct FGeometryScriptMergeSimpleCollisionOptions ************************
struct Z_Construct_UScriptStruct_FGeometryScriptMergeSimpleCollisionOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_238_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMergeSimpleCollisionOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMergeSimpleCollisionOptions;
// ********** End ScriptStruct FGeometryScriptMergeSimpleCollisionOptions **************************

// ********** Begin ScriptStruct FGeometryScriptConvexHullSimplificationOptions ********************
struct Z_Construct_UScriptStruct_FGeometryScriptConvexHullSimplificationOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_295_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptConvexHullSimplificationOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptConvexHullSimplificationOptions;
// ********** End ScriptStruct FGeometryScriptConvexHullSimplificationOptions **********************

// ********** Begin ScriptStruct FGeometryScriptConvexHullApproximationOptions *********************
struct Z_Construct_UScriptStruct_FGeometryScriptConvexHullApproximationOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_321_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptConvexHullApproximationOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptConvexHullApproximationOptions;
// ********** End ScriptStruct FGeometryScriptConvexHullApproximationOptions ***********************

// ********** Begin ScriptStruct FGeometryScriptTransformCollisionOptions **************************
struct Z_Construct_UScriptStruct_FGeometryScriptTransformCollisionOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_348_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptTransformCollisionOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptTransformCollisionOptions;
// ********** End ScriptStruct FGeometryScriptTransformCollisionOptions ****************************

// ********** Begin Class UGeometryScriptLibrary_CollisionFunctions ********************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_369_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_SphereArrayToGeometryScriptSphereCovering); \
	DECLARE_FUNCTION(execConv_GeometryScriptSphereCoveringToSphereArray); \
	DECLARE_FUNCTION(execComputeNavigableConvexDecomposition); \
	DECLARE_FUNCTION(execComputeNegativeSpace); \
	DECLARE_FUNCTION(execMergeSimpleCollisionShapes); \
	DECLARE_FUNCTION(execApproximateConvexHullsWithSimplerCollisionShapes); \
	DECLARE_FUNCTION(execSimplifyConvexHulls); \
	DECLARE_FUNCTION(execCombineSimpleCollisionArray); \
	DECLARE_FUNCTION(execCombineSimpleCollision); \
	DECLARE_FUNCTION(execTransformSimpleCollisionShapes); \
	DECLARE_FUNCTION(execGetSimpleCollisionShapeCount); \
	DECLARE_FUNCTION(execGenerateCollisionFromMesh); \
	DECLARE_FUNCTION(execSetSimpleCollisionOfStaticMesh); \
	DECLARE_FUNCTION(execGetSimpleCollisionFromStaticMesh); \
	DECLARE_FUNCTION(execSetSimpleCollisionOfDynamicMeshComponent); \
	DECLARE_FUNCTION(execGetSimpleCollisionFromComponent); \
	DECLARE_FUNCTION(execResetSimpleCollision); \
	DECLARE_FUNCTION(execResetDynamicMeshCollision); \
	DECLARE_FUNCTION(execSetDynamicMeshCollisionFromMesh); \
	DECLARE_FUNCTION(execStaticMeshHasCustomizedCollision); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionFromComponent); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionFromMesh); \
	DECLARE_FUNCTION(execSetStaticMeshCustomComplexCollision);


struct Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_369_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_CollisionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_CollisionFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_369_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_CollisionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_CollisionFunctions(UGeometryScriptLibrary_CollisionFunctions&&) = delete; \
	UGeometryScriptLibrary_CollisionFunctions(const UGeometryScriptLibrary_CollisionFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_CollisionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_CollisionFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_CollisionFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_CollisionFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_366_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_369_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_369_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_369_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_369_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_CollisionFunctions;

// ********** End Class UGeometryScriptLibrary_CollisionFunctions **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h

// ********** Begin Enum EGeometryScriptCollisionGenerationMethod **********************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTCOLLISIONGENERATIONMETHOD(op) \
	op(EGeometryScriptCollisionGenerationMethod::AlignedBoxes) \
	op(EGeometryScriptCollisionGenerationMethod::OrientedBoxes) \
	op(EGeometryScriptCollisionGenerationMethod::MinimalSpheres) \
	op(EGeometryScriptCollisionGenerationMethod::Capsules) \
	op(EGeometryScriptCollisionGenerationMethod::ConvexHulls) \
	op(EGeometryScriptCollisionGenerationMethod::SweptHulls) \
	op(EGeometryScriptCollisionGenerationMethod::MinVolumeShapes) \
	op(EGeometryScriptCollisionGenerationMethod::LevelSets) 

enum class EGeometryScriptCollisionGenerationMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptCollisionGenerationMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptCollisionGenerationMethod>();
// ********** End Enum EGeometryScriptCollisionGenerationMethod ************************************

// ********** Begin Enum EGeometryScriptSweptHullAxis **********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTSWEPTHULLAXIS(op) \
	op(EGeometryScriptSweptHullAxis::X) \
	op(EGeometryScriptSweptHullAxis::Y) \
	op(EGeometryScriptSweptHullAxis::Z) \
	op(EGeometryScriptSweptHullAxis::SmallestBoxDimension) \
	op(EGeometryScriptSweptHullAxis::SmallestVolume) 

enum class EGeometryScriptSweptHullAxis : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSweptHullAxis> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptSweptHullAxis>();
// ********** End Enum EGeometryScriptSweptHullAxis ************************************************

// ********** Begin Enum ENegativeSpaceSampleMethod ************************************************
#define FOREACH_ENUM_ENEGATIVESPACESAMPLEMETHOD(op) \
	op(ENegativeSpaceSampleMethod::Uniform) \
	op(ENegativeSpaceSampleMethod::VoxelSearch) \
	op(ENegativeSpaceSampleMethod::NavigableVoxelSearch) 

enum class ENegativeSpaceSampleMethod : uint8;
template<> struct TIsUEnumClass<ENegativeSpaceSampleMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENegativeSpaceSampleMethod>();
// ********** End Enum ENegativeSpaceSampleMethod **************************************************

// ********** Begin Enum EGeometryScriptConvexHullSimplifyMethod ***********************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTCONVEXHULLSIMPLIFYMETHOD(op) \
	op(EGeometryScriptConvexHullSimplifyMethod::MeshQSlim) \
	op(EGeometryScriptConvexHullSimplifyMethod::AngleTolerance) 

enum class EGeometryScriptConvexHullSimplifyMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptConvexHullSimplifyMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptConvexHullSimplifyMethod>();
// ********** End Enum EGeometryScriptConvexHullSimplifyMethod *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
