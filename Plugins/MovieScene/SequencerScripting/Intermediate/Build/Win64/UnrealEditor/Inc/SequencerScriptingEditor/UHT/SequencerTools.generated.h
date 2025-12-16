// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerTools.h"

#ifdef SEQUENCERSCRIPTINGEDITOR_SequencerTools_generated_h
#error "SequencerTools.generated.h already included, missing '#pragma once' in SequencerTools.h"
#endif
#define SEQUENCERSCRIPTINGEDITOR_SequencerTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelSequenceActor;
class UAnimSeqExportOption;
class UAnimSequence;
class UAnimSequenceLevelSequenceLink;
class ULevelSequence;
class ULevelSequenceAnimSequenceLink;
class UMovieSceneCapture;
class UMovieSceneEventSectionBase;
class UMovieSceneSequence;
class UMovieSceneUserExportFBXControlRigSettings;
class UMovieSceneUserImportFBXControlRigSettings;
class UMovieSceneUserImportFBXSettings;
class UObject;
class UWorld;
struct FMovieSceneBindingProxy;
struct FMovieSceneEvent;
struct FSequencerBoundObjects;
struct FSequencerExportFBXParams;
struct FSequencerQuickBindingResult;
struct FSequencerScriptingRange;

// ********** Begin Delegate FOnRenderMovieStopped *************************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_34_DELEGATE \
SEQUENCERSCRIPTINGEDITOR_API void FOnRenderMovieStopped_DelegateWrapper(const FScriptDelegate& OnRenderMovieStopped, bool bSuccess);


// ********** End Delegate FOnRenderMovieStopped ***************************************************

// ********** Begin Delegate FCheckCanCompleteDelegate *********************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_35_DELEGATE \
SEQUENCERSCRIPTINGEDITOR_API bool FCheckCanCompleteDelegate_DelegateWrapper(const FScriptDelegate& CheckCanCompleteDelegate);


// ********** End Delegate FCheckCanCompleteDelegate ***********************************************

// ********** Begin ScriptStruct FSequencerBoundObjects ********************************************
struct Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics;
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics; \
	SEQUENCERSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FSequencerBoundObjects;
// ********** End ScriptStruct FSequencerBoundObjects **********************************************

// ********** Begin ScriptStruct FSequencerQuickBindingResult **************************************
struct Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics;
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics; \
	SEQUENCERSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FSequencerQuickBindingResult;
// ********** End ScriptStruct FSequencerQuickBindingResult ****************************************

// ********** Begin ScriptStruct FSequencerExportFBXParams *****************************************
struct Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics;
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics; \
	SEQUENCERSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FSequencerExportFBXParams;
// ********** End ScriptStruct FSequencerExportFBXParams *******************************************

// ********** Begin Class USequencerToolsFunctionLibrary *******************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportFBXFromControlRig); \
	DECLARE_FUNCTION(execImportFBXToControlRig); \
	DECLARE_FUNCTION(execCreateQuickBinding); \
	DECLARE_FUNCTION(execIsEventEndpointValid); \
	DECLARE_FUNCTION(execCreateEvent); \
	DECLARE_FUNCTION(execImportLevelSequenceFBX); \
	DECLARE_FUNCTION(execGetAnimSequenceLinkFromLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequenceLinkFromAnimSequence); \
	DECLARE_FUNCTION(execClearLinkedAnimSequences); \
	DECLARE_FUNCTION(execLinkAnimSequence); \
	DECLARE_FUNCTION(execExportAnimSequenceWaitForDelegate); \
	DECLARE_FUNCTION(execExportAnimSequence); \
	DECLARE_FUNCTION(execExportLevelSequenceFBX); \
	DECLARE_FUNCTION(execGetObjectBindings); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execCancelMovieRender); \
	DECLARE_FUNCTION(execIsRenderingMovie); \
	DECLARE_FUNCTION(execRenderMovie);


struct Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics;
SEQUENCERSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_USequencerToolsFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerToolsFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTINGEDITOR_API UClass* ::Z_Construct_UClass_USequencerToolsFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerToolsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SequencerScriptingEditor"), Z_Construct_UClass_USequencerToolsFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USequencerToolsFunctionLibrary)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERSCRIPTINGEDITOR_API USequencerToolsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerToolsFunctionLibrary(USequencerToolsFunctionLibrary&&) = delete; \
	USequencerToolsFunctionLibrary(const USequencerToolsFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERSCRIPTINGEDITOR_API, USequencerToolsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerToolsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerToolsFunctionLibrary) \
	SEQUENCERSCRIPTINGEDITOR_API virtual ~USequencerToolsFunctionLibrary();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_120_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerToolsFunctionLibrary;

// ********** End Class USequencerToolsFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
