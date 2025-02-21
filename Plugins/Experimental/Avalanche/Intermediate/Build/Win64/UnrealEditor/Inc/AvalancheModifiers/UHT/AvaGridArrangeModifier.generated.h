// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaGridArrangeModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaCorner2D : uint8;
enum class EAvaGridArrangeDirection : uint8;
#ifdef AVALANCHEMODIFIERS_AvaGridArrangeModifier_generated_h
#error "AvaGridArrangeModifier.generated.h already included, missing '#pragma once' in AvaGridArrangeModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaGridArrangeModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStartDirection); \
	DECLARE_FUNCTION(execSetStartDirection); \
	DECLARE_FUNCTION(execGetStartCorner); \
	DECLARE_FUNCTION(execSetStartCorner); \
	DECLARE_FUNCTION(execGetSpread); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_ACCESSORS \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetSpread_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpread_WrapperImpl(void* Object, const void* InValue); \
static void GetStartCorner_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartCorner_WrapperImpl(void* Object, const void* InValue); \
static void GetStartDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartDirection_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaGridArrangeModifier(); \
	friend struct Z_Construct_UClass_UAvaGridArrangeModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaGridArrangeModifier, UAvaArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaGridArrangeModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaGridArrangeModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaGridArrangeModifier(UAvaGridArrangeModifier&&); \
	UAvaGridArrangeModifier(const UAvaGridArrangeModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaGridArrangeModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaGridArrangeModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaGridArrangeModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaGridArrangeModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaGridArrangeModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGridArrangeModifier_h


#define FOREACH_ENUM_EAVAGRIDARRANGEDIRECTION(op) \
	op(EAvaGridArrangeDirection::Horizontal) \
	op(EAvaGridArrangeDirection::Vertical) 

enum class EAvaGridArrangeDirection : uint8;
template<> struct TIsUEnumClass<EAvaGridArrangeDirection> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaGridArrangeDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
