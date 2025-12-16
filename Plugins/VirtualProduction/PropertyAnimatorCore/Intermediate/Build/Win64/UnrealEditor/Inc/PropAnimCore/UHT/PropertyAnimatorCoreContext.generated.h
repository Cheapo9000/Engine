// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/PropertyAnimatorCoreContext.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreContext_generated_h
#error "PropertyAnimatorCoreContext.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreContext.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreContext *********************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h_33_ACCESSORS \
static void GetbAnimated_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimated_WrapperImpl(void* Object, const void* InValue); \
static void GetMagnitude_WrapperImpl(const void* Object, void* OutValue); \
static void SetMagnitude_WrapperImpl(void* Object, const void* InValue); \
static void GetTimeOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetTimeOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetMode_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorCoreContext_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreContext_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreContext(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreContext_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreContext) \
	virtual UObject* _getUObject() const override { return const_cast<UPropertyAnimatorCoreContext*>(this); }


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATORCORE_API UPropertyAnimatorCoreContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreContext(UPropertyAnimatorCoreContext&&) = delete; \
	UPropertyAnimatorCoreContext(const UPropertyAnimatorCoreContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCoreContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyAnimatorCoreContext) \
	PROPERTYANIMATORCORE_API virtual ~UPropertyAnimatorCoreContext();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h_30_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h_33_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreContext;

// ********** End Class UPropertyAnimatorCoreContext ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_PropertyAnimatorCoreContext_h

// ********** Begin Enum EPropertyAnimatorCoreMode *************************************************
#define FOREACH_ENUM_EPROPERTYANIMATORCOREMODE(op) \
	op(EPropertyAnimatorCoreMode::Absolute) \
	op(EPropertyAnimatorCoreMode::Additive) 

enum class EPropertyAnimatorCoreMode : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorCoreMode> { enum { Value = true }; };
template<> PROPERTYANIMATORCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorCoreMode>();
// ********** End Enum EPropertyAnimatorCoreMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
