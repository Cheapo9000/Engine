// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimModule/SimModuleTree.h"

#ifdef CHAOSVEHICLESCORE_SimModuleTree_generated_h
#error "SimModuleTree.generated.h already included, missing '#pragma once' in SimModuleTree.h"
#endif
#define CHAOSVEHICLESCORE_SimModuleTree_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_SimModuleTree_h

// ********** Begin Enum ESimTreeProcessingOrder ***************************************************
#define FOREACH_ENUM_ESIMTREEPROCESSINGORDER(op) \
	op(ManualOverride) \
	op(LeafFirst) \
	op(RootFirst) \
	op(LeafFirstBFS) 

enum ESimTreeProcessingOrder : int8;
template<> CHAOSVEHICLESCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESimTreeProcessingOrder>();
// ********** End Enum ESimTreeProcessingOrder *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
