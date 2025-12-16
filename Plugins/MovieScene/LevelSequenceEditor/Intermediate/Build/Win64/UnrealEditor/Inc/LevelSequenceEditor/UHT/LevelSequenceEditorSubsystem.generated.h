// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceEditorSubsystem.h"

#ifdef LEVELSEQUENCEEDITOR_LevelSequenceEditorSubsystem_generated_h
#error "LevelSequenceEditorSubsystem.generated.h already included, missing '#pragma once' in LevelSequenceEditorSubsystem.h"
#endif
#define LEVELSEQUENCEEDITOR_LevelSequenceEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACineCameraActor;
class UClass;
class UMovieSceneCustomBinding;
class UMovieSceneFolder;
class UMovieSceneSection;
class UMovieSceneSequence;
class UMovieSceneTrack;
class UObject;
class USequencerCurveEditorObject;
class USequencerModuleScriptingLayer;
struct FBakingAnimationKeySettings;
struct FMovieSceneBindingProxy;
struct FMovieScenePasteBindingsParams;
struct FMovieScenePasteFoldersParams;
struct FMovieScenePasteSectionsParams;
struct FMovieScenePasteTracksParams;
struct FMovieSceneScriptingParams;

// ********** Begin ScriptStruct FMovieSceneScriptingParams ****************************************
struct Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics;
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics; \
	LEVELSEQUENCEEDITOR_API static class UScriptStruct* StaticStruct();


struct FMovieSceneScriptingParams;
// ********** End ScriptStruct FMovieSceneScriptingParams ******************************************

// ********** Begin ScriptStruct FMovieSceneBindingPropertyInfo ************************************
struct Z_Construct_UScriptStruct_FMovieSceneBindingPropertyInfo_Statics;
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneBindingPropertyInfo_Statics; \
	LEVELSEQUENCEEDITOR_API static class UScriptStruct* StaticStruct();


struct FMovieSceneBindingPropertyInfo;
// ********** End ScriptStruct FMovieSceneBindingPropertyInfo **************************************

// ********** Begin Class UMovieSceneBindingPropertyInfoList ***************************************
struct Z_Construct_UClass_UMovieSceneBindingPropertyInfoList_Statics;
LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UMovieSceneBindingPropertyInfoList_NoRegister();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingPropertyInfoList(); \
	friend struct ::Z_Construct_UClass_UMovieSceneBindingPropertyInfoList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_UMovieSceneBindingPropertyInfoList_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneBindingPropertyInfoList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), Z_Construct_UClass_UMovieSceneBindingPropertyInfoList_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneBindingPropertyInfoList)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneBindingPropertyInfoList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneBindingPropertyInfoList(UMovieSceneBindingPropertyInfoList&&) = delete; \
	UMovieSceneBindingPropertyInfoList(const UMovieSceneBindingPropertyInfoList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneBindingPropertyInfoList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingPropertyInfoList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingPropertyInfoList) \
	NO_API virtual ~UMovieSceneBindingPropertyInfoList();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_77_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneBindingPropertyInfoList;

// ********** End Class UMovieSceneBindingPropertyInfoList *****************************************

// ********** Begin Class ULevelSequenceEditorSubsystem ********************************************
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRebindComponent); \
	DECLARE_FUNCTION(execRemoveInvalidBindings); \
	DECLARE_FUNCTION(execRemoveAllBindings); \
	DECLARE_FUNCTION(execRemoveActorsFromBinding); \
	DECLARE_FUNCTION(execReplaceBindingWithActors); \
	DECLARE_FUNCTION(execAddActorsToBinding); \
	DECLARE_FUNCTION(execFixActorReferences); \
	DECLARE_FUNCTION(execBakeTransformWithSettings); \
	DECLARE_FUNCTION(execSyncSectionsUsingSourceTimecode); \
	DECLARE_FUNCTION(execSnapSectionsToTimelineUsingSourceTimecode); \
	DECLARE_FUNCTION(execPasteBindings); \
	DECLARE_FUNCTION(execCopyBindings); \
	DECLARE_FUNCTION(execPasteTracks); \
	DECLARE_FUNCTION(execCopyTracks); \
	DECLARE_FUNCTION(execPasteSections); \
	DECLARE_FUNCTION(execCopySections); \
	DECLARE_FUNCTION(execPasteFolders); \
	DECLARE_FUNCTION(execCopyFolders); \
	DECLARE_FUNCTION(execSaveDefaultSpawnableState); \
	DECLARE_FUNCTION(execChangeActorTemplateClass); \
	DECLARE_FUNCTION(execGetCustomBindingType); \
	DECLARE_FUNCTION(execGetCustomBindingsOfType); \
	DECLARE_FUNCTION(execGetCustomBindingObjects); \
	DECLARE_FUNCTION(execConvertToCustomBinding); \
	DECLARE_FUNCTION(execConvertToPossessable); \
	DECLARE_FUNCTION(execConvertToSpawnable); \
	DECLARE_FUNCTION(execCreateCamera); \
	DECLARE_FUNCTION(execAddSpawnableFromClass); \
	DECLARE_FUNCTION(execAddSpawnableFromInstance); \
	DECLARE_FUNCTION(execAddActors); \
	DECLARE_FUNCTION(execGetCurveEditor); \
	DECLARE_FUNCTION(execGetScriptingLayer);


struct Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics;
LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelSequenceEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), Z_Construct_UClass_ULevelSequenceEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceEditorSubsystem)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCEEDITOR_API ULevelSequenceEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceEditorSubsystem(ULevelSequenceEditorSubsystem&&) = delete; \
	ULevelSequenceEditorSubsystem(const ULevelSequenceEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCEEDITOR_API, ULevelSequenceEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelSequenceEditorSubsystem) \
	LEVELSEQUENCEEDITOR_API virtual ~ULevelSequenceEditorSubsystem();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_91_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceEditorSubsystem;

// ********** End Class ULevelSequenceEditorSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
