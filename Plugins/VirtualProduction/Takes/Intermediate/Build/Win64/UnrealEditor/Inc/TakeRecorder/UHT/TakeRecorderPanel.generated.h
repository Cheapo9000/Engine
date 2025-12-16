// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorderPanel.h"

#ifdef TAKERECORDER_TakeRecorderPanel_generated_h
#error "TakeRecorderPanel.generated.h already included, missing '#pragma once' in TakeRecorderPanel.h"
#endif
#define TAKERECORDER_TakeRecorderPanel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UTakeMetaData;
class UTakePreset;
class UTakeRecorderSources;
enum class ETakeRecorderPanelMode : uint8;
struct FFrameRate;

// ********** Begin Class UTakeRecorderPanel *******************************************************
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanStartRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execGetSources); \
	DECLARE_FUNCTION(execSetFrameRateFromTimecode); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetTakeMetaData); \
	DECLARE_FUNCTION(execGetLastRecordedLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execClearPendingTake); \
	DECLARE_FUNCTION(execSetupForViewing); \
	DECLARE_FUNCTION(execSetupForEditing); \
	DECLARE_FUNCTION(execSetupForRecordingInto_LevelSequence); \
	DECLARE_FUNCTION(execSetupForRecording_LevelSequence); \
	DECLARE_FUNCTION(execSetupForRecording_TakePreset); \
	DECLARE_FUNCTION(execGetMode);


struct Z_Construct_UClass_UTakeRecorderPanel_Statics;
TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderPanel_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderPanel(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderPanel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDER_API UClass* ::Z_Construct_UClass_UTakeRecorderPanel_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderPanel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), Z_Construct_UClass_UTakeRecorderPanel_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderPanel)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKERECORDER_API UTakeRecorderPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderPanel(UTakeRecorderPanel&&) = delete; \
	UTakeRecorderPanel(const UTakeRecorderPanel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDER_API, UTakeRecorderPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderPanel) \
	TAKERECORDER_API virtual ~UTakeRecorderPanel();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_33_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_38_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderPanel;

// ********** End Class UTakeRecorderPanel *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h

// ********** Begin Enum ETakeRecorderPanelMode ****************************************************
#define FOREACH_ENUM_ETAKERECORDERPANELMODE(op) \
	op(ETakeRecorderPanelMode::NewRecording) \
	op(ETakeRecorderPanelMode::RecordingInto) \
	op(ETakeRecorderPanelMode::EditingPreset) \
	op(ETakeRecorderPanelMode::ReviewingRecording) 

enum class ETakeRecorderPanelMode : uint8;
template<> struct TIsUEnumClass<ETakeRecorderPanelMode> { enum { Value = true }; };
template<> TAKERECORDER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETakeRecorderPanelMode>();
// ********** End Enum ETakeRecorderPanelMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
