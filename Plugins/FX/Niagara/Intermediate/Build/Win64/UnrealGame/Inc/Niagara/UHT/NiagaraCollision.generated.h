// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraCollision.h"

#ifdef NIAGARA_NiagaraCollision_generated_h
#error "NiagaraCollision.generated.h already included, missing '#pragma once' in NiagaraCollision.h"
#endif
#define NIAGARA_NiagaraCollision_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraCollision_h

// ********** Begin Enum ENiagaraCollisionMode *****************************************************
#define FOREACH_ENUM_ENIAGARACOLLISIONMODE(op) \
	op(ENiagaraCollisionMode::None) \
	op(ENiagaraCollisionMode::SceneGeometry) \
	op(ENiagaraCollisionMode::DepthBuffer) \
	op(ENiagaraCollisionMode::DistanceField) 

enum class ENiagaraCollisionMode : uint8;
template<> struct TIsUEnumClass<ENiagaraCollisionMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraCollisionMode>();
// ********** End Enum ENiagaraCollisionMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
