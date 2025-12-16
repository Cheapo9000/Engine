// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositionOps/VoxelMorphologyMeshesOp.h"

#ifdef MODELINGOPERATORS_VoxelMorphologyMeshesOp_generated_h
#error "VoxelMorphologyMeshesOp.generated.h already included, missing '#pragma once' in VoxelMorphologyMeshesOp.h"
#endif
#define MODELINGOPERATORS_VoxelMorphologyMeshesOp_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_VoxelMorphologyMeshesOp_h

// ********** Begin Enum EMorphologyOperation ******************************************************
#define FOREACH_ENUM_EMORPHOLOGYOPERATION(op) \
	op(EMorphologyOperation::Dilate) \
	op(EMorphologyOperation::Contract) \
	op(EMorphologyOperation::Close) \
	op(EMorphologyOperation::Open) 

enum class EMorphologyOperation : uint8;
template<> struct TIsUEnumClass<EMorphologyOperation> { enum { Value = true }; };
template<> MODELINGOPERATORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMorphologyOperation>();
// ********** End Enum EMorphologyOperation ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
