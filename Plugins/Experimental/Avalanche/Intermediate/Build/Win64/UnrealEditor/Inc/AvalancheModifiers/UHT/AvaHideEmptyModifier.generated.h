// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaHideEmptyModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef AVALANCHEMODIFIERS_AvaHideEmptyModifier_generated_h
#error "AvaHideEmptyModifier.generated.h already included, missing '#pragma once' in AvaHideEmptyModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaHideEmptyModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInvertVisibility); \
	DECLARE_FUNCTION(execSetInvertVisibility); \
	DECLARE_FUNCTION(execGetContainerActor); \
	DECLARE_FUNCTION(execSetContainerActor);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_ACCESSORS \
static void GetContainerActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetContainerActorWeak_WrapperImpl(void* Object, const void* InValue); \
static void GetbInvertVisibility_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInvertVisibility_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaHideEmptyModifier(); \
	friend struct Z_Construct_UClass_UAvaHideEmptyModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaHideEmptyModifier, UAvaArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaHideEmptyModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaHideEmptyModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaHideEmptyModifier(UAvaHideEmptyModifier&&); \
	UAvaHideEmptyModifier(const UAvaHideEmptyModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaHideEmptyModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaHideEmptyModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaHideEmptyModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaHideEmptyModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaHideEmptyModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaHideEmptyModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
