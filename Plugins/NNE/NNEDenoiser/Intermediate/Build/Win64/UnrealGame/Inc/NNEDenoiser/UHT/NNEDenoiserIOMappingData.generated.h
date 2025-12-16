// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEDenoiserIOMappingData.h"

#ifdef NNEDENOISER_NNEDenoiserIOMappingData_generated_h
#error "NNEDenoiserIOMappingData.generated.h already included, missing '#pragma once' in NNEDenoiserIOMappingData.h"
#endif
#define NNEDENOISER_NNEDenoiserIOMappingData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNNEDenoiserBaseMappingData ***************************************
struct Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics;
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics; \
	NNEDENOISER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FNNEDenoiserBaseMappingData;
// ********** End ScriptStruct FNNEDenoiserBaseMappingData *****************************************

// ********** Begin ScriptStruct FNNEDenoiserInputMappingData **************************************
struct Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics;
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics; \
	NNEDENOISER_API static class UScriptStruct* StaticStruct(); \
	typedef FNNEDenoiserBaseMappingData Super;


struct FNNEDenoiserInputMappingData;
// ********** End ScriptStruct FNNEDenoiserInputMappingData ****************************************

// ********** Begin ScriptStruct FNNEDenoiserOutputMappingData *************************************
struct Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics;
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics; \
	NNEDENOISER_API static class UScriptStruct* StaticStruct(); \
	typedef FNNEDenoiserBaseMappingData Super;


struct FNNEDenoiserOutputMappingData;
// ********** End ScriptStruct FNNEDenoiserOutputMappingData ***************************************

// ********** Begin ScriptStruct FNNEDenoiserTemporalInputMappingData ******************************
struct Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics;
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics; \
	NNEDENOISER_API static class UScriptStruct* StaticStruct(); \
	typedef FNNEDenoiserBaseMappingData Super;


struct FNNEDenoiserTemporalInputMappingData;
// ********** End ScriptStruct FNNEDenoiserTemporalInputMappingData ********************************

// ********** Begin ScriptStruct FNNEDenoiserTemporalOutputMappingData *****************************
struct Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics;
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics; \
	NNEDENOISER_API static class UScriptStruct* StaticStruct(); \
	typedef FNNEDenoiserBaseMappingData Super;


struct FNNEDenoiserTemporalOutputMappingData;
// ********** End ScriptStruct FNNEDenoiserTemporalOutputMappingData *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h

// ********** Begin Enum EInputResourceName ********************************************************
#define FOREACH_ENUM_EINPUTRESOURCENAME(op) \
	op(EInputResourceName::Color) \
	op(EInputResourceName::Albedo) \
	op(EInputResourceName::Normal) \
	op(EInputResourceName::Output) 

enum class EInputResourceName : uint8;
template<> struct TIsUEnumClass<EInputResourceName> { enum { Value = true }; };
template<> NNEDENOISER_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputResourceName>();
// ********** End Enum EInputResourceName **********************************************************

// ********** Begin Enum EOutputResourceName *******************************************************
#define FOREACH_ENUM_EOUTPUTRESOURCENAME(op) \
	op(EOutputResourceName::Output) 

enum class EOutputResourceName : uint8;
template<> struct TIsUEnumClass<EOutputResourceName> { enum { Value = true }; };
template<> NNEDENOISER_NON_ATTRIBUTED_API UEnum* StaticEnum<EOutputResourceName>();
// ********** End Enum EOutputResourceName *********************************************************

// ********** Begin Enum ETemporalInputResourceName ************************************************
#define FOREACH_ENUM_ETEMPORALINPUTRESOURCENAME(op) \
	op(ETemporalInputResourceName::Color) \
	op(ETemporalInputResourceName::Albedo) \
	op(ETemporalInputResourceName::Normal) \
	op(ETemporalInputResourceName::Flow) \
	op(ETemporalInputResourceName::Output) 

enum class ETemporalInputResourceName : uint8;
template<> struct TIsUEnumClass<ETemporalInputResourceName> { enum { Value = true }; };
template<> NNEDENOISER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETemporalInputResourceName>();
// ********** End Enum ETemporalInputResourceName **************************************************

// ********** Begin Enum ETemporalOutputResourceName ***********************************************
#define FOREACH_ENUM_ETEMPORALOUTPUTRESOURCENAME(op) \
	op(ETemporalOutputResourceName::Output) 

enum class ETemporalOutputResourceName : uint8;
template<> struct TIsUEnumClass<ETemporalOutputResourceName> { enum { Value = true }; };
template<> NNEDENOISER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETemporalOutputResourceName>();
// ********** End Enum ETemporalOutputResourceName *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
