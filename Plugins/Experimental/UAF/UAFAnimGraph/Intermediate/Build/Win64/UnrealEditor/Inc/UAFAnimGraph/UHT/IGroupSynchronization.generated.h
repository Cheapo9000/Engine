// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraitInterfaces/IGroupSynchronization.h"

#ifdef UAFANIMGRAPH_IGroupSynchronization_generated_h
#error "IGroupSynchronization.generated.h already included, missing '#pragma once' in IGroupSynchronization.h"
#endif
#define UAFANIMGRAPH_IGroupSynchronization_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_TraitInterfaces_IGroupSynchronization_h

// ********** Begin Enum EAnimGroupSynchronizationRole *********************************************
#define FOREACH_ENUM_EANIMGROUPSYNCHRONIZATIONROLE(op) \
	op(EAnimGroupSynchronizationRole::CanBeLeader) \
	op(EAnimGroupSynchronizationRole::AlwaysFollower) \
	op(EAnimGroupSynchronizationRole::AlwaysLeader) \
	op(EAnimGroupSynchronizationRole::TransitionLeader) \
	op(EAnimGroupSynchronizationRole::TransitionFollower) \
	op(EAnimGroupSynchronizationRole::ExclusiveAlwaysLeader) 

enum class EAnimGroupSynchronizationRole : uint8;
template<> struct TIsUEnumClass<EAnimGroupSynchronizationRole> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimGroupSynchronizationRole>();
// ********** End Enum EAnimGroupSynchronizationRole ***********************************************

// ********** Begin Enum EAnimGroupSynchronizationMode *********************************************
#define FOREACH_ENUM_EANIMGROUPSYNCHRONIZATIONMODE(op) \
	op(EAnimGroupSynchronizationMode::NoSynchronization) \
	op(EAnimGroupSynchronizationMode::SynchronizeUsingGroupName) \
	op(EAnimGroupSynchronizationMode::SynchronizeUsingUniqueGroupName) 

enum class EAnimGroupSynchronizationMode : uint8;
template<> struct TIsUEnumClass<EAnimGroupSynchronizationMode> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimGroupSynchronizationMode>();
// ********** End Enum EAnimGroupSynchronizationMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
