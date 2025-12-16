// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/VectorMathFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_VectorMathFunctions_generated_h
#error "VectorMathFunctions.generated.h already included, missing '#pragma once' in VectorMathFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_VectorMathFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeometryScriptScalarList;
struct FGeometryScriptVectorList;

// ********** Begin Class UGeometryScriptLibrary_VectorMathFunctions *******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstantScalarMultiplyInPlace); \
	DECLARE_FUNCTION(execConstantScalarMultiply); \
	DECLARE_FUNCTION(execScalarMultiplyInPlace); \
	DECLARE_FUNCTION(execScalarMultiply); \
	DECLARE_FUNCTION(execScalarBlendInPlace); \
	DECLARE_FUNCTION(execScalarBlend); \
	DECLARE_FUNCTION(execScalarInvertInPlace); \
	DECLARE_FUNCTION(execScalarInvert); \
	DECLARE_FUNCTION(execVectorToScalar); \
	DECLARE_FUNCTION(execConstantVectorMultiplyInPlace); \
	DECLARE_FUNCTION(execConstantVectorMultiply); \
	DECLARE_FUNCTION(execScalarVectorMultiplyInPlace); \
	DECLARE_FUNCTION(execScalarVectorMultiply); \
	DECLARE_FUNCTION(execVectorBlendInPlace); \
	DECLARE_FUNCTION(execVectorBlend); \
	DECLARE_FUNCTION(execVectorPlaneProjectInPlace); \
	DECLARE_FUNCTION(execVectorInverseTransformInPlace); \
	DECLARE_FUNCTION(execVectorTransformInPlace); \
	DECLARE_FUNCTION(execVectorNormalizeInPlace); \
	DECLARE_FUNCTION(execVectorCross); \
	DECLARE_FUNCTION(execVectorDot); \
	DECLARE_FUNCTION(execVectorLength);


struct Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_VectorMathFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_VectorMathFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_VectorMathFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_VectorMathFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_VectorMathFunctions(UGeometryScriptLibrary_VectorMathFunctions&&) = delete; \
	UGeometryScriptLibrary_VectorMathFunctions(const UGeometryScriptLibrary_VectorMathFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_VectorMathFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_VectorMathFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_VectorMathFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_VectorMathFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_VectorMathFunctions;

// ********** End Class UGeometryScriptLibrary_VectorMathFunctions *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
