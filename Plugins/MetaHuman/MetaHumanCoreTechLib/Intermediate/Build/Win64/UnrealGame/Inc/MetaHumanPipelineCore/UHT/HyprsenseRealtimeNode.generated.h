// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/HyprsenseRealtimeNode.h"

#ifdef METAHUMANPIPELINECORE_HyprsenseRealtimeNode_generated_h
#error "HyprsenseRealtimeNode.generated.h already included, missing '#pragma once' in HyprsenseRealtimeNode.h"
#endif
#define METAHUMANPIPELINECORE_HyprsenseRealtimeNode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanPipelineCore_Public_Nodes_HyprsenseRealtimeNode_h

// ********** Begin Enum EHyprsenseRealtimeNodeDebugImage ******************************************
#define FOREACH_ENUM_EHYPRSENSEREALTIMENODEDEBUGIMAGE(op) \
	op(EHyprsenseRealtimeNodeDebugImage::None) \
	op(EHyprsenseRealtimeNodeDebugImage::Input) \
	op(EHyprsenseRealtimeNodeDebugImage::FaceDetect) \
	op(EHyprsenseRealtimeNodeDebugImage::Headpose) \
	op(EHyprsenseRealtimeNodeDebugImage::Trackers) \
	op(EHyprsenseRealtimeNodeDebugImage::Solver) 

enum class EHyprsenseRealtimeNodeDebugImage : uint8;
template<> struct TIsUEnumClass<EHyprsenseRealtimeNodeDebugImage> { enum { Value = true }; };
template<> METAHUMANPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHyprsenseRealtimeNodeDebugImage>();
// ********** End Enum EHyprsenseRealtimeNodeDebugImage ********************************************

// ********** Begin Enum EHyprsenseRealtimeNodeState ***********************************************
#define FOREACH_ENUM_EHYPRSENSEREALTIMENODESTATE(op) \
	op(EHyprsenseRealtimeNodeState::Unknown) \
	op(EHyprsenseRealtimeNodeState::OK) \
	op(EHyprsenseRealtimeNodeState::NoFace) \
	op(EHyprsenseRealtimeNodeState::SubjectTooFar) 

enum class EHyprsenseRealtimeNodeState : uint8;
template<> struct TIsUEnumClass<EHyprsenseRealtimeNodeState> { enum { Value = true }; };
template<> METAHUMANPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHyprsenseRealtimeNodeState>();
// ********** End Enum EHyprsenseRealtimeNodeState *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
