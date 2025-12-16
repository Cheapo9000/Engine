// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/PropertyAnimatorFloatContext.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorFloatContext_generated_h
#error "PropertyAnimatorFloatContext.generated.h already included, missing '#pragma once' in PropertyAnimatorFloatContext.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorFloatContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorFloatContext ********************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h_12_ACCESSORS \
static void GetAmplitudeMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetAmplitudeMin_WrapperImpl(void* Object, const void* InValue); \
static void GetAmplitudeMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetAmplitudeMax_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorFloatContext_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorFloatContext_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorFloatContext(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorFloatContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorFloatContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorFloatContext, UPropertyAnimatorCoreContext, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorFloatContext_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorFloatContext)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATOR_API UPropertyAnimatorFloatContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorFloatContext(UPropertyAnimatorFloatContext&&) = delete; \
	UPropertyAnimatorFloatContext(const UPropertyAnimatorFloatContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorFloatContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorFloatContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyAnimatorFloatContext) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorFloatContext();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h_12_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorFloatContext;

// ********** End Class UPropertyAnimatorFloatContext **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Properties_PropertyAnimatorFloatContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
