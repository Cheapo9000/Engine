// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorFFTFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEEDITORTOOLS_CurveEditorFFTFilter_generated_h
#error "CurveEditorFFTFilter.generated.h already included, missing '#pragma once' in CurveEditorFFTFilter.h"
#endif
#define CURVEEDITORTOOLS_CurveEditorFFTFilter_generated_h

#define FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorFFTFilter(); \
	friend struct Z_Construct_UClass_UCurveEditorFFTFilter_Statics; \
public: \
	DECLARE_CLASS(UCurveEditorFFTFilter, UCurveEditorFilterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditorTools"), NO_API) \
	DECLARE_SERIALIZER(UCurveEditorFFTFilter)


#define FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveEditorFFTFilter(UCurveEditorFFTFilter&&); \
	UCurveEditorFFTFilter(const UCurveEditorFFTFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorFFTFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorFFTFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorFFTFilter) \
	NO_API virtual ~UCurveEditorFFTFilter();


#define FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_26_PROLOG
#define FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURVEEDITORTOOLS_API UClass* StaticClass<class UCurveEditorFFTFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h


#define FOREACH_ENUM_ECURVEEDITORFFTFILTERCLASS(op) \
	op(ECurveEditorFFTFilterClass::Butterworth) \
	op(ECurveEditorFFTFilterClass::Chebyshev) 

enum class ECurveEditorFFTFilterClass : uint8;
template<> struct TIsUEnumClass<ECurveEditorFFTFilterClass> { enum { Value = true }; };
template<> CURVEEDITORTOOLS_API UEnum* StaticEnum<ECurveEditorFFTFilterClass>();

#define FOREACH_ENUM_ECURVEEDITORFFTFILTERTYPE(op) \
	op(ECurveEditorFFTFilterType::Lowpass) \
	op(ECurveEditorFFTFilterType::Highpass) 

enum class ECurveEditorFFTFilterType : uint8;
template<> struct TIsUEnumClass<ECurveEditorFFTFilterType> { enum { Value = true }; };
template<> CURVEEDITORTOOLS_API UEnum* StaticEnum<ECurveEditorFFTFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
