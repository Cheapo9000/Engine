// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyTypes.h"

#ifdef WATER_BuoyancyTypes_generated_h
#error "BuoyancyTypes.generated.h already included, missing '#pragma once' in BuoyancyTypes.h"
#endif
#define WATER_BuoyancyTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSphericalPontoon *************************************************
struct Z_Construct_UScriptStruct_FSphericalPontoon_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSphericalPontoon_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


struct FSphericalPontoon;
// ********** End ScriptStruct FSphericalPontoon ***************************************************

// ********** Begin ScriptStruct FBuoyancyData *****************************************************
struct Z_Construct_UScriptStruct_FBuoyancyData_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_180_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBuoyancyData_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


struct FBuoyancyData;
// ********** End ScriptStruct FBuoyancyData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h

// ********** Begin Enum EBuoyancyEvent ************************************************************
#define FOREACH_ENUM_EBUOYANCYEVENT(op) \
	op(EBuoyancyEvent::EnteredWaterBody) \
	op(EBuoyancyEvent::ExitedWaterBody) 

enum class EBuoyancyEvent : uint8;
template<> struct TIsUEnumClass<EBuoyancyEvent> { enum { Value = true }; };
template<> WATER_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuoyancyEvent>();
// ********** End Enum EBuoyancyEvent **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
