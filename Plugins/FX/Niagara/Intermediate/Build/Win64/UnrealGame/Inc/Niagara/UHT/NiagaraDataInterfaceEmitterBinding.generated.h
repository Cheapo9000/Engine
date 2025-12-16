// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceEmitterBinding.h"

#ifdef NIAGARA_NiagaraDataInterfaceEmitterBinding_generated_h
#error "NiagaraDataInterfaceEmitterBinding.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceEmitterBinding.h"
#endif
#define NIAGARA_NiagaraDataInterfaceEmitterBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraDataInterfaceEmitterBinding *******************************
struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraDataInterfaceEmitterBinding;
// ********** End ScriptStruct FNiagaraDataInterfaceEmitterBinding *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h

// ********** Begin Enum ENiagaraDataInterfaceEmitterBindingMode ***********************************
#define FOREACH_ENUM_ENIAGARADATAINTERFACEEMITTERBINDINGMODE(op) \
	op(ENiagaraDataInterfaceEmitterBindingMode::Self) \
	op(ENiagaraDataInterfaceEmitterBindingMode::Other) 

enum class ENiagaraDataInterfaceEmitterBindingMode;
template<> struct TIsUEnumClass<ENiagaraDataInterfaceEmitterBindingMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraDataInterfaceEmitterBindingMode>();
// ********** End Enum ENiagaraDataInterfaceEmitterBindingMode *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
