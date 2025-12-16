// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/DMXModes/DMXGDTFLogicalChannel.h"

#ifdef DMXGDTF_DMXGDTFLogicalChannel_generated_h
#error "DMXGDTFLogicalChannel.generated.h already included, missing '#pragma once' in DMXGDTFLogicalChannel.h"
#endif
#define DMXGDTF_DMXGDTFLogicalChannel_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_DMXModes_DMXGDTFLogicalChannel_h

// ********** Begin Enum EDMXGDTFLogicalChannelSnap ************************************************
#define FOREACH_ENUM_EDMXGDTFLOGICALCHANNELSNAP(op) \
	op(EDMXGDTFLogicalChannelSnap::Yes) \
	op(EDMXGDTFLogicalChannelSnap::No) \
	op(EDMXGDTFLogicalChannelSnap::On) \
	op(EDMXGDTFLogicalChannelSnap::Off) \
	op(EDMXGDTFLogicalChannelSnap::MaxEnumValue) 

enum class EDMXGDTFLogicalChannelSnap : uint8;
template<> struct TIsUEnumClass<EDMXGDTFLogicalChannelSnap> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFLogicalChannelSnap>();
// ********** End Enum EDMXGDTFLogicalChannelSnap **************************************************

// ********** Begin Enum EDMXGDTFLogicalChannelMaster **********************************************
#define FOREACH_ENUM_EDMXGDTFLOGICALCHANNELMASTER(op) \
	op(EDMXGDTFLogicalChannelMaster::None) \
	op(EDMXGDTFLogicalChannelMaster::Grand) \
	op(EDMXGDTFLogicalChannelMaster::Group) \
	op(EDMXGDTFLogicalChannelMaster::MaxEnumValue) 

enum class EDMXGDTFLogicalChannelMaster : uint8;
template<> struct TIsUEnumClass<EDMXGDTFLogicalChannelMaster> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFLogicalChannelMaster>();
// ********** End Enum EDMXGDTFLogicalChannelMaster ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
