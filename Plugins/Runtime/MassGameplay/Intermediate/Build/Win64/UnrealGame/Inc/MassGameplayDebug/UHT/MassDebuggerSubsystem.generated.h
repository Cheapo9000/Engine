// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassDebuggerSubsystem.h"

#ifdef MASSGAMEPLAYDEBUG_MassDebuggerSubsystem_generated_h
#error "MassDebuggerSubsystem.generated.h already included, missing '#pragma once' in MassDebuggerSubsystem.h"
#endif
#define MASSGAMEPLAYDEBUG_MassDebuggerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassDebuggerSubsystem ***************************************************
struct Z_Construct_UClass_UMassDebuggerSubsystem_Statics;
MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebuggerSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassDebuggerSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassDebuggerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSGAMEPLAYDEBUG_API UClass* ::Z_Construct_UClass_UMassDebuggerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassDebuggerSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassGameplayDebug"), Z_Construct_UClass_UMassDebuggerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassDebuggerSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSGAMEPLAYDEBUG_API UMassDebuggerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassDebuggerSubsystem(UMassDebuggerSubsystem&&) = delete; \
	UMassDebuggerSubsystem(const UMassDebuggerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSGAMEPLAYDEBUG_API, UMassDebuggerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassDebuggerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassDebuggerSubsystem) \
	MASSGAMEPLAYDEBUG_API virtual ~UMassDebuggerSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassDebuggerSubsystem;

// ********** End Class UMassDebuggerSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebuggerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
