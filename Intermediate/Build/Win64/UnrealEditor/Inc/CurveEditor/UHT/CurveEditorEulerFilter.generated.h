// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorEulerFilter.h"

#ifdef CURVEEDITOR_CurveEditorEulerFilter_generated_h
#error "CurveEditorEulerFilter.generated.h already included, missing '#pragma once' in CurveEditorEulerFilter.h"
#endif
#define CURVEEDITOR_CurveEditorEulerFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurveEditorEulerFilter **************************************************
struct Z_Construct_UClass_UCurveEditorEulerFilter_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorEulerFilter_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorEulerFilter(); \
	friend struct ::Z_Construct_UClass_UCurveEditorEulerFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorEulerFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorEulerFilter, UCurveEditorFilterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorEulerFilter_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorEulerFilter)


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorEulerFilter(UCurveEditorEulerFilter&&) = delete; \
	UCurveEditorEulerFilter(const UCurveEditorEulerFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CURVEEDITOR_API, UCurveEditorEulerFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorEulerFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorEulerFilter) \
	CURVEEDITOR_API virtual ~UCurveEditorEulerFilter();


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_24_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorEulerFilter;

// ********** End Class UCurveEditorEulerFilter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
