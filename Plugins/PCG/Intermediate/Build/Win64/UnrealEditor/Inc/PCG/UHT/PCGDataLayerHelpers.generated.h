// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGDataLayerHelpers.h"

#ifdef PCG_PCGDataLayerHelpers_generated_h
#error "PCGDataLayerHelpers.generated.h already included, missing '#pragma once' in PCGDataLayerHelpers.h"
#endif
#define PCG_PCGDataLayerHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataLayerReferenceSelector ************************************
struct Z_Construct_UScriptStruct_FPCGDataLayerReferenceSelector_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGDataLayerHelpers_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataLayerReferenceSelector_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGDataLayerReferenceSelector;
// ********** End ScriptStruct FPCGDataLayerReferenceSelector **************************************

// ********** Begin ScriptStruct FPCGDataLayerSettings *********************************************
struct Z_Construct_UScriptStruct_FPCGDataLayerSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGDataLayerHelpers_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataLayerSettings_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGDataLayerSettings;
// ********** End ScriptStruct FPCGDataLayerSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGDataLayerHelpers_h

// ********** Begin Enum EPCGDataLayerSource *******************************************************
#define FOREACH_ENUM_EPCGDATALAYERSOURCE(op) \
	op(EPCGDataLayerSource::Self) \
	op(EPCGDataLayerSource::DataLayerReferences) 

enum class EPCGDataLayerSource : uint8;
template<> struct TIsUEnumClass<EPCGDataLayerSource> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDataLayerSource>();
// ********** End Enum EPCGDataLayerSource *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
