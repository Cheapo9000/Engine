// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeLinker.h"

#ifdef STATETREEMODULE_StateTreeLinker_generated_h
#error "StateTreeLinker.generated.h already included, missing '#pragma once' in StateTreeLinker.h"
#endif
#define STATETREEMODULE_StateTreeLinker_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h

// ********** Begin Enum EStateTreeLinkerStatus ****************************************************
#define FOREACH_ENUM_ESTATETREELINKERSTATUS(op) \
	op(EStateTreeLinkerStatus::Succeeded) \
	op(EStateTreeLinkerStatus::Failed) 

enum class EStateTreeLinkerStatus : uint8;
template<> struct TIsUEnumClass<EStateTreeLinkerStatus> { enum { Value = true }; };
template<> STATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeLinkerStatus>();
// ********** End Enum EStateTreeLinkerStatus ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
