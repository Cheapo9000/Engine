// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraComponentPoolMethodEnum.h"

#ifdef NIAGARA_NiagaraComponentPoolMethodEnum_generated_h
#error "NiagaraComponentPoolMethodEnum.generated.h already included, missing '#pragma once' in NiagaraComponentPoolMethodEnum.h"
#endif
#define NIAGARA_NiagaraComponentPoolMethodEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h

// ********** Begin Enum ENCPoolMethod *************************************************************
#define FOREACH_ENUM_ENCPOOLMETHOD(op) \
	op(ENCPoolMethod::None) \
	op(ENCPoolMethod::AutoRelease) \
	op(ENCPoolMethod::ManualRelease) \
	op(ENCPoolMethod::ManualRelease_OnComplete) \
	op(ENCPoolMethod::FreeInPool) 

enum class ENCPoolMethod : uint8;
template<> struct TIsUEnumClass<ENCPoolMethod> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENCPoolMethod>();
// ********** End Enum ENCPoolMethod ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
