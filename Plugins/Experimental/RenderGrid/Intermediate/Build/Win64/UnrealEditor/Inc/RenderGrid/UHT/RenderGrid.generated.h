// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderGrid/RenderGrid.h"

#ifdef RENDERGRID_RenderGrid_generated_h
#error "RenderGrid.generated.h already included, missing '#pragma once' in RenderGrid.h"
#endif
#define RENDERGRID_RenderGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UMoviePipelineOutputSetting;
class UMoviePipelinePrimaryConfig;
class UObject;
class URenderGridJob;
class URenderGridPropsSourceBase;
class URenderGridQueue;
class UWorld;
enum class ERenderGridPropsSourceType : uint8;
struct FGuid;

// ********** Begin ScriptStruct FRenderGridRemoteControlPropertyData ******************************
struct Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics;
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRenderGridRemoteControlPropertyData;
// ********** End ScriptStruct FRenderGridRemoteControlPropertyData ********************************

// ********** Begin Class URenderGridSettings ******************************************************
struct Z_Construct_UClass_URenderGridSettings_Statics;
RENDERGRID_API UClass* Z_Construct_UClass_URenderGridSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridSettings(); \
	friend struct ::Z_Construct_UClass_URenderGridSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRID_API UClass* ::Z_Construct_UClass_URenderGridSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), Z_Construct_UClass_URenderGridSettings_NoRegister) \
	DECLARE_SERIALIZER(URenderGridSettings)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridSettings(URenderGridSettings&&) = delete; \
	URenderGridSettings(const URenderGridSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGridSettings) \
	NO_API virtual ~URenderGridSettings();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_47_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridSettings;

// ********** End Class URenderGridSettings ********************************************************

// ********** Begin Class URenderGridDefaults ******************************************************
struct Z_Construct_UClass_URenderGridDefaults_Statics;
RENDERGRID_API UClass* Z_Construct_UClass_URenderGridDefaults_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridDefaults(); \
	friend struct ::Z_Construct_UClass_URenderGridDefaults_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRID_API UClass* ::Z_Construct_UClass_URenderGridDefaults_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridDefaults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), Z_Construct_UClass_URenderGridDefaults_NoRegister) \
	DECLARE_SERIALIZER(URenderGridDefaults)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_97_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridDefaults(URenderGridDefaults&&) = delete; \
	URenderGridDefaults(const URenderGridDefaults&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridDefaults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridDefaults); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGridDefaults) \
	NO_API virtual ~URenderGridDefaults();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_94_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridDefaults;

// ********** End Class URenderGridDefaults ********************************************************

// ********** Begin Class URenderGridJob ***********************************************************
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRemoteControlValues); \
	DECLARE_FUNCTION(execGetRemoteControlLabelFromFieldId); \
	DECLARE_FUNCTION(execGetRemoteControlFieldIdFromLabel); \
	DECLARE_FUNCTION(execSetRemoteControlValue); \
	DECLARE_FUNCTION(execGetRemoteControlValue); \
	DECLARE_FUNCTION(execSetRenderPreset); \
	DECLARE_FUNCTION(execGetRenderPresetOutputSettings); \
	DECLARE_FUNCTION(execGetRenderPreset); \
	DECLARE_FUNCTION(execSetOutputDirectory); \
	DECLARE_FUNCTION(execGetOutputDirectoryForDisplay); \
	DECLARE_FUNCTION(execGetOutputDirectory); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execGetIsEnabled); \
	DECLARE_FUNCTION(execSetJobName); \
	DECLARE_FUNCTION(execGetJobName); \
	DECLARE_FUNCTION(execSetJobId); \
	DECLARE_FUNCTION(execGetJobId); \
	DECLARE_FUNCTION(execSetCustomResolution); \
	DECLARE_FUNCTION(execGetCustomResolution); \
	DECLARE_FUNCTION(execSetIsUsingCustomResolution); \
	DECLARE_FUNCTION(execGetIsUsingCustomResolution); \
	DECLARE_FUNCTION(execSetCustomEndFrame); \
	DECLARE_FUNCTION(execGetCustomEndFrame); \
	DECLARE_FUNCTION(execSetIsUsingCustomEndFrame); \
	DECLARE_FUNCTION(execGetIsUsingCustomEndFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomStartFrame); \
	DECLARE_FUNCTION(execSetIsUsingCustomStartFrame); \
	DECLARE_FUNCTION(execGetIsUsingCustomStartFrame); \
	DECLARE_FUNCTION(execSetLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execSetWaitFramesBeforeRendering); \
	DECLARE_FUNCTION(execGetWaitFramesBeforeRendering); \
	DECLARE_FUNCTION(execGenerateNewGuid); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execMatchesSearchTerm); \
	DECLARE_FUNCTION(execGetOutputAspectRatio); \
	DECLARE_FUNCTION(execGetOutputResolution); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetEndFrame); \
	DECLARE_FUNCTION(execGetStartFrame); \
	DECLARE_FUNCTION(execToDebugString);


struct Z_Construct_UClass_URenderGridJob_Statics;
RENDERGRID_API UClass* Z_Construct_UClass_URenderGridJob_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridJob(); \
	friend struct ::Z_Construct_UClass_URenderGridJob_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRID_API UClass* ::Z_Construct_UClass_URenderGridJob_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridJob, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), Z_Construct_UClass_URenderGridJob_NoRegister) \
	DECLARE_SERIALIZER(URenderGridJob)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_133_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridJob(URenderGridJob&&) = delete; \
	URenderGridJob(const URenderGridJob&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridJob); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGridJob) \
	NO_API virtual ~URenderGridJob();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_130_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_133_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridJob;

// ********** End Class URenderGridJob *************************************************************

// ********** Begin Class URenderGrid **************************************************************
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReorderRenderGridJob); \
	DECLARE_FUNCTION(execDuplicateAndAddRenderGridJob); \
	DECLARE_FUNCTION(execCreateAndAddNewRenderGridJob); \
	DECLARE_FUNCTION(execCreateTempRenderGridJob); \
	DECLARE_FUNCTION(execDoesJobIdExist); \
	DECLARE_FUNCTION(execGenerateNextJobId); \
	DECLARE_FUNCTION(execGenerateUniqueRandomJobId); \
	DECLARE_FUNCTION(execInsertRenderGridJobAfter); \
	DECLARE_FUNCTION(execInsertRenderGridJobBefore); \
	DECLARE_FUNCTION(execGetDisabledRenderGridJobs); \
	DECLARE_FUNCTION(execGetEnabledRenderGridJobs); \
	DECLARE_FUNCTION(execGetRenderGridJobs); \
	DECLARE_FUNCTION(execGetIndexOfRenderGridJob); \
	DECLARE_FUNCTION(execHasRenderGridJob); \
	DECLARE_FUNCTION(execHasAnyRenderGridJobs); \
	DECLARE_FUNCTION(execInsertRenderGridJob); \
	DECLARE_FUNCTION(execRemoveRenderGridJob); \
	DECLARE_FUNCTION(execAddRenderGridJob); \
	DECLARE_FUNCTION(execSetRenderGridJobs); \
	DECLARE_FUNCTION(execClearRenderGridJobs); \
	DECLARE_FUNCTION(execSetDefaultOutputDirectory); \
	DECLARE_FUNCTION(execGetDefaultOutputDirectoryForDisplay); \
	DECLARE_FUNCTION(execGetDefaultOutputDirectory); \
	DECLARE_FUNCTION(execSetDefaultRenderPreset); \
	DECLARE_FUNCTION(execGetDefaultRenderPresetOutputSettings); \
	DECLARE_FUNCTION(execGetDefaultRenderPreset); \
	DECLARE_FUNCTION(execSetDefaultLevelSequence); \
	DECLARE_FUNCTION(execGetDefaultLevelSequence); \
	DECLARE_FUNCTION(execGetPropsSourceOrigin); \
	DECLARE_FUNCTION(execGetPropsSourceType); \
	DECLARE_FUNCTION(execGetPropsSource); \
	DECLARE_FUNCTION(execSetPropsSource); \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execGenerateNewGuid); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execRenderJobsSingleFramePosition); \
	DECLARE_FUNCTION(execRenderJobSingleFramePosition); \
	DECLARE_FUNCTION(execRenderSingleFramePosition); \
	DECLARE_FUNCTION(execRenderJobsSingleFrame); \
	DECLARE_FUNCTION(execRenderJobSingleFrame); \
	DECLARE_FUNCTION(execRenderSingleFrame); \
	DECLARE_FUNCTION(execRenderJobs); \
	DECLARE_FUNCTION(execRenderJob); \
	DECLARE_FUNCTION(execRender); \
	DECLARE_FUNCTION(execToDebugString);


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URenderGrid_Statics;
RENDERGRID_API UClass* Z_Construct_UClass_URenderGrid_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGrid(); \
	friend struct ::Z_Construct_UClass_URenderGrid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRID_API UClass* ::Z_Construct_UClass_URenderGrid_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGrid, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), Z_Construct_UClass_URenderGrid_NoRegister) \
	DECLARE_SERIALIZER(URenderGrid)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGrid(URenderGrid&&) = delete; \
	URenderGrid(const URenderGrid&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGrid) \
	NO_API virtual ~URenderGrid();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_411_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_414_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGrid;

// ********** End Class URenderGrid ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
