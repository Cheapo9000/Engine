// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDEngine.h"

#ifdef CHAOSVD_ChaosVDEngine_generated_h
#error "ChaosVDEngine.generated.h already included, missing '#pragma once' in ChaosVDEngine.h"
#endif
#define CHAOSVD_ChaosVDEngine_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDEngine_h

// ********** Begin Enum EChaosVDLoadRecordedDataMode **********************************************
#define FOREACH_ENUM_ECHAOSVDLOADRECORDEDDATAMODE(op) \
	op(EChaosVDLoadRecordedDataMode::SingleSource) \
	op(EChaosVDLoadRecordedDataMode::MultiSource) 

enum class EChaosVDLoadRecordedDataMode : uint8;
template<> struct TIsUEnumClass<EChaosVDLoadRecordedDataMode> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDLoadRecordedDataMode>();
// ********** End Enum EChaosVDLoadRecordedDataMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
