// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingString.h"

#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingString_generated_h
#error "MovieSceneScriptingString.generated.h already included, missing '#pragma once' in MovieSceneScriptingString.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingString_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingKey;
class UMovieSceneScriptingStringKey;
enum class EMovieSceneTimeUnit : uint8;
struct FFrameNumber;
struct FFrameTime;
struct FSequencerScriptingRange;

// ********** Begin Class UMovieSceneScriptingStringKey ********************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


struct Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingStringKey_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingStringKey(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingStringKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingStringKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingStringKey_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingStringKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingStringKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingStringKey(UMovieSceneScriptingStringKey&&) = delete; \
	UMovieSceneScriptingStringKey(const UMovieSceneScriptingStringKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingStringKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingStringKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingStringKey) \
	NO_API virtual ~UMovieSceneScriptingStringKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_20_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingStringKey;

// ********** End Class UMovieSceneScriptingStringKey **********************************************

// ********** Begin Class UMovieSceneScriptingStringChannel ****************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransform); \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execGetKeysByIndex); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


struct Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingStringChannel_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingStringChannel(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingStringChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingStringChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingStringChannel_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingStringChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingStringChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingStringChannel(UMovieSceneScriptingStringChannel&&) = delete; \
	UMovieSceneScriptingStringChannel(const UMovieSceneScriptingStringChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingStringChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingStringChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingStringChannel) \
	NO_API virtual ~UMovieSceneScriptingStringChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_63_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingStringChannel;

// ********** End Class UMovieSceneScriptingStringChannel ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
