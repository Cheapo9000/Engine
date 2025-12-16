// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/VCamBlueprintFunctionLibrary.h"

#ifdef VIRTUALCAMERA_VCamBlueprintFunctionLibrary_generated_h
#error "VCamBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in VCamBlueprintFunctionLibrary.h"
#endif
#define VIRTUALCAMERA_VCamBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACineCameraActor;
class UCineCameraComponent;
class ULevelSequence;
class UObject;
class USceneCaptureComponent2D;
class UTexture;
enum class EVCamTargetViewportID : uint8;
struct FAssetData;
struct FFrameRate;
struct FMovieSceneObjectBindingID;
struct FTimecode;
struct FVCamTraceHitProxyQueryParams;
struct FVCamTraceHitProxyResult;

// ********** Begin ScriptStruct FVCamTraceHitProxyQueryParams *************************************
struct Z_Construct_UScriptStruct_FVCamTraceHitProxyQueryParams_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamTraceHitProxyQueryParams_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVCamTraceHitProxyQueryParams;
// ********** End ScriptStruct FVCamTraceHitProxyQueryParams ***************************************

// ********** Begin ScriptStruct FVCamTraceHitProxyResult ******************************************
struct Z_Construct_UScriptStruct_FVCamTraceHitProxyResult_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamTraceHitProxyResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVCamTraceHitProxyResult;
// ********** End ScriptStruct FVCamTraceHitProxyResult ********************************************

// ********** Begin Delegate FOnTakeRecorderSlateChanged_VCam **************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_208_DELEGATE \
static void FOnTakeRecorderSlateChanged_VCam_DelegateWrapper(const FScriptDelegate& OnTakeRecorderSlateChanged_VCam, const FString& Slate);


// ********** End Delegate FOnTakeRecorderSlateChanged_VCam ****************************************

// ********** Begin Class UVCamBlueprintFunctionLibrary ********************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCameraOverscan); \
	DECLARE_FUNCTION(execSetCameraOverscan); \
	DECLARE_FUNCTION(execIsAssetDirty); \
	DECLARE_FUNCTION(execMultiTraceHitProxyOnViewport); \
	DECLARE_FUNCTION(execDeprojectScreenToWorldByViewport); \
	DECLARE_FUNCTION(execDeprojectScreenToWorld); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execGetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetOnTakeRecorderSlateChanged); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execTryOpenTakeRecorderPanel); \
	DECLARE_FUNCTION(execIsTakeRecorderPanelOpen); \
	DECLARE_FUNCTION(execSetActorLabel); \
	DECLARE_FUNCTION(execCopyToCineCameraActor); \
	DECLARE_FUNCTION(execGetNextUndoDescription); \
	DECLARE_FUNCTION(execTimecodeToFrameAmount); \
	DECLARE_FUNCTION(execEnableDebugFocusPlane); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execCalculateAutoFocusDistance); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execCallFunctionByName); \
	DECLARE_FUNCTION(execConvertStringToFrameRate); \
	DECLARE_FUNCTION(execGetDisplayRate); \
	DECLARE_FUNCTION(execUpdatePostProcessSettingsForCapture); \
	DECLARE_FUNCTION(execPilotActor); \
	DECLARE_FUNCTION(execSortAssetsByTimecodeAssetData); \
	DECLARE_FUNCTION(execGetObjectMetadataTags); \
	DECLARE_FUNCTION(execModifyObjectMetadataTags); \
	DECLARE_FUNCTION(execEditorLoadAsset); \
	DECLARE_FUNCTION(execEditorSaveAsset); \
	DECLARE_FUNCTION(execImportSnapshotTexture); \
	DECLARE_FUNCTION(execIsCurrentLevelSequencePlaying); \
	DECLARE_FUNCTION(execGetLevelSequenceFrameAsTimecodeWithoutObject); \
	DECLARE_FUNCTION(execGetLevelSequenceFrameAsTimecode); \
	DECLARE_FUNCTION(execGetLevelSequenceLengthInFrames); \
	DECLARE_FUNCTION(execGetCurrentLevelSequenceCurrentFrame); \
	DECLARE_FUNCTION(execSetCurrentLevelSequenceCurrentFrame); \
	DECLARE_FUNCTION(execPauseCurrentLevelSequence); \
	DECLARE_FUNCTION(execPlayCurrentLevelSequence); \
	DECLARE_FUNCTION(execOpenLevelSequence); \
	DECLARE_FUNCTION(execGetPendingTakeLevelSequence); \
	DECLARE_FUNCTION(execGetCurrentLevelSequence); \
	DECLARE_FUNCTION(execIsGameRunning);


struct Z_Construct_UClass_UVCamBlueprintFunctionLibrary_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVCamBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UVCamBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_UVCamBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_UVCamBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVCamBlueprintFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamBlueprintFunctionLibrary(UVCamBlueprintFunctionLibrary&&) = delete; \
	UVCamBlueprintFunctionLibrary(const UVCamBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamBlueprintFunctionLibrary) \
	NO_API virtual ~UVCamBlueprintFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_62_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamBlueprintFunctionLibrary;

// ********** End Class UVCamBlueprintFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_VCamBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
