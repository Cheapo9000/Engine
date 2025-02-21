// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaBevelModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaBevelModifier_generated_h
#error "AvaBevelModifier.generated.h already included, missing '#pragma once' in AvaBevelModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaBevelModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRoundness); \
	DECLARE_FUNCTION(execSetRoundness); \
	DECLARE_FUNCTION(execGetIterations); \
	DECLARE_FUNCTION(execSetIterations); \
	DECLARE_FUNCTION(execGetInset); \
	DECLARE_FUNCTION(execSetInset);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_ACCESSORS \
static void GetInset_WrapperImpl(const void* Object, void* OutValue); \
static void SetInset_WrapperImpl(void* Object, const void* InValue); \
static void GetIterations_WrapperImpl(const void* Object, void* OutValue); \
static void SetIterations_WrapperImpl(void* Object, const void* InValue); \
static void GetRoundness_WrapperImpl(const void* Object, void* OutValue); \
static void SetRoundness_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBevelModifier(); \
	friend struct Z_Construct_UClass_UAvaBevelModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaBevelModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaBevelModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaBevelModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaBevelModifier(UAvaBevelModifier&&); \
	UAvaBevelModifier(const UAvaBevelModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaBevelModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBevelModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaBevelModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaBevelModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaBevelModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBevelModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
