// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SvgDistanceFieldConfiguration.h"

#ifdef SVGDISTANCEFIELD_SvgDistanceFieldConfiguration_generated_h
#error "SvgDistanceFieldConfiguration.generated.h already included, missing '#pragma once' in SvgDistanceFieldConfiguration.h"
#endif
#define SVGDISTANCEFIELD_SvgDistanceFieldConfiguration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSvgDistanceFieldConfiguration ************************************
struct Z_Construct_UScriptStruct_FSvgDistanceFieldConfiguration_Statics;
#define FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldConfiguration_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSvgDistanceFieldConfiguration_Statics; \
	SVGDISTANCEFIELD_API static class UScriptStruct* StaticStruct();


struct FSvgDistanceFieldConfiguration;
// ********** End ScriptStruct FSvgDistanceFieldConfiguration **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SVGDistanceField_Public_SvgDistanceFieldConfiguration_h

// ********** Begin Enum ESvgDistanceFieldType *****************************************************
#define FOREACH_ENUM_ESVGDISTANCEFIELDTYPE(op) \
	op(ESvgDistanceFieldType::Simple) \
	op(ESvgDistanceFieldType::Perpendicular) \
	op(ESvgDistanceFieldType::MultiChannelAndSimple) 

enum class ESvgDistanceFieldType : uint8;
template<> struct TIsUEnumClass<ESvgDistanceFieldType> { enum { Value = true }; };
template<> SVGDISTANCEFIELD_NON_ATTRIBUTED_API UEnum* StaticEnum<ESvgDistanceFieldType>();
// ********** End Enum ESvgDistanceFieldType *******************************************************

// ********** Begin Enum ESvgDistanceFieldUnits ****************************************************
#define FOREACH_ENUM_ESVGDISTANCEFIELDUNITS(op) \
	op(ESvgDistanceFieldUnits::SvgUnits) \
	op(ESvgDistanceFieldUnits::OutputPixels) \
	op(ESvgDistanceFieldUnits::ProportionalToMaxDimension) 

enum class ESvgDistanceFieldUnits : uint8;
template<> struct TIsUEnumClass<ESvgDistanceFieldUnits> { enum { Value = true }; };
template<> SVGDISTANCEFIELD_NON_ATTRIBUTED_API UEnum* StaticEnum<ESvgDistanceFieldUnits>();
// ********** End Enum ESvgDistanceFieldUnits ******************************************************

// ********** Begin Enum ESvgDistanceFieldScaleMode ************************************************
#define FOREACH_ENUM_ESVGDISTANCEFIELDSCALEMODE(op) \
	op(ESvgDistanceFieldScaleMode::ExplicitScale) \
	op(ESvgDistanceFieldScaleMode::FitCanvas) \
	op(ESvgDistanceFieldScaleMode::FitPaddedCanvas) \
	op(ESvgDistanceFieldScaleMode::FitBoundingBox) 

enum class ESvgDistanceFieldScaleMode : uint8;
template<> struct TIsUEnumClass<ESvgDistanceFieldScaleMode> { enum { Value = true }; };
template<> SVGDISTANCEFIELD_NON_ATTRIBUTED_API UEnum* StaticEnum<ESvgDistanceFieldScaleMode>();
// ********** End Enum ESvgDistanceFieldScaleMode **************************************************

// ********** Begin Enum ESvgDistanceFieldPlacementMode ********************************************
#define FOREACH_ENUM_ESVGDISTANCEFIELDPLACEMENTMODE(op) \
	op(ESvgDistanceFieldPlacementMode::DoNotTranslate) \
	op(ESvgDistanceFieldPlacementMode::PadWithOuterSpread) \
	op(ESvgDistanceFieldPlacementMode::CenterCanvas) \
	op(ESvgDistanceFieldPlacementMode::CenterBoundingBox) 

enum class ESvgDistanceFieldPlacementMode : uint8;
template<> struct TIsUEnumClass<ESvgDistanceFieldPlacementMode> { enum { Value = true }; };
template<> SVGDISTANCEFIELD_NON_ATTRIBUTED_API UEnum* StaticEnum<ESvgDistanceFieldPlacementMode>();
// ********** End Enum ESvgDistanceFieldPlacementMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
