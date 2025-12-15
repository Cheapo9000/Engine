// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualGraphEdge.h"

#ifdef VISUALGRAPHUTILS_VisualGraphEdge_generated_h
#error "VisualGraphEdge.generated.h already included, missing '#pragma once' in VisualGraphEdge.h"
#endif
#define VISUALGRAPHUTILS_VisualGraphEdge_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphEdge_h

// ********** Begin Enum EVisualGraphEdgeDirection *************************************************
#define FOREACH_ENUM_EVISUALGRAPHEDGEDIRECTION(op) \
	op(EVisualGraphEdgeDirection::SourceToTarget) \
	op(EVisualGraphEdgeDirection::TargetToSource) \
	op(EVisualGraphEdgeDirection::BothWays) 

enum class EVisualGraphEdgeDirection : uint8;
template<> struct TIsUEnumClass<EVisualGraphEdgeDirection> { enum { Value = true }; };
template<> VISUALGRAPHUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<EVisualGraphEdgeDirection>();
// ********** End Enum EVisualGraphEdgeDirection ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
