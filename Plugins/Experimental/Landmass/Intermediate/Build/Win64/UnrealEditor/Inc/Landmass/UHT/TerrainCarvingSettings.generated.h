// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TerrainCarvingSettings.h"

#ifdef LANDMASS_TerrainCarvingSettings_generated_h
#error "TerrainCarvingSettings.generated.h already included, missing '#pragma once' in TerrainCarvingSettings.h"
#endif
#define LANDMASS_TerrainCarvingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandmassTerrainCarvingSettings ***********************************
struct Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics;
#define FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics; \
	LANDMASS_API static class UScriptStruct* StaticStruct();


struct FLandmassTerrainCarvingSettings;
// ********** End ScriptStruct FLandmassTerrainCarvingSettings *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h

// ********** Begin Enum EBrushBlendType ***********************************************************
#define FOREACH_ENUM_EBRUSHBLENDTYPE(op) \
	op(EBrushBlendType::AlphaBlend) \
	op(EBrushBlendType::Min) \
	op(EBrushBlendType::Max) \
	op(EBrushBlendType::Additive) 

enum class EBrushBlendType : uint8;
template<> struct TIsUEnumClass<EBrushBlendType> { enum { Value = true }; };
template<> LANDMASS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBrushBlendType>();
// ********** End Enum EBrushBlendType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
