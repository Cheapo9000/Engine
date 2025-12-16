// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MusicTypes/MusicalEnums.h"

#ifdef MUSICENVIRONMENT_MusicalEnums_generated_h
#error "MusicalEnums.generated.h already included, missing '#pragma once' in MusicalEnums.h"
#endif
#define MUSICENVIRONMENT_MusicalEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalEnums_h

// ********** Begin Enum EMusicalSyncPointCaptureMode **********************************************
#define FOREACH_ENUM_EMUSICALSYNCPOINTCAPTUREMODE(op) \
	op(EMusicalSyncPointCaptureMode::DirectMapped) \
	op(EMusicalSyncPointCaptureMode::Immediate) \
	op(EMusicalSyncPointCaptureMode::NearestQuantizedPosition) \
	op(EMusicalSyncPointCaptureMode::NextQuantizedPosition) \
	op(EMusicalSyncPointCaptureMode::PreviousQuantizedPosition) 

enum class EMusicalSyncPointCaptureMode : uint8;
template<> struct TIsUEnumClass<EMusicalSyncPointCaptureMode> { enum { Value = true }; };
template<> MUSICENVIRONMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicalSyncPointCaptureMode>();
// ********** End Enum EMusicalSyncPointCaptureMode ************************************************

// ********** Begin Enum EMusicalTimeSignatureRemapMode ********************************************
#define FOREACH_ENUM_EMUSICALTIMESIGNATUREREMAPMODE(op) \
	op(EMusicalTimeSignatureRemapMode::None) \
	op(EMusicalTimeSignatureRemapMode::ScaleBars) \
	op(EMusicalTimeSignatureRemapMode::CropOrLoopBars) \
	op(EMusicalTimeSignatureRemapMode::ScaleBeatsAndCropOrLoop) 

enum class EMusicalTimeSignatureRemapMode : uint8;
template<> struct TIsUEnumClass<EMusicalTimeSignatureRemapMode> { enum { Value = true }; };
template<> MUSICENVIRONMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicalTimeSignatureRemapMode>();
// ********** End Enum EMusicalTimeSignatureRemapMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
