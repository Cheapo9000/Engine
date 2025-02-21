// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaAutoFollowModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaAnchorAlignment;
struct FAvaSceneTreeActor;
#ifdef AVALANCHEMODIFIERS_AvaAutoFollowModifier_generated_h
#error "AvaAutoFollowModifier.generated.h already included, missing '#pragma once' in AvaAutoFollowModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaAutoFollowModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_ACCESSORS \
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


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaAutoFollowModifier(); \
	friend struct Z_Construct_UClass_UAvaAutoFollowModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaAutoFollowModifier, UAvaAttachmentBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaAutoFollowModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaAutoFollowModifier*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaAutoFollowModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaAutoFollowModifier(UAvaAutoFollowModifier&&); \
	UAvaAutoFollowModifier(const UAvaAutoFollowModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaAutoFollowModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaAutoFollowModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaAutoFollowModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaAutoFollowModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaAutoFollowModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAutoFollowModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
