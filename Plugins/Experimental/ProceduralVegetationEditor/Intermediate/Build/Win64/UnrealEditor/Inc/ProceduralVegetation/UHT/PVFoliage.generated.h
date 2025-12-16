// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Implementations/PVFoliage.h"

#ifdef PROCEDURALVEGETATION_PVFoliage_generated_h
#error "PVFoliage.generated.h already included, missing '#pragma once' in PVFoliage.h"
#endif
#define PROCEDURALVEGETATION_PVFoliage_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVFoliage_h

// ********** Begin Enum EPhyllotaxyType ***********************************************************
#define FOREACH_ENUM_EPHYLLOTAXYTYPE(op) \
	op(EPhyllotaxyType::Alternate) \
	op(EPhyllotaxyType::Opposite) \
	op(EPhyllotaxyType::Decussate) \
	op(EPhyllotaxyType::Whorled) \
	op(EPhyllotaxyType::Spiral) 

enum class EPhyllotaxyType : uint8;
template<> struct TIsUEnumClass<EPhyllotaxyType> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhyllotaxyType>();
// ********** End Enum EPhyllotaxyType *************************************************************

// ********** Begin Enum EPhyllotaxyFormation ******************************************************
#define FOREACH_ENUM_EPHYLLOTAXYFORMATION(op) \
	op(EPhyllotaxyFormation::Distichous) \
	op(EPhyllotaxyFormation::Tristichous) \
	op(EPhyllotaxyFormation::Pentastichous) \
	op(EPhyllotaxyFormation::Octastichous) \
	op(EPhyllotaxyFormation::Parastichous) 

enum class EPhyllotaxyFormation : uint8;
template<> struct TIsUEnumClass<EPhyllotaxyFormation> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhyllotaxyFormation>();
// ********** End Enum EPhyllotaxyFormation ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
