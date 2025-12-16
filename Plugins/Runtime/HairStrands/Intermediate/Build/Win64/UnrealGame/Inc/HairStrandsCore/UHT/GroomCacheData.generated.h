// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomCacheData.h"

#ifdef HAIRSTRANDSCORE_GroomCacheData_generated_h
#error "GroomCacheData.generated.h already included, missing '#pragma once' in GroomCacheData.h"
#endif
#define HAIRSTRANDSCORE_GroomCacheData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGroomAnimationInfo ***********************************************
struct Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FGroomAnimationInfo;
// ********** End ScriptStruct FGroomAnimationInfo *************************************************

// ********** Begin ScriptStruct FGroomCacheInfo ***************************************************
struct Z_Construct_UScriptStruct_FGroomCacheInfo_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomCacheInfo_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FGroomCacheInfo;
// ********** End ScriptStruct FGroomCacheInfo *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h

// ********** Begin Enum EGroomCacheAttributes *****************************************************
#define FOREACH_ENUM_EGROOMCACHEATTRIBUTES(op) \
	op(EGroomCacheAttributes::None) \
	op(EGroomCacheAttributes::Position) \
	op(EGroomCacheAttributes::Width) \
	op(EGroomCacheAttributes::Color) \
	op(EGroomCacheAttributes::PositionWidth) \
	op(EGroomCacheAttributes::PositionColor) \
	op(EGroomCacheAttributes::WidthColor) \
	op(EGroomCacheAttributes::PositionWidthColor) 

enum class EGroomCacheAttributes : uint8;
template<> struct TIsUEnumClass<EGroomCacheAttributes> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomCacheAttributes>();
// ********** End Enum EGroomCacheAttributes *******************************************************

// ********** Begin Enum EGroomCacheType ***********************************************************
#define FOREACH_ENUM_EGROOMCACHETYPE(op) \
	op(EGroomCacheType::None) \
	op(EGroomCacheType::Strands) \
	op(EGroomCacheType::Guides) 

enum class EGroomCacheType : uint8;
template<> struct TIsUEnumClass<EGroomCacheType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomCacheType>();
// ********** End Enum EGroomCacheType *************************************************************

// ********** Begin Enum EGroomBasisType ***********************************************************
#define FOREACH_ENUM_EGROOMBASISTYPE(op) \
	op(EGroomBasisType::NoBasis) \
	op(EGroomBasisType::BezierBasis) \
	op(EGroomBasisType::BsplineBasis) \
	op(EGroomBasisType::CatmullromBasis) \
	op(EGroomBasisType::HermiteBasis) \
	op(EGroomBasisType::PowerBasis) 

enum class EGroomBasisType : uint8;
template<> struct TIsUEnumClass<EGroomBasisType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomBasisType>();
// ********** End Enum EGroomBasisType *************************************************************

// ********** Begin Enum EGroomCurveType ***********************************************************
#define FOREACH_ENUM_EGROOMCURVETYPE(op) \
	op(EGroomCurveType::Cubic) \
	op(EGroomCurveType::Linear) \
	op(EGroomCurveType::VariableOrder) 

enum class EGroomCurveType : uint8;
template<> struct TIsUEnumClass<EGroomCurveType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomCurveType>();
// ********** End Enum EGroomCurveType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
