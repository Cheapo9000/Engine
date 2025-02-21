// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaGlobalOpacityModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaGlobalOpacityModifier_generated_h
#error "AvaGlobalOpacityModifier.generated.h already included, missing '#pragma once' in AvaGlobalOpacityModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaGlobalOpacityModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGlobalOpacity); \
	DECLARE_FUNCTION(execSetGlobalOpacity);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_ACCESSORS \
static void GetGlobalOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetGlobalOpacity_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaGlobalOpacityModifier(); \
	friend struct Z_Construct_UClass_UAvaGlobalOpacityModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaGlobalOpacityModifier, UAvaMaterialParameterModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaGlobalOpacityModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaGlobalOpacityModifier(UAvaGlobalOpacityModifier&&); \
	UAvaGlobalOpacityModifier(const UAvaGlobalOpacityModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaGlobalOpacityModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaGlobalOpacityModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaGlobalOpacityModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaGlobalOpacityModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaGlobalOpacityModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGlobalOpacityModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
