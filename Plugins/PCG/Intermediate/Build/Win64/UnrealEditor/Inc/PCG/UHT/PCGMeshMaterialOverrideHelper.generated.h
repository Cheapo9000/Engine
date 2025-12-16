// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshSelectors/PCGMeshMaterialOverrideHelper.h"

#ifdef PCG_PCGMeshMaterialOverrideHelper_generated_h
#error "PCGMeshMaterialOverrideHelper.generated.h already included, missing '#pragma once' in PCGMeshMaterialOverrideHelper.h"
#endif
#define PCG_PCGMeshMaterialOverrideHelper_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshMaterialOverrideHelper_h

// ********** Begin Enum EPCGMeshSelectorMaterialOverrideMode **************************************
#define FOREACH_ENUM_EPCGMESHSELECTORMATERIALOVERRIDEMODE(op) \
	op(EPCGMeshSelectorMaterialOverrideMode::NoOverride) \
	op(EPCGMeshSelectorMaterialOverrideMode::StaticOverride) \
	op(EPCGMeshSelectorMaterialOverrideMode::ByAttributeOverride) 

enum class EPCGMeshSelectorMaterialOverrideMode : uint8;
template<> struct TIsUEnumClass<EPCGMeshSelectorMaterialOverrideMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMeshSelectorMaterialOverrideMode>();
// ********** End Enum EPCGMeshSelectorMaterialOverrideMode ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
