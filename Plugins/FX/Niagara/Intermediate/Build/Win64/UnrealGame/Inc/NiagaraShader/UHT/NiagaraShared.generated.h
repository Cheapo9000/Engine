// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraShared.h"

#ifdef NIAGARASHADER_NiagaraShared_generated_h
#error "NiagaraShared.generated.h already included, missing '#pragma once' in NiagaraShared.h"
#endif
#define NIAGARASHADER_NiagaraShared_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraCompileEvent **********************************************
struct Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


struct FNiagaraCompileEvent;
// ********** End ScriptStruct FNiagaraCompileEvent ************************************************

// ********** Begin ScriptStruct FNiagaraDataInterfaceGeneratedFunction ****************************
struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


struct FNiagaraDataInterfaceGeneratedFunction;
// ********** End ScriptStruct FNiagaraDataInterfaceGeneratedFunction ******************************

// ********** Begin ScriptStruct FNiagaraDataInterfaceGPUParamInfo *********************************
struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_218_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


struct FNiagaraDataInterfaceGPUParamInfo;
// ********** End ScriptStruct FNiagaraDataInterfaceGPUParamInfo ***********************************

// ********** Begin ScriptStruct FNiagaraShaderScriptExternalConstant ******************************
struct Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_259_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


struct FNiagaraShaderScriptExternalConstant;
// ********** End ScriptStruct FNiagaraShaderScriptExternalConstant ********************************

// ********** Begin ScriptStruct FNiagaraShaderScriptParametersMetadata ****************************
struct Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_280_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


struct FNiagaraShaderScriptParametersMetadata;
// ********** End ScriptStruct FNiagaraShaderScriptParametersMetadata ******************************

// ********** Begin Delegate FOnNiagaraScriptCompilationComplete ***********************************
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_687_DELEGATE \
NIAGARASHADER_API void FOnNiagaraScriptCompilationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraScriptCompilationComplete);


// ********** End Delegate FOnNiagaraScriptCompilationComplete *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h

// ********** Begin Enum FNiagaraCompileEventSeverity **********************************************
#define FOREACH_ENUM_FNIAGARACOMPILEEVENTSEVERITY(op) \
	op(FNiagaraCompileEventSeverity::Log) \
	op(FNiagaraCompileEventSeverity::Display) \
	op(FNiagaraCompileEventSeverity::Warning) \
	op(FNiagaraCompileEventSeverity::Error) 

enum class FNiagaraCompileEventSeverity : uint8;
template<> struct TIsUEnumClass<FNiagaraCompileEventSeverity> { enum { Value = true }; };
template<> NIAGARASHADER_NON_ATTRIBUTED_API UEnum* StaticEnum<FNiagaraCompileEventSeverity>();
// ********** End Enum FNiagaraCompileEventSeverity ************************************************

// ********** Begin Enum FNiagaraCompileEventSource ************************************************
#define FOREACH_ENUM_FNIAGARACOMPILEEVENTSOURCE(op) \
	op(FNiagaraCompileEventSource::Unset) \
	op(FNiagaraCompileEventSource::ScriptDependency) 

enum class FNiagaraCompileEventSource : uint8;
template<> struct TIsUEnumClass<FNiagaraCompileEventSource> { enum { Value = true }; };
template<> NIAGARASHADER_NON_ATTRIBUTED_API UEnum* StaticEnum<FNiagaraCompileEventSource>();
// ********** End Enum FNiagaraCompileEventSource **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
