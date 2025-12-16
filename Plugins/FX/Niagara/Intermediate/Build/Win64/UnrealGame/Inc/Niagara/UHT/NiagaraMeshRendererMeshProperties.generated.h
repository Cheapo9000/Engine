// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraMeshRendererMeshProperties.h"

#ifdef NIAGARA_NiagaraMeshRendererMeshProperties_generated_h
#error "NiagaraMeshRendererMeshProperties.generated.h already included, missing '#pragma once' in NiagaraMeshRendererMeshProperties.h"
#endif
#define NIAGARA_NiagaraMeshRendererMeshProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraMeshRendererMeshPropertiesBase ****************************
struct Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererMeshProperties_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraMeshRendererMeshPropertiesBase;
// ********** End ScriptStruct FNiagaraMeshRendererMeshPropertiesBase ******************************

// ********** Begin ScriptStruct FNiagaraMeshRendererMeshProperties ********************************
struct Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererMeshProperties_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraMeshRendererMeshPropertiesBase Super;


struct FNiagaraMeshRendererMeshProperties;
// ********** End ScriptStruct FNiagaraMeshRendererMeshProperties **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererMeshProperties_h

// ********** Begin Enum ENiagaraMeshPivotOffsetSpace **********************************************
#define FOREACH_ENUM_ENIAGARAMESHPIVOTOFFSETSPACE(op) \
	op(ENiagaraMeshPivotOffsetSpace::Mesh) \
	op(ENiagaraMeshPivotOffsetSpace::Simulation) \
	op(ENiagaraMeshPivotOffsetSpace::World) \
	op(ENiagaraMeshPivotOffsetSpace::Local) 

enum class ENiagaraMeshPivotOffsetSpace : uint8;
template<> struct TIsUEnumClass<ENiagaraMeshPivotOffsetSpace> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraMeshPivotOffsetSpace>();
// ********** End Enum ENiagaraMeshPivotOffsetSpace ************************************************

// ********** Begin Enum ENiagaraMeshLODMode *******************************************************
#define FOREACH_ENUM_ENIAGARAMESHLODMODE(op) \
	op(ENiagaraMeshLODMode::LODLevel) \
	op(ENiagaraMeshLODMode::LODBias) \
	op(ENiagaraMeshLODMode::ByComponentBounds) \
	op(ENiagaraMeshLODMode::ComponentOrigin) \
	op(ENiagaraMeshLODMode::PerParticle) 

enum class ENiagaraMeshLODMode : uint8;
template<> struct TIsUEnumClass<ENiagaraMeshLODMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraMeshLODMode>();
// ********** End Enum ENiagaraMeshLODMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
