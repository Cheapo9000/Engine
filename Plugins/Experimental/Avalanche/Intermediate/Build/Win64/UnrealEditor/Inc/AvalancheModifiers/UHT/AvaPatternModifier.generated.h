// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaPatternModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaPatternModifierLayout : uint8;
struct FAvaPatternModifierCircleLayoutOptions;
struct FAvaPatternModifierGridLayoutOptions;
struct FAvaPatternModifierLineLayoutOptions;
#ifdef AVALANCHEMODIFIERS_AvaPatternModifier_generated_h
#error "AvaPatternModifier.generated.h already included, missing '#pragma once' in AvaPatternModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaPatternModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVector2b_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FVector2b>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVector3b_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FVector3b>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaPatternModifierLineLayoutOptions_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaPatternModifierLineLayoutOptions>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaPatternModifierGridLayoutOptions_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaPatternModifierGridLayoutOptions>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaPatternModifierCircleLayoutOptions_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaPatternModifierCircleLayoutOptions>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCircleLayoutOptions); \
	DECLARE_FUNCTION(execSetCircleLayoutOptions); \
	DECLARE_FUNCTION(execGetGridLayoutOptions); \
	DECLARE_FUNCTION(execSetGridLayoutOptions); \
	DECLARE_FUNCTION(execGetLineLayoutOptions); \
	DECLARE_FUNCTION(execSetLineLayoutOptions); \
	DECLARE_FUNCTION(execGetLayout); \
	DECLARE_FUNCTION(execSetLayout);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_ACCESSORS \
static void GetLayout_WrapperImpl(const void* Object, void* OutValue); \
static void SetLayout_WrapperImpl(void* Object, const void* InValue); \
static void GetLineLayoutOptions_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineLayoutOptions_WrapperImpl(void* Object, const void* InValue); \
static void GetGridLayoutOptions_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridLayoutOptions_WrapperImpl(void* Object, const void* InValue); \
static void GetCircleLayoutOptions_WrapperImpl(const void* Object, void* OutValue); \
static void SetCircleLayoutOptions_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPatternModifier(); \
	friend struct Z_Construct_UClass_UAvaPatternModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaPatternModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaPatternModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaPatternModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPatternModifier(UAvaPatternModifier&&); \
	UAvaPatternModifier(const UAvaPatternModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaPatternModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPatternModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaPatternModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaPatternModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_157_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaPatternModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPatternModifier_h


#define FOREACH_ENUM_EAVAPATTERNMODIFIERLAYOUT(op) \
	op(EAvaPatternModifierLayout::Line) \
	op(EAvaPatternModifierLayout::Grid) \
	op(EAvaPatternModifierLayout::Circle) 

enum class EAvaPatternModifierLayout : uint8;
template<> struct TIsUEnumClass<EAvaPatternModifierLayout> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaPatternModifierLayout>();

#define FOREACH_ENUM_EAVAPATTERNMODIFIERAXIS(op) \
	op(EAvaPatternModifierAxis::X) \
	op(EAvaPatternModifierAxis::Y) \
	op(EAvaPatternModifierAxis::Z) 

enum class EAvaPatternModifierAxis : uint8;
template<> struct TIsUEnumClass<EAvaPatternModifierAxis> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaPatternModifierAxis>();

#define FOREACH_ENUM_EAVAPATTERNMODIFIERPLANE(op) \
	op(EAvaPatternModifierPlane::XY) \
	op(EAvaPatternModifierPlane::ZX) \
	op(EAvaPatternModifierPlane::YZ) 

enum class EAvaPatternModifierPlane : uint8;
template<> struct TIsUEnumClass<EAvaPatternModifierPlane> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaPatternModifierPlane>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
