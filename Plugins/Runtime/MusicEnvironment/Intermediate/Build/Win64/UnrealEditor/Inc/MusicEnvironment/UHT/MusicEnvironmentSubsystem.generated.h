// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MusicEnvironmentSubsystem.h"

#ifdef MUSICENVIRONMENT_MusicEnvironmentSubsystem_generated_h
#error "MusicEnvironmentSubsystem.generated.h already included, missing '#pragma once' in MusicEnvironmentSubsystem.h"
#endif
#define MUSICENVIRONMENT_MusicEnvironmentSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMusicEnvironmentMetronome;
class UMusicClockSourceManager;
class UObject;

// ********** Begin Class UMusicEnvironmentSubsystem ***********************************************
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnMetronome); \
	DECLARE_FUNCTION(execCanSpawnMetronome); \
	DECLARE_FUNCTION(execGetClockSourceManager);


struct Z_Construct_UClass_UMusicEnvironmentSubsystem_Statics;
MUSICENVIRONMENT_API UClass* Z_Construct_UClass_UMusicEnvironmentSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicEnvironmentSubsystem(); \
	friend struct ::Z_Construct_UClass_UMusicEnvironmentSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUSICENVIRONMENT_API UClass* ::Z_Construct_UClass_UMusicEnvironmentSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicEnvironmentSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MusicEnvironment"), Z_Construct_UClass_UMusicEnvironmentSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMusicEnvironmentSubsystem)


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MUSICENVIRONMENT_API UMusicEnvironmentSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicEnvironmentSubsystem(UMusicEnvironmentSubsystem&&) = delete; \
	UMusicEnvironmentSubsystem(const UMusicEnvironmentSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MUSICENVIRONMENT_API, UMusicEnvironmentSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicEnvironmentSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMusicEnvironmentSubsystem) \
	MUSICENVIRONMENT_API virtual ~UMusicEnvironmentSubsystem();


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicEnvironmentSubsystem;

// ********** End Class UMusicEnvironmentSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
