// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorNumericBase.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorNumericBase_generated_h
#error "PropertyAnimatorNumericBase.generated.h already included, missing '#pragma once' in PropertyAnimatorNumericBase.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorNumericBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorNumericBase *********************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h_27_ACCESSORS \
static void GetMagnitude_WrapperImpl(const void* Object, void* OutValue); \
static void SetMagnitude_WrapperImpl(void* Object, const void* InValue); \
static void GetCycleMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetCycleMode_WrapperImpl(void* Object, const void* InValue); \
static void GetCycleDuration_WrapperImpl(const void* Object, void* OutValue); \
static void SetCycleDuration_WrapperImpl(void* Object, const void* InValue); \
static void GetCycleGapDuration_WrapperImpl(const void* Object, void* OutValue); \
static void SetCycleGapDuration_WrapperImpl(void* Object, const void* InValue); \
static void GetbRandomTimeOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRandomTimeOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetSeed_WrapperImpl(const void* Object, void* OutValue); \
static void SetSeed_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorNumericBase_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorNumericBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorNumericBase(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorNumericBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorNumericBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorNumericBase, UPropertyAnimatorCoreBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorNumericBase_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorNumericBase)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATOR_API UPropertyAnimatorNumericBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorNumericBase(UPropertyAnimatorNumericBase&&) = delete; \
	UPropertyAnimatorNumericBase(const UPropertyAnimatorNumericBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorNumericBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorNumericBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorNumericBase) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorNumericBase();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h_27_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorNumericBase;

// ********** End Class UPropertyAnimatorNumericBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorNumericBase_h

// ********** Begin Enum EPropertyAnimatorCycleMode ************************************************
#define FOREACH_ENUM_EPROPERTYANIMATORCYCLEMODE(op) \
	op(EPropertyAnimatorCycleMode::None) \
	op(EPropertyAnimatorCycleMode::DoOnce) \
	op(EPropertyAnimatorCycleMode::Loop) \
	op(EPropertyAnimatorCycleMode::PingPong) 

enum class EPropertyAnimatorCycleMode : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorCycleMode> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorCycleMode>();
// ********** End Enum EPropertyAnimatorCycleMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
