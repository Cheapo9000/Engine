// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraStackTypes.h"

#ifdef ENGINE_CameraStackTypes_generated_h
#error "CameraStackTypes.generated.h already included, missing '#pragma once' in CameraStackTypes.h"
#endif
#define ENGINE_CameraStackTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDummySpacerCameraTypes *******************************************
struct Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDummySpacerCameraTypes;
// ********** End ScriptStruct FDummySpacerCameraTypes *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h

// ********** Begin Enum ECameraAlphaBlendMode *****************************************************
#define FOREACH_ENUM_ECAMERAALPHABLENDMODE(op) \
	op(ECameraAlphaBlendMode::CABM_Linear) \
	op(ECameraAlphaBlendMode::CABM_Cubic) 

namespace ECameraAlphaBlendMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraAlphaBlendMode::Type>();
// ********** End Enum ECameraAlphaBlendMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
