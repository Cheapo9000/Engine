// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorBakeFilter.h"

#ifdef CURVEEDITOR_CurveEditorBakeFilter_generated_h
#error "CurveEditorBakeFilter.generated.h already included, missing '#pragma once' in CurveEditorBakeFilter.h"
#endif
#define CURVEEDITOR_CurveEditorBakeFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCurveEditorBakeFilterRange ***************************************
struct Z_Construct_UScriptStruct_FCurveEditorBakeFilterRange_Statics;
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveEditorBakeFilterRange_Statics; \
	CURVEEDITOR_API static class UScriptStruct* StaticStruct();


struct FCurveEditorBakeFilterRange;
// ********** End ScriptStruct FCurveEditorBakeFilterRange *****************************************

// ********** Begin Class UCurveEditorBakeFilter ***************************************************
struct Z_Construct_UClass_UCurveEditorBakeFilter_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorBakeFilter_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorBakeFilter(); \
	friend struct ::Z_Construct_UClass_UCurveEditorBakeFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorBakeFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorBakeFilter, UCurveEditorFilterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorBakeFilter_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorBakeFilter)


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorBakeFilter(UCurveEditorBakeFilter&&) = delete; \
	UCurveEditorBakeFilter(const UCurveEditorBakeFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CURVEEDITOR_API, UCurveEditorBakeFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorBakeFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorBakeFilter) \
	CURVEEDITOR_API virtual ~UCurveEditorBakeFilter();


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_35_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorBakeFilter;

// ********** End Class UCurveEditorBakeFilter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
