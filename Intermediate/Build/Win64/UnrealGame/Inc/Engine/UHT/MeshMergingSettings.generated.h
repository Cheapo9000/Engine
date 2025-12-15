// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshMerge/MeshMergingSettings.h"

#ifdef ENGINE_MeshMergingSettings_generated_h
#error "MeshMergingSettings.generated.h already included, missing '#pragma once' in MeshMergingSettings.h"
#endif
#define ENGINE_MeshMergingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshMergingSettings **********************************************
struct Z_Construct_UScriptStruct_FMeshMergingSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshMergingSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMeshMergingSettings;
// ********** End ScriptStruct FMeshMergingSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h

// ********** Begin Enum EMeshLODSelectionType *****************************************************
#define FOREACH_ENUM_EMESHLODSELECTIONTYPE(op) \
	op(EMeshLODSelectionType::AllLODs) \
	op(EMeshLODSelectionType::SpecificLOD) \
	op(EMeshLODSelectionType::CalculateLOD) \
	op(EMeshLODSelectionType::LowestDetailLOD) 

enum class EMeshLODSelectionType : uint8;
template<> struct TIsUEnumClass<EMeshLODSelectionType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshLODSelectionType>();
// ********** End Enum EMeshLODSelectionType *******************************************************

// ********** Begin Enum EMeshMergeType ************************************************************
#define FOREACH_ENUM_EMESHMERGETYPE(op) \
	op(EMeshMergeType::MeshMergeType_Default) \
	op(EMeshMergeType::MeshMergeType_MergeActor) 

enum class EMeshMergeType : uint8;
template<> struct TIsUEnumClass<EMeshMergeType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshMergeType>();
// ********** End Enum EMeshMergeType **************************************************************

// ********** Begin Enum EUVOutput *****************************************************************
#define FOREACH_ENUM_EUVOUTPUT(op) \
	op(EUVOutput::DoNotOutputChannel) \
	op(EUVOutput::OutputChannel) 

enum class EUVOutput : uint8;
template<> struct TIsUEnumClass<EUVOutput> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVOutput>();
// ********** End Enum EUVOutput *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
