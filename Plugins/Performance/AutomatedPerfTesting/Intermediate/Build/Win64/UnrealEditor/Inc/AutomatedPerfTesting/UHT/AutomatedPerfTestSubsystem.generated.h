// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedPerfTestSubsystem.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedPerfTestSubsystem_generated_h
#error "AutomatedPerfTestSubsystem.generated.h already included, missing '#pragma once' in AutomatedPerfTestSubsystem.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedPerfTestSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutomatedPerfTestSubsystem **********************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTestID);


struct Z_Construct_UClass_UAutomatedPerfTestSubsystem_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedPerfTestSubsystem_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedPerfTestSubsystem(); \
	friend struct ::Z_Construct_UClass_UAutomatedPerfTestSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedPerfTestSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedPerfTestSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedPerfTestSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedPerfTestSubsystem)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATEDPERFTESTING_API UAutomatedPerfTestSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedPerfTestSubsystem(UAutomatedPerfTestSubsystem&&) = delete; \
	UAutomatedPerfTestSubsystem(const UAutomatedPerfTestSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedPerfTestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedPerfTestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutomatedPerfTestSubsystem) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedPerfTestSubsystem();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h_12_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedPerfTestSubsystem;

// ********** End Class UAutomatedPerfTestSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
