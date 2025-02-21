// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mask2D/AvaMask2DBaseModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMASK_AvaMask2DBaseModifier_generated_h
#error "AvaMask2DBaseModifier.generated.h already included, missing '#pragma once' in AvaMask2DBaseModifier.h"
#endif
#define AVALANCHEMASK_AvaMask2DBaseModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaMask2DActorData_Statics; \
	AVALANCHEMASK_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMASK_API UScriptStruct* StaticStruct<struct FAvaMask2DActorData>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_64_ACCESSORS \
static void GetbUseParentChannel_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseParentChannel_WrapperImpl(void* Object, const void* InValue); \
static void GetChannel_WrapperImpl(const void* Object, void* OutValue); \
static void SetChannel_WrapperImpl(void* Object, const void* InValue); \
static void GetbInverted_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInverted_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseBlur_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseBlur_WrapperImpl(void* Object, const void* InValue); \
static void GetBlurStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetBlurStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseFeathering_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseFeathering_WrapperImpl(void* Object, const void* InValue); \
static void GetOuterFeatherRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetOuterFeatherRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetInnerFeatherRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerFeatherRadius_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMask2DBaseModifier(); \
	friend struct Z_Construct_UClass_UAvaMask2DBaseModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaMask2DBaseModifier, UAvaArrangeBaseModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMask"), NO_API) \
	DECLARE_SERIALIZER(UAvaMask2DBaseModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaMask2DBaseModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaMask2DBaseModifier(UAvaMask2DBaseModifier&&); \
	UAvaMask2DBaseModifier(const UAvaMask2DBaseModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMask2DBaseModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMask2DBaseModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaMask2DBaseModifier) \
	NO_API virtual ~UAvaMask2DBaseModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_64_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMASK_API UClass* StaticClass<class UAvaMask2DBaseModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h


#define FOREACH_ENUM_EAVAMASK2DMODE(op) \
	op(EAvaMask2DMode::Read) \
	op(EAvaMask2DMode::Write) 

enum class EAvaMask2DMode : uint8;
template<> struct TIsUEnumClass<EAvaMask2DMode> { enum { Value = true }; };
template<> AVALANCHEMASK_API UEnum* StaticEnum<EAvaMask2DMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
