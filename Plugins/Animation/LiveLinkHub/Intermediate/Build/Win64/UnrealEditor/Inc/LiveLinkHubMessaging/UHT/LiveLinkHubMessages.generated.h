// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkHubMessages.h"

#ifdef LIVELINKHUBMESSAGING_LiveLinkHubMessages_generated_h
#error "LiveLinkHubMessages.generated.h already included, missing '#pragma once' in LiveLinkHubMessages.h"
#endif
#define LIVELINKHUBMESSAGING_LiveLinkHubMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkHubCustomTimeStep ***********************************************
struct Z_Construct_UClass_ULiveLinkHubCustomTimeStep_Statics;
LIVELINKHUBMESSAGING_API UClass* Z_Construct_UClass_ULiveLinkHubCustomTimeStep_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubCustomTimeStep(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubCustomTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUBMESSAGING_API UClass* ::Z_Construct_UClass_ULiveLinkHubCustomTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubCustomTimeStep, ULiveLinkCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkHubMessaging"), Z_Construct_UClass_ULiveLinkHubCustomTimeStep_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubCustomTimeStep)


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkHubCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubCustomTimeStep(ULiveLinkHubCustomTimeStep&&) = delete; \
	ULiveLinkHubCustomTimeStep(const ULiveLinkHubCustomTimeStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkHubCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubCustomTimeStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkHubCustomTimeStep) \
	NO_API virtual ~ULiveLinkHubCustomTimeStep();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_53_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubCustomTimeStep;

// ********** End Class ULiveLinkHubCustomTimeStep *************************************************

// ********** Begin ScriptStruct FLiveLinkHubCustomTimeStepSettings ********************************
struct Z_Construct_UScriptStruct_FLiveLinkHubCustomTimeStepSettings_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubCustomTimeStepSettings_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubCustomTimeStepSettings;
// ********** End ScriptStruct FLiveLinkHubCustomTimeStepSettings **********************************

// ********** Begin ScriptStruct FLiveLinkHubTimecodeSettings **************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubTimecodeSettings_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubTimecodeSettings_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubTimecodeSettings;
// ********** End ScriptStruct FLiveLinkHubTimecodeSettings ****************************************

// ********** Begin ScriptStruct FLiveLinkClientInfoMessage ****************************************
struct Z_Construct_UScriptStruct_FLiveLinkClientInfoMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_158_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkClientInfoMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct();


struct FLiveLinkClientInfoMessage;
// ********** End ScriptStruct FLiveLinkClientInfoMessage ******************************************

// ********** Begin ScriptStruct FLiveLinkHubConnectMessage ****************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubConnectMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_197_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubConnectMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubConnectMessage;
// ********** End ScriptStruct FLiveLinkHubConnectMessage ******************************************

// ********** Begin ScriptStruct FLiveLinkHubBeaconMessage *****************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubBeaconMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_216_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubBeaconMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubBeaconMessage;
// ********** End ScriptStruct FLiveLinkHubBeaconMessage *******************************************

// ********** Begin ScriptStruct FLiveLinkHubDisconnectMessage *************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubDisconnectMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_243_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubDisconnectMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubDisconnectMessage;
// ********** End ScriptStruct FLiveLinkHubDisconnectMessage ***************************************

// ********** Begin ScriptStruct FLiveLinkHubDiscoveryMessage **************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubDiscoveryMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_263_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubDiscoveryMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubDiscoveryMessage;
// ********** End ScriptStruct FLiveLinkHubDiscoveryMessage ****************************************

// ********** Begin ScriptStruct FLiveLinkHubAuxChannelBaseMessage *********************************
struct Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelBaseMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_308_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelBaseMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubAuxChannelBaseMessage;
// ********** End ScriptStruct FLiveLinkHubAuxChannelBaseMessage ***********************************

// ********** Begin ScriptStruct FLiveLinkHubAuxChannelRequestMessage ******************************
struct Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelRequestMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_329_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelRequestMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkHubAuxChannelBaseMessage Super;


struct FLiveLinkHubAuxChannelRequestMessage;
// ********** End ScriptStruct FLiveLinkHubAuxChannelRequestMessage ********************************

// ********** Begin ScriptStruct FLiveLinkHubAuxChannelAcceptMessage *******************************
struct Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelAcceptMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_336_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelAcceptMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkHubAuxChannelBaseMessage Super;


struct FLiveLinkHubAuxChannelAcceptMessage;
// ********** End ScriptStruct FLiveLinkHubAuxChannelAcceptMessage *********************************

// ********** Begin ScriptStruct FLiveLinkHubAuxChannelRejectMessage *******************************
struct Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelRejectMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_346_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelRejectMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkHubAuxChannelBaseMessage Super;


struct FLiveLinkHubAuxChannelRejectMessage;
// ********** End ScriptStruct FLiveLinkHubAuxChannelRejectMessage *********************************

// ********** Begin ScriptStruct FLiveLinkHubAuxChannelCloseMessage ********************************
struct Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelCloseMessage_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_353_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubAuxChannelCloseMessage_Statics; \
	LIVELINKHUBMESSAGING_API static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkHubAuxChannelBaseMessage Super;


struct FLiveLinkHubAuxChannelCloseMessage;
// ********** End ScriptStruct FLiveLinkHubAuxChannelCloseMessage **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h

// ********** Begin Enum ELiveLinkHubAutoConnectMode ***********************************************
#define FOREACH_ENUM_ELIVELINKHUBAUTOCONNECTMODE(op) \
	op(ELiveLinkHubAutoConnectMode::Disabled) \
	op(ELiveLinkHubAutoConnectMode::All) \
	op(ELiveLinkHubAutoConnectMode::LocalOnly) 

enum class ELiveLinkHubAutoConnectMode : uint8;
template<> struct TIsUEnumClass<ELiveLinkHubAutoConnectMode> { enum { Value = true }; };
template<> LIVELINKHUBMESSAGING_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkHubAutoConnectMode>();
// ********** End Enum ELiveLinkHubAutoConnectMode *************************************************

// ********** Begin Enum ELiveLinkHubTimecodeSource ************************************************
#define FOREACH_ENUM_ELIVELINKHUBTIMECODESOURCE(op) \
	op(ELiveLinkHubTimecodeSource::NotDefined) \
	op(ELiveLinkHubTimecodeSource::SystemTimeEditor) \
	op(ELiveLinkHubTimecodeSource::UseSubjectName) 

enum class ELiveLinkHubTimecodeSource;
template<> struct TIsUEnumClass<ELiveLinkHubTimecodeSource> { enum { Value = true }; };
template<> LIVELINKHUBMESSAGING_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkHubTimecodeSource>();
// ********** End Enum ELiveLinkHubTimecodeSource **************************************************

// ********** Begin Enum ELiveLinkClientStatus *****************************************************
#define FOREACH_ENUM_ELIVELINKCLIENTSTATUS(op) \
	op(ELiveLinkClientStatus::Connected) \
	op(ELiveLinkClientStatus::Disconnected) \
	op(ELiveLinkClientStatus::Recording) 

enum class ELiveLinkClientStatus;
template<> struct TIsUEnumClass<ELiveLinkClientStatus> { enum { Value = true }; };
template<> LIVELINKHUBMESSAGING_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkClientStatus>();
// ********** End Enum ELiveLinkClientStatus *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
