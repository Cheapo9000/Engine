// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaBaseModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaBaseModifier_generated_h
#error "AvaBaseModifier.generated.h already included, missing '#pragma once' in AvaBaseModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaBaseModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBaseModifier_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBaseModifier(); \
	friend struct Z_Construct_UClass_UAvaBaseModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaBaseModifier, UActorModifierCoreBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaBaseModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBaseModifier_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaBaseModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaBaseModifier(UAvaBaseModifier&&); \
	UAvaBaseModifier(const UAvaBaseModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaBaseModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBaseModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaBaseModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaBaseModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBaseModifier_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBaseModifier_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBaseModifier_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBaseModifier_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaBaseModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBaseModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
