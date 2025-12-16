// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDSceneStreaming.h"

#ifdef CHAOSVD_ChaosVDSceneStreaming_generated_h
#error "ChaosVDSceneStreaming.generated.h already included, missing '#pragma once' in ChaosVDSceneStreaming.h"
#endif
#define CHAOSVD_ChaosVDSceneStreaming_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDSceneStreaming_h

// ********** Begin Enum EChaosVDStreamingDirtyFlags ***********************************************
#define FOREACH_ENUM_ECHAOSVDSTREAMINGDIRTYFLAGS(op) \
	op(EChaosVDStreamingDirtyFlags::None) \
	op(EChaosVDStreamingDirtyFlags::StreamingExtents) \
	op(EChaosVDStreamingDirtyFlags::StreamingEnabled) \
	op(EChaosVDStreamingDirtyFlags::StreamingSourceLocation) \
	op(EChaosVDStreamingDirtyFlags::AccelerationStructure) 

enum class EChaosVDStreamingDirtyFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDStreamingDirtyFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDStreamingDirtyFlags>();
// ********** End Enum EChaosVDStreamingDirtyFlags *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
