// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimedDataMonitorSubsystem.h"

#ifdef TIMEDDATAMONITOR_TimedDataMonitorSubsystem_generated_h
#error "TimedDataMonitorSubsystem.generated.h already included, missing '#pragma once' in TimedDataMonitorSubsystem.h"
#endif
#define TIMEDDATAMONITOR_TimedDataMonitorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ETimedDataInputEvaluationType : uint8;
enum class ETimedDataInputState : uint8;
enum class ETimedDataMonitorEvaluationState : uint8;
enum class ETimedDataMonitorInputEnabled : uint8;
struct FFrameRate;
struct FLatentActionInfo;
struct FTimedDataChannelSampleTime;
struct FTimedDataInputEvaluationData;
struct FTimedDataMonitorCalibrationParameters;
struct FTimedDataMonitorCalibrationResult;
struct FTimedDataMonitorChannelIdentifier;
struct FTimedDataMonitorInputIdentifier;
struct FTimedDataMonitorTimeCorrectionParameters;
struct FTimedDataMonitorTimeCorrectionResult;

// ********** Begin ScriptStruct FTimedDataMonitorChannelConnectionStateEvent **********************
struct Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics; \
	TIMEDDATAMONITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


struct FTimedDataMonitorChannelConnectionStateEvent;
// ********** End ScriptStruct FTimedDataMonitorChannelConnectionStateEvent ************************

// ********** Begin ScriptStruct FTimedDataMonitorChannelEvaluationStateEvent **********************
struct Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics; \
	TIMEDDATAMONITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


struct FTimedDataMonitorChannelEvaluationStateEvent;
// ********** End ScriptStruct FTimedDataMonitorChannelEvaluationStateEvent ************************

// ********** Begin Delegate FTimedDataIdentifierListChangedSignature ******************************
#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_150_DELEGATE \
TIMEDDATAMONITOR_API void FTimedDataIdentifierListChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& TimedDataIdentifierListChangedSignature);


// ********** End Delegate FTimedDataIdentifierListChangedSignature ********************************

// ********** Begin Class UTimedDataMonitorSubsystem ***********************************************
#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChannelEvaluationDistanceToOldestSampleStandardDeviation); \
	DECLARE_FUNCTION(execGetChannelEvaluationDistanceToNewestSampleStandardDeviation); \
	DECLARE_FUNCTION(execGetChannelEvaluationDistanceToOldestSampleMean); \
	DECLARE_FUNCTION(execGetChannelEvaluationDistanceToNewestSampleMean); \
	DECLARE_FUNCTION(execGetChannelLastEvaluationDataStat); \
	DECLARE_FUNCTION(execGetChannelFrameDroppedStat); \
	DECLARE_FUNCTION(execGetChannelBufferOverflowStat); \
	DECLARE_FUNCTION(execGetChannelBufferUnderflowStat); \
	DECLARE_FUNCTION(execSetChannelDataBufferSize); \
	DECLARE_FUNCTION(execGetChannelDataBufferSize); \
	DECLARE_FUNCTION(execGetChannelNumberOfSamples); \
	DECLARE_FUNCTION(execGetChannelFrameDataTimes); \
	DECLARE_FUNCTION(execGetChannelNewestDataTime); \
	DECLARE_FUNCTION(execGetChannelOldestDataTime); \
	DECLARE_FUNCTION(execGetChannelEvaluationState); \
	DECLARE_FUNCTION(execGetChannelConnectionState); \
	DECLARE_FUNCTION(execGetChannelDisplayName); \
	DECLARE_FUNCTION(execGetChannelInput); \
	DECLARE_FUNCTION(execSetChannelEnabled); \
	DECLARE_FUNCTION(execIsChannelEnabled); \
	DECLARE_FUNCTION(execDoesChannelExist); \
	DECLARE_FUNCTION(execGetInputEvaluationDistanceToOldestSampleStandardDeviation); \
	DECLARE_FUNCTION(execGetInputEvaluationDistanceToNewestSampleStandardDeviation); \
	DECLARE_FUNCTION(execGetInputEvaluationDistanceToOldestSampleMean); \
	DECLARE_FUNCTION(execGetInputEvaluationDistanceToNewestSampleMean); \
	DECLARE_FUNCTION(execGetInputEvaluationState); \
	DECLARE_FUNCTION(execGetInputConnectionState); \
	DECLARE_FUNCTION(execSetInputDataBufferSize); \
	DECLARE_FUNCTION(execGetInputDataBufferSize); \
	DECLARE_FUNCTION(execIsDataBufferSizeControlledByInput); \
	DECLARE_FUNCTION(execGetInputNewestDataTime); \
	DECLARE_FUNCTION(execGetInputOldestDataTime); \
	DECLARE_FUNCTION(execGetInputFrameRate); \
	DECLARE_FUNCTION(execSetInputEvaluationOffsetInFrames); \
	DECLARE_FUNCTION(execGetInputEvaluationOffsetInFrames); \
	DECLARE_FUNCTION(execSetInputEvaluationOffsetInSeconds); \
	DECLARE_FUNCTION(execGetInputEvaluationOffsetInSeconds); \
	DECLARE_FUNCTION(execSetInputEvaluationType); \
	DECLARE_FUNCTION(execGetInputEvaluationType); \
	DECLARE_FUNCTION(execGetInputChannels); \
	DECLARE_FUNCTION(execGetInputDisplayName); \
	DECLARE_FUNCTION(execSetInputEnabled); \
	DECLARE_FUNCTION(execGetInputEnabled); \
	DECLARE_FUNCTION(execDoesInputExist); \
	DECLARE_FUNCTION(execGetEvaluationState); \
	DECLARE_FUNCTION(execResetAllBufferStats); \
	DECLARE_FUNCTION(execApplyTimeCorrection); \
	DECLARE_FUNCTION(execCalibrateLatent); \
	DECLARE_FUNCTION(execGetAllEnabledChannels); \
	DECLARE_FUNCTION(execGetAllChannels); \
	DECLARE_FUNCTION(execGetAllInputs);


struct Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics;
TIMEDDATAMONITOR_API UClass* Z_Construct_UClass_UTimedDataMonitorSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimedDataMonitorSubsystem(); \
	friend struct ::Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEDDATAMONITOR_API UClass* ::Z_Construct_UClass_UTimedDataMonitorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimedDataMonitorSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimedDataMonitor"), Z_Construct_UClass_UTimedDataMonitorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UTimedDataMonitorSubsystem)


#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimedDataMonitorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimedDataMonitorSubsystem(UTimedDataMonitorSubsystem&&) = delete; \
	UTimedDataMonitorSubsystem(const UTimedDataMonitorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimedDataMonitorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimedDataMonitorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimedDataMonitorSubsystem) \
	NO_API virtual ~UTimedDataMonitorSubsystem();


#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_157_PROLOG
#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_160_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimedDataMonitorSubsystem;

// ********** End Class UTimedDataMonitorSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h

// ********** Begin Enum ETimedDataMonitorInputEnabled *********************************************
#define FOREACH_ENUM_ETIMEDDATAMONITORINPUTENABLED(op) \
	op(ETimedDataMonitorInputEnabled::Disabled) \
	op(ETimedDataMonitorInputEnabled::Enabled) \
	op(ETimedDataMonitorInputEnabled::MultipleValues) 

enum class ETimedDataMonitorInputEnabled : uint8;
template<> struct TIsUEnumClass<ETimedDataMonitorInputEnabled> { enum { Value = true }; };
template<> TIMEDDATAMONITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimedDataMonitorInputEnabled>();
// ********** End Enum ETimedDataMonitorInputEnabled ***********************************************

// ********** Begin Enum ETimedDataMonitorEvaluationState ******************************************
#define FOREACH_ENUM_ETIMEDDATAMONITOREVALUATIONSTATE(op) \
	op(ETimedDataMonitorEvaluationState::NoSample) \
	op(ETimedDataMonitorEvaluationState::OutsideRange) \
	op(ETimedDataMonitorEvaluationState::InsideRange) \
	op(ETimedDataMonitorEvaluationState::Disabled) 

enum class ETimedDataMonitorEvaluationState : uint8;
template<> struct TIsUEnumClass<ETimedDataMonitorEvaluationState> { enum { Value = true }; };
template<> TIMEDDATAMONITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimedDataMonitorEvaluationState>();
// ********** End Enum ETimedDataMonitorEvaluationState ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
