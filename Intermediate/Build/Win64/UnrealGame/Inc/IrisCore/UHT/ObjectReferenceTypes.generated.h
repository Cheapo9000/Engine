// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/ObjectReferenceTypes.h"

#ifdef IRISCORE_ObjectReferenceTypes_generated_h
#error "ObjectReferenceTypes.generated.h already included, missing '#pragma once' in ObjectReferenceTypes.h"
#endif
#define IRISCORE_ObjectReferenceTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReferenceTypes_h

// ********** Begin Enum EIrisAsyncLoadingPriority *************************************************
#define FOREACH_ENUM_EIRISASYNCLOADINGPRIORITY(op) \
	op(EIrisAsyncLoadingPriority::Default) \
	op(EIrisAsyncLoadingPriority::High) \
	op(EIrisAsyncLoadingPriority::VeryHigh) \
	op(EIrisAsyncLoadingPriority::Max) \
	op(EIrisAsyncLoadingPriority::Invalid) 

enum class EIrisAsyncLoadingPriority : uint8;
template<> struct TIsUEnumClass<EIrisAsyncLoadingPriority> { enum { Value = true }; };
template<> IRISCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EIrisAsyncLoadingPriority>();
// ********** End Enum EIrisAsyncLoadingPriority ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
