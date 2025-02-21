// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaVisibilityModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaVisibilityModifier_generated_h
#error "AvaVisibilityModifier.generated.h already included, missing '#pragma once' in AvaVisibilityModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaVisibilityModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkipWhenHidden); \
	DECLARE_FUNCTION(execSetSkipWhenHidden); \
	DECLARE_FUNCTION(execGetTreatAsRange); \
	DECLARE_FUNCTION(execSetTreatAsRange); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execGetInvertVisibility); \
	DECLARE_FUNCTION(execSetInvertVisibility);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_ACCESSORS \
static void GetIndex_WrapperImpl(const void* Object, void* OutValue); \
static void SetIndex_WrapperImpl(void* Object, const void* InValue); \
static void GetbTreatAsRange_WrapperImpl(const void* Object, void* OutValue); \
static void SetbTreatAsRange_WrapperImpl(void* Object, const void* InValue); \
static void GetbInvertVisibility_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInvertVisibility_WrapperImpl(void* Object, const void* InValue); \
static void GetbSkipWhenHidden_WrapperImpl(const void* Object, void* OutValue); \
static void SetbSkipWhenHidden_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaVisibilityModifier(); \
	friend struct Z_Construct_UClass_UAvaVisibilityModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaVisibilityModifier, UAvaArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaVisibilityModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaVisibilityModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaVisibilityModifier(UAvaVisibilityModifier&&); \
	UAvaVisibilityModifier(const UAvaVisibilityModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaVisibilityModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaVisibilityModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaVisibilityModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaVisibilityModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaVisibilityModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
