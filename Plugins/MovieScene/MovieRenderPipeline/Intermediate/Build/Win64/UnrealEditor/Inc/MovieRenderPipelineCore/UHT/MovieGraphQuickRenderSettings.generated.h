// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphQuickRenderSettings.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphQuickRenderSettings_generated_h
#error "MovieGraphQuickRenderSettings.generated.h already included, missing '#pragma once' in MovieGraphQuickRenderSettings.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphQuickRenderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieGraphConfig;
class UMovieGraphQuickRenderModeSettings;
class UMovieJobVariableAssignmentContainer;
enum class EMovieGraphQuickRenderMode : uint8;

// ********** Begin Class UMovieGraphQuickRenderSettings *******************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSavedQuickRenderModeSettings);


struct Z_Construct_UClass_UMovieGraphQuickRenderSettings_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphQuickRenderSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphQuickRenderSettings(); \
	friend struct ::Z_Construct_UClass_UMovieGraphQuickRenderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphQuickRenderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphQuickRenderSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphQuickRenderSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphQuickRenderSettings)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphQuickRenderSettings(UMovieGraphQuickRenderSettings&&) = delete; \
	UMovieGraphQuickRenderSettings(const UMovieGraphQuickRenderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphQuickRenderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphQuickRenderSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphQuickRenderSettings) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphQuickRenderSettings();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_91_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphQuickRenderSettings;

// ********** End Class UMovieGraphQuickRenderSettings *********************************************

// ********** Begin Class UMovieGraphQuickRenderModeSettings ***************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVariableAssignmentsForGraph); \
	DECLARE_FUNCTION(execRefreshVariableAssignments);


struct Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphQuickRenderModeSettings(); \
	friend struct ::Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphQuickRenderModeSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphQuickRenderModeSettings)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_129_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphQuickRenderModeSettings(UMovieGraphQuickRenderModeSettings&&) = delete; \
	UMovieGraphQuickRenderModeSettings(const UMovieGraphQuickRenderModeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphQuickRenderModeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphQuickRenderModeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphQuickRenderModeSettings) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphQuickRenderModeSettings();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_126_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphQuickRenderModeSettings;

// ********** End Class UMovieGraphQuickRenderModeSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h

// ********** Begin Enum EMovieGraphQuickRenderButtonMode ******************************************
#define FOREACH_ENUM_EMOVIEGRAPHQUICKRENDERBUTTONMODE(op) \
	op(EMovieGraphQuickRenderButtonMode::NormalMovieRenderQueue) \
	op(EMovieGraphQuickRenderButtonMode::QuickRender) 

enum class EMovieGraphQuickRenderButtonMode : uint8;
template<> struct TIsUEnumClass<EMovieGraphQuickRenderButtonMode> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphQuickRenderButtonMode>();
// ********** End Enum EMovieGraphQuickRenderButtonMode ********************************************

// ********** Begin Enum EMovieGraphQuickRenderMode ************************************************
#define FOREACH_ENUM_EMOVIEGRAPHQUICKRENDERMODE(op) \
	op(EMovieGraphQuickRenderMode::CurrentSequence) \
	op(EMovieGraphQuickRenderMode::UseViewportCameraInSequence) \
	op(EMovieGraphQuickRenderMode::CurrentViewport) \
	op(EMovieGraphQuickRenderMode::SelectedCameras) 

enum class EMovieGraphQuickRenderMode : uint8;
template<> struct TIsUEnumClass<EMovieGraphQuickRenderMode> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphQuickRenderMode>();
// ********** End Enum EMovieGraphQuickRenderMode **************************************************

// ********** Begin Enum EMovieGraphQuickRenderFrameRangeType **************************************
#define FOREACH_ENUM_EMOVIEGRAPHQUICKRENDERFRAMERANGETYPE(op) \
	op(EMovieGraphQuickRenderFrameRangeType::PlaybackRange) \
	op(EMovieGraphQuickRenderFrameRangeType::SelectionRange) \
	op(EMovieGraphQuickRenderFrameRangeType::Custom) 

enum class EMovieGraphQuickRenderFrameRangeType : uint8;
template<> struct TIsUEnumClass<EMovieGraphQuickRenderFrameRangeType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphQuickRenderFrameRangeType>();
// ********** End Enum EMovieGraphQuickRenderFrameRangeType ****************************************

// ********** Begin Enum EMovieGraphQuickRenderPostRenderActionType ********************************
#define FOREACH_ENUM_EMOVIEGRAPHQUICKRENDERPOSTRENDERACTIONTYPE(op) \
	op(EMovieGraphQuickRenderPostRenderActionType::DoNothing) \
	op(EMovieGraphQuickRenderPostRenderActionType::PlayRenderOutput) \
	op(EMovieGraphQuickRenderPostRenderActionType::OpenOutputDirectory) 

enum class EMovieGraphQuickRenderPostRenderActionType : uint8;
template<> struct TIsUEnumClass<EMovieGraphQuickRenderPostRenderActionType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphQuickRenderPostRenderActionType>();
// ********** End Enum EMovieGraphQuickRenderPostRenderActionType **********************************

// ********** Begin Enum EMovieGraphQuickRenderViewportLookFlags ***********************************
#define FOREACH_ENUM_EMOVIEGRAPHQUICKRENDERVIEWPORTLOOKFLAGS(op) \
	op(EMovieGraphQuickRenderViewportLookFlags::None) \
	op(EMovieGraphQuickRenderViewportLookFlags::Ocio) \
	op(EMovieGraphQuickRenderViewportLookFlags::ShowFlags) \
	op(EMovieGraphQuickRenderViewportLookFlags::ViewMode) \
	op(EMovieGraphQuickRenderViewportLookFlags::Visibility) \
	op(EMovieGraphQuickRenderViewportLookFlags::EditorOnlyActors) 

enum class EMovieGraphQuickRenderViewportLookFlags : uint8;
template<> struct TIsUEnumClass<EMovieGraphQuickRenderViewportLookFlags> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphQuickRenderViewportLookFlags>();
// ********** End Enum EMovieGraphQuickRenderViewportLookFlags *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
