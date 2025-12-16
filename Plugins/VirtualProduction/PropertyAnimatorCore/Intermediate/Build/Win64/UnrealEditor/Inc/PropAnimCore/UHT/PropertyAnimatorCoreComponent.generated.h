// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PropertyAnimatorCoreComponent.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreComponent_generated_h
#error "PropertyAnimatorCoreComponent.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreComponent.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreComponent *******************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimeSourceNames);


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_ACCESSORS \
static void SetPropertyAnimators_WrapperImpl(void* Object, const void* InValue); \
static void GetbAnimatorsEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimatorsEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetAnimatorsMagnitude_WrapperImpl(const void* Object, void* OutValue); \
static void SetAnimatorsMagnitude_WrapperImpl(void* Object, const void* InValue); \
static void GetAnimatorsTimeSourceName_WrapperImpl(const void* Object, void* OutValue); \
static void SetAnimatorsTimeSourceName_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorCoreComponent_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreComponent(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreComponent_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreComponent)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreComponent(UPropertyAnimatorCoreComponent&&) = delete; \
	UPropertyAnimatorCoreComponent(const UPropertyAnimatorCoreComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCoreComponent) \
	PROPERTYANIMATORCORE_API virtual ~UPropertyAnimatorCoreComponent();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreComponent;

// ********** End Class UPropertyAnimatorCoreComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Components_PropertyAnimatorCoreComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
