// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGHLODHelpers.h"

#ifdef PCG_PCGHLODHelpers_generated_h
#error "PCGHLODHelpers.generated.h already included, missing '#pragma once' in PCGHLODHelpers.h"
#endif
#define PCG_PCGHLODHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGHLODSettings **************************************************
struct Z_Construct_UScriptStruct_FPCGHLODSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHLODHelpers_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGHLODSettings_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGHLODSettings;
// ********** End ScriptStruct FPCGHLODSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHLODHelpers_h

// ********** Begin Enum EPCGHLODSource ************************************************************
#define FOREACH_ENUM_EPCGHLODSOURCE(op) \
	op(EPCGHLODSource::Self) \
	op(EPCGHLODSource::Reference) \
	op(EPCGHLODSource::Template) 

enum class EPCGHLODSource : uint8;
template<> struct TIsUEnumClass<EPCGHLODSource> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGHLODSource>();
// ********** End Enum EPCGHLODSource **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
