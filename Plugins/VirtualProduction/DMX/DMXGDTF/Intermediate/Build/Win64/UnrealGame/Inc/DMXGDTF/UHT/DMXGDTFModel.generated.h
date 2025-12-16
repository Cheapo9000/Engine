// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/Models/DMXGDTFModel.h"

#ifdef DMXGDTF_DMXGDTFModel_generated_h
#error "DMXGDTFModel.generated.h already included, missing '#pragma once' in DMXGDTFModel.h"
#endif
#define DMXGDTF_DMXGDTFModel_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_Models_DMXGDTFModel_h

// ********** Begin Enum EDMXGDTFModelPrimitiveType ************************************************
#define FOREACH_ENUM_EDMXGDTFMODELPRIMITIVETYPE(op) \
	op(EDMXGDTFModelPrimitiveType::Undefined) \
	op(EDMXGDTFModelPrimitiveType::Cube) \
	op(EDMXGDTFModelPrimitiveType::Cylinder) \
	op(EDMXGDTFModelPrimitiveType::Sphere) \
	op(EDMXGDTFModelPrimitiveType::Base) \
	op(EDMXGDTFModelPrimitiveType::Yoke) \
	op(EDMXGDTFModelPrimitiveType::Head) \
	op(EDMXGDTFModelPrimitiveType::Scanner) \
	op(EDMXGDTFModelPrimitiveType::Conventional) \
	op(EDMXGDTFModelPrimitiveType::Pigtail) \
	op(EDMXGDTFModelPrimitiveType::Base1_1) \
	op(EDMXGDTFModelPrimitiveType::Scanner1_1) \
	op(EDMXGDTFModelPrimitiveType::Conventional1_1) \
	op(EDMXGDTFModelPrimitiveType::MaxEnumValue) 

enum class EDMXGDTFModelPrimitiveType : uint8;
template<> struct TIsUEnumClass<EDMXGDTFModelPrimitiveType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFModelPrimitiveType>();
// ********** End Enum EDMXGDTFModelPrimitiveType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
