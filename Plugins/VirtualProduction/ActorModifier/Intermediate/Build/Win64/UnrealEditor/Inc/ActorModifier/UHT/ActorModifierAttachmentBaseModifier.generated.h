// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierAttachmentBaseModifier.h"

#ifdef ACTORMODIFIER_ActorModifierAttachmentBaseModifier_generated_h
#error "ActorModifierAttachmentBaseModifier.generated.h already included, missing '#pragma once' in ActorModifierAttachmentBaseModifier.h"
#endif
#define ACTORMODIFIER_ActorModifierAttachmentBaseModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorModifierAttachmentBaseModifier *************************************
struct Z_Construct_UClass_UActorModifierAttachmentBaseModifier_Statics;
ACTORMODIFIER_API UClass* Z_Construct_UClass_UActorModifierAttachmentBaseModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierAttachmentBaseModifier_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierAttachmentBaseModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierAttachmentBaseModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIER_API UClass* ::Z_Construct_UClass_UActorModifierAttachmentBaseModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierAttachmentBaseModifier, UActorModifierCoreBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActorModifier"), Z_Construct_UClass_UActorModifierAttachmentBaseModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierAttachmentBaseModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UActorModifierAttachmentBaseModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierAttachmentBaseModifier_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIER_API UActorModifierAttachmentBaseModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierAttachmentBaseModifier(UActorModifierAttachmentBaseModifier&&) = delete; \
	UActorModifierAttachmentBaseModifier(const UActorModifierAttachmentBaseModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIER_API, UActorModifierAttachmentBaseModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierAttachmentBaseModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UActorModifierAttachmentBaseModifier) \
	ACTORMODIFIER_API virtual ~UActorModifierAttachmentBaseModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierAttachmentBaseModifier_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierAttachmentBaseModifier_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierAttachmentBaseModifier_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierAttachmentBaseModifier_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierAttachmentBaseModifier;

// ********** End Class UActorModifierAttachmentBaseModifier ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierAttachmentBaseModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
