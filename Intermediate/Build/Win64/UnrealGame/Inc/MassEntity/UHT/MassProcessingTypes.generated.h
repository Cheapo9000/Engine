// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassProcessingTypes.h"

#ifdef MASSENTITY_MassProcessingTypes_generated_h
#error "MassProcessingTypes.generated.h already included, missing '#pragma once' in MassProcessingTypes.h"
#endif
#define MASSENTITY_MassProcessingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FProcessorAuxDataBase *********************************************
struct Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessingTypes_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


struct FProcessorAuxDataBase;
// ********** End ScriptStruct FProcessorAuxDataBase ***********************************************

// ********** Begin ScriptStruct FMassProcessingContext_DEPRECATED *********************************
struct Z_Construct_UScriptStruct_FMassProcessingContext_DEPRECATED_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessingTypes_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassProcessingContext_DEPRECATED_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


struct FMassProcessingContext_DEPRECATED;
// ********** End ScriptStruct FMassProcessingContext_DEPRECATED ***********************************

// ********** Begin ScriptStruct FMassRuntimePipeline **********************************************
struct Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessingTypes_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


struct FMassRuntimePipeline;
// ********** End ScriptStruct FMassRuntimePipeline ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassProcessingTypes_h

// ********** Begin Enum EProcessorExecutionFlags **************************************************
#define FOREACH_ENUM_EPROCESSOREXECUTIONFLAGS(op) \
	op(EProcessorExecutionFlags::None) \
	op(EProcessorExecutionFlags::Standalone) \
	op(EProcessorExecutionFlags::Server) \
	op(EProcessorExecutionFlags::Client) \
	op(EProcessorExecutionFlags::Editor) \
	op(EProcessorExecutionFlags::EditorWorld) \
	op(EProcessorExecutionFlags::AllNetModes) \
	op(EProcessorExecutionFlags::AllWorldModes) \
	op(EProcessorExecutionFlags::All) 

enum class EProcessorExecutionFlags : uint8;
template<> struct TIsUEnumClass<EProcessorExecutionFlags> { enum { Value = true }; };
template<> MASSENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EProcessorExecutionFlags>();
// ********** End Enum EProcessorExecutionFlags ****************************************************

// ********** Begin Enum EMassProcessingPhase ******************************************************
#define FOREACH_ENUM_EMASSPROCESSINGPHASE(op) \
	op(EMassProcessingPhase::PrePhysics) \
	op(EMassProcessingPhase::StartPhysics) \
	op(EMassProcessingPhase::DuringPhysics) \
	op(EMassProcessingPhase::EndPhysics) \
	op(EMassProcessingPhase::PostPhysics) \
	op(EMassProcessingPhase::FrameEnd) 

enum class EMassProcessingPhase : uint8;
template<> struct TIsUEnumClass<EMassProcessingPhase> { enum { Value = true }; };
template<> MASSENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassProcessingPhase>();
// ********** End Enum EMassProcessingPhase ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
