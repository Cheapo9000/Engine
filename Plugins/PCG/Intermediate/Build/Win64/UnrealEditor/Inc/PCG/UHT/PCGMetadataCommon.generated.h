// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGMetadataCommon.h"

#ifdef PCG_PCGMetadataCommon_generated_h
#error "PCGMetadataCommon.generated.h already included, missing '#pragma once' in PCGMetadataCommon.h"
#endif
#define PCG_PCGMetadataCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGMetadataDomainID **********************************************
struct Z_Construct_UScriptStruct_FPCGMetadataDomainID_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGMetadataDomainID_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGMetadataDomainID;
// ********** End ScriptStruct FPCGMetadataDomainID ************************************************

// ********** Begin ScriptStruct FPCGAttributeIdentifier *******************************************
struct Z_Construct_UScriptStruct_FPCGAttributeIdentifier_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGAttributeIdentifier_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGAttributeIdentifier;
// ********** End ScriptStruct FPCGAttributeIdentifier *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h

// ********** Begin Enum EPCGMetadataOp ************************************************************
#define FOREACH_ENUM_EPCGMETADATAOP(op) \
	op(EPCGMetadataOp::Min) \
	op(EPCGMetadataOp::Max) \
	op(EPCGMetadataOp::Sub) \
	op(EPCGMetadataOp::Add) \
	op(EPCGMetadataOp::Mul) \
	op(EPCGMetadataOp::Div) \
	op(EPCGMetadataOp::SourceValue) \
	op(EPCGMetadataOp::TargetValue) 

enum class EPCGMetadataOp : uint8;
template<> struct TIsUEnumClass<EPCGMetadataOp> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataOp>();
// ********** End Enum EPCGMetadataOp **************************************************************

// ********** Begin Enum EPCGMetadataFilterMode ****************************************************
#define FOREACH_ENUM_EPCGMETADATAFILTERMODE(op) \
	op(EPCGMetadataFilterMode::ExcludeAttributes) \
	op(EPCGMetadataFilterMode::IncludeAttributes) 

enum class EPCGMetadataFilterMode : uint8;
template<> struct TIsUEnumClass<EPCGMetadataFilterMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataFilterMode>();
// ********** End Enum EPCGMetadataFilterMode ******************************************************

// ********** Begin Enum EPCGMetadataDomainFlag ****************************************************
#define FOREACH_ENUM_EPCGMETADATADOMAINFLAG(op) \
	op(EPCGMetadataDomainFlag::Default) \
	op(EPCGMetadataDomainFlag::Data) \
	op(EPCGMetadataDomainFlag::Elements) \
	op(EPCGMetadataDomainFlag::Invalid) \
	op(EPCGMetadataDomainFlag::Custom) 

enum class EPCGMetadataDomainFlag : uint8;
template<> struct TIsUEnumClass<EPCGMetadataDomainFlag> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataDomainFlag>();
// ********** End Enum EPCGMetadataDomainFlag ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
