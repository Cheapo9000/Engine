// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorSmartReduceFilter.h"

#ifdef CURVEEDITOR_CurveEditorSmartReduceFilter_generated_h
#error "CurveEditorSmartReduceFilter.generated.h already included, missing '#pragma once' in CurveEditorSmartReduceFilter.h"
#endif
#define CURVEEDITOR_CurveEditorSmartReduceFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartReduceParams ************************************************
struct Z_Construct_UScriptStruct_FSmartReduceParams_Statics;
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartReduceFilter_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartReduceParams_Statics; \
	CURVEEDITOR_API static class UScriptStruct* StaticStruct();


struct FSmartReduceParams;
// ********** End ScriptStruct FSmartReduceParams **************************************************

// ********** Begin Class UCurveEditorSmartReduceFilter ********************************************
struct Z_Construct_UClass_UCurveEditorSmartReduceFilter_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorSmartReduceFilter_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartReduceFilter_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorSmartReduceFilter(); \
	friend struct ::Z_Construct_UClass_UCurveEditorSmartReduceFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorSmartReduceFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorSmartReduceFilter, UCurveEditorFilterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorSmartReduceFilter_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorSmartReduceFilter)


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartReduceFilter_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorSmartReduceFilter(UCurveEditorSmartReduceFilter&&) = delete; \
	UCurveEditorSmartReduceFilter(const UCurveEditorSmartReduceFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorSmartReduceFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorSmartReduceFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorSmartReduceFilter) \
	NO_API virtual ~UCurveEditorSmartReduceFilter();


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartReduceFilter_h_39_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartReduceFilter_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartReduceFilter_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartReduceFilter_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorSmartReduceFilter;

// ********** End Class UCurveEditorSmartReduceFilter **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartReduceFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
