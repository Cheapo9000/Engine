// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaCameraSubsystem.h"

#ifdef AVALANCHECAMERA_AvaCameraSubsystem_generated_h
#error "AvaCameraSubsystem.generated.h already included, missing '#pragma once' in AvaCameraSubsystem.h"
#endif
#define AVALANCHECAMERA_AvaCameraSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaViewTarget ****************************************************
struct Z_Construct_UScriptStruct_FAvaViewTarget_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraSubsystem_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaViewTarget_Statics; \
	AVALANCHECAMERA_API static class UScriptStruct* StaticStruct();


struct FAvaViewTarget;
// ********** End ScriptStruct FAvaViewTarget ******************************************************

// ********** Begin Class UAvaCameraSubsystem ******************************************************
struct Z_Construct_UClass_UAvaCameraSubsystem_Statics;
AVALANCHECAMERA_API UClass* Z_Construct_UClass_UAvaCameraSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraSubsystem_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaCameraSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaCameraSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHECAMERA_API UClass* ::Z_Construct_UClass_UAvaCameraSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaCameraSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheCamera"), Z_Construct_UClass_UAvaCameraSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaCameraSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraSubsystem_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHECAMERA_API UAvaCameraSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaCameraSubsystem(UAvaCameraSubsystem&&) = delete; \
	UAvaCameraSubsystem(const UAvaCameraSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHECAMERA_API, UAvaCameraSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaCameraSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaCameraSubsystem) \
	AVALANCHECAMERA_API virtual ~UAvaCameraSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraSubsystem_h_38_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraSubsystem_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraSubsystem_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraSubsystem_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaCameraSubsystem;

// ********** End Class UAvaCameraSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
