// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAssetInterpolation.h"

#ifdef HAIRSTRANDSCORE_GroomAssetInterpolation_generated_h
#error "GroomAssetInterpolation.generated.h already included, missing '#pragma once' in GroomAssetInterpolation.h"
#endif
#define HAIRSTRANDSCORE_GroomAssetInterpolation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHairLODSettings **************************************************
struct Z_Construct_UScriptStruct_FHairLODSettings_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairLODSettings_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairLODSettings;
// ********** End ScriptStruct FHairLODSettings ****************************************************

// ********** Begin ScriptStruct FHairDecimationSettings *******************************************
struct Z_Construct_UScriptStruct_FHairDecimationSettings_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairDecimationSettings_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairDecimationSettings;
// ********** End ScriptStruct FHairDecimationSettings *********************************************

// ********** Begin ScriptStruct FHairInterpolationSettings ****************************************
struct Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_136_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairInterpolationSettings;
// ********** End ScriptStruct FHairInterpolationSettings ******************************************

// ********** Begin ScriptStruct FHairDeformationSettings ******************************************
struct Z_Construct_UScriptStruct_FHairDeformationSettings_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_182_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairDeformationSettings_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairDeformationSettings;
// ********** End ScriptStruct FHairDeformationSettings ********************************************

// ********** Begin ScriptStruct FHairGroupsInterpolation ******************************************
struct Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairGroupsInterpolation;
// ********** End ScriptStruct FHairGroupsInterpolation ********************************************

// ********** Begin ScriptStruct FHairGroupsLOD ****************************************************
struct Z_Construct_UScriptStruct_FHairGroupsLOD_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_229_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupsLOD_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairGroupsLOD;
// ********** End ScriptStruct FHairGroupsLOD ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h

// ********** Begin Enum EHairInterpolationQuality *************************************************
#define FOREACH_ENUM_EHAIRINTERPOLATIONQUALITY(op) \
	op(EHairInterpolationQuality::Low) \
	op(EHairInterpolationQuality::Medium) \
	op(EHairInterpolationQuality::High) \
	op(EHairInterpolationQuality::Unknown) 

enum class EHairInterpolationQuality : uint8;
template<> struct TIsUEnumClass<EHairInterpolationQuality> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHairInterpolationQuality>();
// ********** End Enum EHairInterpolationQuality ***************************************************

// ********** Begin Enum EHairInterpolationWeight **************************************************
#define FOREACH_ENUM_EHAIRINTERPOLATIONWEIGHT(op) \
	op(EHairInterpolationWeight::Parametric) \
	op(EHairInterpolationWeight::Root) \
	op(EHairInterpolationWeight::Index) \
	op(EHairInterpolationWeight::Distance) \
	op(EHairInterpolationWeight::Unknown) 

enum class EHairInterpolationWeight : uint8;
template<> struct TIsUEnumClass<EHairInterpolationWeight> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHairInterpolationWeight>();
// ********** End Enum EHairInterpolationWeight ****************************************************

// ********** Begin Enum EGroomGeometryType ********************************************************
#define FOREACH_ENUM_EGROOMGEOMETRYTYPE(op) \
	op(EGroomGeometryType::Strands) \
	op(EGroomGeometryType::Cards) \
	op(EGroomGeometryType::Meshes) 

enum class EGroomGeometryType : uint8;
template<> struct TIsUEnumClass<EGroomGeometryType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomGeometryType>();
// ********** End Enum EGroomGeometryType **********************************************************

// ********** Begin Enum EGroomBindingType *********************************************************
#define FOREACH_ENUM_EGROOMBINDINGTYPE(op) \
	op(EGroomBindingType::NoneBinding) \
	op(EGroomBindingType::Rigid) \
	op(EGroomBindingType::Skinning) 

enum class EGroomBindingType : uint8;
template<> struct TIsUEnumClass<EGroomBindingType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomBindingType>();
// ********** End Enum EGroomBindingType ***********************************************************

// ********** Begin Enum EGroomOverrideType ********************************************************
#define FOREACH_ENUM_EGROOMOVERRIDETYPE(op) \
	op(EGroomOverrideType::Auto) \
	op(EGroomOverrideType::Enable) \
	op(EGroomOverrideType::Disable) 

enum class EGroomOverrideType : uint8;
template<> struct TIsUEnumClass<EGroomOverrideType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomOverrideType>();
// ********** End Enum EGroomOverrideType **********************************************************

// ********** Begin Enum EGroomGuideType ***********************************************************
#define FOREACH_ENUM_EGROOMGUIDETYPE(op) \
	op(EGroomGuideType::Imported) \
	op(EGroomGuideType::Generated) \
	op(EGroomGuideType::Rigged) 

enum class EGroomGuideType : uint8;
template<> struct TIsUEnumClass<EGroomGuideType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomGuideType>();
// ********** End Enum EGroomGuideType *************************************************************

// ********** Begin Enum EGroomLODMode *************************************************************
#define FOREACH_ENUM_EGROOMLODMODE(op) \
	op(EGroomLODMode::Default) \
	op(EGroomLODMode::Manual) \
	op(EGroomLODMode::Auto) 

enum class EGroomLODMode : uint8;
template<> struct TIsUEnumClass<EGroomLODMode> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomLODMode>();
// ********** End Enum EGroomLODMode ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
