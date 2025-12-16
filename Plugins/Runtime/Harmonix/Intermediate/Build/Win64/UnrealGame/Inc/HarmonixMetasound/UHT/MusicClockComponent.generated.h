// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/Components/MusicClockComponent.h"

#ifdef HARMONIXMETASOUND_MusicClockComponent_generated_h
#error "MusicClockComponent.generated.h already included, missing '#pragma once' in MusicClockComponent.h"
#endif
#define HARMONIXMETASOUND_MusicClockComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class UMidiFile;
class UMusicClockComponent;
class UObject;
enum class ECalibratedMusicTimebase : uint8;
enum class EMusicClockState : uint8;
enum class EMusicTimeDiscontinuityType : uint8;
struct FInstancedStruct;
struct FMidiSongPos;
struct FMusicalTimeSpan;
struct FMusicClockSettingsBase;
struct FMusicTimestamp;
struct FSongSection;

// ********** Begin Delegate FBeatEvent ************************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_47_DELEGATE \
HARMONIXMETASOUND_API void FBeatEvent_DelegateWrapper(const FMulticastScriptDelegate& BeatEvent, int32 BeatNumber, int32 BeatInBar);


// ********** End Delegate FBeatEvent **************************************************************

// ********** Begin Delegate FBarEvent *************************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_48_DELEGATE \
HARMONIXMETASOUND_API void FBarEvent_DelegateWrapper(const FMulticastScriptDelegate& BarEvent, int32 BarNumber);


// ********** End Delegate FBarEvent ***************************************************************

// ********** Begin Delegate FSectionEvent *********************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_49_DELEGATE \
HARMONIXMETASOUND_API void FSectionEvent_DelegateWrapper(const FMulticastScriptDelegate& SectionEvent, const FString& SectionName, float SectionStartMs, float SectionLengthMs);


// ********** End Delegate FSectionEvent ***********************************************************

// ********** Begin Delegate FPlayStateEvent *******************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_50_DELEGATE \
HARMONIXMETASOUND_API void FPlayStateEvent_DelegateWrapper(const FMulticastScriptDelegate& PlayStateEvent, EMusicClockState State);


// ********** End Delegate FPlayStateEvent *********************************************************

// ********** Begin Delegate FMusicTimeDiscontinuityEvent ******************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_51_DELEGATE \
HARMONIXMETASOUND_API void FMusicTimeDiscontinuityEvent_DelegateWrapper(const FMulticastScriptDelegate& MusicTimeDiscontinuityEvent, EMusicTimeDiscontinuityType Type, FMidiSongPos PreviousPos, FMidiSongPos NewPos);


// ********** End Delegate FMusicTimeDiscontinuityEvent ********************************************

// ********** Begin Delegate FMusicClockConnected **************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_53_DELEGATE \
HARMONIXMETASOUND_API void FMusicClockConnected_DelegateWrapper(const FMulticastScriptDelegate& MusicClockConnected);


// ********** End Delegate FMusicClockConnected ****************************************************

// ********** Begin Delegate FMusicClockDisconnected ***********************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_54_DELEGATE \
HARMONIXMETASOUND_API void FMusicClockDisconnected_DelegateWrapper(const FMulticastScriptDelegate& MusicClockDisconnected);


// ********** End Delegate FMusicClockDisconnected *************************************************

// ********** Begin Class UMusicClockComponent *****************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConnectToCustomClockWithSettings); \
	DECLARE_FUNCTION(execConnectToWallClockForMidi); \
	DECLARE_FUNCTION(execConnectToMetasoundOnAudioComponent); \
	DECLARE_FUNCTION(execCreateWallClockDrivenMusicClock); \
	DECLARE_FUNCTION(execCreateMetasoundDrivenMusicClock); \
	DECLARE_FUNCTION(execMeasureSpanProgress); \
	DECLARE_FUNCTION(execGetCurrentRawAudioRenderSongPos); \
	DECLARE_FUNCTION(execGetPreviousPlayerExperiencedSongPos); \
	DECLARE_FUNCTION(execGetCurrentPlayerExperiencedSongPos); \
	DECLARE_FUNCTION(execGetPreviousVideoRenderSongPos); \
	DECLARE_FUNCTION(execGetCurrentVideoRenderSongPos); \
	DECLARE_FUNCTION(execGetPreviousSmoothedAudioRenderSongPos); \
	DECLARE_FUNCTION(execGetCurrentSmoothedAudioRenderSongPos); \
	DECLARE_FUNCTION(execGetSongLengthBars); \
	DECLARE_FUNCTION(execGetSongLengthBeats); \
	DECLARE_FUNCTION(execGetSongLengthMs); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetSectionEndMsAtMs); \
	DECLARE_FUNCTION(execGetSectionStartMsAtMs); \
	DECLARE_FUNCTION(execGetSectionLengthMsAtMs); \
	DECLARE_FUNCTION(execGetSectionNameAtMs); \
	DECLARE_FUNCTION(execGetMsPerBarAtMs); \
	DECLARE_FUNCTION(execBarToMs); \
	DECLARE_FUNCTION(execGetBeatInBarAtMs); \
	DECLARE_FUNCTION(execGetNumBeatsInBarAtMs); \
	DECLARE_FUNCTION(execGetMsPerBeatAtMs); \
	DECLARE_FUNCTION(execBeatToMs); \
	DECLARE_FUNCTION(execTickToMs); \
	DECLARE_FUNCTION(execGetCountInSeconds); \
	DECLARE_FUNCTION(execLoopedThisFrame); \
	DECLARE_FUNCTION(execSeekedThisFrame); \
	DECLARE_FUNCTION(execGetSongRemainingMs); \
	DECLARE_FUNCTION(execGetPreviousSongPos); \
	DECLARE_FUNCTION(execGetSongPos); \
	DECLARE_FUNCTION(execGetDeltaBeat); \
	DECLARE_FUNCTION(execGetDeltaBar); \
	DECLARE_FUNCTION(execGetDistanceToClosestBar); \
	DECLARE_FUNCTION(execGetDistanceToNextBar); \
	DECLARE_FUNCTION(execGetDistanceFromCurrentBar); \
	DECLARE_FUNCTION(execGetDistanceToClosestBeat); \
	DECLARE_FUNCTION(execGetDistanceToNextBeat); \
	DECLARE_FUNCTION(execGetDistanceFromCurrentBeat); \
	DECLARE_FUNCTION(execGetCurrentSectionLengthMs); \
	DECLARE_FUNCTION(execGetCurrentSectionStartMs); \
	DECLARE_FUNCTION(execGetSongSections); \
	DECLARE_FUNCTION(execGetCurrentSectionIndex); \
	DECLARE_FUNCTION(execGetCurrentSectionName); \
	DECLARE_FUNCTION(execGetCurrentTimestamp); \
	DECLARE_FUNCTION(execGetBeatsIncludingCountIn); \
	DECLARE_FUNCTION(execGetBarsIncludingCountIn); \
	DECLARE_FUNCTION(execGetSecondsFromBarOne); \
	DECLARE_FUNCTION(execGetSecondsIncludingCountIn); \
	DECLARE_FUNCTION(execGetRunPastMusicEnd); \
	DECLARE_FUNCTION(execSetRunPastMusicEnd); \
	DECLARE_FUNCTION(execSetTempoMapForWallClock); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetCurrentClockAdvanceRate); \
	DECLARE_FUNCTION(execGetCurrentSecondsPerBeat); \
	DECLARE_FUNCTION(execGetCurrentBeatsPerSecond); \
	DECLARE_FUNCTION(execGetCurrentSecondsPerBar); \
	DECLARE_FUNCTION(execGetCurrentBarsPerSecond); \
	DECLARE_FUNCTION(execGetCurrentTimeSignature); \
	DECLARE_FUNCTION(execGetCurrentBeatsPerMinute); \
	DECLARE_FUNCTION(execGetCurrentTempo); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execContinue); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execStart);


struct Z_Construct_UClass_UMusicClockComponent_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UMusicClockComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicClockComponent(); \
	friend struct ::Z_Construct_UClass_UMusicClockComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UMusicClockComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicClockComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UMusicClockComponent_NoRegister) \
	DECLARE_SERIALIZER(UMusicClockComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMusicClockComponent*>(this); }


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicClockComponent(UMusicClockComponent&&) = delete; \
	UMusicClockComponent(const UMusicClockComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMETASOUND_API, UMusicClockComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicClockComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMusicClockComponent) \
	HARMONIXMETASOUND_API virtual ~UMusicClockComponent();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicClockComponent;

// ********** End Class UMusicClockComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicClockComponent_h

// ********** Begin Enum EMusicClockState **********************************************************
#define FOREACH_ENUM_EMUSICCLOCKSTATE(op) \
	op(EMusicClockState::Stopped) \
	op(EMusicClockState::Paused) \
	op(EMusicClockState::Running) 

enum class EMusicClockState : uint8;
template<> struct TIsUEnumClass<EMusicClockState> { enum { Value = true }; };
template<> HARMONIXMETASOUND_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicClockState>();
// ********** End Enum EMusicClockState ************************************************************

// ********** Begin Enum EMusicClockDriveMethod ****************************************************
#define FOREACH_ENUM_EMUSICCLOCKDRIVEMETHOD(op) \
	op(EMusicClockDriveMethod::WallClock) \
	op(EMusicClockDriveMethod::MetaSound) \
	op(EMusicClockDriveMethod::Custom) 

enum class EMusicClockDriveMethod : uint8;
template<> struct TIsUEnumClass<EMusicClockDriveMethod> { enum { Value = true }; };
template<> HARMONIXMETASOUND_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicClockDriveMethod>();
// ********** End Enum EMusicClockDriveMethod ******************************************************

// ********** Begin Enum EMusicTimeDiscontinuityType ***********************************************
#define FOREACH_ENUM_EMUSICTIMEDISCONTINUITYTYPE(op) \
	op(EMusicTimeDiscontinuityType::Loop) \
	op(EMusicTimeDiscontinuityType::Seek) 

enum class EMusicTimeDiscontinuityType : uint8;
template<> struct TIsUEnumClass<EMusicTimeDiscontinuityType> { enum { Value = true }; };
template<> HARMONIXMETASOUND_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicTimeDiscontinuityType>();
// ********** End Enum EMusicTimeDiscontinuityType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
