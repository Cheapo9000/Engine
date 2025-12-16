// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlProtocolMIDI.h"

#ifdef REMOTECONTROLPROTOCOLMIDI_RemoteControlProtocolMIDI_generated_h
#error "RemoteControlProtocolMIDI.generated.h already included, missing '#pragma once' in RemoteControlProtocolMIDI.h"
#endif
#define REMOTECONTROLPROTOCOLMIDI_RemoteControlProtocolMIDI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRemoteControlMIDIDevice ******************************************
struct Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRemoteControlMIDIDevice;
// ********** End ScriptStruct FRemoteControlMIDIDevice ********************************************

// ********** Begin ScriptStruct FRemoteControlMIDIProtocolEntity **********************************
struct Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics; \
	REMOTECONTROLPROTOCOLMIDI_API static class UScriptStruct* StaticStruct(); \
	typedef FRemoteControlProtocolEntity Super;


struct FRemoteControlMIDIProtocolEntity;
// ********** End ScriptStruct FRemoteControlMIDIProtocolEntity ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h

// ********** Begin Enum ERemoteControlMIDIDeviceSelector ******************************************
#define FOREACH_ENUM_EREMOTECONTROLMIDIDEVICESELECTOR(op) \
	op(ERemoteControlMIDIDeviceSelector::ProjectSettings) \
	op(ERemoteControlMIDIDeviceSelector::DeviceName) \
	op(ERemoteControlMIDIDeviceSelector::DeviceId) 

enum class ERemoteControlMIDIDeviceSelector;
template<> struct TIsUEnumClass<ERemoteControlMIDIDeviceSelector> { enum { Value = true }; };
template<> REMOTECONTROLPROTOCOLMIDI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERemoteControlMIDIDeviceSelector>();
// ********** End Enum ERemoteControlMIDIDeviceSelector ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
