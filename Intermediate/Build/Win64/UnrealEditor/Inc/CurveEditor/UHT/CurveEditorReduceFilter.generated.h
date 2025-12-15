// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorReduceFilter.h"

#ifdef CURVEEDITOR_CurveEditorReduceFilter_generated_h
#error "CurveEditorReduceFilter.generated.h already included, missing '#pragma once' in CurveEditorReduceFilter.h"
#endif
#define CURVEEDITOR_CurveEditorReduceFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurveEditorReduceFilter *************************************************
struct Z_Construct_UClass_UCurveEditorReduceFilter_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorReduceFilter_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorReduceFilter(); \
	friend struct ::Z_Construct_UClass_UCurveEditorReduceFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorReduceFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorReduceFilter, UCurveEditorFilterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorReduceFilter_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorReduceFilter)


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorReduceFilter(UCurveEditorReduceFilter&&) = delete; \
	UCurveEditorReduceFilter(const UCurveEditorReduceFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorReduceFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorReduceFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorReduceFilter) \
	NO_API virtual ~UCurveEditorReduceFilter();


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_19_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorReduceFilter;

// ********** End Class UCurveEditorReduceFilter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
