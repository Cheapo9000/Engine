// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaDefs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_AvaDefs_generated_h
#error "AvaDefs.generated.h already included, missing '#pragma once' in AvaDefs.h"
#endif
#define AVALANCHE_AvaDefs_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaDefs_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaColorChangeData_Statics; \
	AVALANCHE_API static class UScriptStruct* StaticStruct();


template<> AVALANCHE_API UScriptStruct* StaticStruct<struct FAvaColorChangeData>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaDefs_h_253_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaAnchorAlignment_Statics; \
	AVALANCHE_API static class UScriptStruct* StaticStruct();


template<> AVALANCHE_API UScriptStruct* StaticStruct<struct FAvaAnchorAlignment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaDefs_h


#define FOREACH_ENUM_EAVAANCHORS(op) \
	op(EAvaAnchors::None) \
	op(EAvaAnchors::TopLeft) \
	op(EAvaAnchors::Top) \
	op(EAvaAnchors::TopRight) \
	op(EAvaAnchors::Left) \
	op(EAvaAnchors::Center) \
	op(EAvaAnchors::Right) \
	op(EAvaAnchors::BottomLeft) \
	op(EAvaAnchors::Bottom) \
	op(EAvaAnchors::BottomRight) \
	op(EAvaAnchors::Custom) 

enum class EAvaAnchors : uint8;
template<> struct TIsUEnumClass<EAvaAnchors> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaAnchors>();

#define FOREACH_ENUM_EAVAVERTICALALIGNMENT(op) \
	op(EAvaVerticalAlignment::Top) \
	op(EAvaVerticalAlignment::Center) \
	op(EAvaVerticalAlignment::Bottom) 

enum class EAvaVerticalAlignment : uint8;
template<> struct TIsUEnumClass<EAvaVerticalAlignment> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaVerticalAlignment>();

#define FOREACH_ENUM_EAVAHORIZONTALALIGNMENT(op) \
	op(EAvaHorizontalAlignment::Left) \
	op(EAvaHorizontalAlignment::Center) \
	op(EAvaHorizontalAlignment::Right) 

enum class EAvaHorizontalAlignment : uint8;
template<> struct TIsUEnumClass<EAvaHorizontalAlignment> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaHorizontalAlignment>();

#define FOREACH_ENUM_EAVADEPTHALIGNMENT(op) \
	op(EAvaDepthAlignment::Front) \
	op(EAvaDepthAlignment::Center) \
	op(EAvaDepthAlignment::Back) 

enum class EAvaDepthAlignment : uint8;
template<> struct TIsUEnumClass<EAvaDepthAlignment> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaDepthAlignment>();

#define FOREACH_ENUM_EAVAREFERENCECONTAINER(op) \
	op(EAvaReferenceContainer::Previous) \
	op(EAvaReferenceContainer::Next) \
	op(EAvaReferenceContainer::First) \
	op(EAvaReferenceContainer::Last) \
	op(EAvaReferenceContainer::Other) 

enum class EAvaReferenceContainer : uint8;
template<> struct TIsUEnumClass<EAvaReferenceContainer> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaReferenceContainer>();

#define FOREACH_ENUM_EAVACORNER2D(op) \
	op(EAvaCorner2D::TopLeft) \
	op(EAvaCorner2D::TopRight) \
	op(EAvaCorner2D::BottomLeft) \
	op(EAvaCorner2D::BottomRight) 

enum class EAvaCorner2D : uint8;
template<> struct TIsUEnumClass<EAvaCorner2D> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaCorner2D>();

#define FOREACH_ENUM_EAVAAXIS(op) \
	op(EAvaAxis::Horizontal) \
	op(EAvaAxis::Vertical) \
	op(EAvaAxis::Depth) 

enum class EAvaAxis : uint8;
template<> struct TIsUEnumClass<EAvaAxis> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaAxis>();

#define FOREACH_ENUM_EAVACOLORSTYLE(op) \
	op(EAvaColorStyle::None) \
	op(EAvaColorStyle::Solid) \
	op(EAvaColorStyle::LinearGradient) 

enum class EAvaColorStyle : uint8;
template<> struct TIsUEnumClass<EAvaColorStyle> { enum { Value = true }; };
template<> AVALANCHE_API UEnum* StaticEnum<EAvaColorStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
