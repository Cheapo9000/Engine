// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomSettings.h"

#ifdef HAIRSTRANDSCORE_GroomSettings_generated_h
#error "GroomSettings.generated.h already included, missing '#pragma once' in GroomSettings.h"
#endif
#define HAIRSTRANDSCORE_GroomSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGroomConversionSettings ******************************************
struct Z_Construct_UScriptStruct_FGroomConversionSettings_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomConversionSettings_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FGroomConversionSettings;
// ********** End ScriptStruct FGroomConversionSettings ********************************************

// ********** Begin ScriptStruct FGroomBuildSettings ***********************************************
struct Z_Construct_UScriptStruct_FGroomBuildSettings_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomBuildSettings_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FGroomBuildSettings;
// ********** End ScriptStruct FGroomBuildSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h

// ********** Begin Enum EGroomInterpolationQuality ************************************************
#define FOREACH_ENUM_EGROOMINTERPOLATIONQUALITY(op) \
	op(EGroomInterpolationQuality::Low) \
	op(EGroomInterpolationQuality::Medium) \
	op(EGroomInterpolationQuality::High) \
	op(EGroomInterpolationQuality::Unknown) 

enum class EGroomInterpolationQuality : uint8;
template<> struct TIsUEnumClass<EGroomInterpolationQuality> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomInterpolationQuality>();
// ********** End Enum EGroomInterpolationQuality **************************************************

// ********** Begin Enum EGroomInterpolationWeight *************************************************
#define FOREACH_ENUM_EGROOMINTERPOLATIONWEIGHT(op) \
	op(EGroomInterpolationWeight::Parametric) \
	op(EGroomInterpolationWeight::Root) \
	op(EGroomInterpolationWeight::Index) \
	op(EGroomInterpolationWeight::Unknown) 

enum class EGroomInterpolationWeight : uint8;
template<> struct TIsUEnumClass<EGroomInterpolationWeight> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomInterpolationWeight>();
// ********** End Enum EGroomInterpolationWeight ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
