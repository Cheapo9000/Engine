// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloud/MetaHumanServiceRequest.h"

#ifdef METAHUMANSDKEDITOR_MetaHumanServiceRequest_generated_h
#error "MetaHumanServiceRequest.generated.h already included, missing '#pragma once' in MetaHumanServiceRequest.h"
#endif
#define METAHUMANSDKEDITOR_MetaHumanServiceRequest_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanServiceRequest_h

// ********** Begin Enum EMetaHumanServiceRequestResult ********************************************
#define FOREACH_ENUM_EMETAHUMANSERVICEREQUESTRESULT(op) \
	op(EMetaHumanServiceRequestResult::Ok) \
	op(EMetaHumanServiceRequestResult::Busy) \
	op(EMetaHumanServiceRequestResult::Unauthorized) \
	op(EMetaHumanServiceRequestResult::EulaNotAccepted) \
	op(EMetaHumanServiceRequestResult::InvalidArguments) \
	op(EMetaHumanServiceRequestResult::ServerError) \
	op(EMetaHumanServiceRequestResult::LoginFailed) \
	op(EMetaHumanServiceRequestResult::Timeout) \
	op(EMetaHumanServiceRequestResult::GatewayError) 

enum class EMetaHumanServiceRequestResult;
template<> struct TIsUEnumClass<EMetaHumanServiceRequestResult> { enum { Value = true }; };
template<> METAHUMANSDKEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanServiceRequestResult>();
// ********** End Enum EMetaHumanServiceRequestResult **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
