// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierHoldoutCompositeModifier.h"

#ifdef ACTORMODIFIERRENDERING_ActorModifierHoldoutCompositeModifier_generated_h
#error "ActorModifierHoldoutCompositeModifier.generated.h already included, missing '#pragma once' in ActorModifierHoldoutCompositeModifier.h"
#endif
#define ACTORMODIFIERRENDERING_ActorModifierHoldoutCompositeModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorModifierHoldoutCompositeModifier ***********************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIncludeChildren); \
	DECLARE_FUNCTION(execSetIncludeChildren);


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_ACCESSORS \
static void GetbIncludeChildren_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIncludeChildren_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UActorModifierHoldoutCompositeModifier_Statics;
ACTORMODIFIERRENDERING_API UClass* Z_Construct_UClass_UActorModifierHoldoutCompositeModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierHoldoutCompositeModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierHoldoutCompositeModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERRENDERING_API UClass* ::Z_Construct_UClass_UActorModifierHoldoutCompositeModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierHoldoutCompositeModifier, UActorModifierAttachmentBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierRendering"), Z_Construct_UClass_UActorModifierHoldoutCompositeModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierHoldoutCompositeModifier)


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERRENDERING_API UActorModifierHoldoutCompositeModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierHoldoutCompositeModifier(UActorModifierHoldoutCompositeModifier&&) = delete; \
	UActorModifierHoldoutCompositeModifier(const UActorModifierHoldoutCompositeModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERRENDERING_API, UActorModifierHoldoutCompositeModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierHoldoutCompositeModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierHoldoutCompositeModifier) \
	ACTORMODIFIERRENDERING_API virtual ~UActorModifierHoldoutCompositeModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierHoldoutCompositeModifier;

// ********** End Class UActorModifierHoldoutCompositeModifier *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierRendering_Public_Modifiers_ActorModifierHoldoutCompositeModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
