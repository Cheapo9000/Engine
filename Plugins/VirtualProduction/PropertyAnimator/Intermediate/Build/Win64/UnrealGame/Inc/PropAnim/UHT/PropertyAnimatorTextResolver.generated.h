// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/PropertyAnimatorTextResolver.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorTextResolver_generated_h
#error "PropertyAnimatorTextResolver.generated.h already included, missing '#pragma once' in PropertyAnimatorTextResolver.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorTextResolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorTextResolver ********************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h_34_ACCESSORS \
static void GetUnit_WrapperImpl(const void* Object, void* OutValue); \
static void SetUnit_WrapperImpl(void* Object, const void* InValue); \
static void GetPercentageRange_WrapperImpl(const void* Object, void* OutValue); \
static void SetPercentageRange_WrapperImpl(void* Object, const void* InValue); \
static void GetPercentageOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetPercentageOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetCharacterRangeCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCharacterRangeCount_WrapperImpl(void* Object, const void* InValue); \
static void GetCharacterOffsetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCharacterOffsetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetWordRangeCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetWordRangeCount_WrapperImpl(void* Object, const void* InValue); \
static void GetWordOffsetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetWordOffsetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetDirection_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorTextResolver_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorTextResolver_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorTextResolver(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorTextResolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorTextResolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorTextResolver, UPropertyAnimatorCoreResolver, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorTextResolver_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorTextResolver)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorTextResolver(UPropertyAnimatorTextResolver&&) = delete; \
	UPropertyAnimatorTextResolver(const UPropertyAnimatorTextResolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyAnimatorTextResolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorTextResolver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorTextResolver) \
	NO_API virtual ~UPropertyAnimatorTextResolver();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h_34_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorTextResolver;

// ********** End Class UPropertyAnimatorTextResolver **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Properties_PropertyAnimatorTextResolver_h

// ********** Begin Enum EPropertyAnimatorTextResolverRangeUnit ************************************
#define FOREACH_ENUM_EPROPERTYANIMATORTEXTRESOLVERRANGEUNIT(op) \
	op(EPropertyAnimatorTextResolverRangeUnit::Percentage) \
	op(EPropertyAnimatorTextResolverRangeUnit::Character) \
	op(EPropertyAnimatorTextResolverRangeUnit::Word) 

enum class EPropertyAnimatorTextResolverRangeUnit : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorTextResolverRangeUnit> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorTextResolverRangeUnit>();
// ********** End Enum EPropertyAnimatorTextResolverRangeUnit **************************************

// ********** Begin Enum EPropertyAnimatorTextResolverRangeDirection *******************************
#define FOREACH_ENUM_EPROPERTYANIMATORTEXTRESOLVERRANGEDIRECTION(op) \
	op(EPropertyAnimatorTextResolverRangeDirection::LeftToRight) \
	op(EPropertyAnimatorTextResolverRangeDirection::RightToLeft) \
	op(EPropertyAnimatorTextResolverRangeDirection::FromCenter) 

enum class EPropertyAnimatorTextResolverRangeDirection : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorTextResolverRangeDirection> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorTextResolverRangeDirection>();
// ********** End Enum EPropertyAnimatorTextResolverRangeDirection *********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
