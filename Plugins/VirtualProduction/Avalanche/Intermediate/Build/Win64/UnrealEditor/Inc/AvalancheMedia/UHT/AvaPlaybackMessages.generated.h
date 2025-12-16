// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/AvaPlaybackMessages.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackMessages_generated_h
#error "AvaPlaybackMessages.generated.h already included, missing '#pragma once' in AvaPlaybackMessages.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaPlaybackClientMessageBase *************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackClientMessageBase_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackClientMessageBase_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaPlaybackClientMessageBase;
// ********** End ScriptStruct FAvaPlaybackClientMessageBase ***************************************

// ********** Begin ScriptStruct FAvaPlaybackServerMessageBase *************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackServerMessageBase_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackServerMessageBase_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaPlaybackServerMessageBase;
// ********** End ScriptStruct FAvaPlaybackServerMessageBase ***************************************

// ********** Begin ScriptStruct FAvaPlaybackPing **************************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackPing_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackPing_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackPing;
// ********** End ScriptStruct FAvaPlaybackPing ****************************************************

// ********** Begin ScriptStruct FAvaPlaybackPong **************************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackPong_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackPong_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackPong;
// ********** End ScriptStruct FAvaPlaybackPong ****************************************************

// ********** Begin ScriptStruct FAvaPlaybackLog ***************************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackLog_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackLog_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackLog;
// ********** End ScriptStruct FAvaPlaybackLog *****************************************************

// ********** Begin ScriptStruct FAvaPlaybackUpdateClientInfo **************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackUpdateClientInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackUpdateClientInfo_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackUpdateClientInfo;
// ********** End ScriptStruct FAvaPlaybackUpdateClientInfo ****************************************

// ********** Begin ScriptStruct FAvaPlaybackUpdateClientUserData **********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackUpdateClientUserData_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackUpdateClientUserData_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackUpdateClientUserData;
// ********** End ScriptStruct FAvaPlaybackUpdateClientUserData ************************************

// ********** Begin ScriptStruct FAvaPlaybackUpdateServerUserData **********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackUpdateServerUserData_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackUpdateServerUserData_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackUpdateServerUserData;
// ********** End ScriptStruct FAvaPlaybackUpdateServerUserData ************************************

// ********** Begin ScriptStruct FAvaPlaybackStatCommand *******************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackStatCommand_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackStatCommand_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackStatCommand;
// ********** End ScriptStruct FAvaPlaybackStatCommand *********************************************

// ********** Begin ScriptStruct FAvaPlaybackStatStatus ********************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackStatStatus_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_177_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackStatStatus_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackStatStatus;
// ********** End ScriptStruct FAvaPlaybackStatStatus **********************************************

// ********** Begin ScriptStruct FAvaPlaybackDeviceProviderDataRequest *****************************
struct Z_Construct_UScriptStruct_FAvaPlaybackDeviceProviderDataRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_204_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackDeviceProviderDataRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackDeviceProviderDataRequest;
// ********** End ScriptStruct FAvaPlaybackDeviceProviderDataRequest *******************************

// ********** Begin ScriptStruct FAvaPlaybackInstanceSettingsUpdate ********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackInstanceSettingsUpdate_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_213_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackInstanceSettingsUpdate_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackInstanceSettingsUpdate;
// ********** End ScriptStruct FAvaPlaybackInstanceSettingsUpdate **********************************

// ********** Begin ScriptStruct FAvaPlaybackPlayableSettingsUpdate ********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackPlayableSettingsUpdate_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackPlayableSettingsUpdate_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackPlayableSettingsUpdate;
// ********** End ScriptStruct FAvaPlaybackPlayableSettingsUpdate **********************************

// ********** Begin ScriptStruct FAvaPlaybackPackageEvent ******************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackPackageEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_246_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackPackageEvent_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackPackageEvent;
// ********** End ScriptStruct FAvaPlaybackPackageEvent ********************************************

// ********** Begin ScriptStruct FAvaPlaybackAssetStatusRequest ************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackAssetStatusRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_262_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackAssetStatusRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackAssetStatusRequest;
// ********** End ScriptStruct FAvaPlaybackAssetStatusRequest **************************************

// ********** Begin ScriptStruct FAvaPlaybackAssetStatus *******************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackAssetStatus_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_279_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackAssetStatus_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackAssetStatus;
// ********** End ScriptStruct FAvaPlaybackAssetStatus *********************************************

// ********** Begin ScriptStruct FAvaPlaybackCommand ***********************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackCommand_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_294_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackCommand_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaPlaybackCommand;
// ********** End ScriptStruct FAvaPlaybackCommand *************************************************

// ********** Begin ScriptStruct FAvaPlaybackRequest ***********************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_323_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackRequest;
// ********** End ScriptStruct FAvaPlaybackRequest *************************************************

// ********** Begin ScriptStruct FAvaPlaybackStatus ************************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackStatus_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_333_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackStatus_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackStatus;
// ********** End ScriptStruct FAvaPlaybackStatus **************************************************

// ********** Begin ScriptStruct FAvaPlaybackStatuses **********************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackStatuses_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_362_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackStatuses_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackStatuses;
// ********** End ScriptStruct FAvaPlaybackStatuses ************************************************

// ********** Begin ScriptStruct FAvaPlaybackAnimActionInfo ****************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackAnimActionInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_382_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackAnimActionInfo_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaPlaybackAnimActionInfo;
// ********** End ScriptStruct FAvaPlaybackAnimActionInfo ******************************************

// ********** Begin ScriptStruct FAvaPlaybackAnimPlaybackRequest ***********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackAnimPlaybackRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_398_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackAnimPlaybackRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackAnimPlaybackRequest;
// ********** End ScriptStruct FAvaPlaybackAnimPlaybackRequest *************************************

// ********** Begin ScriptStruct FAvaPlaybackSequenceEvent *****************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackSequenceEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_421_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackSequenceEvent_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackSequenceEvent;
// ********** End ScriptStruct FAvaPlaybackSequenceEvent *******************************************

// ********** Begin ScriptStruct FAvaPlaybackRemoteControlUpdateRequest ****************************
struct Z_Construct_UScriptStruct_FAvaPlaybackRemoteControlUpdateRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_446_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackRemoteControlUpdateRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackRemoteControlUpdateRequest;
// ********** End ScriptStruct FAvaPlaybackRemoteControlUpdateRequest ******************************

// ********** Begin ScriptStruct FAvaPlaybackTransitionStartRequest ********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackTransitionStartRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_468_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackTransitionStartRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackTransitionStartRequest;
// ********** End ScriptStruct FAvaPlaybackTransitionStartRequest **********************************

// ********** Begin ScriptStruct FAvaPlaybackTransitionStopRequest *********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackTransitionStopRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_503_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackTransitionStopRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaPlaybackTransitionStopRequest;
// ********** End ScriptStruct FAvaPlaybackTransitionStopRequest ***********************************

// ********** Begin ScriptStruct FAvaPlaybackTransitionEventEntry **********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackTransitionEventEntry_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_522_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackTransitionEventEntry_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaPlaybackTransitionEventEntry;
// ********** End ScriptStruct FAvaPlaybackTransitionEventEntry ************************************

// ********** Begin ScriptStruct FAvaPlaybackTransitionEvent ***************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackTransitionEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_549_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackTransitionEvent_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackTransitionEvent;
// ********** End ScriptStruct FAvaPlaybackTransitionEvent *****************************************

// ********** Begin ScriptStruct FAvaPlaybackTransitionEventMulti **********************************
struct Z_Construct_UScriptStruct_FAvaPlaybackTransitionEventMulti_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_571_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackTransitionEventMulti_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaPlaybackTransitionEventMulti;
// ********** End ScriptStruct FAvaPlaybackTransitionEventMulti ************************************

// ********** Begin ScriptStruct FAvaBroadcastOutputData *******************************************
struct Z_Construct_UScriptStruct_FAvaBroadcastOutputData_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_595_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaBroadcastOutputData_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaBroadcastOutputData;
// ********** End ScriptStruct FAvaBroadcastOutputData *********************************************

// ********** Begin ScriptStruct FAvaBroadcastRequest **********************************************
struct Z_Construct_UScriptStruct_FAvaBroadcastRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_616_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaBroadcastRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaBroadcastRequest;
// ********** End ScriptStruct FAvaBroadcastRequest ************************************************

// ********** Begin ScriptStruct FAvaBroadcastChannelSettingsUpdate ********************************
struct Z_Construct_UScriptStruct_FAvaBroadcastChannelSettingsUpdate_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_638_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaBroadcastChannelSettingsUpdate_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaBroadcastChannelSettingsUpdate;
// ********** End ScriptStruct FAvaBroadcastChannelSettingsUpdate **********************************

// ********** Begin ScriptStruct FAvaBroadcastStatusRequest ****************************************
struct Z_Construct_UScriptStruct_FAvaBroadcastStatusRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_663_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaBroadcastStatusRequest_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaBroadcastStatusRequest;
// ********** End ScriptStruct FAvaBroadcastStatusRequest ******************************************

// ********** Begin ScriptStruct FAvaBroadcastSettings *********************************************
struct Z_Construct_UScriptStruct_FAvaBroadcastSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_672_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaBroadcastSettings_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaBroadcastSettings;
// ********** End ScriptStruct FAvaBroadcastSettings ***********************************************

// ********** Begin ScriptStruct FAvaBroadcastSettingsUpdate ***************************************
struct Z_Construct_UScriptStruct_FAvaBroadcastSettingsUpdate_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_704_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaBroadcastSettingsUpdate_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackClientMessageBase Super;


struct FAvaBroadcastSettingsUpdate;
// ********** End ScriptStruct FAvaBroadcastSettingsUpdate *****************************************

// ********** Begin ScriptStruct FAvaBroadcastOutputStatus *****************************************
struct Z_Construct_UScriptStruct_FAvaBroadcastOutputStatus_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_716_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaBroadcastOutputStatus_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaBroadcastOutputStatus;
// ********** End ScriptStruct FAvaBroadcastOutputStatus *******************************************

// ********** Begin ScriptStruct FAvaBroadcastStatus ***********************************************
struct Z_Construct_UScriptStruct_FAvaBroadcastStatus_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h_734_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaBroadcastStatus_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaPlaybackServerMessageBase Super;


struct FAvaBroadcastStatus;
// ********** End ScriptStruct FAvaBroadcastStatus *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_AvaPlaybackMessages_h

// ********** Begin Enum EAvaPlaybackPackageEvent **************************************************
#define FOREACH_ENUM_EAVAPLAYBACKPACKAGEEVENT(op) \
	op(EAvaPlaybackPackageEvent::None) \
	op(EAvaPlaybackPackageEvent::PreSave) \
	op(EAvaPlaybackPackageEvent::PostSave) \
	op(EAvaPlaybackPackageEvent::AssetDeleted) 

enum class EAvaPlaybackPackageEvent;
template<> struct TIsUEnumClass<EAvaPlaybackPackageEvent> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlaybackPackageEvent>();
// ********** End Enum EAvaPlaybackPackageEvent ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
