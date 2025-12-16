// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEmitterHandle.h"

#ifdef NIAGARA_NiagaraEmitterHandle_generated_h
#error "NiagaraEmitterHandle.generated.h already included, missing '#pragma once' in NiagaraEmitterHandle.h"
#endif
#define NIAGARA_NiagaraEmitterHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraEmitterHandle *********************************************
struct Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraEmitterHandle;
// ********** End ScriptStruct FNiagaraEmitterHandle ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h

// ********** Begin Enum ENiagaraEmitterMode *******************************************************
#define FOREACH_ENUM_ENIAGARAEMITTERMODE(op) \
	op(ENiagaraEmitterMode::Standard) \
	op(ENiagaraEmitterMode::Stateless) 

enum class ENiagaraEmitterMode : uint8;
template<> struct TIsUEnumClass<ENiagaraEmitterMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraEmitterMode>();
// ********** End Enum ENiagaraEmitterMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
