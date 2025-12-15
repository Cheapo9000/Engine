// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorSmartSnapFilter.h"

#ifdef CURVEEDITOR_CurveEditorSmartSnapFilter_generated_h
#error "CurveEditorSmartSnapFilter.generated.h already included, missing '#pragma once' in CurveEditorSmartSnapFilter.h"
#endif
#define CURVEEDITOR_CurveEditorSmartSnapFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurveEditorSmartSnapFilter **********************************************
struct Z_Construct_UClass_UCurveEditorSmartSnapFilter_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorSmartSnapFilter_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartSnapFilter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorSmartSnapFilter(); \
	friend struct ::Z_Construct_UClass_UCurveEditorSmartSnapFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorSmartSnapFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorSmartSnapFilter, UCurveEditorFilterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorSmartSnapFilter_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorSmartSnapFilter)


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartSnapFilter_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CURVEEDITOR_API UCurveEditorSmartSnapFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorSmartSnapFilter(UCurveEditorSmartSnapFilter&&) = delete; \
	UCurveEditorSmartSnapFilter(const UCurveEditorSmartSnapFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CURVEEDITOR_API, UCurveEditorSmartSnapFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorSmartSnapFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEditorSmartSnapFilter) \
	CURVEEDITOR_API virtual ~UCurveEditorSmartSnapFilter();


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartSnapFilter_h_17_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartSnapFilter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartSnapFilter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartSnapFilter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorSmartSnapFilter;

// ********** End Class UCurveEditorSmartSnapFilter ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorSmartSnapFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
