// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DisplayClusterLabelConfiguration.h"

#ifdef DISPLAYCLUSTER_DisplayClusterLabelConfiguration_generated_h
#error "DisplayClusterLabelConfiguration.generated.h already included, missing '#pragma once' in DisplayClusterLabelConfiguration.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterLabelConfiguration_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelConfiguration_h

// ********** Begin Enum EDisplayClusterLabelFlags *************************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERLABELFLAGS(op) \
	op(EDisplayClusterLabelFlags::None) \
	op(EDisplayClusterLabelFlags::DisplayInGame) \
	op(EDisplayClusterLabelFlags::DisplayInEditor) 

enum class EDisplayClusterLabelFlags : uint8;
template<> struct TIsUEnumClass<EDisplayClusterLabelFlags> { enum { Value = true }; };
template<> DISPLAYCLUSTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterLabelFlags>();
// ********** End Enum EDisplayClusterLabelFlags ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
