// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/NiagaraStatelessCommon.h"

#ifdef NIAGARA_NiagaraStatelessCommon_generated_h
#error "NiagaraStatelessCommon.generated.h already included, missing '#pragma once' in NiagaraStatelessCommon.h"
#endif
#define NIAGARA_NiagaraStatelessCommon_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h

// ********** Begin Enum ENiagaraStatelessFeatureMask **********************************************
#define FOREACH_ENUM_ENIAGARASTATELESSFEATUREMASK(op) \
	op(ENiagaraStatelessFeatureMask::ExecuteGPU) \
	op(ENiagaraStatelessFeatureMask::ExecuteCPU) \
	op(ENiagaraStatelessFeatureMask::None) \
	op(ENiagaraStatelessFeatureMask::ExecuteAll) \
	op(ENiagaraStatelessFeatureMask::All) 

enum class ENiagaraStatelessFeatureMask : uint32;
template<> struct TIsUEnumClass<ENiagaraStatelessFeatureMask> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraStatelessFeatureMask>();
// ********** End Enum ENiagaraStatelessFeatureMask ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
