// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGMetadataTypesConstantStruct.h"

#ifdef PCG_PCGMetadataTypesConstantStruct_generated_h
#error "PCGMetadataTypesConstantStruct.generated.h already included, missing '#pragma once' in PCGMetadataTypesConstantStruct.h"
#endif
#define PCG_PCGMetadataTypesConstantStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGMetadataTypesConstantStruct ***********************************
struct Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGMetadataTypesConstantStruct;
// ********** End ScriptStruct FPCGMetadataTypesConstantStruct *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h

// ********** Begin Enum EPCGMetadataTypesConstantStructStringMode *********************************
#define FOREACH_ENUM_EPCGMETADATATYPESCONSTANTSTRUCTSTRINGMODE(op) \
	op(EPCGMetadataTypesConstantStructStringMode::String) \
	op(EPCGMetadataTypesConstantStructStringMode::SoftObjectPath) \
	op(EPCGMetadataTypesConstantStructStringMode::SoftClassPath) 

enum class EPCGMetadataTypesConstantStructStringMode;
template<> struct TIsUEnumClass<EPCGMetadataTypesConstantStructStringMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataTypesConstantStructStringMode>();
// ********** End Enum EPCGMetadataTypesConstantStructStringMode ***********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
