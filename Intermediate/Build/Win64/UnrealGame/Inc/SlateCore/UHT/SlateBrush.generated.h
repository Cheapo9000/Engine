// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/SlateBrush.h"

#ifdef SLATECORE_SlateBrush_generated_h
#error "SlateBrush.generated.h already included, missing '#pragma once' in SlateBrush.h"
#endif
#define SLATECORE_SlateBrush_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSlateBrushOutlineSettings ****************************************
struct Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_132_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FSlateBrushOutlineSettings;
// ********** End ScriptStruct FSlateBrushOutlineSettings ******************************************

// ********** Begin ScriptStruct FSlateBrush *******************************************************
struct Z_Construct_UScriptStruct_FSlateBrush_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_240_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlateBrush_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FSlateBrush;
// ********** End ScriptStruct FSlateBrush *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h

// ********** Begin Enum ESlateBrushDrawType *******************************************************
#define FOREACH_ENUM_ESLATEBRUSHDRAWTYPE(op) \
	op(ESlateBrushDrawType::NoDrawType) \
	op(ESlateBrushDrawType::Box) \
	op(ESlateBrushDrawType::Border) \
	op(ESlateBrushDrawType::Image) \
	op(ESlateBrushDrawType::RoundedBox) 

namespace ESlateBrushDrawType { enum Type : int; }
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateBrushDrawType::Type>();
// ********** End Enum ESlateBrushDrawType *********************************************************

// ********** Begin Enum ESlateBrushTileType *******************************************************
#define FOREACH_ENUM_ESLATEBRUSHTILETYPE(op) \
	op(ESlateBrushTileType::NoTile) \
	op(ESlateBrushTileType::Horizontal) \
	op(ESlateBrushTileType::Vertical) \
	op(ESlateBrushTileType::Both) 

namespace ESlateBrushTileType { enum Type : int; }
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateBrushTileType::Type>();
// ********** End Enum ESlateBrushTileType *********************************************************

// ********** Begin Enum ESlateBrushMirrorType *****************************************************
#define FOREACH_ENUM_ESLATEBRUSHMIRRORTYPE(op) \
	op(ESlateBrushMirrorType::NoMirror) \
	op(ESlateBrushMirrorType::Horizontal) \
	op(ESlateBrushMirrorType::Vertical) \
	op(ESlateBrushMirrorType::Both) 

namespace ESlateBrushMirrorType { enum Type : int; }
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateBrushMirrorType::Type>();
// ********** End Enum ESlateBrushMirrorType *******************************************************

// ********** Begin Enum ESlateBrushImageType ******************************************************
#define FOREACH_ENUM_ESLATEBRUSHIMAGETYPE(op) \
	op(ESlateBrushImageType::NoImage) \
	op(ESlateBrushImageType::FullColor) \
	op(ESlateBrushImageType::Linear) \
	op(ESlateBrushImageType::Vector) 

namespace ESlateBrushImageType { enum Type : int; }
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateBrushImageType::Type>();
// ********** End Enum ESlateBrushImageType ********************************************************

// ********** Begin Enum ESlateBrushRoundingType ***************************************************
#define FOREACH_ENUM_ESLATEBRUSHROUNDINGTYPE(op) \
	op(ESlateBrushRoundingType::FixedRadius) \
	op(ESlateBrushRoundingType::HalfHeightRadius) 

namespace ESlateBrushRoundingType { enum Type : int; }
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateBrushRoundingType::Type>();
// ********** End Enum ESlateBrushRoundingType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
