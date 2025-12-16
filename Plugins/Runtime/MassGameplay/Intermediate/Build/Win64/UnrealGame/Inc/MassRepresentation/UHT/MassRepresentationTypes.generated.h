// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassRepresentationTypes.h"

#ifdef MASSREPRESENTATION_MassRepresentationTypes_generated_h
#error "MassRepresentationTypes.generated.h already included, missing '#pragma once' in MassRepresentationTypes.h"
#endif
#define MASSREPRESENTATION_MassRepresentationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassStaticMeshInstanceVisualizationMeshDesc **********************
struct Z_Construct_UScriptStruct_FMassStaticMeshInstanceVisualizationMeshDesc_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassStaticMeshInstanceVisualizationMeshDesc_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct();


struct FMassStaticMeshInstanceVisualizationMeshDesc;
// ********** End ScriptStruct FMassStaticMeshInstanceVisualizationMeshDesc ************************

// ********** Begin ScriptStruct FStaticMeshInstanceVisualizationDesc ******************************
struct Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FStaticMeshInstanceVisualizationDesc;
// ********** End ScriptStruct FStaticMeshInstanceVisualizationDesc ********************************

// ********** Begin ScriptStruct FStaticMeshInstanceVisualizationDescHandle ************************
struct Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDescHandle_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_177_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDescHandle_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct();


struct FStaticMeshInstanceVisualizationDescHandle;
// ********** End ScriptStruct FStaticMeshInstanceVisualizationDescHandle **************************

// ********** Begin ScriptStruct FMassLODSignificanceRange *****************************************
struct Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_544_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct();


struct FMassLODSignificanceRange;
// ********** End ScriptStruct FMassLODSignificanceRange *******************************************

// ********** Begin ScriptStruct FMassInstancedStaticMeshInfo **************************************
struct Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_594_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct();


struct FMassInstancedStaticMeshInfo;
// ********** End ScriptStruct FMassInstancedStaticMeshInfo ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h

// ********** Begin Enum EMassRepresentationType ***************************************************
#define FOREACH_ENUM_EMASSREPRESENTATIONTYPE(op) \
	op(EMassRepresentationType::HighResSpawnedActor) \
	op(EMassRepresentationType::LowResSpawnedActor) \
	op(EMassRepresentationType::StaticMeshInstance) \
	op(EMassRepresentationType::None) 

enum class EMassRepresentationType : uint8;
template<> struct TIsUEnumClass<EMassRepresentationType> { enum { Value = true }; };
template<> MASSREPRESENTATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassRepresentationType>();
// ********** End Enum EMassRepresentationType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
