// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosDebugDrawSubsystem.h"

#ifdef CHAOSSOLVERENGINE_ChaosDebugDrawSubsystem_generated_h
#error "ChaosDebugDrawSubsystem.generated.h already included, missing '#pragma once' in ChaosDebugDrawSubsystem.h"
#endif
#define CHAOSSOLVERENGINE_ChaosDebugDrawSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosDebugDrawSubsystem *************************************************
struct Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics;
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosDebugDrawSubsystem(); \
	friend struct ::Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSSOLVERENGINE_API UClass* ::Z_Construct_UClass_UChaosDebugDrawSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosDebugDrawSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), Z_Construct_UClass_UChaosDebugDrawSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UChaosDebugDrawSubsystem)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSSOLVERENGINE_API UChaosDebugDrawSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosDebugDrawSubsystem(UChaosDebugDrawSubsystem&&) = delete; \
	UChaosDebugDrawSubsystem(const UChaosDebugDrawSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVERENGINE_API, UChaosDebugDrawSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosDebugDrawSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosDebugDrawSubsystem) \
	CHAOSSOLVERENGINE_API virtual ~UChaosDebugDrawSubsystem();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_14_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosDebugDrawSubsystem;

// ********** End Class UChaosDebugDrawSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
