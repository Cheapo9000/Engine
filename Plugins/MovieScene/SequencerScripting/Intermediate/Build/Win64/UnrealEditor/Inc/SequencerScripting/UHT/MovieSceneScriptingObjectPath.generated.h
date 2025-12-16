// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingObjectPath.h"

#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingObjectPath_generated_h
#error "MovieSceneScriptingObjectPath.generated.h already included, missing '#pragma once' in MovieSceneScriptingObjectPath.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingObjectPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingKey;
class UMovieSceneScriptingObjectPathKey;
class UObject;
enum class EMovieSceneTimeUnit : uint8;
struct FFrameNumber;
struct FFrameTime;
struct FSequencerScriptingRange;

// ********** Begin Class UMovieSceneScriptingObjectPathKey ****************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


struct Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingObjectPathKey(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingObjectPathKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingObjectPathKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingObjectPathKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingObjectPathKey(UMovieSceneScriptingObjectPathKey&&) = delete; \
	UMovieSceneScriptingObjectPathKey(const UMovieSceneScriptingObjectPathKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingObjectPathKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingObjectPathKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingObjectPathKey) \
	NO_API virtual ~UMovieSceneScriptingObjectPathKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_21_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingObjectPathKey;

// ********** End Class UMovieSceneScriptingObjectPathKey ******************************************

// ********** Begin Class UMovieSceneScriptingObjectPathChannel ************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransform); \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execGetKeysByIndex); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


struct Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingObjectPathChannel(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingObjectPathChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingObjectPathChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingObjectPathChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingObjectPathChannel(UMovieSceneScriptingObjectPathChannel&&) = delete; \
	UMovieSceneScriptingObjectPathChannel(const UMovieSceneScriptingObjectPathChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingObjectPathChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingObjectPathChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingObjectPathChannel) \
	NO_API virtual ~UMovieSceneScriptingObjectPathChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_66_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingObjectPathChannel;

// ********** End Class UMovieSceneScriptingObjectPathChannel **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
