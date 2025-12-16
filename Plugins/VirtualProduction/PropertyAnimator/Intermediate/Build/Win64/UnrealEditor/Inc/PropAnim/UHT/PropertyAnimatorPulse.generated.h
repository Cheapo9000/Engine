// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorPulse.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorPulse_generated_h
#error "PropertyAnimatorPulse.generated.h already included, missing '#pragma once' in PropertyAnimatorPulse.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorPulse_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorPulse ***************************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h_17_ACCESSORS \
static void GetEasingFunction_WrapperImpl(const void* Object, void* OutValue); \
static void SetEasingFunction_WrapperImpl(void* Object, const void* InValue); \
static void GetEasingType_WrapperImpl(const void* Object, void* OutValue); \
static void SetEasingType_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorPulse_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorPulse_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorPulse(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorPulse_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorPulse_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorPulse, UPropertyAnimatorNumericBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorPulse_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorPulse)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATOR_API UPropertyAnimatorPulse(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorPulse(UPropertyAnimatorPulse&&) = delete; \
	UPropertyAnimatorPulse(const UPropertyAnimatorPulse&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorPulse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorPulse); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorPulse) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorPulse();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorPulse;

// ********** End Class UPropertyAnimatorPulse *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorPulse_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
