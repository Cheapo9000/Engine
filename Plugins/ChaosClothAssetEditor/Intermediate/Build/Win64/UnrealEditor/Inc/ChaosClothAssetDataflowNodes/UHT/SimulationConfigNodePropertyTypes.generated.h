// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/SimulationConfigNodePropertyTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_SimulationConfigNodePropertyTypes_generated_h
#error "SimulationConfigNodePropertyTypes.generated.h already included, missing '#pragma once' in SimulationConfigNodePropertyTypes.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_SimulationConfigNodePropertyTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationConfigNodePropertyTypes_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETRESTANGLECONSTRUCTIONTYPE(op) \
	op(EChaosClothAssetRestAngleConstructionType::Use3DRestAngles) \
	op(EChaosClothAssetRestAngleConstructionType::FlatnessRatio) \
	op(EChaosClothAssetRestAngleConstructionType::RestAngle) 

enum class EChaosClothAssetRestAngleConstructionType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetRestAngleConstructionType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetRestAngleConstructionType>();

#define FOREACH_ENUM_ECHAOSCLOTHASSETBENDINGCONSTRAINTTYPE(op) \
	op(EChaosClothAssetBendingConstraintType::FacesSpring) \
	op(EChaosClothAssetBendingConstraintType::HingeAngles) 

enum class EChaosClothAssetBendingConstraintType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetBendingConstraintType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetBendingConstraintType>();

#define FOREACH_ENUM_ECHAOSCLOTHASSETCONSTRAINTDISTRIBUTIONTYPE(op) \
	op(EChaosClothAssetConstraintDistributionType::Anisotropic) \
	op(EChaosClothAssetConstraintDistributionType::Isotropic) 

enum class EChaosClothAssetConstraintDistributionType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetConstraintDistributionType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetConstraintDistributionType>();

#define FOREACH_ENUM_ECHAOSCLOTHASSETCONSTRAINTSOLVERTYPE(op) \
	op(EChaosClothAssetConstraintSolverType::XPBD) \
	op(EChaosClothAssetConstraintSolverType::PBD) 

enum class EChaosClothAssetConstraintSolverType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetConstraintSolverType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetConstraintSolverType>();

#define FOREACH_ENUM_ECHAOSCLOTHASSETCONSTRAINTOVERRIDETYPE(op) \
	op(EChaosClothAssetConstraintOverrideType::None) \
	op(EChaosClothAssetConstraintOverrideType::Override) \
	op(EChaosClothAssetConstraintOverrideType::Multiply) 

enum class EChaosClothAssetConstraintOverrideType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetConstraintOverrideType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetConstraintOverrideType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
