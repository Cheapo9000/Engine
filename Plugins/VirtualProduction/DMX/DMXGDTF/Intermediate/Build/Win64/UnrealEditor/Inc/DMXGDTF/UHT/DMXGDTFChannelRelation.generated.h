// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/DMXModes/DMXGDTFChannelRelation.h"

#ifdef DMXGDTF_DMXGDTFChannelRelation_generated_h
#error "DMXGDTFChannelRelation.generated.h already included, missing '#pragma once' in DMXGDTFChannelRelation.h"
#endif
#define DMXGDTF_DMXGDTFChannelRelation_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_DMXModes_DMXGDTFChannelRelation_h

// ********** Begin Enum EDMXGDTFChannelRelationType ***********************************************
#define FOREACH_ENUM_EDMXGDTFCHANNELRELATIONTYPE(op) \
	op(EDMXGDTFChannelRelationType::Multiply) \
	op(EDMXGDTFChannelRelationType::Override) \
	op(EDMXGDTFChannelRelationType::MaxEnumValue) 

enum class EDMXGDTFChannelRelationType;
template<> struct TIsUEnumClass<EDMXGDTFChannelRelationType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFChannelRelationType>();
// ********** End Enum EDMXGDTFChannelRelationType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
