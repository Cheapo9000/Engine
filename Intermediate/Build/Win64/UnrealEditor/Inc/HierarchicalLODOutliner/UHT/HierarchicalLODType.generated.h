// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HierarchicalLODType.h"

#ifdef HIERARCHICALLODOUTLINER_HierarchicalLODType_generated_h
#error "HierarchicalLODType.generated.h already included, missing '#pragma once' in HierarchicalLODType.h"
#endif
#define HIERARCHICALLODOUTLINER_HierarchicalLODType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_HierarchicalLODOutliner_Private_HierarchicalLODType_h

// ********** Begin Enum EHierarchicalLODActionType ************************************************
#define FOREACH_ENUM_EHIERARCHICALLODACTIONTYPE(op) \
	op(EHierarchicalLODActionType::InvalidAction) \
	op(EHierarchicalLODActionType::CreateCluster) \
	op(EHierarchicalLODActionType::AddActorToCluster) \
	op(EHierarchicalLODActionType::MoveActorToCluster) \
	op(EHierarchicalLODActionType::RemoveActorFromCluster) \
	op(EHierarchicalLODActionType::MergeClusters) \
	op(EHierarchicalLODActionType::ChildCluster) 

enum class EHierarchicalLODActionType : uint8;
template<> struct TIsUEnumClass<EHierarchicalLODActionType> { enum { Value = true }; };
template<> HIERARCHICALLODOUTLINER_NON_ATTRIBUTED_API UEnum* StaticEnum<EHierarchicalLODActionType>();
// ********** End Enum EHierarchicalLODActionType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
