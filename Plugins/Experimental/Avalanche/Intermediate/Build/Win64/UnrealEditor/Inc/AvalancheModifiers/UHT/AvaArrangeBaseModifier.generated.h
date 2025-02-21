// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaArrangeBaseModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaArrangeBaseModifier_generated_h
#error "AvaArrangeBaseModifier.generated.h already included, missing '#pragma once' in AvaArrangeBaseModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaArrangeBaseModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaArrangeBaseModifier_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaArrangeBaseModifier(); \
	friend struct Z_Construct_UClass_UAvaArrangeBaseModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaArrangeBaseModifier, UAvaAttachmentBaseModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaArrangeBaseModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaArrangeBaseModifier*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaArrangeBaseModifier_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaArrangeBaseModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaArrangeBaseModifier(UAvaArrangeBaseModifier&&); \
	UAvaArrangeBaseModifier(const UAvaArrangeBaseModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaArrangeBaseModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaArrangeBaseModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaArrangeBaseModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaArrangeBaseModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaArrangeBaseModifier_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaArrangeBaseModifier_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaArrangeBaseModifier_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaArrangeBaseModifier_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaArrangeBaseModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaArrangeBaseModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
