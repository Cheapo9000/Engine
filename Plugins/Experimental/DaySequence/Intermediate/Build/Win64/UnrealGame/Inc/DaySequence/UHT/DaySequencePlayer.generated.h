// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequencePlayer.h"
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
#ifdef DAYSEQUENCE_DaySequencePlayer_generated_h
#error "DaySequencePlayer.generated.h already included, missing '#pragma once' in DaySequencePlayer.h"
#endif
#define DAYSEQUENCE_DaySequencePlayer_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_31_DELEGATE \
DAYSEQUENCE_API void FOnDaySequencePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDaySequencePlayerEvent);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDaySequencePlaybackParams_Statics; \
	DAYSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> DAYSEQUENCE_API UScriptStruct* StaticStruct<struct FDaySequencePlaybackParams>();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPC_OnFinishPlaybackEvent_Implementation(FFrameTime StoppedTime, int32 NewSerialNumber); \
	virtual void RPC_OnStopEvent_Implementation(FFrameTime StoppedTime, int32 NewSerialNumber); \
	virtual void RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod Method, FFrameTime RelevantTime, int32 NewSerialNumber); \
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


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequencePlayer(); \
	friend struct Z_Construct_UClass_UDaySequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UDaySequencePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(UDaySequencePlayer) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
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
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDaySequencePlayer) \
public:


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequencePlayer(UDaySequencePlayer&&); \
	UDaySequencePlayer(const UDaySequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequencePlayer)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_84_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h_91_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Private_DaySequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
