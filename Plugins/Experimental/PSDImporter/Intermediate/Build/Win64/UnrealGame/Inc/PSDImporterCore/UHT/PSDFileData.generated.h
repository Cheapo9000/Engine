// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PSDFileData.h"

#ifdef PSDIMPORTERCORE_PSDFileData_generated_h
#error "PSDFileData.generated.h already included, missing '#pragma once' in PSDFileData.h"
#endif
#define PSDIMPORTERCORE_PSDFileData_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterCore_Public_PSDFileData_h

// ********** Begin Enum EPSDBlendMode *************************************************************
#define FOREACH_ENUM_EPSDBLENDMODE(op) \
	op(EPSDBlendMode::PassThrough) \
	op(EPSDBlendMode::Normal) \
	op(EPSDBlendMode::Dissolve) \
	op(EPSDBlendMode::Darken) \
	op(EPSDBlendMode::Multiply) \
	op(EPSDBlendMode::ColorBurn) \
	op(EPSDBlendMode::LinearBurn) \
	op(EPSDBlendMode::DarkerColor) \
	op(EPSDBlendMode::Lighten) \
	op(EPSDBlendMode::Screen) \
	op(EPSDBlendMode::ColorDodge) \
	op(EPSDBlendMode::LinearDodge) \
	op(EPSDBlendMode::LighterColor) \
	op(EPSDBlendMode::Overlay) \
	op(EPSDBlendMode::SoftLight) \
	op(EPSDBlendMode::HardLight) \
	op(EPSDBlendMode::VividLight) \
	op(EPSDBlendMode::LinearLight) \
	op(EPSDBlendMode::PinLight) \
	op(EPSDBlendMode::HardMix) \
	op(EPSDBlendMode::Difference) \
	op(EPSDBlendMode::Exclusion) \
	op(EPSDBlendMode::Subtract) \
	op(EPSDBlendMode::Divide) \
	op(EPSDBlendMode::Hue) \
	op(EPSDBlendMode::Saturation) \
	op(EPSDBlendMode::Color) \
	op(EPSDBlendMode::Luminosity) \
	op(EPSDBlendMode::Unknown) 

enum class EPSDBlendMode : uint8;
template<> struct TIsUEnumClass<EPSDBlendMode> { enum { Value = true }; };
template<> PSDIMPORTERCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPSDBlendMode>();
// ********** End Enum EPSDBlendMode ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
