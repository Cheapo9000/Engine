// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequencePlayer.h"

#ifdef DAYSEQUENCE_DaySequencePlayer_generated_h
#error "DaySequencePlayer.generated.h already included, missing '#pragma once' in DaySequencePlayer.h"
#endif
#define DAYSEQUENCE_DaySequencePlayer_generated_h

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
struct FQualifiedFrameTime;

// ********** Begin Delegate FOnDaySequencePlayerEvent *********************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_33_DELEGATE \
DAYSEQUENCE_API void FOnDaySequencePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDaySequencePlayerEvent);


// ********** End Delegate FOnDaySequencePlayerEvent ***********************************************

// ********** Begin ScriptStruct FDaySequencePlaybackParams ****************************************
struct Z_Construct_UScriptStruct_FDaySequencePlaybackParams_Statics;
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDaySequencePlaybackParams_Statics; \
	DAYSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FDaySequencePlaybackParams;
// ********** End ScriptStruct FDaySequencePlaybackParams ******************************************

// ********** Begin Class UDaySequencePlayer *******************************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DAYSEQUENCE_API virtual void RPC_OnPlayRateChanged_Implementation(); \
	DAYSEQUENCE_API virtual void RPC_OnFinishPlaybackEvent_Implementation(FFrameTime StoppedTime, int32 NewSerialNumber); \
	DAYSEQUENCE_API virtual void RPC_OnStopEvent_Implementation(FFrameTime StoppedTime, int32 NewSerialNumber); \
	DAYSEQUENCE_API virtual void RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod Method, FFrameTime RelevantTime, int32 NewSerialNumber); \
	DECLARE_FUNCTION(execRPC_OnPlayRateChanged); \
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
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetCompletionModeOverride); \
	DECLARE_FUNCTION(execSetCompletionModeOverride); \
	DECLARE_FUNCTION(execSetFrameRange); \
	DECLARE_FUNCTION(execRemoveWeight); \
	DECLARE_FUNCTION(execSetWeight); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetFrameDuration); \
	DECLARE_FUNCTION(execGoToEndAndStop); \
	DECLARE_FUNCTION(execStopAtCurrentTime); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execScrub); \
	DECLARE_FUNCTION(execPlayLooping); \
	DECLARE_FUNCTION(execPlay);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDaySequencePlayer_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UDaySequencePlayer_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequencePlayer(); \
	friend struct ::Z_Construct_UClass_UDaySequencePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UDaySequencePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequencePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UDaySequencePlayer_NoRegister) \
	DECLARE_SERIALIZER(UDaySequencePlayer) \
	DAYSEQUENCE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Observer=NETFIELD_REP_START, \
		StartTime, \
		DurationFrames, \
		DurationSubFrames, \
		PlaybackSettings, \
		NetSyncProps, \
		NETFIELD_REP_END=NetSyncProps	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(DAYSEQUENCE_API) \
private: \
	REPLICATED_BASE_CLASS(UDaySequencePlayer) \
public:


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequencePlayer(UDaySequencePlayer&&) = delete; \
	UDaySequencePlayer(const UDaySequencePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, UDaySequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequencePlayer)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_68_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_75_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequencePlayer;

// ********** End Class UDaySequencePlayer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
