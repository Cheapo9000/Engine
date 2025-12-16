// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierArrangeBaseModifier.h"

#ifdef ACTORMODIFIER_ActorModifierArrangeBaseModifier_generated_h
#error "ActorModifierArrangeBaseModifier.generated.h already included, missing '#pragma once' in ActorModifierArrangeBaseModifier.h"
#endif
#define ACTORMODIFIER_ActorModifierArrangeBaseModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorModifierArrangeBaseModifier ****************************************
struct Z_Construct_UClass_UActorModifierArrangeBaseModifier_Statics;
ACTORMODIFIER_API UClass* Z_Construct_UClass_UActorModifierArrangeBaseModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierArrangeBaseModifier_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierArrangeBaseModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierArrangeBaseModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIER_API UClass* ::Z_Construct_UClass_UActorModifierArrangeBaseModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierArrangeBaseModifier, UActorModifierAttachmentBaseModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActorModifier"), Z_Construct_UClass_UActorModifierArrangeBaseModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierArrangeBaseModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UActorModifierArrangeBaseModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierArrangeBaseModifier_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIER_API UActorModifierArrangeBaseModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierArrangeBaseModifier(UActorModifierArrangeBaseModifier&&) = delete; \
	UActorModifierArrangeBaseModifier(const UActorModifierArrangeBaseModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIER_API, UActorModifierArrangeBaseModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierArrangeBaseModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UActorModifierArrangeBaseModifier) \
	ACTORMODIFIER_API virtual ~UActorModifierArrangeBaseModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierArrangeBaseModifier_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierArrangeBaseModifier_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierArrangeBaseModifier_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierArrangeBaseModifier_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierArrangeBaseModifier;

// ********** End Class UActorModifierArrangeBaseModifier ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Modifiers_ActorModifierArrangeBaseModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
