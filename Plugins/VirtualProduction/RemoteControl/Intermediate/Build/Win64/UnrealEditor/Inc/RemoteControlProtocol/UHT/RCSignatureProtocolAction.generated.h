// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Signature/RCSignatureProtocolAction.h"

#ifdef REMOTECONTROLPROTOCOL_RCSignatureProtocolAction_generated_h
#error "RCSignatureProtocolAction.generated.h already included, missing '#pragma once' in RCSignatureProtocolAction.h"
#endif
#define REMOTECONTROLPROTOCOL_RCSignatureProtocolAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCSignatureProtocolAction ****************************************
struct Z_Construct_UScriptStruct_FRCSignatureProtocolAction_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocol_Public_Signature_RCSignatureProtocolAction_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCSignatureProtocolAction_Statics; \
	REMOTECONTROLPROTOCOL_API static class UScriptStruct* StaticStruct(); \
	typedef FRCSignatureAction Super;


struct FRCSignatureProtocolAction;
// ********** End ScriptStruct FRCSignatureProtocolAction ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocol_Public_Signature_RCSignatureProtocolAction_h

// ********** Begin Enum ERCSignatureProtocolActionMappingSpace ************************************
#define FOREACH_ENUM_ERCSIGNATUREPROTOCOLACTIONMAPPINGSPACE(op) \
	op(ERCSignatureProtocolActionMappingSpace::Additive) \
	op(ERCSignatureProtocolActionMappingSpace::Multiply) \
	op(ERCSignatureProtocolActionMappingSpace::Absolute) 

enum class ERCSignatureProtocolActionMappingSpace : uint8;
template<> struct TIsUEnumClass<ERCSignatureProtocolActionMappingSpace> { enum { Value = true }; };
template<> REMOTECONTROLPROTOCOL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCSignatureProtocolActionMappingSpace>();
// ********** End Enum ERCSignatureProtocolActionMappingSpace **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
