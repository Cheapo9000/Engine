// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveVector.h"

#ifdef ENGINE_CurveVector_generated_h
#error "CurveVector.generated.h already included, missing '#pragma once' in CurveVector.h"
#endif
#define ENGINE_CurveVector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRuntimeVectorCurve ***********************************************
struct Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRuntimeVectorCurve;
// ********** End ScriptStruct FRuntimeVectorCurve *************************************************

// ********** Begin Class UCurveVector *************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVectorValue);


struct Z_Construct_UClass_UCurveVector_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCurveVector(); \
	friend struct ::Z_Construct_UClass_UCurveVector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCurveVector_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveVector, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCurveVector_NoRegister) \
	DECLARE_SERIALIZER(UCurveVector)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveVector); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveVector(UCurveVector&&) = delete; \
	UCurveVector(const UCurveVector&) = delete; \
	ENGINE_API virtual ~UCurveVector();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveVector;

// ********** End Class UCurveVector ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
