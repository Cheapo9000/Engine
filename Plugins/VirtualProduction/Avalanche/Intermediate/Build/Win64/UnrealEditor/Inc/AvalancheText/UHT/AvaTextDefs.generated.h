// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTextDefs.h"

#ifdef AVALANCHETEXT_AvaTextDefs_generated_h
#error "AvaTextDefs.generated.h already included, missing '#pragma once' in AvaTextDefs.h"
#endif
#define AVALANCHETEXT_AvaTextDefs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaLinearGradientSettings ****************************************
struct Z_Construct_UScriptStruct_FAvaLinearGradientSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextDefs_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaLinearGradientSettings_Statics; \
	AVALANCHETEXT_API static class UScriptStruct* StaticStruct();


struct FAvaLinearGradientSettings;
// ********** End ScriptStruct FAvaLinearGradientSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaTextDefs_h

// ********** Begin Enum EAvaTextColoringStyle *****************************************************
#define FOREACH_ENUM_EAVATEXTCOLORINGSTYLE(op) \
	op(EAvaTextColoringStyle::Invalid) \
	op(EAvaTextColoringStyle::Solid) \
	op(EAvaTextColoringStyle::Gradient) \
	op(EAvaTextColoringStyle::FromTexture) \
	op(EAvaTextColoringStyle::CustomMaterial) 

enum class EAvaTextColoringStyle : uint8;
template<> struct TIsUEnumClass<EAvaTextColoringStyle> { enum { Value = true }; };
template<> AVALANCHETEXT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaTextColoringStyle>();
// ********** End Enum EAvaTextColoringStyle *******************************************************

// ********** Begin Enum EAvaTextTranslucency ******************************************************
#define FOREACH_ENUM_EAVATEXTTRANSLUCENCY(op) \
	op(EAvaTextTranslucency::Invalid) \
	op(EAvaTextTranslucency::None) \
	op(EAvaTextTranslucency::Translucent) \
	op(EAvaTextTranslucency::GradientMask) 

enum class EAvaTextTranslucency : uint8;
template<> struct TIsUEnumClass<EAvaTextTranslucency> { enum { Value = true }; };
template<> AVALANCHETEXT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaTextTranslucency>();
// ********** End Enum EAvaTextTranslucency ********************************************************

// ********** Begin Enum EAvaMaterialMaskOrientation ***********************************************
#define FOREACH_ENUM_EAVAMATERIALMASKORIENTATION(op) \
	op(EAvaMaterialMaskOrientation::LeftRight) \
	op(EAvaMaterialMaskOrientation::RightLeft) \
	op(EAvaMaterialMaskOrientation::Custom) 

enum class EAvaMaterialMaskOrientation : uint8;
template<> struct TIsUEnumClass<EAvaMaterialMaskOrientation> { enum { Value = true }; };
template<> AVALANCHETEXT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaMaterialMaskOrientation>();
// ********** End Enum EAvaMaterialMaskOrientation *************************************************

// ********** Begin Enum EAvaGradientDirection *****************************************************
#define FOREACH_ENUM_EAVAGRADIENTDIRECTION(op) \
	op(EAvaGradientDirection::None) \
	op(EAvaGradientDirection::Vertical) \
	op(EAvaGradientDirection::Horizontal) \
	op(EAvaGradientDirection::Custom) 

enum class EAvaGradientDirection : uint8;
template<> struct TIsUEnumClass<EAvaGradientDirection> { enum { Value = true }; };
template<> AVALANCHETEXT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaGradientDirection>();
// ********** End Enum EAvaGradientDirection *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
