// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorderBlueprintLibrary.h"

#ifdef TAKERECORDER_TakeRecorderBlueprintLibrary_generated_h
#error "TakeRecorderBlueprintLibrary.generated.h already included, missing '#pragma once' in TakeRecorderBlueprintLibrary.h"
#endif
#define TAKERECORDER_TakeRecorderBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UTakeMetaData;
class UTakeRecorder;
class UTakeRecorderPanel;
class UTakeRecorderSources;
struct FMovieSceneMarkedFrame;
struct FTakeRecorderParameters;

// ********** Begin Delegate FOnTakeRecorderPanelChanged *******************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_16_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderPanelChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderPanelChanged);


// ********** End Delegate FOnTakeRecorderPanelChanged *********************************************

// ********** Begin Delegate FOnTakeRecorderPreInitialize ******************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_17_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderPreInitialize_DelegateWrapper(const FScriptDelegate& OnTakeRecorderPreInitialize);


// ********** End Delegate FOnTakeRecorderPreInitialize ********************************************

// ********** Begin Delegate FOnTakeRecorderStarted ************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_18_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderStarted_DelegateWrapper(const FScriptDelegate& OnTakeRecorderStarted);


// ********** End Delegate FOnTakeRecorderStarted **************************************************

// ********** Begin Delegate FOnTakeRecorderStopped ************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_19_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderStopped_DelegateWrapper(const FScriptDelegate& OnTakeRecorderStopped);


// ********** End Delegate FOnTakeRecorderStopped **************************************************

// ********** Begin Delegate FOnTakeRecorderFinished ***********************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_20_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderFinished_DelegateWrapper(const FScriptDelegate& OnTakeRecorderFinished, ULevelSequence* SequenceAsset);


// ********** End Delegate FOnTakeRecorderFinished *************************************************

// ********** Begin Delegate FOnTakeRecorderCancelled **********************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_21_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderCancelled_DelegateWrapper(const FScriptDelegate& OnTakeRecorderCancelled);


// ********** End Delegate FOnTakeRecorderCancelled ************************************************

// ********** Begin Delegate FOnTakeRecorderMarkedFrameAdded ***************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_22_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderMarkedFrameAdded_DelegateWrapper(const FScriptDelegate& OnTakeRecorderMarkedFrameAdded, FMovieSceneMarkedFrame const& MarkedFrame);


// ********** End Delegate FOnTakeRecorderMarkedFrameAdded *****************************************

// ********** Begin Class UTakeRecorderBlueprintLibrary ********************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOnTakeRecorderMarkedFrameAdded); \
	DECLARE_FUNCTION(execSetOnTakeRecorderCancelled); \
	DECLARE_FUNCTION(execSetOnTakeRecorderFinished); \
	DECLARE_FUNCTION(execSetOnTakeRecorderStopped); \
	DECLARE_FUNCTION(execSetOnTakeRecorderStarted); \
	DECLARE_FUNCTION(execSetOnTakeRecorderPreInitialize); \
	DECLARE_FUNCTION(execSetOnTakeRecorderPanelChanged); \
	DECLARE_FUNCTION(execOpenTakeRecorderPanel); \
	DECLARE_FUNCTION(execGetTakeRecorderPanel); \
	DECLARE_FUNCTION(execCancelRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execGetActiveRecorder); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execSetDefaultParameters); \
	DECLARE_FUNCTION(execGetDefaultParameters); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execIsTakeRecorderEnabled);


struct Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics;
TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDER_API UClass* ::Z_Construct_UClass_UTakeRecorderBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), Z_Construct_UClass_UTakeRecorderBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKERECORDER_API UTakeRecorderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderBlueprintLibrary(UTakeRecorderBlueprintLibrary&&) = delete; \
	UTakeRecorderBlueprintLibrary(const UTakeRecorderBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDER_API, UTakeRecorderBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderBlueprintLibrary) \
	TAKERECORDER_API virtual ~UTakeRecorderBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderBlueprintLibrary;

// ********** End Class UTakeRecorderBlueprintLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
