// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDataChannelCommon.h"

#ifdef NIAGARA_NiagaraDataInterfaceDataChannelCommon_generated_h
#error "NiagaraDataInterfaceDataChannelCommon.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDataChannelCommon.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDataChannelCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNDIDataChannelFunctionInfo ***************************************
struct Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIDataChannelFunctionInfo;
// ********** End ScriptStruct FNDIDataChannelFunctionInfo *****************************************

// ********** Begin ScriptStruct FNDIDataChannel_GPUScriptParameterAccessInfo **********************
struct Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIDataChannel_GPUScriptParameterAccessInfo;
// ********** End ScriptStruct FNDIDataChannel_GPUScriptParameterAccessInfo ************************

// ********** Begin ScriptStruct FNDIDataChannelCompiledData ***************************************
struct Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_164_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIDataChannelCompiledData;
// ********** End ScriptStruct FNDIDataChannelCompiledData *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h

// ********** Begin Enum ENiagaraDataChannelAllocationMode *****************************************
#define FOREACH_ENUM_ENIAGARADATACHANNELALLOCATIONMODE(op) \
	op(ENiagaraDataChannelAllocationMode::Static) \
	op(ENiagaraDataChannelAllocationMode::Dynamic) 

enum class ENiagaraDataChannelAllocationMode : uint8;
template<> struct TIsUEnumClass<ENiagaraDataChannelAllocationMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraDataChannelAllocationMode>();
// ********** End Enum ENiagaraDataChannelAllocationMode *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
