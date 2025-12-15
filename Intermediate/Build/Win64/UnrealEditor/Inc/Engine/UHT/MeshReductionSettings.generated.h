// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshReductionSettings.h"

#ifdef ENGINE_MeshReductionSettings_generated_h
#error "MeshReductionSettings.generated.h already included, missing '#pragma once' in MeshReductionSettings.h"
#endif
#define ENGINE_MeshReductionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshReductionSettings ********************************************
struct Z_Construct_UScriptStruct_FMeshReductionSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshReductionSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMeshReductionSettings;
// ********** End ScriptStruct FMeshReductionSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h

// ********** Begin Enum EMeshFeatureImportance ****************************************************
#define FOREACH_ENUM_EMESHFEATUREIMPORTANCE(op) \
	op(EMeshFeatureImportance::Off) \
	op(EMeshFeatureImportance::Lowest) \
	op(EMeshFeatureImportance::Low) \
	op(EMeshFeatureImportance::Normal) \
	op(EMeshFeatureImportance::High) \
	op(EMeshFeatureImportance::Highest) 

namespace EMeshFeatureImportance { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshFeatureImportance::Type>();
// ********** End Enum EMeshFeatureImportance ******************************************************

// ********** Begin Enum EStaticMeshReductionTerimationCriterion ***********************************
#define FOREACH_ENUM_ESTATICMESHREDUCTIONTERIMATIONCRITERION(op) \
	op(EStaticMeshReductionTerimationCriterion::Triangles) \
	op(EStaticMeshReductionTerimationCriterion::Vertices) \
	op(EStaticMeshReductionTerimationCriterion::Any) 

enum class EStaticMeshReductionTerimationCriterion : uint8;
template<> struct TIsUEnumClass<EStaticMeshReductionTerimationCriterion> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStaticMeshReductionTerimationCriterion>();
// ********** End Enum EStaticMeshReductionTerimationCriterion *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
