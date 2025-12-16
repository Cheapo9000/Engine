// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Injection/InjectionStatus.h"

#ifdef UAFANIMGRAPH_InjectionStatus_generated_h
#error "InjectionStatus.generated.h already included, missing '#pragma once' in InjectionStatus.h"
#endif
#define UAFANIMGRAPH_InjectionStatus_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Injection_InjectionStatus_h

// ********** Begin Enum EAnimNextInjectionStatus **************************************************
#define FOREACH_ENUM_EANIMNEXTINJECTIONSTATUS(op) \
	op(EAnimNextInjectionStatus::None) \
	op(EAnimNextInjectionStatus::Pending) \
	op(EAnimNextInjectionStatus::Playing) \
	op(EAnimNextInjectionStatus::Completed) \
	op(EAnimNextInjectionStatus::Expired) \
	op(EAnimNextInjectionStatus::Interrupted) \
	op(EAnimNextInjectionStatus::BlendingOut) 

enum class EAnimNextInjectionStatus : uint8;
template<> struct TIsUEnumClass<EAnimNextInjectionStatus> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextInjectionStatus>();
// ********** End Enum EAnimNextInjectionStatus ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
