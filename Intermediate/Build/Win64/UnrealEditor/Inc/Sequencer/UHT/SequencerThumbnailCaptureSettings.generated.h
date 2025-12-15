// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/SequencerThumbnailCaptureSettings.h"

#ifdef SEQUENCER_SequencerThumbnailCaptureSettings_generated_h
#error "SequencerThumbnailCaptureSettings.generated.h already included, missing '#pragma once' in SequencerThumbnailCaptureSettings.h"
#endif
#define SEQUENCER_SequencerThumbnailCaptureSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSequencerThumbnailCaptureSettings ********************************
struct Z_Construct_UScriptStruct_FSequencerThumbnailCaptureSettings_Statics;
#define FID_Engine_Source_Editor_Sequencer_Public_Misc_SequencerThumbnailCaptureSettings_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerThumbnailCaptureSettings_Statics; \
	SEQUENCER_API static class UScriptStruct* StaticStruct();


struct FSequencerThumbnailCaptureSettings;
// ********** End ScriptStruct FSequencerThumbnailCaptureSettings **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_Misc_SequencerThumbnailCaptureSettings_h

// ********** Begin Enum ESequencerThumbnailCaptureTimeLocation ************************************
#define FOREACH_ENUM_ESEQUENCERTHUMBNAILCAPTURETIMELOCATION(op) \
	op(ESequencerThumbnailCaptureTimeLocation::FirstFrame) \
	op(ESequencerThumbnailCaptureTimeLocation::MiddleFrame) \
	op(ESequencerThumbnailCaptureTimeLocation::LastFrame) \
	op(ESequencerThumbnailCaptureTimeLocation::CurrentFrame) 

enum class ESequencerThumbnailCaptureTimeLocation : uint8;
template<> struct TIsUEnumClass<ESequencerThumbnailCaptureTimeLocation> { enum { Value = true }; };
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESequencerThumbnailCaptureTimeLocation>();
// ********** End Enum ESequencerThumbnailCaptureTimeLocation **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
