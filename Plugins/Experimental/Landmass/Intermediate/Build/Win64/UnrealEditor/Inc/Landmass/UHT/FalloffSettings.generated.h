// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FalloffSettings.h"

#ifdef LANDMASS_FalloffSettings_generated_h
#error "FalloffSettings.generated.h already included, missing '#pragma once' in FalloffSettings.h"
#endif
#define LANDMASS_FalloffSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandmassFalloffSettings ******************************************
struct Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics;
#define FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics; \
	LANDMASS_API static class UScriptStruct* StaticStruct();


struct FLandmassFalloffSettings;
// ********** End ScriptStruct FLandmassFalloffSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h

// ********** Begin Enum EBrushFalloffMode *********************************************************
#define FOREACH_ENUM_EBRUSHFALLOFFMODE(op) \
	op(EBrushFalloffMode::Angle) \
	op(EBrushFalloffMode::Width) 

enum class EBrushFalloffMode : uint8;
template<> struct TIsUEnumClass<EBrushFalloffMode> { enum { Value = true }; };
template<> LANDMASS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBrushFalloffMode>();
// ********** End Enum EBrushFalloffMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
