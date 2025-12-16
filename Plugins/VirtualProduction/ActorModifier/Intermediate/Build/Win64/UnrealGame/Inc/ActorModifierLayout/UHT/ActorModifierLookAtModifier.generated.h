// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierLookAtModifier.h"

#ifdef ACTORMODIFIERLAYOUT_ActorModifierLookAtModifier_generated_h
#error "ActorModifierLookAtModifier.generated.h already included, missing '#pragma once' in ActorModifierLookAtModifier.h"
#endif
#define ACTORMODIFIERLAYOUT_ActorModifierLookAtModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActorModifierAxis : uint8;
struct FActorModifierSceneTreeActor;

// ********** Begin Class UActorModifierLookAtModifier *********************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlipAxis); \
	DECLARE_FUNCTION(execSetFlipAxis); \
	DECLARE_FUNCTION(execGetOrientationAxis); \
	DECLARE_FUNCTION(execSetOrientationAxis); \
	DECLARE_FUNCTION(execGetReferenceActor); \
	DECLARE_FUNCTION(execSetReferenceActor);


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_ACCESSORS \
static void GetReferenceActor_WrapperImpl(const void* Object, void* OutValue); \
static void SetReferenceActor_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientationAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientationAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetbFlipAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetbFlipAxis_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UActorModifierLookAtModifier_Statics;
ACTORMODIFIERLAYOUT_API UClass* Z_Construct_UClass_UActorModifierLookAtModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierLookAtModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierLookAtModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERLAYOUT_API UClass* ::Z_Construct_UClass_UActorModifierLookAtModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierLookAtModifier, UActorModifierAttachmentBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierLayout"), Z_Construct_UClass_UActorModifierLookAtModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierLookAtModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UActorModifierLookAtModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERLAYOUT_API UActorModifierLookAtModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierLookAtModifier(UActorModifierLookAtModifier&&) = delete; \
	UActorModifierLookAtModifier(const UActorModifierLookAtModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERLAYOUT_API, UActorModifierLookAtModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierLookAtModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierLookAtModifier) \
	ACTORMODIFIERLAYOUT_API virtual ~UActorModifierLookAtModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierLookAtModifier;

// ********** End Class UActorModifierLookAtModifier ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierLookAtModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
