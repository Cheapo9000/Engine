// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkHubMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKHUBMESSAGING_LiveLinkHubMessages_generated_h
#error "LiveLinkHubMessages.generated.h already included, missing '#pragma once' in LiveLinkHubMessages.h"
#endif
#define LIVELINKHUBMESSAGING_LiveLinkHubMessages_generated_h

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkHubTimecodeSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LIVELINKHUBMESSAGING_API UScriptStruct* StaticStruct<struct FLiveLinkHubTimecodeSettings>();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkClientInfoMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LIVELINKHUBMESSAGING_API UScriptStruct* StaticStruct<struct FLiveLinkClientInfoMessage>();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkHubConnectMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LIVELINKHUBMESSAGING_API UScriptStruct* StaticStruct<struct FLiveLinkHubConnectMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessages_h


#define FOREACH_ENUM_ELIVELINKHUBTIMECODESOURCE(op) \
	op(ELiveLinkHubTimecodeSource::NotDefined) \
	op(ELiveLinkHubTimecodeSource::SystemTimeEditor) \
	op(ELiveLinkHubTimecodeSource::UseSubjectName) 

enum class ELiveLinkHubTimecodeSource;
template<> struct TIsUEnumClass<ELiveLinkHubTimecodeSource> { enum { Value = true }; };
template<> LIVELINKHUBMESSAGING_API UEnum* StaticEnum<ELiveLinkHubTimecodeSource>();

#define FOREACH_ENUM_ELIVELINKCLIENTSTATUS(op) \
	op(ELiveLinkClientStatus::Connected) \
	op(ELiveLinkClientStatus::Disconnected) \
	op(ELiveLinkClientStatus::Recording) 

enum class ELiveLinkClientStatus;
template<> struct TIsUEnumClass<ELiveLinkClientStatus> { enum { Value = true }; };
template<> LIVELINKHUBMESSAGING_API UEnum* StaticEnum<ELiveLinkClientStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
