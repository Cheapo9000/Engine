// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaViewportDataSubsystem.h"

#ifdef AVALANCHEVIEWPORT_AvaViewportDataSubsystem_generated_h
#error "AvaViewportDataSubsystem.generated.h already included, missing '#pragma once' in AvaViewportDataSubsystem.h"
#endif
#define AVALANCHEVIEWPORT_AvaViewportDataSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaViewportData **************************************************
struct Z_Construct_UScriptStruct_FAvaViewportData_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportDataSubsystem_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaViewportData_Statics; \
	AVALANCHEVIEWPORT_API static class UScriptStruct* StaticStruct();


struct FAvaViewportData;
// ********** End ScriptStruct FAvaViewportData ****************************************************

// ********** Begin Class UAvaViewportDataSubsystem ************************************************
struct Z_Construct_UClass_UAvaViewportDataSubsystem_Statics;
AVALANCHEVIEWPORT_API UClass* Z_Construct_UClass_UAvaViewportDataSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportDataSubsystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaViewportDataSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaViewportDataSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEVIEWPORT_API UClass* ::Z_Construct_UClass_UAvaViewportDataSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaViewportDataSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheViewport"), Z_Construct_UClass_UAvaViewportDataSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaViewportDataSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportDataSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaViewportDataSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaViewportDataSubsystem(UAvaViewportDataSubsystem&&) = delete; \
	UAvaViewportDataSubsystem(const UAvaViewportDataSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaViewportDataSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaViewportDataSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaViewportDataSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportDataSubsystem_h_37_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportDataSubsystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportDataSubsystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportDataSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaViewportDataSubsystem;

// ********** End Class UAvaViewportDataSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportDataSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
