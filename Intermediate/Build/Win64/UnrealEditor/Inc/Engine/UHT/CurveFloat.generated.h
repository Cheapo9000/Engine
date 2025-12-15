// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveFloat.h"

#ifdef ENGINE_CurveFloat_generated_h
#error "CurveFloat.generated.h already included, missing '#pragma once' in CurveFloat.h"
#endif
#define ENGINE_CurveFloat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRuntimeFloatCurve ************************************************
struct Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRuntimeFloatCurve;
// ********** End ScriptStruct FRuntimeFloatCurve **************************************************

// ********** Begin Class UCurveFloat **************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetFloatValue);


struct Z_Construct_UClass_UCurveFloat_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCurveFloat(); \
	friend struct ::Z_Construct_UClass_UCurveFloat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCurveFloat_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveFloat, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCurveFloat_NoRegister) \
	DECLARE_SERIALIZER(UCurveFloat)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveFloat); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveFloat(UCurveFloat&&) = delete; \
	UCurveFloat(const UCurveFloat&) = delete; \
	ENGINE_API virtual ~UCurveFloat();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveFloat;

// ********** End Class UCurveFloat ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
