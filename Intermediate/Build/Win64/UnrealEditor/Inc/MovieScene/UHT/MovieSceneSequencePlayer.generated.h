// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSequencePlayer.h"

#ifdef MOVIESCENE_MovieSceneSequencePlayer_generated_h
#error "MovieSceneSequencePlayer.generated.h already included, missing '#pragma once' in MovieSceneSequencePlayer.h"
#endif
#define MOVIESCENE_MovieSceneSequencePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneSequence;
class UObject;
enum class EMovieSceneCompletionModeOverride : uint8;
enum class EUpdatePositionMethod : uint8;
struct FFrameRate;
struct FFrameTime;
struct FMovieSceneObjectBindingID;
struct FMovieSceneSequencePlaybackParams;
struct FMovieSceneSequencePlayToParams;
struct FQualifiedFrameTime;

// ********** Begin Delegate FOnMovieSceneSequencePlayerEvent **************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_32_DELEGATE \
MOVIESCENE_API void FOnMovieSceneSequencePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMovieSceneSequencePlayerEvent);


// ********** End Delegate FOnMovieSceneSequencePlayerEvent ****************************************

// ********** Begin ScriptStruct FMovieSceneSequenceReplProperties *********************************
struct Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSequenceReplProperties;
// ********** End ScriptStruct FMovieSceneSequenceReplProperties ***********************************

// ********** Begin ScriptStruct FMovieSceneSequencePlaybackParams *********************************
struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSequencePlaybackParams;
// ********** End ScriptStruct FMovieSceneSequencePlaybackParams ***********************************

// ********** Begin ScriptStruct FMovieSceneSequencePlayToParams ***********************************
struct Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_165_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSequencePlayToParams;
// ********** End ScriptStruct FMovieSceneSequencePlayToParams *************************************

// ********** Begin Class UMovieSceneSequencePlayer ************************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	MOVIESCENE_API virtual void RPC_OnFinishPlaybackEvent_Implementation(FFrameTime StoppedTime, int32 NewSerialNumber); \
	MOVIESCENE_API virtual void RPC_OnStopEvent_Implementation(FFrameTime StoppedTime, int32 NewSerialNumber); \
	MOVIESCENE_API virtual void RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod Method, FFrameTime RelevantTime, int32 NewSerialNumber); \
	DECLARE_FUNCTION(execRPC_OnFinishPlaybackEvent); \
	DECLARE_FUNCTION(execRPC_OnStopEvent); \
	DECLARE_FUNCTION(execRPC_ExplicitServerUpdateEvent); \
	DECLARE_FUNCTION(execGetSequenceName); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execRequestInvalidateBinding); \
	DECLARE_FUNCTION(execGetObjectBindings); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execGetDisableCameraCuts); \
	DECLARE_FUNCTION(execSetDisableCameraCuts); \
	DECLARE_FUNCTION(execSetHideHud); \
	DECLARE_FUNCTION(execGetHideHud); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execIsReversed); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetCompletionModeOverride); \
	DECLARE_FUNCTION(execSetCompletionModeOverride); \
	DECLARE_FUNCTION(execRestoreState); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execPlayTo); \
	DECLARE_FUNCTION(execSetTimeRange); \
	DECLARE_FUNCTION(execSetFrameRange); \
	DECLARE_FUNCTION(execRemoveWeight); \
	DECLARE_FUNCTION(execSetWeight); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetFrameDuration); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGoToEndAndStop); \
	DECLARE_FUNCTION(execStopAtCurrentTime); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execScrub); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlayLooping); \
	DECLARE_FUNCTION(execChangePlaybackDirection); \
	DECLARE_FUNCTION(execPlayReverse); \
	DECLARE_FUNCTION(execPlay);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMovieSceneSequencePlayer_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequencePlayer(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSequencePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSequencePlayer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSequencePlayer) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneSequencePlayer*>(this); } \
	MOVIESCENE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Observer=NETFIELD_REP_START, \
		bReversePlayback, \
		StartTime, \
		DurationFrames, \
		DurationSubFrames, \
		PlaybackSettings, \
		NetSyncProps, \
		NETFIELD_REP_END=NetSyncProps	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(MOVIESCENE_API) \
private: \
	REPLICATED_BASE_CLASS(UMovieSceneSequencePlayer) \
public:


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSequencePlayer(UMovieSceneSequencePlayer&&) = delete; \
	UMovieSceneSequencePlayer(const UMovieSceneSequencePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequencePlayer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequencePlayer)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_175_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_182_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSequencePlayer;

// ********** End Class UMovieSceneSequencePlayer **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h

// ********** Begin Enum EUpdatePositionMethod *****************************************************
#define FOREACH_ENUM_EUPDATEPOSITIONMETHOD(op) \
	op(EUpdatePositionMethod::Play) \
	op(EUpdatePositionMethod::Jump) \
	op(EUpdatePositionMethod::Scrub) 

enum class EUpdatePositionMethod : uint8;
template<> struct TIsUEnumClass<EUpdatePositionMethod> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EUpdatePositionMethod>();
// ********** End Enum EUpdatePositionMethod *******************************************************

// ********** Begin Enum EMovieScenePositionType ***************************************************
#define FOREACH_ENUM_EMOVIESCENEPOSITIONTYPE(op) \
	op(EMovieScenePositionType::Frame) \
	op(EMovieScenePositionType::Time) \
	op(EMovieScenePositionType::MarkedFrame) \
	op(EMovieScenePositionType::Timecode) 

enum class EMovieScenePositionType : uint8;
template<> struct TIsUEnumClass<EMovieScenePositionType> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieScenePositionType>();
// ********** End Enum EMovieScenePositionType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
