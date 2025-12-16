// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorOscillate.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorOscillate_generated_h
#error "PropertyAnimatorOscillate.generated.h already included, missing '#pragma once' in PropertyAnimatorOscillate.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorOscillate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorOscillate ***********************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h_25_ACCESSORS \
static void GetOscillateFunction_WrapperImpl(const void* Object, void* OutValue); \
static void SetOscillateFunction_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorOscillate_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorOscillate_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorOscillate(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorOscillate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorOscillate_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorOscillate, UPropertyAnimatorNumericBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorOscillate_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorOscillate)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATOR_API UPropertyAnimatorOscillate(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorOscillate(UPropertyAnimatorOscillate&&) = delete; \
	UPropertyAnimatorOscillate(const UPropertyAnimatorOscillate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorOscillate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorOscillate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorOscillate) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorOscillate();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h_25_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorOscillate;

// ********** End Class UPropertyAnimatorOscillate *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorOscillate_h

// ********** Begin Enum EPropertyAnimatorOscillateFunction ****************************************
#define FOREACH_ENUM_EPROPERTYANIMATOROSCILLATEFUNCTION(op) \
	op(EPropertyAnimatorOscillateFunction::Sine) \
	op(EPropertyAnimatorOscillateFunction::Cosine) \
	op(EPropertyAnimatorOscillateFunction::Square) \
	op(EPropertyAnimatorOscillateFunction::InvertedSquare) \
	op(EPropertyAnimatorOscillateFunction::Sawtooth) \
	op(EPropertyAnimatorOscillateFunction::Triangle) 

enum class EPropertyAnimatorOscillateFunction : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorOscillateFunction> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorOscillateFunction>();
// ********** End Enum EPropertyAnimatorOscillateFunction ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
