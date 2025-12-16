// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkOpenTrackIOConnectionSettings.h"

#ifdef LIVELINKOPENTRACKIO_LiveLinkOpenTrackIOConnectionSettings_generated_h
#error "LiveLinkOpenTrackIOConnectionSettings.generated.h already included, missing '#pragma once' in LiveLinkOpenTrackIOConnectionSettings.h"
#endif
#define LIVELINKOPENTRACKIO_LiveLinkOpenTrackIOConnectionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkOpenTrackIOConnectionSettings ****************************
struct Z_Construct_UScriptStruct_FLiveLinkOpenTrackIOConnectionSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Private_LiveLinkOpenTrackIOConnectionSettings_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkOpenTrackIOConnectionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLiveLinkOpenTrackIOConnectionSettings;
// ********** End ScriptStruct FLiveLinkOpenTrackIOConnectionSettings ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Private_LiveLinkOpenTrackIOConnectionSettings_h

// ********** Begin Enum ELiveLinkOpenTrackIONetworkProtocol ***************************************
#define FOREACH_ENUM_ELIVELINKOPENTRACKIONETWORKPROTOCOL(op) \
	op(ELiveLinkOpenTrackIONetworkProtocol::Multicast) \
	op(ELiveLinkOpenTrackIONetworkProtocol::Unicast) 

enum class ELiveLinkOpenTrackIONetworkProtocol : uint8;
template<> struct TIsUEnumClass<ELiveLinkOpenTrackIONetworkProtocol> { enum { Value = true }; };
template<> LIVELINKOPENTRACKIO_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkOpenTrackIONetworkProtocol>();
// ********** End Enum ELiveLinkOpenTrackIONetworkProtocol *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
