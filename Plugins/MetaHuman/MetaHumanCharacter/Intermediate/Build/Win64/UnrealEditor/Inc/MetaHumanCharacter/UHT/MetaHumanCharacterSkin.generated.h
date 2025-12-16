// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterSkin.h"

#ifdef METAHUMANCHARACTER_MetaHumanCharacterSkin_generated_h
#error "MetaHumanCharacterSkin.generated.h already included, missing '#pragma once' in MetaHumanCharacterSkin.h"
#endif
#define METAHUMANCHARACTER_MetaHumanCharacterSkin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterSkinProperties *********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterSkinProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterSkinProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterSkinProperties;
// ********** End ScriptStruct FMetaHumanCharacterSkinProperties ***********************************

// ********** Begin ScriptStruct FMetaHumanCharacterFrecklesProperties *****************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterFrecklesProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterFrecklesProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterFrecklesProperties;
// ********** End ScriptStruct FMetaHumanCharacterFrecklesProperties *******************************

// ********** Begin ScriptStruct FMetaHumanCharacterAccentRegionProperties *************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterAccentRegionProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterAccentRegionProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterAccentRegionProperties;
// ********** End ScriptStruct FMetaHumanCharacterAccentRegionProperties ***************************

// ********** Begin ScriptStruct FMetaHumanCharacterAccentRegions **********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterAccentRegions_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterAccentRegions_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterAccentRegions;
// ********** End ScriptStruct FMetaHumanCharacterAccentRegions ************************************

// ********** Begin ScriptStruct FMetaHumanCharacterSkinTextureSet *********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterSkinTextureSet_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterSkinTextureSet_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterSkinTextureSet;
// ********** End ScriptStruct FMetaHumanCharacterSkinTextureSet ***********************************

// ********** Begin ScriptStruct FMetaHumanCharacterSkinTextureSoftSet *****************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterSkinTextureSoftSet_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h_172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterSkinTextureSoftSet_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterSkinTextureSoftSet;
// ********** End ScriptStruct FMetaHumanCharacterSkinTextureSoftSet *******************************

// ********** Begin ScriptStruct FMetaHumanCharacterTextureSourceResolutions ***********************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterTextureSourceResolutions_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterTextureSourceResolutions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterTextureSourceResolutions;
// ********** End ScriptStruct FMetaHumanCharacterTextureSourceResolutions *************************

// ********** Begin ScriptStruct FMetaHumanCharacterSkinSettings ***********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterSkinSettings_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterSkinSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterSkinSettings;
// ********** End ScriptStruct FMetaHumanCharacterSkinSettings *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterSkin_h

// ********** Begin Enum EMetaHumanCharacterFrecklesMask *******************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERFRECKLESMASK(op) \
	op(EMetaHumanCharacterFrecklesMask::None) \
	op(EMetaHumanCharacterFrecklesMask::Type1) \
	op(EMetaHumanCharacterFrecklesMask::Type2) \
	op(EMetaHumanCharacterFrecklesMask::Type3) \
	op(EMetaHumanCharacterFrecklesMask::Count) 

enum class EMetaHumanCharacterFrecklesMask : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterFrecklesMask> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterFrecklesMask>();
// ********** End Enum EMetaHumanCharacterFrecklesMask *********************************************

// ********** Begin Enum EMetaHumanCharacterSkinPreviewMaterial ************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERSKINPREVIEWMATERIAL(op) \
	op(EMetaHumanCharacterSkinPreviewMaterial::Default) \
	op(EMetaHumanCharacterSkinPreviewMaterial::Editable) \
	op(EMetaHumanCharacterSkinPreviewMaterial::Clay) \
	op(EMetaHumanCharacterSkinPreviewMaterial::Count) 

enum class EMetaHumanCharacterSkinPreviewMaterial : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterSkinPreviewMaterial> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterSkinPreviewMaterial>();
// ********** End Enum EMetaHumanCharacterSkinPreviewMaterial **************************************

// ********** Begin Enum ERequestTextureResolution *************************************************
#define FOREACH_ENUM_EREQUESTTEXTURERESOLUTION(op) \
	op(ERequestTextureResolution::Res2k) \
	op(ERequestTextureResolution::Res4k) \
	op(ERequestTextureResolution::Res8k) 

enum class ERequestTextureResolution : int32;
template<> struct TIsUEnumClass<ERequestTextureResolution> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERequestTextureResolution>();
// ********** End Enum ERequestTextureResolution ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
