// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Implementations/PVCarve.h"

#ifdef PROCEDURALVEGETATION_PVCarve_generated_h
#error "PVCarve.generated.h already included, missing '#pragma once' in PVCarve.h"
#endif
#define PROCEDURALVEGETATION_PVCarve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVCarveParams ****************************************************
struct Z_Construct_UScriptStruct_FPVCarveParams_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVCarve_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVCarveParams_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct();


struct FPVCarveParams;
// ********** End ScriptStruct FPVCarveParams ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVCarve_h

// ********** Begin Enum ECarveBasis ***************************************************************
#define FOREACH_ENUM_ECARVEBASIS(op) \
	op(ECarveBasis::LengthFromRoot) \
	op(ECarveBasis::FromBottom) \
	op(ECarveBasis::ZPosition) \
	op(ECarveBasis::Radius) 

enum class ECarveBasis : uint8;
template<> struct TIsUEnumClass<ECarveBasis> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<ECarveBasis>();
// ********** End Enum ECarveBasis *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
