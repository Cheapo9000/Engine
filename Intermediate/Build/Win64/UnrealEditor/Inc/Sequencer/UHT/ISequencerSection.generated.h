// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISequencerSection.h"

#ifdef SEQUENCER_ISequencerSection_generated_h
#error "ISequencerSection.generated.h already included, missing '#pragma once' in ISequencerSection.h"
#endif
#define SEQUENCER_ISequencerSection_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_ISequencerSection_h

// ********** Begin Enum ESequencerSectionResizeMode ***********************************************
#define FOREACH_ENUM_ESEQUENCERSECTIONRESIZEMODE(op) \
	op(SSRM_LeadingEdge) \
	op(SSRM_TrailingEdge) 

enum ESequencerSectionResizeMode : int;
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESequencerSectionResizeMode>();
// ********** End Enum ESequencerSectionResizeMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
