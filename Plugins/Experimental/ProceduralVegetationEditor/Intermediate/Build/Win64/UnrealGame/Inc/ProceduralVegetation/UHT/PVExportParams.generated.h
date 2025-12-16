// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PVExportParams.h"

#ifdef PROCEDURALVEGETATION_PVExportParams_generated_h
#error "PVExportParams.generated.h already included, missing '#pragma once' in PVExportParams.h"
#endif
#define PROCEDURALVEGETATION_PVExportParams_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVExportParams ***************************************************
struct Z_Construct_UScriptStruct_FPVExportParams_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVExportParams_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVExportParams_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPVExportParams;
// ********** End ScriptStruct FPVExportParams *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVExportParams_h

// ********** Begin Enum EPVExportMeshType *********************************************************
#define FOREACH_ENUM_EPVEXPORTMESHTYPE(op) \
	op(EPVExportMeshType::StaticMesh) \
	op(EPVExportMeshType::SkeletalMesh) 

enum class EPVExportMeshType : uint8;
template<> struct TIsUEnumClass<EPVExportMeshType> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVExportMeshType>();
// ********** End Enum EPVExportMeshType ***********************************************************

// ********** Begin Enum EPVAssetReplacePolicy *****************************************************
#define FOREACH_ENUM_EPVASSETREPLACEPOLICY(op) \
	op(EPVAssetReplacePolicy::Append) \
	op(EPVAssetReplacePolicy::Replace) \
	op(EPVAssetReplacePolicy::Ignore) 

enum class EPVAssetReplacePolicy : uint8;
template<> struct TIsUEnumClass<EPVAssetReplacePolicy> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVAssetReplacePolicy>();
// ********** End Enum EPVAssetReplacePolicy *******************************************************

// ********** Begin Enum EPVCollisionGeneration ****************************************************
#define FOREACH_ENUM_EPVCOLLISIONGENERATION(op) \
	op(EPVCollisionGeneration::None) \
	op(EPVCollisionGeneration::TrunkOnly) \
	op(EPVCollisionGeneration::AllGenerations) 

enum class EPVCollisionGeneration : uint8;
template<> struct TIsUEnumClass<EPVCollisionGeneration> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVCollisionGeneration>();
// ********** End Enum EPVCollisionGeneration ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
