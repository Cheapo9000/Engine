// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierAutoFollowModifier.h"

#ifdef ACTORMODIFIERLAYOUT_ActorModifierAutoFollowModifier_generated_h
#error "ActorModifierAutoFollowModifier.generated.h already included, missing '#pragma once' in ActorModifierAutoFollowModifier.h"
#endif
#define ACTORMODIFIERLAYOUT_ActorModifierAutoFollowModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FActorModifierAnchorAlignment;
struct FActorModifierSceneTreeActor;

// ********** Begin Class UActorModifierAutoFollowModifier *****************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOffsetAxis); \
	DECLARE_FUNCTION(execSetOffsetAxis); \
	DECLARE_FUNCTION(execGetLocalAlignment); \
	DECLARE_FUNCTION(execSetLocalAlignment); \
	DECLARE_FUNCTION(execGetFollowedAlignment); \
	DECLARE_FUNCTION(execSetFollowedAlignment); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execGetMaxDistance); \
	DECLARE_FUNCTION(execSetMaxDistance); \
	DECLARE_FUNCTION(execGetDefaultDistance); \
	DECLARE_FUNCTION(execSetDefaultDistance); \
	DECLARE_FUNCTION(execGetFollowedAxis); \
	DECLARE_FUNCTION(execSetFollowedAxis); \
	DECLARE_FUNCTION(execGetReferenceActor); \
	DECLARE_FUNCTION(execSetReferenceActor);


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_ACCESSORS \
static void GetReferenceActor_WrapperImpl(const void* Object, void* OutValue); \
static void SetReferenceActor_WrapperImpl(void* Object, const void* InValue); \
static void GetFollowedAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetFollowedAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetOffsetAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetOffsetAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetFollowedAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetFollowedAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetLocalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetDefaultDistance_WrapperImpl(const void* Object, void* OutValue); \
static void SetDefaultDistance_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxDistance_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxDistance_WrapperImpl(void* Object, const void* InValue); \
static void GetProgress_WrapperImpl(const void* Object, void* OutValue); \
static void SetProgress_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UActorModifierAutoFollowModifier_Statics;
ACTORMODIFIERLAYOUT_API UClass* Z_Construct_UClass_UActorModifierAutoFollowModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierAutoFollowModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierAutoFollowModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERLAYOUT_API UClass* ::Z_Construct_UClass_UActorModifierAutoFollowModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierAutoFollowModifier, UActorModifierAttachmentBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierLayout"), Z_Construct_UClass_UActorModifierAutoFollowModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierAutoFollowModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UActorModifierAutoFollowModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERLAYOUT_API UActorModifierAutoFollowModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierAutoFollowModifier(UActorModifierAutoFollowModifier&&) = delete; \
	UActorModifierAutoFollowModifier(const UActorModifierAutoFollowModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERLAYOUT_API, UActorModifierAutoFollowModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierAutoFollowModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierAutoFollowModifier) \
	ACTORMODIFIERLAYOUT_API virtual ~UActorModifierAutoFollowModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierAutoFollowModifier;

// ********** End Class UActorModifierAutoFollowModifier *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAutoFollowModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
