// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaAttachmentBaseModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaAttachmentBaseModifier_generated_h
#error "AvaAttachmentBaseModifier.generated.h already included, missing '#pragma once' in AvaAttachmentBaseModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaAttachmentBaseModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAttachmentBaseModifier_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaAttachmentBaseModifier(); \
	friend struct Z_Construct_UClass_UAvaAttachmentBaseModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaAttachmentBaseModifier, UAvaBaseModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaAttachmentBaseModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaAttachmentBaseModifier*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAttachmentBaseModifier_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaAttachmentBaseModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaAttachmentBaseModifier(UAvaAttachmentBaseModifier&&); \
	UAvaAttachmentBaseModifier(const UAvaAttachmentBaseModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaAttachmentBaseModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaAttachmentBaseModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaAttachmentBaseModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaAttachmentBaseModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAttachmentBaseModifier_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAttachmentBaseModifier_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAttachmentBaseModifier_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAttachmentBaseModifier_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaAttachmentBaseModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAttachmentBaseModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
