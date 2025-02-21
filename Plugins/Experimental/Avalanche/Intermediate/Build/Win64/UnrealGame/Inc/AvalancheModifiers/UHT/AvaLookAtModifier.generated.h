// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaLookAtModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaAxis : uint8;
struct FAvaSceneTreeActor;
#ifdef AVALANCHEMODIFIERS_AvaLookAtModifier_generated_h
#error "AvaLookAtModifier.generated.h already included, missing '#pragma once' in AvaLookAtModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaLookAtModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlipAxis); \
	DECLARE_FUNCTION(execSetFlipAxis); \
	DECLARE_FUNCTION(execGetAxis); \
	DECLARE_FUNCTION(execSetAxis); \
	DECLARE_FUNCTION(execGetReferenceActor); \
	DECLARE_FUNCTION(execSetReferenceActor);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_ACCESSORS \
static void GetReferenceActor_WrapperImpl(const void* Object, void* OutValue); \
static void SetReferenceActor_WrapperImpl(void* Object, const void* InValue); \
static void GetAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetbFlipAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetbFlipAxis_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaLookAtModifier(); \
	friend struct Z_Construct_UClass_UAvaLookAtModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaLookAtModifier, UAvaAttachmentBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaLookAtModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaLookAtModifier*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaLookAtModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaLookAtModifier(UAvaLookAtModifier&&); \
	UAvaLookAtModifier(const UAvaLookAtModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaLookAtModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaLookAtModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaLookAtModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaLookAtModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaLookAtModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaLookAtModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
