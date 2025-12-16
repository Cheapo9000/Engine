// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingInteger.h"

#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingInteger_generated_h
#error "MovieSceneScriptingInteger.generated.h already included, missing '#pragma once' in MovieSceneScriptingInteger.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingInteger_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingIntegerKey;
class UMovieSceneScriptingKey;
enum class EMovieSceneTimeUnit : uint8;
struct FFrameNumber;
struct FFrameRate;
struct FFrameTime;
struct FSequencerScriptingRange;

// ********** Begin Class UMovieSceneScriptingIntegerKey *******************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


struct Z_Construct_UClass_UMovieSceneScriptingIntegerKey_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingIntegerKey_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingIntegerKey(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingIntegerKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingIntegerKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingIntegerKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingIntegerKey_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingIntegerKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingIntegerKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingIntegerKey(UMovieSceneScriptingIntegerKey&&) = delete; \
	UMovieSceneScriptingIntegerKey(const UMovieSceneScriptingIntegerKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingIntegerKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingIntegerKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingIntegerKey) \
	NO_API virtual ~UMovieSceneScriptingIntegerKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_21_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingIntegerKey;

// ********** End Class UMovieSceneScriptingIntegerKey *********************************************

// ********** Begin Class UMovieSceneScriptingIntegerChannel ***************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransform); \
	DECLARE_FUNCTION(execGetInterpolateLinearKeys); \
	DECLARE_FUNCTION(execSetInterpolateLinearKeys); \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execEvaluateKeys); \
	DECLARE_FUNCTION(execGetNumKeys); \
	DECLARE_FUNCTION(execGetKeysByIndex); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


struct Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingIntegerChannel(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingIntegerChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingIntegerChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingIntegerChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingIntegerChannel(UMovieSceneScriptingIntegerChannel&&) = delete; \
	UMovieSceneScriptingIntegerChannel(const UMovieSceneScriptingIntegerChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingIntegerChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingIntegerChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingIntegerChannel) \
	NO_API virtual ~UMovieSceneScriptingIntegerChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_64_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingIntegerChannel;

// ********** End Class UMovieSceneScriptingIntegerChannel *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
