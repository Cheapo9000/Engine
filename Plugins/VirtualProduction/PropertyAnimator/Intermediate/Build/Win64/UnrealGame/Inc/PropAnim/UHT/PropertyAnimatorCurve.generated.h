// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorCurve.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorCurve_generated_h
#error "PropertyAnimatorCurve.generated.h already included, missing '#pragma once' in PropertyAnimatorCurve.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyAnimatorCurveEasing **************************************
struct Z_Construct_UScriptStruct_FPropertyAnimatorCurveEasing_Statics;
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAnimatorCurveEasing_Statics; \
	PROPERTYANIMATOR_API static class UScriptStruct* StaticStruct();


struct FPropertyAnimatorCurveEasing;
// ********** End ScriptStruct FPropertyAnimatorCurveEasing ****************************************

// ********** Begin Class UPropertyAnimatorCurve ***************************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_29_ACCESSORS \
static void GetbEaseInEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEaseInEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetEaseIn_WrapperImpl(const void* Object, void* OutValue); \
static void SetEaseIn_WrapperImpl(void* Object, const void* InValue); \
static void GetWaveCurve_WrapperImpl(const void* Object, void* OutValue); \
static void SetWaveCurve_WrapperImpl(void* Object, const void* InValue); \
static void GetbEaseOutEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEaseOutEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetEaseOut_WrapperImpl(const void* Object, void* OutValue); \
static void SetEaseOut_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorCurve_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorCurve_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCurve(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCurve, UPropertyAnimatorNumericBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorCurve_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCurve)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCurve(UPropertyAnimatorCurve&&) = delete; \
	UPropertyAnimatorCurve(const UPropertyAnimatorCurve&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCurve); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCurve) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorCurve();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_29_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCurve;

// ********** End Class UPropertyAnimatorCurve *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
