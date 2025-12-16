// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingFloat.h"

#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingFloat_generated_h
#error "MovieSceneScriptingFloat.generated.h already included, missing '#pragma once' in MovieSceneScriptingFloat.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingFloat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingFloatKey;
class UMovieSceneScriptingKey;
enum class EMovieSceneKeyInterpolation : uint8;
enum class EMovieSceneTimeUnit : uint8;
struct FFrameNumber;
struct FFrameRate;
struct FFrameTime;
struct FSequencerScriptingRange;

// ********** Begin Class UMovieSceneScriptingFloatKey *********************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLeaveTangentWeight); \
	DECLARE_FUNCTION(execGetLeaveTangentWeight); \
	DECLARE_FUNCTION(execSetArriveTangentWeight); \
	DECLARE_FUNCTION(execGetArriveTangentWeight); \
	DECLARE_FUNCTION(execSetTangentWeightMode); \
	DECLARE_FUNCTION(execGetTangentWeightMode); \
	DECLARE_FUNCTION(execSetLeaveTangent); \
	DECLARE_FUNCTION(execGetLeaveTangent); \
	DECLARE_FUNCTION(execSetArriveTangent); \
	DECLARE_FUNCTION(execGetArriveTangent); \
	DECLARE_FUNCTION(execSetTangentMode); \
	DECLARE_FUNCTION(execGetTangentMode); \
	DECLARE_FUNCTION(execSetInterpolationMode); \
	DECLARE_FUNCTION(execGetInterpolationMode); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


struct Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingFloatKey(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingFloatKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingFloatKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingFloatKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingFloatKey(UMovieSceneScriptingFloatKey&&) = delete; \
	UMovieSceneScriptingFloatKey(const UMovieSceneScriptingFloatKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingFloatKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingFloatKey); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingFloatKey) \
	NO_API virtual ~UMovieSceneScriptingFloatKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_22_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingFloatKey;

// ********** End Class UMovieSceneScriptingFloatKey ***********************************************

// ********** Begin Class UMovieSceneScriptingActualFloatKey ***************************************
struct Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingActualFloatKey(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingActualFloatKey, UMovieSceneScriptingFloatKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingActualFloatKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingActualFloatKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingActualFloatKey(UMovieSceneScriptingActualFloatKey&&) = delete; \
	UMovieSceneScriptingActualFloatKey(const UMovieSceneScriptingActualFloatKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingActualFloatKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingActualFloatKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingActualFloatKey) \
	NO_API virtual ~UMovieSceneScriptingActualFloatKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_157_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_160_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingActualFloatKey;

// ********** End Class UMovieSceneScriptingActualFloatKey *****************************************

// ********** Begin Class UMovieSceneScriptingDoubleAsFloatKey *************************************
struct Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingDoubleAsFloatKey(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingDoubleAsFloatKey, UMovieSceneScriptingFloatKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingDoubleAsFloatKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_260_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingDoubleAsFloatKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingDoubleAsFloatKey(UMovieSceneScriptingDoubleAsFloatKey&&) = delete; \
	UMovieSceneScriptingDoubleAsFloatKey(const UMovieSceneScriptingDoubleAsFloatKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingDoubleAsFloatKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingDoubleAsFloatKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingDoubleAsFloatKey) \
	NO_API virtual ~UMovieSceneScriptingDoubleAsFloatKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_257_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_260_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingDoubleAsFloatKey;

// ********** End Class UMovieSceneScriptingDoubleAsFloatKey ***************************************

// ********** Begin Class UMovieSceneScriptingFloatChannel *****************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_360_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransform); \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execSetPostInfinityExtrapolation); \
	DECLARE_FUNCTION(execGetPostInfinityExtrapolation); \
	DECLARE_FUNCTION(execSetPreInfinityExtrapolation); \
	DECLARE_FUNCTION(execGetPreInfinityExtrapolation); \
	DECLARE_FUNCTION(execComputeEffectiveRange); \
	DECLARE_FUNCTION(execEvaluateKeys); \
	DECLARE_FUNCTION(execGetNumKeys); \
	DECLARE_FUNCTION(execGetKeysByIndex); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


struct Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_360_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingFloatChannel(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScriptingFloatChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScriptingFloatChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_360_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingFloatChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScriptingFloatChannel(UMovieSceneScriptingFloatChannel&&) = delete; \
	UMovieSceneScriptingFloatChannel(const UMovieSceneScriptingFloatChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingFloatChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingFloatChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingFloatChannel) \
	NO_API virtual ~UMovieSceneScriptingFloatChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_357_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_360_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_360_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_360_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_360_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScriptingFloatChannel;

// ********** End Class UMovieSceneScriptingFloatChannel *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
