// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraAsyncCompile.h"

#ifdef NIAGARA_NiagaraAsyncCompile_generated_h
#error "NiagaraAsyncCompile.generated.h already included, missing '#pragma once' in NiagaraAsyncCompile.h"
#endif
#define NIAGARA_NiagaraAsyncCompile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEmitterCompiledScriptPair ****************************************
struct Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FEmitterCompiledScriptPair;
// ********** End ScriptStruct FEmitterCompiledScriptPair ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h

// ********** Begin Enum ENiagaraCompilationState **************************************************
#define FOREACH_ENUM_ENIAGARACOMPILATIONSTATE(op) \
	op(ENiagaraCompilationState::CheckDDC) \
	op(ENiagaraCompilationState::Precompile) \
	op(ENiagaraCompilationState::StartCompileJob) \
	op(ENiagaraCompilationState::AwaitResult) \
	op(ENiagaraCompilationState::OptimizeByteCode) \
	op(ENiagaraCompilationState::ProcessResult) \
	op(ENiagaraCompilationState::PutToDDC) \
	op(ENiagaraCompilationState::Finished) \
	op(ENiagaraCompilationState::Aborted) 

enum class ENiagaraCompilationState : uint8;
template<> struct TIsUEnumClass<ENiagaraCompilationState> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraCompilationState>();
// ********** End Enum ENiagaraCompilationState ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
