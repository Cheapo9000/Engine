// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaJustifyModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaJustifyDepth : uint8;
enum class EAvaJustifyHorizontal : uint8;
enum class EAvaJustifyVertical : uint8;
#ifdef AVALANCHEMODIFIERS_AvaJustifyModifier_generated_h
#error "AvaJustifyModifier.generated.h already included, missing '#pragma once' in AvaJustifyModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaJustifyModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDepthAnchor); \
	DECLARE_FUNCTION(execSetDepthAnchor); \
	DECLARE_FUNCTION(execGetVerticalAnchor); \
	DECLARE_FUNCTION(execSetVerticalAnchor); \
	DECLARE_FUNCTION(execGetHorizontalAnchor); \
	DECLARE_FUNCTION(execSetHorizontalAnchor); \
	DECLARE_FUNCTION(execGetDepthAlignment); \
	DECLARE_FUNCTION(execSetDepthAlignment); \
	DECLARE_FUNCTION(execGetVerticalAlignment); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execGetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_ACCESSORS \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetDepthAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetDepthAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAnchor_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAnchor_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAnchor_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAnchor_WrapperImpl(void* Object, const void* InValue); \
static void GetDepthAnchor_WrapperImpl(const void* Object, void* OutValue); \
static void SetDepthAnchor_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaJustifyModifier(); \
	friend struct Z_Construct_UClass_UAvaJustifyModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaJustifyModifier, UAvaArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaJustifyModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaJustifyModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaJustifyModifier(UAvaJustifyModifier&&); \
	UAvaJustifyModifier(const UAvaJustifyModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaJustifyModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaJustifyModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaJustifyModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaJustifyModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_41_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaJustifyModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaJustifyModifier_h


#define FOREACH_ENUM_EAVAJUSTIFYVERTICAL(op) \
	op(EAvaJustifyVertical::None) \
	op(EAvaJustifyVertical::Top) \
	op(EAvaJustifyVertical::Center) \
	op(EAvaJustifyVertical::Bottom) 

enum class EAvaJustifyVertical : uint8;
template<> struct TIsUEnumClass<EAvaJustifyVertical> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaJustifyVertical>();

#define FOREACH_ENUM_EAVAJUSTIFYHORIZONTAL(op) \
	op(EAvaJustifyHorizontal::None) \
	op(EAvaJustifyHorizontal::Left) \
	op(EAvaJustifyHorizontal::Center) \
	op(EAvaJustifyHorizontal::Right) 

enum class EAvaJustifyHorizontal : uint8;
template<> struct TIsUEnumClass<EAvaJustifyHorizontal> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaJustifyHorizontal>();

#define FOREACH_ENUM_EAVAJUSTIFYDEPTH(op) \
	op(EAvaJustifyDepth::None) \
	op(EAvaJustifyDepth::Front) \
	op(EAvaJustifyDepth::Center) \
	op(EAvaJustifyDepth::Back) 

enum class EAvaJustifyDepth : uint8;
template<> struct TIsUEnumClass<EAvaJustifyDepth> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaJustifyDepth>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
