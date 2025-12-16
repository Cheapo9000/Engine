// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureEngineFracturing.h"

#ifdef FRACTUREENGINE_FractureEngineFracturing_generated_h
#error "FractureEngineFracturing.generated.h already included, missing '#pragma once' in FractureEngineFracturing.h"
#endif
#define FRACTUREENGINE_FractureEngineFracturing_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineFracturing_h

// ********** Begin Enum EFractureBrickBondEnum ****************************************************
#define FOREACH_ENUM_EFRACTUREBRICKBONDENUM(op) \
	op(EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stretcher) \
	op(EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stack) \
	op(EFractureBrickBondEnum::Dataflow_FractureBrickBond_English) \
	op(EFractureBrickBondEnum::Dataflow_FractureBrickBond_Header) \
	op(EFractureBrickBondEnum::Dataflow_FractureBrickBond_Flemish) 

enum class EFractureBrickBondEnum : uint8;
template<> struct TIsUEnumClass<EFractureBrickBondEnum> { enum { Value = true }; };
template<> FRACTUREENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFractureBrickBondEnum>();
// ********** End Enum EFractureBrickBondEnum ******************************************************

// ********** Begin Enum EMeshCutterCutDistribution ************************************************
#define FOREACH_ENUM_EMESHCUTTERCUTDISTRIBUTION(op) \
	op(EMeshCutterCutDistribution::SingleCut) \
	op(EMeshCutterCutDistribution::UniformRandom) \
	op(EMeshCutterCutDistribution::Grid) 

enum class EMeshCutterCutDistribution : uint8;
template<> struct TIsUEnumClass<EMeshCutterCutDistribution> { enum { Value = true }; };
template<> FRACTUREENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshCutterCutDistribution>();
// ********** End Enum EMeshCutterCutDistribution **************************************************

// ********** Begin Enum EMeshCutterPerCutMeshSelection ********************************************
#define FOREACH_ENUM_EMESHCUTTERPERCUTMESHSELECTION(op) \
	op(EMeshCutterPerCutMeshSelection::All) \
	op(EMeshCutterPerCutMeshSelection::Random) \
	op(EMeshCutterPerCutMeshSelection::Sequential) 

enum class EMeshCutterPerCutMeshSelection : uint8;
template<> struct TIsUEnumClass<EMeshCutterPerCutMeshSelection> { enum { Value = true }; };
template<> FRACTUREENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshCutterPerCutMeshSelection>();
// ********** End Enum EMeshCutterPerCutMeshSelection **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
