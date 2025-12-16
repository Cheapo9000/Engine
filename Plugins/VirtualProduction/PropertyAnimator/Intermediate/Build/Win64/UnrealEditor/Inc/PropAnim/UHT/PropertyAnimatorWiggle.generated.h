// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorWiggle.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorWiggle_generated_h
#error "PropertyAnimatorWiggle.generated.h already included, missing '#pragma once' in PropertyAnimatorWiggle.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorWiggle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorWiggle **************************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h_14_ACCESSORS \
static void GetFrequency_WrapperImpl(const void* Object, void* OutValue); \
static void SetFrequency_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorWiggle_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorWiggle_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorWiggle(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorWiggle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorWiggle_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorWiggle, UPropertyAnimatorNumericBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorWiggle_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorWiggle)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorWiggle(UPropertyAnimatorWiggle&&) = delete; \
	UPropertyAnimatorWiggle(const UPropertyAnimatorWiggle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorWiggle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorWiggle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorWiggle) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorWiggle();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h_14_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorWiggle;

// ********** End Class UPropertyAnimatorWiggle ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorWiggle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
