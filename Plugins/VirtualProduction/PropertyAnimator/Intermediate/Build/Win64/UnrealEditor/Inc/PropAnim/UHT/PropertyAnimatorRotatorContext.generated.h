// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/PropertyAnimatorRotatorContext.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorRotatorContext_generated_h
#error "PropertyAnimatorRotatorContext.generated.h already included, missing '#pragma once' in PropertyAnimatorRotatorContext.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorRotatorContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorRotatorContext ******************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h_12_ACCESSORS \
static void GetAmplitudeMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetAmplitudeMin_WrapperImpl(void* Object, const void* InValue); \
static void GetAmplitudeMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetAmplitudeMax_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorRotatorContext_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorRotatorContext_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorRotatorContext(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorRotatorContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorRotatorContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorRotatorContext, UPropertyAnimatorCoreContext, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorRotatorContext_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorRotatorContext)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATOR_API UPropertyAnimatorRotatorContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorRotatorContext(UPropertyAnimatorRotatorContext&&) = delete; \
	UPropertyAnimatorRotatorContext(const UPropertyAnimatorRotatorContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorRotatorContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorRotatorContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyAnimatorRotatorContext) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorRotatorContext();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h_12_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorRotatorContext;

// ********** End Class UPropertyAnimatorRotatorContext ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorRotatorContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
