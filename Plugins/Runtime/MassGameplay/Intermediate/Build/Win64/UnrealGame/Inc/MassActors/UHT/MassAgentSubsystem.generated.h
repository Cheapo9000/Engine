// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassAgentSubsystem.h"

#ifdef MASSACTORS_MassAgentSubsystem_generated_h
#error "MassAgentSubsystem.generated.h already included, missing '#pragma once' in MassAgentSubsystem.h"
#endif
#define MASSACTORS_MassAgentSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassAgentInitializationQueue *************************************
struct Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct();


struct FMassAgentInitializationQueue;
// ********** End ScriptStruct FMassAgentInitializationQueue ***************************************

// ********** Begin Class UMassAgentSubsystem ******************************************************
struct Z_Construct_UClass_UMassAgentSubsystem_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassAgentSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassAgentSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassAgentSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassAgentSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassAgentSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassAgentSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSACTORS_API UMassAgentSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassAgentSubsystem(UMassAgentSubsystem&&) = delete; \
	UMassAgentSubsystem(const UMassAgentSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassAgentSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassAgentSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassAgentSubsystem) \
	MASSACTORS_API virtual ~UMassAgentSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_41_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassAgentSubsystem;

// ********** End Class UMassAgentSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
