// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProfilingDebugging/LevelStreamingProfilingSubsystem.h"

#ifdef ENGINE_LevelStreamingProfilingSubsystem_generated_h
#error "LevelStreamingProfilingSubsystem.generated.h already included, missing '#pragma once' in LevelStreamingProfilingSubsystem.h"
#endif
#define ENGINE_LevelStreamingProfilingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelStreamingProfilingSubsystem ****************************************
struct Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingProfilingSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreamingProfilingSubsystem(); \
	friend struct ::Z_Construct_UClass_ULevelStreamingProfilingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelStreamingProfilingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelStreamingProfilingSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelStreamingProfilingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULevelStreamingProfilingSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelStreamingProfilingSubsystem(ULevelStreamingProfilingSubsystem&&) = delete; \
	ULevelStreamingProfilingSubsystem(const ULevelStreamingProfilingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreamingProfilingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingProfilingSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingProfilingSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelStreamingProfilingSubsystem;

// ********** End Class ULevelStreamingProfilingSubsystem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_LevelStreamingProfilingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
