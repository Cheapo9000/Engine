// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AvaPatternModifierTool.h"

#ifdef AVALANCHEMODIFIERS_AvaPatternModifierTool_generated_h
#error "AvaPatternModifierTool.generated.h already included, missing '#pragma once' in AvaPatternModifierTool.h"
#endif
#define AVALANCHEMODIFIERS_AvaPatternModifierTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPatternModifierTool **************************************************
struct Z_Construct_UClass_UAvaPatternModifierTool_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaPatternModifierTool_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaPatternModifierTool_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPatternModifierTool(); \
	friend struct ::Z_Construct_UClass_UAvaPatternModifierTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaPatternModifierTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPatternModifierTool, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaPatternModifierTool_NoRegister) \
	DECLARE_SERIALIZER(UAvaPatternModifierTool)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaPatternModifierTool_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPatternModifierTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPatternModifierTool(UAvaPatternModifierTool&&) = delete; \
	UAvaPatternModifierTool(const UAvaPatternModifierTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPatternModifierTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPatternModifierTool); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPatternModifierTool) \
	NO_API virtual ~UAvaPatternModifierTool();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaPatternModifierTool_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaPatternModifierTool_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaPatternModifierTool_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaPatternModifierTool_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPatternModifierTool;

// ********** End Class UAvaPatternModifierTool ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Private_Tools_AvaPatternModifierTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
