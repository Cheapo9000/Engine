// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaDefs.h"

#ifdef AVALANCHE_AvaDefs_generated_h
#error "AvaDefs.generated.h already included, missing '#pragma once' in AvaDefs.h"
#endif
#define AVALANCHE_AvaDefs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaColorChangeData ***********************************************
struct Z_Construct_UScriptStruct_FAvaColorChangeData_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaDefs_h_175_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaColorChangeData_Statics; \
	AVALANCHE_API static class UScriptStruct* StaticStruct();


struct FAvaColorChangeData;
// ********** End ScriptStruct FAvaColorChangeData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_AvaDefs_h

// ********** Begin Enum EAvaAnchors ***************************************************************
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
template<> AVALANCHE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaAnchors>();
// ********** End Enum EAvaAnchors *****************************************************************

// ********** Begin Enum EAvaVerticalAlignment *****************************************************
#define FOREACH_ENUM_EAVAVERTICALALIGNMENT(op) \
	op(EAvaVerticalAlignment::Top) \
	op(EAvaVerticalAlignment::Center) \
	op(EAvaVerticalAlignment::Bottom) 

enum class EAvaVerticalAlignment : uint8;
template<> struct TIsUEnumClass<EAvaVerticalAlignment> { enum { Value = true }; };
template<> AVALANCHE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaVerticalAlignment>();
// ********** End Enum EAvaVerticalAlignment *******************************************************

// ********** Begin Enum EAvaHorizontalAlignment ***************************************************
#define FOREACH_ENUM_EAVAHORIZONTALALIGNMENT(op) \
	op(EAvaHorizontalAlignment::Left) \
	op(EAvaHorizontalAlignment::Center) \
	op(EAvaHorizontalAlignment::Right) 

enum class EAvaHorizontalAlignment : uint8;
template<> struct TIsUEnumClass<EAvaHorizontalAlignment> { enum { Value = true }; };
template<> AVALANCHE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaHorizontalAlignment>();
// ********** End Enum EAvaHorizontalAlignment *****************************************************

// ********** Begin Enum EAvaDepthAlignment ********************************************************
#define FOREACH_ENUM_EAVADEPTHALIGNMENT(op) \
	op(EAvaDepthAlignment::Front) \
	op(EAvaDepthAlignment::Center) \
	op(EAvaDepthAlignment::Back) 

enum class EAvaDepthAlignment : uint8;
template<> struct TIsUEnumClass<EAvaDepthAlignment> { enum { Value = true }; };
template<> AVALANCHE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaDepthAlignment>();
// ********** End Enum EAvaDepthAlignment **********************************************************

// ********** Begin Enum EAvaColorStyle ************************************************************
#define FOREACH_ENUM_EAVACOLORSTYLE(op) \
	op(EAvaColorStyle::None) \
	op(EAvaColorStyle::Solid) \
	op(EAvaColorStyle::LinearGradient) 

enum class EAvaColorStyle : uint8;
template<> struct TIsUEnumClass<EAvaColorStyle> { enum { Value = true }; };
template<> AVALANCHE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaColorStyle>();
// ********** End Enum EAvaColorStyle **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
