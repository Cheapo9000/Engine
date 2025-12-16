// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Implementations/PVRemoveBranches.h"

#ifdef PROCEDURALVEGETATION_PVRemoveBranches_generated_h
#error "PVRemoveBranches.generated.h already included, missing '#pragma once' in PVRemoveBranches.h"
#endif
#define PROCEDURALVEGETATION_PVRemoveBranches_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVRemoveBranches_h

// ********** Begin Enum ERemoveBranchesBasis ******************************************************
#define FOREACH_ENUM_EREMOVEBRANCHESBASIS(op) \
	op(ERemoveBranchesBasis::Length) \
	op(ERemoveBranchesBasis::Radius) \
	op(ERemoveBranchesBasis::Light) \
	op(ERemoveBranchesBasis::Age) \
	op(ERemoveBranchesBasis::Generation) 

enum class ERemoveBranchesBasis : uint8;
template<> struct TIsUEnumClass<ERemoveBranchesBasis> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<ERemoveBranchesBasis>();
// ********** End Enum ERemoveBranchesBasis ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
