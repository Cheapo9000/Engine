// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshMerge/MeshProxySettings.h"

#ifdef ENGINE_MeshProxySettings_generated_h
#error "MeshProxySettings.generated.h already included, missing '#pragma once' in MeshProxySettings.h"
#endif
#define ENGINE_MeshProxySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshProxySettings ************************************************
struct Z_Construct_UScriptStruct_FMeshProxySettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshProxySettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMeshProxySettings;
// ********** End ScriptStruct FMeshProxySettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h

// ********** Begin Enum ELandscapeCullingPrecision ************************************************
#define FOREACH_ENUM_ELANDSCAPECULLINGPRECISION(op) \
	op(ELandscapeCullingPrecision::High) \
	op(ELandscapeCullingPrecision::Medium) \
	op(ELandscapeCullingPrecision::Low) 

namespace ELandscapeCullingPrecision { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeCullingPrecision::Type>();
// ********** End Enum ELandscapeCullingPrecision **************************************************

// ********** Begin Enum EProxyNormalComputationMethod *********************************************
#define FOREACH_ENUM_EPROXYNORMALCOMPUTATIONMETHOD(op) \
	op(EProxyNormalComputationMethod::AngleWeighted) \
	op(EProxyNormalComputationMethod::AreaWeighted) \
	op(EProxyNormalComputationMethod::EqualWeighted) 

namespace EProxyNormalComputationMethod { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EProxyNormalComputationMethod::Type>();
// ********** End Enum EProxyNormalComputationMethod ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
