// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageMessages.h"

#ifdef STAGEDATACORE_StageMessages_generated_h
#error "StageMessages.generated.h already included, missing '#pragma once' in StageMessages.h"
#endif
#define STAGEDATACORE_StageMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStageInstanceDescriptor ******************************************
struct Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStageInstanceDescriptor;
// ********** End ScriptStruct FStageInstanceDescriptor ********************************************

// ********** Begin ScriptStruct FStageDataBaseMessage *********************************************
struct Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStageDataBaseMessage;
// ********** End ScriptStruct FStageDataBaseMessage ***********************************************

// ********** Begin ScriptStruct FStageMonitorBaseMessage ******************************************
struct Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_136_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageDataBaseMessage Super;


struct FStageMonitorBaseMessage;
// ********** End ScriptStruct FStageMonitorBaseMessage ********************************************

// ********** Begin ScriptStruct FStageProviderDiscoveryMessage ************************************
struct Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageMonitorBaseMessage Super;


struct FStageProviderDiscoveryMessage;
// ********** End ScriptStruct FStageProviderDiscoveryMessage **************************************

// ********** Begin ScriptStruct FStageMonitorCloseMessage *****************************************
struct Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageMonitorBaseMessage Super;


struct FStageMonitorCloseMessage;
// ********** End ScriptStruct FStageMonitorCloseMessage *******************************************

// ********** Begin ScriptStruct FStageProviderMessage *********************************************
struct Z_Construct_UScriptStruct_FStageProviderMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_175_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageProviderMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageDataBaseMessage Super;


struct FStageProviderMessage;
// ********** End ScriptStruct FStageProviderMessage ***********************************************

// ********** Begin ScriptStruct FStageProviderEventMessage ****************************************
struct Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_198_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderMessage Super;


struct FStageProviderEventMessage;
// ********** End ScriptStruct FStageProviderEventMessage ******************************************

// ********** Begin ScriptStruct FStageProviderPeriodicMessage *************************************
struct Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_207_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderMessage Super;


struct FStageProviderPeriodicMessage;
// ********** End ScriptStruct FStageProviderPeriodicMessage ***************************************

// ********** Begin ScriptStruct FStageProviderCloseMessage ****************************************
struct Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_216_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


struct FStageProviderCloseMessage;
// ********** End ScriptStruct FStageProviderCloseMessage ******************************************

// ********** Begin ScriptStruct FStageProviderDiscoveryResponseMessage ****************************
struct Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


struct FStageProviderDiscoveryResponseMessage;
// ********** End ScriptStruct FStageProviderDiscoveryResponseMessage ******************************

// ********** Begin ScriptStruct FCriticalStateProviderMessage *************************************
struct Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_247_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


struct FCriticalStateProviderMessage;
// ********** End ScriptStruct FCriticalStateProviderMessage ***************************************

// ********** Begin ScriptStruct FAssetLoadingStateProviderMessage *********************************
struct Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics;
#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_275_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


struct FAssetLoadingStateProviderMessage;
// ********** End ScriptStruct FAssetLoadingStateProviderMessage ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h

// ********** Begin Enum EStageMessageFlags ********************************************************
#define FOREACH_ENUM_ESTAGEMESSAGEFLAGS(op) \
	op(EStageMessageFlags::None) \
	op(EStageMessageFlags::Reliable) 

enum class EStageMessageFlags : uint8;
template<> struct TIsUEnumClass<EStageMessageFlags> { enum { Value = true }; };
template<> STAGEDATACORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStageMessageFlags>();
// ********** End Enum EStageMessageFlags **********************************************************

// ********** Begin Enum EStageDataProviderState ***************************************************
#define FOREACH_ENUM_ESTAGEDATAPROVIDERSTATE(op) \
	op(EStageDataProviderState::Active) \
	op(EStageDataProviderState::Inactive) \
	op(EStageDataProviderState::Closed) 

enum class EStageDataProviderState : uint8;
template<> struct TIsUEnumClass<EStageDataProviderState> { enum { Value = true }; };
template<> STAGEDATACORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStageDataProviderState>();
// ********** End Enum EStageDataProviderState *****************************************************

// ********** Begin Enum EStageCriticalStateEvent **************************************************
#define FOREACH_ENUM_ESTAGECRITICALSTATEEVENT(op) \
	op(EStageCriticalStateEvent::Enter) \
	op(EStageCriticalStateEvent::Exit) 

enum class EStageCriticalStateEvent : uint8;
template<> struct TIsUEnumClass<EStageCriticalStateEvent> { enum { Value = true }; };
template<> STAGEDATACORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStageCriticalStateEvent>();
// ********** End Enum EStageCriticalStateEvent ****************************************************

// ********** Begin Enum EStageLoadingState ********************************************************
#define FOREACH_ENUM_ESTAGELOADINGSTATE(op) \
	op(EStageLoadingState::PreLoad) \
	op(EStageLoadingState::PostLoad) 

enum class EStageLoadingState : uint8;
template<> struct TIsUEnumClass<EStageLoadingState> { enum { Value = true }; };
template<> STAGEDATACORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStageLoadingState>();
// ********** End Enum EStageLoadingState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
