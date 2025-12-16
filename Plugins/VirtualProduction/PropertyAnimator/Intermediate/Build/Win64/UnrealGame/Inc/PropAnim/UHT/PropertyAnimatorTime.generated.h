// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorTime.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorTime_generated_h
#error "PropertyAnimatorTime.generated.h already included, missing '#pragma once' in PropertyAnimatorTime.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorTime_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorTime ****************************************************
struct Z_Construct_UClass_UPropertyAnimatorTime_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorTime_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorTime_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorTime(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorTime_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorTime_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorTime, UPropertyAnimatorNumericBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorTime_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorTime)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorTime_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATOR_API UPropertyAnimatorTime(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorTime(UPropertyAnimatorTime&&) = delete; \
	UPropertyAnimatorTime(const UPropertyAnimatorTime&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorTime); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorTime) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorTime();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorTime_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorTime_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorTime_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorTime_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorTime;

// ********** End Class UPropertyAnimatorTime ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorTime_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
