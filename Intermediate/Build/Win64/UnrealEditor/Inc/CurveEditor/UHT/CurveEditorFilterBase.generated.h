// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorFilterBase.h"

#ifdef CURVEEDITOR_CurveEditorFilterBase_generated_h
#error "CurveEditorFilterBase.generated.h already included, missing '#pragma once' in CurveEditorFilterBase.h"
#endif
#define CURVEEDITOR_CurveEditorFilterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurveEditorFilterBase ***************************************************
struct Z_Construct_UClass_UCurveEditorFilterBase_Statics;
CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase_NoRegister();

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorFilterBase(); \
	friend struct ::Z_Construct_UClass_UCurveEditorFilterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURVEEDITOR_API UClass* ::Z_Construct_UClass_UCurveEditorFilterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveEditorFilterBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), Z_Construct_UClass_UCurveEditorFilterBase_NoRegister) \
	DECLARE_SERIALIZER(UCurveEditorFilterBase) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CURVEEDITOR_API UCurveEditorFilterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveEditorFilterBase(UCurveEditorFilterBase&&) = delete; \
	UCurveEditorFilterBase(const UCurveEditorFilterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CURVEEDITOR_API, UCurveEditorFilterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorFilterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEditorFilterBase) \
	CURVEEDITOR_API virtual ~UCurveEditorFilterBase();


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_28_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveEditorFilterBase;

// ********** End Class UCurveEditorFilterBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
