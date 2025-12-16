// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaShapeParametricMaterial.h"

#ifdef AVALANCHESHAPES_AvaShapeParametricMaterial_generated_h
#error "AvaShapeParametricMaterial.generated.h already included, missing '#pragma once' in AvaShapeParametricMaterial.h"
#endif
#define AVALANCHESHAPES_AvaShapeParametricMaterial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaShapeParametricMaterial ***************************************
struct Z_Construct_UScriptStruct_FAvaShapeParametricMaterial_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_AvaShapeParametricMaterial_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaShapeParametricMaterial_Statics; \
	AVALANCHESHAPES_API static class UScriptStruct* StaticStruct();


struct FAvaShapeParametricMaterial;
// ********** End ScriptStruct FAvaShapeParametricMaterial *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_AvaShapeParametricMaterial_h

// ********** Begin Enum EAvaShapeParametricMaterialTranslucency ***********************************
#define FOREACH_ENUM_EAVASHAPEPARAMETRICMATERIALTRANSLUCENCY(op) \
	op(EAvaShapeParametricMaterialTranslucency::Auto) \
	op(EAvaShapeParametricMaterialTranslucency::Disabled) \
	op(EAvaShapeParametricMaterialTranslucency::Enabled) 

enum class EAvaShapeParametricMaterialTranslucency : uint8;
template<> struct TIsUEnumClass<EAvaShapeParametricMaterialTranslucency> { enum { Value = true }; };
template<> AVALANCHESHAPES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaShapeParametricMaterialTranslucency>();
// ********** End Enum EAvaShapeParametricMaterialTranslucency *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
