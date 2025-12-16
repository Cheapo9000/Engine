// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/ShapeFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_ShapeFunctions_generated_h
#error "ShapeFunctions.generated.h already included, missing '#pragma once' in ShapeFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_ShapeFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGeometryScriptAxis : uint8;
struct FOrientedBox;

// ********** Begin Class UGeometryScriptLibrary_TransformFunctions ********************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTransformAxisPlane); \
	DECLARE_FUNCTION(execGetTransformAxisRay); \
	DECLARE_FUNCTION(execGetTransformAxisVector); \
	DECLARE_FUNCTION(execMakeTransformFromAxes); \
	DECLARE_FUNCTION(execMakeTransformFromZAxis);


struct Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_TransformFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_TransformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_TransformFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_TransformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_TransformFunctions(UGeometryScriptLibrary_TransformFunctions&&) = delete; \
	UGeometryScriptLibrary_TransformFunctions(const UGeometryScriptLibrary_TransformFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_TransformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_TransformFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_TransformFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_TransformFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_TransformFunctions;

// ********** End Class UGeometryScriptLibrary_TransformFunctions **********************************

// ********** Begin Class UGeometryScriptLibrary_RayFunctions **************************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRaySegmentClosestPoint); \
	DECLARE_FUNCTION(execGetRayLineClosestPoint); \
	DECLARE_FUNCTION(execGetRayPlaneIntersection); \
	DECLARE_FUNCTION(execGetRayBoxIntersection); \
	DECLARE_FUNCTION(execGetRaySphereIntersection); \
	DECLARE_FUNCTION(execGetRayClosestPoint); \
	DECLARE_FUNCTION(execGetRayPointDistance); \
	DECLARE_FUNCTION(execGetRayParameter); \
	DECLARE_FUNCTION(execGetRayStartEnd); \
	DECLARE_FUNCTION(execGetRayPoint); \
	DECLARE_FUNCTION(execGetTransformedRay); \
	DECLARE_FUNCTION(execMakeRayFromPointDirection); \
	DECLARE_FUNCTION(execMakeRayFromPoints);


struct Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_RayFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_RayFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_RayFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_RayFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_RayFunctions(UGeometryScriptLibrary_RayFunctions&&) = delete; \
	UGeometryScriptLibrary_RayFunctions(const UGeometryScriptLibrary_RayFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_RayFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_RayFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_RayFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_RayFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_64_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_RayFunctions;

// ********** End Class UGeometryScriptLibrary_RayFunctions ****************************************

// ********** Begin Class UGeometryScriptLibrary_BoxFunctions **************************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestBoxSphereIntersection); \
	DECLARE_FUNCTION(execGetBoxPointDistance); \
	DECLARE_FUNCTION(execFindClosestPointOnBox); \
	DECLARE_FUNCTION(execTestPointInsideBox); \
	DECLARE_FUNCTION(execGetBoxBoxDistance); \
	DECLARE_FUNCTION(execFindBoxBoxIntersection); \
	DECLARE_FUNCTION(execTestBoxBoxIntersection); \
	DECLARE_FUNCTION(execGetTransformedBox); \
	DECLARE_FUNCTION(execGetExpandedBox); \
	DECLARE_FUNCTION(execGetBoxVolumeArea); \
	DECLARE_FUNCTION(execGetBoxFaceCenter); \
	DECLARE_FUNCTION(execGetBoxCorner); \
	DECLARE_FUNCTION(execGetBoxCenterSize); \
	DECLARE_FUNCTION(execMakeBoxFromCenterExtents); \
	DECLARE_FUNCTION(execMakeBoxFromCenterSize);


struct Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_BoxFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_BoxFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_BoxFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_BoxFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_BoxFunctions(UGeometryScriptLibrary_BoxFunctions&&) = delete; \
	UGeometryScriptLibrary_BoxFunctions(const UGeometryScriptLibrary_BoxFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_BoxFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_BoxFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_BoxFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_BoxFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_188_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_BoxFunctions;

// ********** End Class UGeometryScriptLibrary_BoxFunctions ****************************************

// ********** Begin Class UGeometryScriptLibrary_OrientedBoxFunctions ******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_313_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestBoxOrientedBoxIntersection); \
	DECLARE_FUNCTION(execTestOrientedBoxOrientedBoxIntersection); \
	DECLARE_FUNCTION(execFindClosestPointOnOrientedBox); \
	DECLARE_FUNCTION(execTestPointInsideOrOnOrientedBox); \
	DECLARE_FUNCTION(execConvertOrientedBoxToAxisAlignedBox); \
	DECLARE_FUNCTION(execGetTransformedOrientedBox); \
	DECLARE_FUNCTION(execGetExpandedOrientedBox); \
	DECLARE_FUNCTION(execGetOrientedBoxVolumeArea); \
	DECLARE_FUNCTION(execGetOrientedBoxFaceCenter); \
	DECLARE_FUNCTION(execGetOrientedBoxCorner); \
	DECLARE_FUNCTION(execGetOrientedBoxOrientation); \
	DECLARE_FUNCTION(execMakeOrientedBoxFromBox);


struct Z_Construct_UClass_UGeometryScriptLibrary_OrientedBoxFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_OrientedBoxFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_313_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_OrientedBoxFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_OrientedBoxFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_OrientedBoxFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_OrientedBoxFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_OrientedBoxFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_OrientedBoxFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_313_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_OrientedBoxFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_OrientedBoxFunctions(UGeometryScriptLibrary_OrientedBoxFunctions&&) = delete; \
	UGeometryScriptLibrary_OrientedBoxFunctions(const UGeometryScriptLibrary_OrientedBoxFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_OrientedBoxFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_OrientedBoxFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_OrientedBoxFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_OrientedBoxFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_310_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_313_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_313_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_313_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_313_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_OrientedBoxFunctions;

// ********** End Class UGeometryScriptLibrary_OrientedBoxFunctions ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
