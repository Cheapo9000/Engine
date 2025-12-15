// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMixerSourceManager.h"

#ifdef AUDIOMIXER_AudioMixerSourceManager_generated_h
#error "AudioMixerSourceManager.generated.h already included, missing '#pragma once' in AudioMixerSourceManager.h"
#endif
#define AUDIOMIXER_AudioMixerSourceManager_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h

// ********** Begin Enum ESourceManagerRenderThreadPhase *******************************************
#define FOREACH_ENUM_ESOURCEMANAGERRENDERTHREADPHASE(op) \
	op(ESourceManagerRenderThreadPhase::Begin) \
	op(ESourceManagerRenderThreadPhase::PumpMpscCmds) \
	op(ESourceManagerRenderThreadPhase::PumpCmds) \
	op(ESourceManagerRenderThreadPhase::ProcessModulators) \
	op(ESourceManagerRenderThreadPhase::UpdatePendingReleaseData) \
	op(ESourceManagerRenderThreadPhase::RunScheduledRenderSteps) \
	op(ESourceManagerRenderThreadPhase::GenerateSrcAudio_WithBusses) \
	op(ESourceManagerRenderThreadPhase::ComputeBusses) \
	op(ESourceManagerRenderThreadPhase::GenerateSrcAudio_WithoutBusses) \
	op(ESourceManagerRenderThreadPhase::UpdateBusses) \
	op(ESourceManagerRenderThreadPhase::SpatialInterface_OnAllSourcesProcessed) \
	op(ESourceManagerRenderThreadPhase::SourceDataOverride_OnAllSourcesProcessed) \
	op(ESourceManagerRenderThreadPhase::UpdateGameThreadCopies) \
	op(ESourceManagerRenderThreadPhase::Finished) 

enum class ESourceManagerRenderThreadPhase : uint8;
template<> struct TIsUEnumClass<ESourceManagerRenderThreadPhase> { enum { Value = true }; };
template<> AUDIOMIXER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceManagerRenderThreadPhase>();
// ********** End Enum ESourceManagerRenderThreadPhase *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
