// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Implementations/PVGravity.h"

#ifdef PROCEDURALVEGETATION_PVGravity_generated_h
#error "PVGravity.generated.h already included, missing '#pragma once' in PVGravity.h"
#endif
#define PROCEDURALVEGETATION_PVGravity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVGravityParams **************************************************
struct Z_Construct_UScriptStruct_FPVGravityParams_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVGravity_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVGravityParams_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct();


struct FPVGravityParams;
// ********** End ScriptStruct FPVGravityParams ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVGravity_h

// ********** Begin Enum EGravityMode **************************************************************
#define FOREACH_ENUM_EGRAVITYMODE(op) \
	op(EGravityMode::Gravity) \
	op(EGravityMode::Phototropic) 

enum class EGravityMode : uint8;
template<> struct TIsUEnumClass<EGravityMode> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EGravityMode>();
// ********** End Enum EGravityMode ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
