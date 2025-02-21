// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaAlignBetweenModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAvaAlignBetweenWeightedActor;
#ifdef AVALANCHEMODIFIERS_AvaAlignBetweenModifier_generated_h
#error "AvaAlignBetweenModifier.generated.h already included, missing '#pragma once' in AvaAlignBetweenModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaAlignBetweenModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaAlignBetweenWeightedActor_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaAlignBetweenWeightedActor>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindReferenceActor); \
	DECLARE_FUNCTION(execRemoveReferenceActor); \
	DECLARE_FUNCTION(execAddReferenceActor); \
	DECLARE_FUNCTION(execSetReferenceActors); \
	DECLARE_FUNCTION(execGetReferenceActors);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_ACCESSORS \
static void GetReferenceActors_WrapperImpl(const void* Object, void* OutValue); \
static void SetReferenceActors_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaAlignBetweenModifier(); \
	friend struct Z_Construct_UClass_UAvaAlignBetweenModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaAlignBetweenModifier, UAvaBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaAlignBetweenModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaAlignBetweenModifier*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaAlignBetweenModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaAlignBetweenModifier(UAvaAlignBetweenModifier&&); \
	UAvaAlignBetweenModifier(const UAvaAlignBetweenModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaAlignBetweenModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaAlignBetweenModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaAlignBetweenModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaAlignBetweenModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_62_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaAlignBetweenModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaAlignBetweenModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
