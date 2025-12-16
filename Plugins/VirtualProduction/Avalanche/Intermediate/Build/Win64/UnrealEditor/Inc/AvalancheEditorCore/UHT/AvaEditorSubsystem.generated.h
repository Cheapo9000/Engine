// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaEditorSubsystem.h"

#ifdef AVALANCHEEDITORCORE_AvaEditorSubsystem_generated_h
#error "AvaEditorSubsystem.generated.h already included, missing '#pragma once' in AvaEditorSubsystem.h"
#endif
#define AVALANCHEEDITORCORE_AvaEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaEditorSubsystem ******************************************************
struct Z_Construct_UClass_UAvaEditorSubsystem_Statics;
AVALANCHEEDITORCORE_API UClass* Z_Construct_UClass_UAvaEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheEditorCore_Public_AvaEditorSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEEDITORCORE_API UClass* ::Z_Construct_UClass_UAvaEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaEditorSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheEditorCore"), Z_Construct_UClass_UAvaEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaEditorSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheEditorCore_Public_AvaEditorSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEEDITORCORE_API UAvaEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaEditorSubsystem(UAvaEditorSubsystem&&) = delete; \
	UAvaEditorSubsystem(const UAvaEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEEDITORCORE_API, UAvaEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaEditorSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheEditorCore_Public_AvaEditorSubsystem_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheEditorCore_Public_AvaEditorSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheEditorCore_Public_AvaEditorSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheEditorCore_Public_AvaEditorSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaEditorSubsystem;

// ********** End Class UAvaEditorSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheEditorCore_Public_AvaEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
