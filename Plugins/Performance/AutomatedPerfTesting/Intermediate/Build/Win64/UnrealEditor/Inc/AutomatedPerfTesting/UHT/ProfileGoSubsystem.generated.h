// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProfileGo/ProfileGoSubsystem.h"

#ifdef AUTOMATEDPERFTESTING_ProfileGoSubsystem_generated_h
#error "ProfileGoSubsystem.generated.h already included, missing '#pragma once' in ProfileGoSubsystem.h"
#endif
#define AUTOMATEDPERFTESTING_ProfileGoSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProfileGoSubsystem ******************************************************
struct Z_Construct_UClass_UProfileGoSubsystem_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UProfileGoSubsystem_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGoSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProfileGoSubsystem(); \
	friend struct ::Z_Construct_UClass_UProfileGoSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UProfileGoSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UProfileGoSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UProfileGoSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UProfileGoSubsystem)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGoSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATEDPERFTESTING_API UProfileGoSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProfileGoSubsystem(UProfileGoSubsystem&&) = delete; \
	UProfileGoSubsystem(const UProfileGoSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UProfileGoSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProfileGoSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProfileGoSubsystem) \
	AUTOMATEDPERFTESTING_API virtual ~UProfileGoSubsystem();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGoSubsystem_h_21_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGoSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGoSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGoSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProfileGoSubsystem;

// ********** End Class UProfileGoSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGoSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
