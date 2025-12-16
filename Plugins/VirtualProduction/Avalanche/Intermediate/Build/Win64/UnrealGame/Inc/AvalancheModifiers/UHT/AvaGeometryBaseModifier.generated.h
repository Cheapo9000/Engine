// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaGeometryBaseModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaGeometryBaseModifier_generated_h
#error "AvaGeometryBaseModifier.generated.h already included, missing '#pragma once' in AvaGeometryBaseModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaGeometryBaseModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaGeometryBaseModifier *************************************************
struct Z_Construct_UClass_UAvaGeometryBaseModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaGeometryBaseModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGeometryBaseModifier_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaGeometryBaseModifier(); \
	friend struct ::Z_Construct_UClass_UAvaGeometryBaseModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaGeometryBaseModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaGeometryBaseModifier, UActorModifierCoreBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaGeometryBaseModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaGeometryBaseModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGeometryBaseModifier_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaGeometryBaseModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaGeometryBaseModifier(UAvaGeometryBaseModifier&&) = delete; \
	UAvaGeometryBaseModifier(const UAvaGeometryBaseModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaGeometryBaseModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaGeometryBaseModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaGeometryBaseModifier) \
	NO_API virtual ~UAvaGeometryBaseModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGeometryBaseModifier_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGeometryBaseModifier_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGeometryBaseModifier_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGeometryBaseModifier_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaGeometryBaseModifier;

// ********** End Class UAvaGeometryBaseModifier ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaGeometryBaseModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
