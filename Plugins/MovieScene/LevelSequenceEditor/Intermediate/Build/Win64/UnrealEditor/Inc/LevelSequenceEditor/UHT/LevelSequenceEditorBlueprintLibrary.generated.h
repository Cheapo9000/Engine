// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceEditorBlueprintLibrary.h"

#ifdef LEVELSEQUENCEEDITOR_LevelSequenceEditorBlueprintLibrary_generated_h
#error "LevelSequenceEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in LevelSequenceEditorBlueprintLibrary.h"
#endif
#define LEVELSEQUENCEEDITOR_LevelSequenceEditorBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULevelSequence;
class UMovieSceneFolder;
class UMovieSceneSection;
class UMovieSceneSubSection;
class UMovieSceneTrack;
class UObject;
enum class EMovieSceneTimeUnit : uint8;
struct FLinearColor;
struct FMovieSceneBindingProxy;
struct FMovieSceneObjectBindingID;
struct FMovieSceneSequencePlaybackParams;
struct FSequencerChannelProxy;

// ********** Begin Class ULevelSequenceEditorBlueprintLibrary *************************************
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteColorForChannels); \
	DECLARE_FUNCTION(execSetRandomColorForChannels); \
	DECLARE_FUNCTION(execSetCustomColorForChannels); \
	DECLARE_FUNCTION(execSetCustomColorForChannel); \
	DECLARE_FUNCTION(execGetCustomColorForChannel); \
	DECLARE_FUNCTION(execHasCustomColorForChannel); \
	DECLARE_FUNCTION(execGetTrackFilterNames); \
	DECLARE_FUNCTION(execSetTrackFilterActive); \
	DECLARE_FUNCTION(execSetTrackFilterEnabled); \
	DECLARE_FUNCTION(execIsTrackFilterActive); \
	DECLARE_FUNCTION(execIsTrackFilterEnabled); \
	DECLARE_FUNCTION(execSetLockCameraCutToViewport); \
	DECLARE_FUNCTION(execIsCameraCutLockedToViewport); \
	DECLARE_FUNCTION(execSetLockLevelSequence); \
	DECLARE_FUNCTION(execIsLevelSequenceLocked); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execForceUpdate); \
	DECLARE_FUNCTION(execRefreshCurrentLevelSequence); \
	DECLARE_FUNCTION(execGetSelectionRangeEnd); \
	DECLARE_FUNCTION(execGetSelectionRangeStart); \
	DECLARE_FUNCTION(execSetSelectionRangeEnd); \
	DECLARE_FUNCTION(execSetSelectionRangeStart); \
	DECLARE_FUNCTION(execEmptySelection); \
	DECLARE_FUNCTION(execDeselectBindings); \
	DECLARE_FUNCTION(execSelectBindings); \
	DECLARE_FUNCTION(execSelectFolders); \
	DECLARE_FUNCTION(execSelectKeys); \
	DECLARE_FUNCTION(execSelectChannels); \
	DECLARE_FUNCTION(execSelectSections); \
	DECLARE_FUNCTION(execSelectTracks); \
	DECLARE_FUNCTION(execGetSelectedBindings); \
	DECLARE_FUNCTION(execGetSelectedFolders); \
	DECLARE_FUNCTION(execGetSelectedKeys); \
	DECLARE_FUNCTION(execGetChannelsWithSelectedKeys); \
	DECLARE_FUNCTION(execGetSelectedChannels); \
	DECLARE_FUNCTION(execGetSelectedSections); \
	DECLARE_FUNCTION(execGetSelectedTracks); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetPlaybackEndPosition); \
	DECLARE_FUNCTION(execGetPlaybackStartPosition); \
	DECLARE_FUNCTION(execPlayTo); \
	DECLARE_FUNCTION(execGetLoopMode); \
	DECLARE_FUNCTION(execSetLoopMode); \
	DECLARE_FUNCTION(execGetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execGetLocalPosition); \
	DECLARE_FUNCTION(execSetLocalPosition); \
	DECLARE_FUNCTION(execGetGlobalPosition); \
	DECLARE_FUNCTION(execSetGlobalPosition); \
	DECLARE_FUNCTION(execGetCurrentLocalTime); \
	DECLARE_FUNCTION(execSetCurrentLocalTime); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execSetCurrentTime); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execCloseLevelSequence); \
	DECLARE_FUNCTION(execGetSubSequenceHierarchy); \
	DECLARE_FUNCTION(execFocusParentSequence); \
	DECLARE_FUNCTION(execFocusLevelSequence); \
	DECLARE_FUNCTION(execGetFocusedLevelSequence); \
	DECLARE_FUNCTION(execGetCurrentLevelSequence); \
	DECLARE_FUNCTION(execOpenLevelSequence);


struct Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics;
LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceEditorBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceEditorBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCEEDITOR_API ULevelSequenceEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceEditorBlueprintLibrary(ULevelSequenceEditorBlueprintLibrary&&) = delete; \
	ULevelSequenceEditorBlueprintLibrary(const ULevelSequenceEditorBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCEEDITOR_API, ULevelSequenceEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceEditorBlueprintLibrary) \
	LEVELSEQUENCEEDITOR_API virtual ~ULevelSequenceEditorBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_25_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceEditorBlueprintLibrary;

// ********** End Class ULevelSequenceEditorBlueprintLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
