// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorClock.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorClock_generated_h
#error "PropertyAnimatorClock.generated.h already included, missing '#pragma once' in PropertyAnimatorClock.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorClock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorClock ***************************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h_26_ACCESSORS \
static void GetDisplayFormat_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplayFormat_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplayMask_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplayMask_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorClock_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorClock_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorClock(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorClock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorClock_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorClock, UPropertyAnimatorTextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorClock_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorClock)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorClock(UPropertyAnimatorClock&&) = delete; \
	UPropertyAnimatorClock(const UPropertyAnimatorClock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorClock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorClock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorClock) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorClock();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h_23_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h_26_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorClock;

// ********** End Class UPropertyAnimatorClock *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorClock_h

// ********** Begin Enum EPropertyAnimatorClockMode ************************************************
#define FOREACH_ENUM_EPROPERTYANIMATORCLOCKMODE(op) \
	op(EPropertyAnimatorClockMode::LocalTime) \
	op(EPropertyAnimatorClockMode::Countdown) \
	op(EPropertyAnimatorClockMode::Stopwatch) 

enum class EPropertyAnimatorClockMode : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorClockMode> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorClockMode>();
// ********** End Enum EPropertyAnimatorClockMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
