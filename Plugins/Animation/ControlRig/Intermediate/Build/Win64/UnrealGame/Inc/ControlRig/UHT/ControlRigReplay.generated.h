// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigReplay.h"

#ifdef CONTROLRIG_ControlRigReplay_generated_h
#error "ControlRigReplay.generated.h already included, missing '#pragma once' in ControlRigReplay.h"
#endif
#define CONTROLRIG_ControlRigReplay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UControlRig;
class UControlRigReplay;
class UObject;
enum class EControlRigReplayPlaybackMode : uint8;

// ********** Begin ScriptStruct FControlRigReplayVariable *****************************************
struct Z_Construct_UScriptStruct_FControlRigReplayVariable_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigReplayVariable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigReplayVariable;
// ********** End ScriptStruct FControlRigReplayVariable *******************************************

// ********** Begin ScriptStruct FControlRigReplayTracks *******************************************
struct Z_Construct_UScriptStruct_FControlRigReplayTracks_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigReplayTracks_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FSampleTrackHost Super;


struct FControlRigReplayTracks;
// ********** End ScriptStruct FControlRigReplayTracks *********************************************

// ********** Begin Class UControlRigReplay ********************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPlaybackMode); \
	DECLARE_FUNCTION(execGetPlaybackMode); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsReplaying); \
	DECLARE_FUNCTION(execPauseReplay); \
	DECLARE_FUNCTION(execStopReplay); \
	DECLARE_FUNCTION(execStartReplay); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execGetTimeRange); \
	DECLARE_FUNCTION(execCreateNewAsset);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigReplay, CONTROLRIG_API)


struct Z_Construct_UClass_UControlRigReplay_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigReplay_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigReplay(); \
	friend struct ::Z_Construct_UClass_UControlRigReplay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigReplay_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigReplay, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigReplay_NoRegister) \
	DECLARE_SERIALIZER(UControlRigReplay) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigReplay(UControlRigReplay&&) = delete; \
	UControlRigReplay(const UControlRigReplay&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigReplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigReplay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigReplay) \
	CONTROLRIG_API virtual ~UControlRigReplay();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_178_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigReplay;

// ********** End Class UControlRigReplay **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigReplay_h

// ********** Begin Enum EControlRigReplayPlaybackMode *********************************************
#define FOREACH_ENUM_ECONTROLRIGREPLAYPLAYBACKMODE(op) \
	op(EControlRigReplayPlaybackMode::Live) \
	op(EControlRigReplayPlaybackMode::ReplayInputs) \
	op(EControlRigReplayPlaybackMode::GroundTruth) \
	op(EControlRigReplayPlaybackMode::Max) 

enum class EControlRigReplayPlaybackMode : uint8;
template<> struct TIsUEnumClass<EControlRigReplayPlaybackMode> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigReplayPlaybackMode>();
// ********** End Enum EControlRigReplayPlaybackMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
