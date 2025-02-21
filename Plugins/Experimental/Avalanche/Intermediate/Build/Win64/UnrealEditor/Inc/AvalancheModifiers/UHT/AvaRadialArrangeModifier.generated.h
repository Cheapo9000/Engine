// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaRadialArrangeModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaModifiersAxis : uint8;
enum class EAvaRadialArrangement : uint8;
#ifdef AVALANCHEMODIFIERS_AvaRadialArrangeModifier_generated_h
#error "AvaRadialArrangeModifier.generated.h already included, missing '#pragma once' in AvaRadialArrangeModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaRadialArrangeModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlipOrient); \
	DECLARE_FUNCTION(execSetFlipOrient); \
	DECLARE_FUNCTION(execGetBaseOrientation); \
	DECLARE_FUNCTION(execSetBaseOrientation); \
	DECLARE_FUNCTION(execGetOrientationAxis); \
	DECLARE_FUNCTION(execSetOrientationAxis); \
	DECLARE_FUNCTION(execGetOrient); \
	DECLARE_FUNCTION(execSetOrient); \
	DECLARE_FUNCTION(execGetStartFromOuterRadius); \
	DECLARE_FUNCTION(execSetStartFromOuterRadius); \
	DECLARE_FUNCTION(execGetArrangement); \
	DECLARE_FUNCTION(execSetArrangement); \
	DECLARE_FUNCTION(execGetEndAngle); \
	DECLARE_FUNCTION(execSetEndAngle); \
	DECLARE_FUNCTION(execGetStartAngle); \
	DECLARE_FUNCTION(execSetStartAngle); \
	DECLARE_FUNCTION(execGetOuterRadius); \
	DECLARE_FUNCTION(execSetOuterRadius); \
	DECLARE_FUNCTION(execGetInnerRadius); \
	DECLARE_FUNCTION(execSetInnerRadius); \
	DECLARE_FUNCTION(execGetRings); \
	DECLARE_FUNCTION(execSetRings); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_ACCESSORS \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetRings_WrapperImpl(const void* Object, void* OutValue); \
static void SetRings_WrapperImpl(void* Object, const void* InValue); \
static void GetInnerRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetOuterRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetOuterRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetStartAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetEndAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetEndAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetArrangement_WrapperImpl(const void* Object, void* OutValue); \
static void SetArrangement_WrapperImpl(void* Object, const void* InValue); \
static void GetbStartFromOuterRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetbStartFromOuterRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetbOrient_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOrient_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientationAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientationAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetBaseOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetBaseOrientation_WrapperImpl(void* Object, const void* InValue); \
static void GetbFlipOrient_WrapperImpl(const void* Object, void* OutValue); \
static void SetbFlipOrient_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaRadialArrangeModifier(); \
	friend struct Z_Construct_UClass_UAvaRadialArrangeModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaRadialArrangeModifier, UAvaArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaRadialArrangeModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaRadialArrangeModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaRadialArrangeModifier(UAvaRadialArrangeModifier&&); \
	UAvaRadialArrangeModifier(const UAvaRadialArrangeModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaRadialArrangeModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaRadialArrangeModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaRadialArrangeModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaRadialArrangeModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaRadialArrangeModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaRadialArrangeModifier_h


#define FOREACH_ENUM_EAVARADIALARRANGEMENT(op) \
	op(EAvaRadialArrangement::Monospace) \
	op(EAvaRadialArrangement::Equal) 

enum class EAvaRadialArrangement : uint8;
template<> struct TIsUEnumClass<EAvaRadialArrangement> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaRadialArrangement>();

#define FOREACH_ENUM_EAVARADIALARRANGEPLANE(op) \
	op(EAvaRadialArrangePlane::XY) \
	op(EAvaRadialArrangePlane::YZ) \
	op(EAvaRadialArrangePlane::XZ) 

enum class EAvaRadialArrangePlane : uint8;
template<> struct TIsUEnumClass<EAvaRadialArrangePlane> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaRadialArrangePlane>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
