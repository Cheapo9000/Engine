// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraVariant.h"

#ifdef NIAGARA_NiagaraVariant_generated_h
#error "NiagaraVariant.generated.h already included, missing '#pragma once' in NiagaraVariant.h"
#endif
#define NIAGARA_NiagaraVariant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraVariant ***************************************************
struct Z_Construct_UScriptStruct_FNiagaraVariant_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraVariant_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraVariant;
// ********** End ScriptStruct FNiagaraVariant *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h

// ********** Begin Enum ENiagaraVariantMode *******************************************************
#define FOREACH_ENUM_ENIAGARAVARIANTMODE(op) \
	op(ENiagaraVariantMode::None) \
	op(ENiagaraVariantMode::Object) \
	op(ENiagaraVariantMode::DataInterface) \
	op(ENiagaraVariantMode::Bytes) 

enum class ENiagaraVariantMode;
template<> struct TIsUEnumClass<ENiagaraVariantMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraVariantMode>();
// ********** End Enum ENiagaraVariantMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
