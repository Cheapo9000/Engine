// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneGameplayCueSections.h"

#ifdef GAMEPLAYABILITIES_MovieSceneGameplayCueSections_generated_h
#error "MovieSceneGameplayCueSections.generated.h already included, missing '#pragma once' in MovieSceneGameplayCueSections.h"
#endif
#define GAMEPLAYABILITIES_MovieSceneGameplayCueSections_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneGameplayCueKey *****************************************
struct Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FMovieSceneGameplayCueKey;
// ********** End ScriptStruct FMovieSceneGameplayCueKey *******************************************

// ********** Begin ScriptStruct FMovieSceneGameplayCueChannel *************************************
struct Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneChannel Super;


struct FMovieSceneGameplayCueChannel;
// ********** End ScriptStruct FMovieSceneGameplayCueChannel ***************************************

// ********** Begin Class UMovieSceneGameplayCueTriggerSection *************************************
struct Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneGameplayCueTriggerSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGameplayCueTriggerSection, UMovieSceneHookSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGameplayCueTriggerSection)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_161_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGameplayCueTriggerSection(UMovieSceneGameplayCueTriggerSection&&) = delete; \
	UMovieSceneGameplayCueTriggerSection(const UMovieSceneGameplayCueTriggerSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UMovieSceneGameplayCueTriggerSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGameplayCueTriggerSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGameplayCueTriggerSection) \
	GAMEPLAYABILITIES_API virtual ~UMovieSceneGameplayCueTriggerSection();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_155_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_161_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_161_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGameplayCueTriggerSection;

// ********** End Class UMovieSceneGameplayCueTriggerSection ***************************************

// ********** Begin Class UMovieSceneGameplayCueSection ********************************************
struct Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneGameplayCueSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UMovieSceneGameplayCueSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGameplayCueSection, UMovieSceneHookSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UMovieSceneGameplayCueSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGameplayCueSection)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_185_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGameplayCueSection(UMovieSceneGameplayCueSection&&) = delete; \
	UMovieSceneGameplayCueSection(const UMovieSceneGameplayCueSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UMovieSceneGameplayCueSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGameplayCueSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGameplayCueSection) \
	GAMEPLAYABILITIES_API virtual ~UMovieSceneGameplayCueSection();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_179_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_185_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_185_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGameplayCueSection;

// ********** End Class UMovieSceneGameplayCueSection **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
