// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/MetaHumanCharacterSkinMaterials.h"

#ifdef METAHUMANCHARACTEREDITOR_MetaHumanCharacterSkinMaterials_generated_h
#error "MetaHumanCharacterSkinMaterials.generated.h already included, missing '#pragma once' in MetaHumanCharacterSkinMaterials.h"
#endif
#define METAHUMANCHARACTEREDITOR_MetaHumanCharacterSkinMaterials_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterSkinMaterialOverrideRow ************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterSkinMaterialOverrideRow_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_Subsystem_MetaHumanCharacterSkinMaterials_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterSkinMaterialOverrideRow_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FMetaHumanCharacterSkinMaterialOverrideRow;
// ********** End ScriptStruct FMetaHumanCharacterSkinMaterialOverrideRow **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_Subsystem_MetaHumanCharacterSkinMaterials_h

// ********** Begin Enum EMetaHumanCharacterAccentRegion *******************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERACCENTREGION(op) \
	op(EMetaHumanCharacterAccentRegion::Scalp) \
	op(EMetaHumanCharacterAccentRegion::Forehead) \
	op(EMetaHumanCharacterAccentRegion::Nose) \
	op(EMetaHumanCharacterAccentRegion::UnderEye) \
	op(EMetaHumanCharacterAccentRegion::Cheeks) \
	op(EMetaHumanCharacterAccentRegion::Lips) \
	op(EMetaHumanCharacterAccentRegion::Chin) \
	op(EMetaHumanCharacterAccentRegion::Ears) \
	op(EMetaHumanCharacterAccentRegion::Count) 

enum class EMetaHumanCharacterAccentRegion : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterAccentRegion> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterAccentRegion>();
// ********** End Enum EMetaHumanCharacterAccentRegion *********************************************

// ********** Begin Enum EMetaHumanCharacterAccentRegionParameter **********************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERACCENTREGIONPARAMETER(op) \
	op(EMetaHumanCharacterAccentRegionParameter::Redness) \
	op(EMetaHumanCharacterAccentRegionParameter::Saturation) \
	op(EMetaHumanCharacterAccentRegionParameter::Lightness) \
	op(EMetaHumanCharacterAccentRegionParameter::Count) 

enum class EMetaHumanCharacterAccentRegionParameter : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterAccentRegionParameter> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterAccentRegionParameter>();
// ********** End Enum EMetaHumanCharacterAccentRegionParameter ************************************

// ********** Begin Enum EMetaHumanCharacterFrecklesParameter **************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERFRECKLESPARAMETER(op) \
	op(EMetaHumanCharacterFrecklesParameter::Mask) \
	op(EMetaHumanCharacterFrecklesParameter::Density) \
	op(EMetaHumanCharacterFrecklesParameter::Strength) \
	op(EMetaHumanCharacterFrecklesParameter::Saturation) \
	op(EMetaHumanCharacterFrecklesParameter::ToneShift) \
	op(EMetaHumanCharacterFrecklesParameter::Count) 

enum class EMetaHumanCharacterFrecklesParameter : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterFrecklesParameter> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterFrecklesParameter>();
// ********** End Enum EMetaHumanCharacterFrecklesParameter ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
