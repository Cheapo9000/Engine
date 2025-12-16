// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorderSubsystem.h"

#ifdef TAKERECORDER_TakeRecorderSubsystem_generated_h
#error "TakeRecorderSubsystem.generated.h already included, missing '#pragma once' in TakeRecorderSubsystem.h"
#endif
#define TAKERECORDER_TakeRecorderSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class ULevelSequence;
class UObject;
class UTakeMetaData;
class UTakePreset;
class UTakeRecorderSource;
class UTakeRecorderSources;
enum class ETakeRecorderMode : uint8;
enum class ETakeRecorderState : uint8;
struct FAssetData;
struct FFrameRate;
struct FMovieSceneMarkedFrame;
struct FTakeRecorderParameters;
struct FTakeRecorderSequenceParameters;

// ********** Begin Delegate FTakeRecorderPreInitialize ********************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_18_DELEGATE \
TAKERECORDER_API void FTakeRecorderPreInitialize_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderPreInitialize);


// ********** End Delegate FTakeRecorderPreInitialize **********************************************

// ********** Begin Delegate FTakeRecorderInitialized **********************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_19_DELEGATE \
TAKERECORDER_API void FTakeRecorderInitialized_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderInitialized);


// ********** End Delegate FTakeRecorderInitialized ************************************************

// ********** Begin Delegate FTakeRecorderStarted **************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_20_DELEGATE \
TAKERECORDER_API void FTakeRecorderStarted_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderStarted);


// ********** End Delegate FTakeRecorderStarted ****************************************************

// ********** Begin Delegate FTakeRecorderStopped **************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_21_DELEGATE \
TAKERECORDER_API void FTakeRecorderStopped_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderStopped);


// ********** End Delegate FTakeRecorderStopped ****************************************************

// ********** Begin Delegate FTakeRecorderFinished *************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_22_DELEGATE \
TAKERECORDER_API void FTakeRecorderFinished_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderFinished, ULevelSequence* SequenceAsset);


// ********** End Delegate FTakeRecorderFinished ***************************************************

// ********** Begin Delegate FTakeRecorderCancelled ************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_23_DELEGATE \
TAKERECORDER_API void FTakeRecorderCancelled_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderCancelled);


// ********** End Delegate FTakeRecorderCancelled **************************************************

// ********** Begin Delegate FTakeRecorderMarkedFrameAdded *****************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_24_DELEGATE \
TAKERECORDER_API void FTakeRecorderMarkedFrameAdded_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderMarkedFrameAdded, FMovieSceneMarkedFrame const& MarkedFrame);


// ********** End Delegate FTakeRecorderMarkedFrameAdded *******************************************

// ********** Begin Delegate FTakeRecorderSlateChanged *********************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_26_DELEGATE \
TAKERECORDER_API void FTakeRecorderSlateChanged_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderSlateChanged, const FString& Slate, UTakeMetaData* TakeMetaData);


// ********** End Delegate FTakeRecorderSlateChanged ***********************************************

// ********** Begin Delegate FTakeRecorderTakeNumberChanged ****************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_27_DELEGATE \
TAKERECORDER_API void FTakeRecorderTakeNumberChanged_DelegateWrapper(const FMulticastScriptDelegate& TakeRecorderTakeNumberChanged, int32 TakeNumber, UTakeMetaData* TakeMetaData);


// ********** End Delegate FTakeRecorderTakeNumberChanged ******************************************

// ********** Begin Delegate FOnTakeRecorderSourceAddedDynamic *************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_34_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderSourceAddedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnTakeRecorderSourceAddedDynamic, UTakeRecorderSource* Source);


// ********** End Delegate FOnTakeRecorderSourceAddedDynamic ***************************************

// ********** Begin Delegate FOnTakeRecorderSourceRemovedDynamic ***********************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_35_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderSourceRemovedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnTakeRecorderSourceRemovedDynamic, UTakeRecorderSource* Source);


// ********** End Delegate FOnTakeRecorderSourceRemovedDynamic *************************************

// ********** Begin Class UTakeRecorderSubsystem ***************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTakeRecorderMode); \
	DECLARE_FUNCTION(execGetLastRecordedLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execGetTakeMetaData); \
	DECLARE_FUNCTION(execSetGlobalRecordSettings); \
	DECLARE_FUNCTION(execGetGlobalRecordSettings); \
	DECLARE_FUNCTION(execGetSourceRecordSettings); \
	DECLARE_FUNCTION(execSetSequenceCountdown); \
	DECLARE_FUNCTION(execTryGetSequenceCountdown); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execIsReviewing); \
	DECLARE_FUNCTION(execSetFrameRateFromTimecode); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execMarkFrame); \
	DECLARE_FUNCTION(execSetSlateName); \
	DECLARE_FUNCTION(execGetSlates); \
	DECLARE_FUNCTION(execGetNumberOfTakes); \
	DECLARE_FUNCTION(execGetNextTakeNumber); \
	DECLARE_FUNCTION(execSetTakeNumber); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSourceActor); \
	DECLARE_FUNCTION(execRemoveActorFromSources); \
	DECLARE_FUNCTION(execAddSourceForActor); \
	DECLARE_FUNCTION(execGetSourceByClass); \
	DECLARE_FUNCTION(execGetAllSourcesCopy); \
	DECLARE_FUNCTION(execGetSources); \
	DECLARE_FUNCTION(execClearSources); \
	DECLARE_FUNCTION(execRemoveSource); \
	DECLARE_FUNCTION(execAddSource); \
	DECLARE_FUNCTION(execRevertChanges); \
	DECLARE_FUNCTION(execGetPendingTake); \
	DECLARE_FUNCTION(execClearPendingTake); \
	DECLARE_FUNCTION(execResetToPendingTake); \
	DECLARE_FUNCTION(execCancelRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execReviewLastRecording); \
	DECLARE_FUNCTION(execCanReviewLastRecording); \
	DECLARE_FUNCTION(execSetTargetSequence);


struct Z_Construct_UClass_UTakeRecorderSubsystem_Statics;
TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderSubsystem(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDER_API UClass* ::Z_Construct_UClass_UTakeRecorderSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), Z_Construct_UClass_UTakeRecorderSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UTakeRecorderSubsystem*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKERECORDER_API UTakeRecorderSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderSubsystem(UTakeRecorderSubsystem&&) = delete; \
	UTakeRecorderSubsystem(const UTakeRecorderSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDER_API, UTakeRecorderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTakeRecorderSubsystem) \
	TAKERECORDER_API virtual ~UTakeRecorderSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_42_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderSubsystem;

// ********** End Class UTakeRecorderSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
