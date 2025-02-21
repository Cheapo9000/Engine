// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDScene.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDScene_generated_h
#error "ChaosVDScene.generated.h already included, missing '#pragma once' in ChaosVDScene.h"
#endif
#define CHAOSVD_ChaosVDScene_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDScene_h


#define FOREACH_ENUM_ECHAOSVDSCENECLEANUPOPTIONS(op) \
	op(EChaosVDSceneCleanUpOptions::None) \
	op(EChaosVDSceneCleanUpOptions::ReInitializeGeometryBuilder) \
	op(EChaosVDSceneCleanUpOptions::CollectGarbage) 

enum class EChaosVDSceneCleanUpOptions;
template<> struct TIsUEnumClass<EChaosVDSceneCleanUpOptions> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDSceneCleanUpOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
