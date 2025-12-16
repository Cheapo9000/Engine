// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OodleNetworkHandlerComponent.h"

#ifdef OODLENETWORKHANDLERCOMPONENT_OodleNetworkHandlerComponent_generated_h
#error "OodleNetworkHandlerComponent.generated.h already included, missing '#pragma once' in OodleNetworkHandlerComponent.h"
#endif
#define OODLENETWORKHANDLERCOMPONENT_OodleNetworkHandlerComponent_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h

// ********** Begin Enum EOodleNetworkEnableMode ***************************************************
#define FOREACH_ENUM_EOODLENETWORKENABLEMODE(op) \
	op(EOodleNetworkEnableMode::AlwaysEnabled) \
	op(EOodleNetworkEnableMode::WhenCompressedPacketReceived) 

enum class EOodleNetworkEnableMode : uint8;
template<> struct TIsUEnumClass<EOodleNetworkEnableMode> { enum { Value = true }; };
template<> OODLENETWORKHANDLERCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOodleNetworkEnableMode>();
// ********** End Enum EOodleNetworkEnableMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
