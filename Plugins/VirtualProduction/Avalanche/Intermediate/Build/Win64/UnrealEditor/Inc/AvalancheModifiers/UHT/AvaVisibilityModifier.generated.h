// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaVisibilityModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaVisibilityModifier_generated_h
#error "AvaVisibilityModifier.generated.h already included, missing '#pragma once' in AvaVisibilityModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaVisibilityModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaVisibilityModifier ***************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkipWhenHidden); \
	DECLARE_FUNCTION(execSetSkipWhenHidden); \
	DECLARE_FUNCTION(execGetTreatAsRange); \
	DECLARE_FUNCTION(execSetTreatAsRange); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execGetInvertVisibility); \
	DECLARE_FUNCTION(execSetInvertVisibility);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_ACCESSORS \
static void GetIndex_WrapperImpl(const void* Object, void* OutValue); \
static void SetIndex_WrapperImpl(void* Object, const void* InValue); \
static void GetbTreatAsRange_WrapperImpl(const void* Object, void* OutValue); \
static void SetbTreatAsRange_WrapperImpl(void* Object, const void* InValue); \
static void GetbInvertVisibility_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInvertVisibility_WrapperImpl(void* Object, const void* InValue); \
static void GetbSkipWhenHidden_WrapperImpl(const void* Object, void* OutValue); \
static void SetbSkipWhenHidden_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaVisibilityModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaVisibilityModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaVisibilityModifier(); \
	friend struct ::Z_Construct_UClass_UAvaVisibilityModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaVisibilityModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaVisibilityModifier, UActorModifierArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaVisibilityModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaVisibilityModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaVisibilityModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaVisibilityModifier(UAvaVisibilityModifier&&) = delete; \
	UAvaVisibilityModifier(const UAvaVisibilityModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaVisibilityModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaVisibilityModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaVisibilityModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaVisibilityModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaVisibilityModifier;

// ********** End Class UAvaVisibilityModifier *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaVisibilityModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
