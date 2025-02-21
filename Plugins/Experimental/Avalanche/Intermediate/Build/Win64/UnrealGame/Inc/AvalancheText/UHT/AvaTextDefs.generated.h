// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTextDefs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETEXT_AvaTextDefs_generated_h
#error "AvaTextDefs.generated.h already included, missing '#pragma once' in AvaTextDefs.h"
#endif
#define AVALANCHETEXT_AvaTextDefs_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaTextDefs_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaTextAlignment_Statics; \
	AVALANCHETEXT_API static class UScriptStruct* StaticStruct();


template<> AVALANCHETEXT_API UScriptStruct* StaticStruct<struct FAvaTextAlignment>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaTextDefs_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaLinearGradientSettings_Statics; \
	AVALANCHETEXT_API static class UScriptStruct* StaticStruct();


template<> AVALANCHETEXT_API UScriptStruct* StaticStruct<struct FAvaLinearGradientSettings>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaTextDefs_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaMaterialMaskSettings_Statics; \
	AVALANCHETEXT_API static class UScriptStruct* StaticStruct();


template<> AVALANCHETEXT_API UScriptStruct* StaticStruct<struct FAvaMaterialMaskSettings>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaTextDefs_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaTextField_Statics; \
	AVALANCHETEXT_API static class UScriptStruct* StaticStruct();


template<> AVALANCHETEXT_API UScriptStruct* StaticStruct<struct FAvaTextField>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_AvaTextDefs_h


#define FOREACH_ENUM_EAVAOUTLINETYPE(op) \
	op(EAvaOutlineType::Invalid) \
	op(EAvaOutlineType::None) \
	op(EAvaOutlineType::AddOutline) \
	op(EAvaOutlineType::OutlineOnly) 

enum class EAvaOutlineType : uint8;
template<> struct TIsUEnumClass<EAvaOutlineType> { enum { Value = true }; };
template<> AVALANCHETEXT_API UEnum* StaticEnum<EAvaOutlineType>();

#define FOREACH_ENUM_EAVATEXTCOLORINGSTYLE(op) \
	op(EAvaTextColoringStyle::Invalid) \
	op(EAvaTextColoringStyle::Solid) \
	op(EAvaTextColoringStyle::Gradient) \
	op(EAvaTextColoringStyle::FromTexture) \
	op(EAvaTextColoringStyle::CustomMaterial) 

enum class EAvaTextColoringStyle : uint8;
template<> struct TIsUEnumClass<EAvaTextColoringStyle> { enum { Value = true }; };
template<> AVALANCHETEXT_API UEnum* StaticEnum<EAvaTextColoringStyle>();

#define FOREACH_ENUM_EAVATEXTTRANSLUCENCY(op) \
	op(EAvaTextTranslucency::Invalid) \
	op(EAvaTextTranslucency::None) \
	op(EAvaTextTranslucency::Translucent) \
	op(EAvaTextTranslucency::GradientMask) 

enum class EAvaTextTranslucency : uint8;
template<> struct TIsUEnumClass<EAvaTextTranslucency> { enum { Value = true }; };
template<> AVALANCHETEXT_API UEnum* StaticEnum<EAvaTextTranslucency>();

#define FOREACH_ENUM_EAVAMATERIALMASKORIENTATION(op) \
	op(EAvaMaterialMaskOrientation::LeftRight) \
	op(EAvaMaterialMaskOrientation::RightLeft) \
	op(EAvaMaterialMaskOrientation::Custom) 

enum class EAvaMaterialMaskOrientation : uint8;
template<> struct TIsUEnumClass<EAvaMaterialMaskOrientation> { enum { Value = true }; };
template<> AVALANCHETEXT_API UEnum* StaticEnum<EAvaMaterialMaskOrientation>();

#define FOREACH_ENUM_EAVAGRADIENTDIRECTION(op) \
	op(EAvaGradientDirection::None) \
	op(EAvaGradientDirection::Vertical) \
	op(EAvaGradientDirection::Horizontal) \
	op(EAvaGradientDirection::Custom) 

enum class EAvaGradientDirection : uint8;
template<> struct TIsUEnumClass<EAvaGradientDirection> { enum { Value = true }; };
template<> AVALANCHETEXT_API UEnum* StaticEnum<EAvaGradientDirection>();

#define FOREACH_ENUM_EAVATEXTLENGTH(op) \
	op(EAvaTextLength::Unlimited) \
	op(EAvaTextLength::CharacterCount) 

enum class EAvaTextLength : uint8;
template<> struct TIsUEnumClass<EAvaTextLength> { enum { Value = true }; };
template<> AVALANCHETEXT_API UEnum* StaticEnum<EAvaTextLength>();

#define FOREACH_ENUM_EAVATEXTCASE(op) \
	op(EAvaTextCase::Regular) \
	op(EAvaTextCase::UpperCase) \
	op(EAvaTextCase::LowerCase) 

enum class EAvaTextCase : uint8;
template<> struct TIsUEnumClass<EAvaTextCase> { enum { Value = true }; };
template<> AVALANCHETEXT_API UEnum* StaticEnum<EAvaTextCase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
