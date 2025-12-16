// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneGameplayCueTrack.h"

#ifdef GAMEPLAYABILITIES_MovieSceneGameplayCueTrack_generated_h
#error "MovieSceneGameplayCueTrack.generated.h already included, missing '#pragma once' in MovieSceneGameplayCueTrack.h"
#endif
#define GAMEPLAYABILITIES_MovieSceneGameplayCueTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueParameters;
struct FGameplayTag;

// ********** Begin Delegate FMovieSceneGameplayCueEvent *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_14_DELEGATE \
GAMEPLAYABILITIES_API void FMovieSceneGameplayCueEvent_DelegateWrapper(const FScriptDelegate& MovieSceneGameplayCueEvent, AActor* Target, FGameplayTag GameplayTag, FGameplayCueParameters const& Parameters, EGameplayCueEvent::Type Event);


// ********** End Delegate FMovieSceneGameplayCueEvent *********************************************

// ********** Begin Class UMovieSceneGameplayCueTrack **********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSequencerTrackHandler);


struct Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueTrack_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneGameplayCueTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UMovieSceneGameplayCueTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGameplayCueTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UMovieSceneGameplayCueTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGameplayCueTrack)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGameplayCueTrack(UMovieSceneGameplayCueTrack&&) = delete; \
	UMovieSceneGameplayCueTrack(const UMovieSceneGameplayCueTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UMovieSceneGameplayCueTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGameplayCueTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneGameplayCueTrack) \
	GAMEPLAYABILITIES_API virtual ~UMovieSceneGameplayCueTrack();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGameplayCueTrack;

// ********** End Class UMovieSceneGameplayCueTrack ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
