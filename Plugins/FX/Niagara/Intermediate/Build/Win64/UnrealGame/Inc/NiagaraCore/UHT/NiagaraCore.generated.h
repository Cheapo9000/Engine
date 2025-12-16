// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraCore.h"

#ifdef NIAGARACORE_NiagaraCore_generated_h
#error "NiagaraCore.generated.h already included, missing '#pragma once' in NiagaraCore.h"
#endif
#define NIAGARACORE_NiagaraCore_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraVariableCommonReference ***********************************
struct Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics; \
	NIAGARACORE_API static class UScriptStruct* StaticStruct();


struct FNiagaraVariableCommonReference;
// ********** End ScriptStruct FNiagaraVariableCommonReference *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h

// ********** Begin Enum ENiagaraParameterAccessLevel **********************************************
#define FOREACH_ENUM_ENIAGARAPARAMETERACCESSLEVEL(op) \
	op(ENiagaraParameterAccessLevel::Private) \
	op(ENiagaraParameterAccessLevel::Public) 

enum class ENiagaraParameterAccessLevel : uint8;
template<> struct TIsUEnumClass<ENiagaraParameterAccessLevel> { enum { Value = true }; };
template<> NIAGARACORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraParameterAccessLevel>();
// ********** End Enum ENiagaraParameterAccessLevel ************************************************

// ********** Begin Enum ENiagaraIterationSource ***************************************************
#define FOREACH_ENUM_ENIAGARAITERATIONSOURCE(op) \
	op(ENiagaraIterationSource::Particles) \
	op(ENiagaraIterationSource::DataInterface) \
	op(ENiagaraIterationSource::DirectSet) 

enum class ENiagaraIterationSource : uint8;
template<> struct TIsUEnumClass<ENiagaraIterationSource> { enum { Value = true }; };
template<> NIAGARACORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraIterationSource>();
// ********** End Enum ENiagaraIterationSource *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
