// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MusicClockSourceManager.h"

#ifdef MUSICENVIRONMENT_MusicClockSourceManager_generated_h
#error "MusicClockSourceManager.generated.h already included, missing '#pragma once' in MusicClockSourceManager.h"
#endif
#define MUSICENVIRONMENT_MusicClockSourceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMusicEnvironmentClockSource;
struct FGameplayTag;

// ********** Begin Class UMusicClockSourceManager *************************************************
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPopMusicClockAuthority); \
	DECLARE_FUNCTION(execRemoveGlobalClockAuthority); \
	DECLARE_FUNCTION(execPushGlobalMusicClockAuthority); \
	DECLARE_FUNCTION(execGetGlobalMusicClockAuthority); \
	DECLARE_FUNCTION(execRemoveClockWithTag); \
	DECLARE_FUNCTION(execRemoveTaggedClock); \
	DECLARE_FUNCTION(execAddTaggedClock); \
	DECLARE_FUNCTION(execFindClock);


struct Z_Construct_UClass_UMusicClockSourceManager_Statics;
MUSICENVIRONMENT_API UClass* Z_Construct_UClass_UMusicClockSourceManager_NoRegister();

#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicClockSourceManager(); \
	friend struct ::Z_Construct_UClass_UMusicClockSourceManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUSICENVIRONMENT_API UClass* ::Z_Construct_UClass_UMusicClockSourceManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicClockSourceManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MusicEnvironment"), Z_Construct_UClass_UMusicClockSourceManager_NoRegister) \
	DECLARE_SERIALIZER(UMusicClockSourceManager)


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MUSICENVIRONMENT_API UMusicClockSourceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicClockSourceManager(UMusicClockSourceManager&&) = delete; \
	UMusicClockSourceManager(const UMusicClockSourceManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MUSICENVIRONMENT_API, UMusicClockSourceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicClockSourceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicClockSourceManager) \
	MUSICENVIRONMENT_API virtual ~UMusicClockSourceManager();


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicClockSourceManager;

// ********** End Class UMusicClockSourceManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicClockSourceManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
