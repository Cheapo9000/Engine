// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/ChaosFleshNodesUtility.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHNODES_ChaosFleshNodesUtility_generated_h
#error "ChaosFleshNodesUtility.generated.h already included, missing '#pragma once' in ChaosFleshNodesUtility.h"
#endif
#define CHAOSFLESHNODES_ChaosFleshNodesUtility_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshNodesUtility_h


#define FOREACH_ENUM_TETMESHINGMETHOD(op) \
	op(IsoStuffing) \
	op(TetWild) 

enum TetMeshingMethod : int;
template<> CHAOSFLESHNODES_API UEnum* StaticEnum<TetMeshingMethod>();

#define FOREACH_ENUM_ESKELETALSELETIONMODE(op) \
	op(ESkeletalSeletionMode::Dataflow_SkeletalSelection_Single) \
	op(ESkeletalSeletionMode::Dataflow_SkeletalSelection_Branch) \
	op(ESkeletalSeletionMode::Chaos_Max) 

enum class ESkeletalSeletionMode : uint8;
template<> struct TIsUEnumClass<ESkeletalSeletionMode> { enum { Value = true }; };
template<> CHAOSFLESHNODES_API UEnum* StaticEnum<ESkeletalSeletionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
