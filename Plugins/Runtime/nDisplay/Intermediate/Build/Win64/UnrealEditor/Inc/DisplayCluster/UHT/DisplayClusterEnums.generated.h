// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterEnums.h"

#ifdef DISPLAYCLUSTER_DisplayClusterEnums_generated_h
#error "DisplayClusterEnums.generated.h already included, missing '#pragma once' in DisplayClusterEnums.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterEnums_h

// ********** Begin Enum EDisplayClusterOperationMode **********************************************
#define FOREACH_ENUM_EDISPLAYCLUSTEROPERATIONMODE(op) \
	op(EDisplayClusterOperationMode::Cluster) \
	op(EDisplayClusterOperationMode::Editor) \
	op(EDisplayClusterOperationMode::Disabled) 

enum class EDisplayClusterOperationMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterOperationMode> { enum { Value = true }; };
template<> DISPLAYCLUSTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterOperationMode>();
// ********** End Enum EDisplayClusterOperationMode ************************************************

// ********** Begin Enum EDisplayClusterNodeRole ***************************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERNODEROLE(op) \
	op(EDisplayClusterNodeRole::None) \
	op(EDisplayClusterNodeRole::Primary) \
	op(EDisplayClusterNodeRole::Secondary) \
	op(EDisplayClusterNodeRole::Backup) 

enum class EDisplayClusterNodeRole : uint8;
template<> struct TIsUEnumClass<EDisplayClusterNodeRole> { enum { Value = true }; };
template<> DISPLAYCLUSTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterNodeRole>();
// ********** End Enum EDisplayClusterNodeRole *****************************************************

// ********** Begin Enum EDisplayClusterSyncGroup **************************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERSYNCGROUP(op) \
	op(EDisplayClusterSyncGroup::PreTick) \
	op(EDisplayClusterSyncGroup::Tick) \
	op(EDisplayClusterSyncGroup::PostTick) 

enum class EDisplayClusterSyncGroup : uint8;
template<> struct TIsUEnumClass<EDisplayClusterSyncGroup> { enum { Value = true }; };
template<> DISPLAYCLUSTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterSyncGroup>();
// ********** End Enum EDisplayClusterSyncGroup ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
