// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaOutlineModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaOutlineMode : uint8;
#ifdef AVALANCHEMODIFIERS_AvaOutlineModifier_generated_h
#error "AvaOutlineModifier.generated.h already included, missing '#pragma once' in AvaOutlineModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaOutlineModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRemoveInside); \
	DECLARE_FUNCTION(execSetRemoveInside); \
	DECLARE_FUNCTION(execGetDistance); \
	DECLARE_FUNCTION(execSetDistance); \
	DECLARE_FUNCTION(execGetMode); \
	DECLARE_FUNCTION(execSetMode);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_ACCESSORS \
static void GetMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetMode_WrapperImpl(void* Object, const void* InValue); \
static void GetDistance_WrapperImpl(const void* Object, void* OutValue); \
static void SetDistance_WrapperImpl(void* Object, const void* InValue); \
static void GetbRemoveInside_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRemoveInside_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaOutlineModifier(); \
	friend struct Z_Construct_UClass_UAvaOutlineModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaOutlineModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaOutlineModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaOutlineModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaOutlineModifier(UAvaOutlineModifier&&); \
	UAvaOutlineModifier(const UAvaOutlineModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaOutlineModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaOutlineModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaOutlineModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaOutlineModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaOutlineModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaOutlineModifier_h


#define FOREACH_ENUM_EAVAOUTLINEMODE(op) \
	op(EAvaOutlineMode::Outset) \
	op(EAvaOutlineMode::Inset) 

enum class EAvaOutlineMode : uint8;
template<> struct TIsUEnumClass<EAvaOutlineMode> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaOutlineMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
