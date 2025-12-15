// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorGaussianFilter.h"

#ifdef CURVEEDITOR_CurveEditorGaussianFilter_generated_h
#error "CurveEditorGaussianFilter.generated.h already included, missing '#pragma once' in CurveEditorGaussianFilter.h"
#endif
#define CURVEEDITOR_CurveEditorGaussianFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGaussianParams ***************************************************
struct Z_Construct_UScriptStruct_FGaussianParams_Statics;
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorGaussianFilter_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGaussianParams_Statics; \
	CURVEEDITOR_API static class UScriptStruct* StaticStruct();


struct FGaussianParams;
// ********** End ScriptStruct FGaussianParams *****************************************************

// ********** Begin Class UCurveEditorGaussianFilter ***********************************************
struct Z_Construct_UClass_UCurveEditorGaussianFilter_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorGaussianFilter_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorGaussianFilter_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorGaussianFilter(); \
	friend struct ::Z_Construct_UClass_UCurveEditorGaussianFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorGaussianFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorGaussianFilter, UCurveEditorFilterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorGaussianFilter_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorGaussianFilter)


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorGaussianFilter_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorGaussianFilter(UCurveEditorGaussianFilter&&) = delete; \
	UCurveEditorGaussianFilter(const UCurveEditorGaussianFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorGaussianFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorGaussianFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorGaussianFilter) \
	NO_API virtual ~UCurveEditorGaussianFilter();


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorGaussianFilter_h_34_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorGaussianFilter_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorGaussianFilter_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorGaussianFilter_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorGaussianFilter;

// ********** End Class UCurveEditorGaussianFilter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorGaussianFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
