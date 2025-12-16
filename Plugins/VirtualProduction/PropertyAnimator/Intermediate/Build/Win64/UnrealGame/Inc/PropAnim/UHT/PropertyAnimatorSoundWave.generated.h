// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorSoundWave.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorSoundWave_generated_h
#error "PropertyAnimatorSoundWave.generated.h already included, missing '#pragma once' in PropertyAnimatorSoundWave.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorSoundWave_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorSoundWave ***********************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h_17_ACCESSORS \
static void GetSampledSoundWave_WrapperImpl(const void* Object, void* OutValue); \
static void SetSampledSoundWave_WrapperImpl(void* Object, const void* InValue); \
static void GetbLoop_WrapperImpl(const void* Object, void* OutValue); \
static void SetbLoop_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorSoundWave_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorSoundWave_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorSoundWave(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorSoundWave_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorSoundWave_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorSoundWave, UPropertyAnimatorNumericBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorSoundWave_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorSoundWave)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorSoundWave(UPropertyAnimatorSoundWave&&) = delete; \
	UPropertyAnimatorSoundWave(const UPropertyAnimatorSoundWave&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorSoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorSoundWave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorSoundWave) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorSoundWave();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorSoundWave;

// ********** End Class UPropertyAnimatorSoundWave *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorSoundWave_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
